/*
 * XREFs of MiDeprioritizeVirtualAddresses @ 0x1402A2C38
 * Callers:
 *     MiDeprioritizeVad @ 0x1402A2F94 (MiDeprioritizeVad.c)
 *     HvTrimHive @ 0x140A3D6B4 (HvTrimHive.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiGetPfnPriority @ 0x140230FB0 (MiGetPfnPriority.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleaseProcessorFlushList @ 0x140237CC0 (MiReleaseProcessorFlushList.c)
 *     MiGetWsleContents @ 0x140239750 (MiGetWsleContents.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiLockLowestValidPageTableEx @ 0x1402B7890 (MiLockLowestValidPageTableEx.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x1403278B0 (MiInsertTbFlushEntry.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiDemoteCombinedPte @ 0x14037EFEC (MiDemoteCombinedPte.c)
 *     MiGetProcessorFlushList @ 0x140381500 (MiGetProcessorFlushList.c)
 *     MiFreeWsleList @ 0x1403815C4 (MiFreeWsleList.c)
 *     MiVmAccessLoggingEnabled @ 0x140386C1C (MiVmAccessLoggingEnabled.c)
 *     MiInitializeTbFlushList @ 0x140388790 (MiInitializeTbFlushList.c)
 *     MiUpdatePfnPriority @ 0x140389C80 (MiUpdatePfnPriority.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140389E74 (MI_WSLE_LOG_ACCESS.c)
 */

__int64 __fastcall MiDeprioritizeVirtualAddresses(unsigned __int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v7; // r14
  __int64 ProcessorFlushList; // r13
  unsigned __int64 v9; // rdi
  unsigned __int64 valid; // r15
  __int64 v11; // rdx
  unsigned __int64 v12; // rsi
  __int64 v13; // r8
  char v14; // al
  __int64 v15; // rdx
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // r12
  int PfnPriority; // eax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v25; // r12d
  unsigned __int64 v26; // [rsp+38h] [rbp-60h]
  _BYTE v27[88]; // [rsp+40h] [rbp-58h] BYREF
  char v28; // [rsp+A0h] [rbp+8h]
  unsigned int v29; // [rsp+A8h] [rbp+10h]
  int v30; // [rsp+B0h] [rbp+18h]
  char v31; // [rsp+B8h] [rbp+20h]

  v29 = a4 & 7;
  v7 = 0LL;
  ProcessorFlushList = 0LL;
  v30 = MiVmAccessLoggingEnabled(a3);
  v9 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  valid = 0LL;
  v12 = v9 + 8 * v11;
  v26 = v12;
  v14 = MiLockWorkingSetShared(v13);
  v31 = v14;
  if ( v9 >= v12 )
    goto LABEL_17;
  do
  {
    v16 = v9 >> 9;
    if ( valid )
    {
      if ( valid == (v16 & 0x7FFFFFFFF8LL) - 0x98000000000LL )
        goto LABEL_6;
      if ( v7 )
      {
        MiFreeWsleList(a3, v7, 0LL);
        MiReleaseProcessorFlushList();
        v7 = 0LL;
        ProcessorFlushList = 0LL;
      }
      MiUnlockPageTable(a3, valid);
    }
    valid = MiLockLowestValidPageTableEx(a3, v9, v27, 0LL);
    if ( valid != (v16 & 0x7FFFFFFFF8LL) - 0x98000000000LL )
    {
      MiUnlockPageTable(a3, valid);
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
      v28 = MiGetWsleContents(0xFFFFFFFFFFLL, v19) & 0xF;
      if ( v28 != 9 )
      {
        if ( (*(_QWORD *)(v18 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(v18 + 8) > 0 )
          MiDemoteCombinedPte(a3, v9, *(_QWORD *)(v18 + 8) | 0x8000000000000000uLL);
        PfnPriority = MiGetPfnPriority(v18);
        if ( (a4 & 8) == 0 && v29 != PfnPriority )
        {
          v25 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v25 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v21) )
              {
                HvlNotifyLongSpinWait(v25);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(v18 + 24) < 0 );
          }
          MiUpdatePfnPriority(v18, v29, 1LL);
          _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v19 = (__int64)(v9 << 25) >> 16;
        }
        if ( (a4 & 0x10) != 0 && v28 != 8 )
        {
          if ( v30 )
            MI_WSLE_LOG_ACCESS(a3, v9, v22, v23);
          if ( !ProcessorFlushList )
          {
            ProcessorFlushList = MiGetProcessorFlushList(v21, v15, v22, v23);
            v7 = ProcessorFlushList + 4136;
            MiInitializeTbFlushList(ProcessorFlushList + 4136, a3, *(_DWORD *)(ProcessorFlushList + 4148), 2, 1);
          }
          MiInsertTbFlushEntry(v7, v19, 1LL, 0LL);
        }
      }
    }
LABEL_11:
    v9 += 8LL;
  }
  while ( v9 < v26 );
  if ( valid )
  {
    if ( v7 )
    {
      MiFreeWsleList(a3, v7, 0LL);
      MiReleaseProcessorFlushList();
    }
    MiUnlockPageTable(a3, valid);
  }
  v14 = v31;
LABEL_17:
  LOBYTE(v15) = v14;
  return MiUnlockWorkingSetShared(a3, v15);
}
