/*
 * XREFs of MiDeprioritizeVirtualAddresses @ 0x1403DB1C8
 * Callers:
 *     MiDeprioritizeVad @ 0x1403DAB20 (MiDeprioritizeVad.c)
 *     HvTrimHive @ 0x140A37B84 (HvTrimHive.c)
 * Callees:
 *     MiReleaseProcessorFlushList @ 0x140208120 (MiReleaseProcessorFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x140214780 (MiInitializeTbFlushList.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiLockLowestValidPageTableEx @ 0x1402454B0 (MiLockLowestValidPageTableEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1402590F0 (MI_WSLE_LOG_ACCESS.c)
 *     MiDemoteCombinedPte @ 0x140296374 (MiDemoteCombinedPte.c)
 *     MiFreeWsleList @ 0x140297494 (MiFreeWsleList.c)
 *     MiGetProcessorFlushList @ 0x1402990BC (MiGetProcessorFlushList.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiGetPfnPriority @ 0x140335630 (MiGetPfnPriority.c)
 *     MiGetWsleContents @ 0x140344BE0 (MiGetWsleContents.c)
 *     MiVmAccessLoggingEnabled @ 0x140346A3C (MiVmAccessLoggingEnabled.c)
 *     MiUpdatePfnPriority @ 0x1403DCE10 (MiUpdatePfnPriority.c)
 */

char __fastcall MiDeprioritizeVirtualAddresses(unsigned __int64 a1, __int64 a2, __int64 a3, char a4)
{
  ULONG_PTR v7; // r14
  __int64 *ProcessorFlushList; // r13
  unsigned __int64 v9; // rdi
  unsigned __int64 valid; // r15
  __int64 v11; // rdx
  unsigned __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int8 v15; // al
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // r12
  int PfnPriority; // eax
  unsigned int v22; // r12d
  unsigned __int64 v23; // [rsp+38h] [rbp-60h]
  ULONG_PTR v24[11]; // [rsp+40h] [rbp-58h] BYREF
  char v25; // [rsp+A0h] [rbp+8h]
  unsigned int v26; // [rsp+A8h] [rbp+10h]
  int v27; // [rsp+B0h] [rbp+18h]
  unsigned __int8 v28; // [rsp+B8h] [rbp+20h]

  v26 = a4 & 7;
  v7 = 0LL;
  ProcessorFlushList = 0LL;
  v27 = MiVmAccessLoggingEnabled(a3);
  v9 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  valid = 0LL;
  v12 = v9 + 8 * v11;
  v23 = v12;
  v15 = MiLockWorkingSetShared(v13, v11, v13, v14);
  v28 = v15;
  if ( v9 >= v12 )
    return MiUnlockWorkingSetShared(a3, v15);
  do
  {
    v16 = v9 >> 9;
    if ( valid )
    {
      if ( valid == (v16 & 0x7FFFFFFFF8LL) - 0x98000000000LL )
        goto LABEL_6;
      if ( v7 )
      {
        MiFreeWsleList(a3, v7, 0);
        MiReleaseProcessorFlushList();
        v7 = 0LL;
        ProcessorFlushList = 0LL;
      }
      MiUnlockPageTableInternal(a3, valid);
    }
    valid = MiLockLowestValidPageTableEx(a3, v9, v24, 0);
    if ( valid != (v16 & 0x7FFFFFFFF8LL) - 0x98000000000LL )
    {
      MiUnlockPageTableInternal(a3, valid);
      valid = 0LL;
      v9 = (v9 & 0xFFFFFFFFFFFFF000uLL) + 4088;
      goto LABEL_11;
    }
LABEL_6:
    v17 = MI_READ_PTE_LOCK_FREE(v9);
    if ( (v17 & 1) != 0 )
    {
      v18 = 48 * ((v17 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      v19 = (__int64)(v9 << 25) >> 16;
      v25 = MiGetWsleContents(0xFFFFFFFFFFLL, v19) & 0xF;
      if ( v25 != 9 )
      {
        if ( (*(_QWORD *)(v18 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(v18 + 8) > 0 )
          MiDemoteCombinedPte(a3, v9, *(_QWORD *)(v18 + 8) | 0x8000000000000000uLL);
        PfnPriority = MiGetPfnPriority(v18);
        if ( (a4 & 8) == 0 && v26 != PfnPriority )
        {
          v22 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v22 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && KiCheckVpBackingLongSpinWaitHypercall() )
              {
                HvlNotifyLongSpinWait(v22);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(v18 + 24) < 0 );
          }
          MiUpdatePfnPriority(v18, v26, 1LL);
          _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v19 = (__int64)(v9 << 25) >> 16;
        }
        if ( (a4 & 0x10) != 0 && v25 != 8 )
        {
          if ( v27 )
            MI_WSLE_LOG_ACCESS(a3, v9);
          if ( !ProcessorFlushList )
          {
            ProcessorFlushList = MiGetProcessorFlushList();
            v7 = (ULONG_PTR)(ProcessorFlushList + 517);
            MiInitializeTbFlushList(
              (__int64)(ProcessorFlushList + 517),
              a3,
              *((_DWORD *)ProcessorFlushList + 1037),
              2,
              1);
          }
          MiInsertTbFlushEntry(v7, v19, 1LL, 0);
        }
      }
    }
LABEL_11:
    v9 += 8LL;
  }
  while ( v9 < v23 );
  if ( valid )
  {
    if ( v7 )
    {
      MiFreeWsleList(a3, v7, 0);
      MiReleaseProcessorFlushList();
    }
    MiUnlockPageTableInternal(a3, valid);
  }
  v15 = v28;
  return MiUnlockWorkingSetShared(a3, v15);
}
