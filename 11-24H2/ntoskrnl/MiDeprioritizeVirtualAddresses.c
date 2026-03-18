/*
 * XREFs of MiDeprioritizeVirtualAddresses @ 0x1403FD5B4
 * Callers:
 *     MiDeprioritizeVad @ 0x1403FD204 (MiDeprioritizeVad.c)
 *     HvTrimHive @ 0x140A4234C (HvTrimHive.c)
 * Callees:
 *     MiGetPfnPriority @ 0x1402141E0 (MiGetPfnPriority.c)
 *     MiLockLowestValidPageTableEx @ 0x140218760 (MiLockLowestValidPageTableEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInitializeTbFlushList @ 0x140233BB0 (MiInitializeTbFlushList.c)
 *     MiReleaseProcessorFlushList @ 0x14023FFD0 (MiReleaseProcessorFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1402432E0 (MiInsertTbFlushEntry.c)
 *     MiFreeWsleList @ 0x140287894 (MiFreeWsleList.c)
 *     MiGetProcessorFlushList @ 0x1402894BC (MiGetProcessorFlushList.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiVmAccessLoggingEnabled @ 0x1402E47A4 (MiVmAccessLoggingEnabled.c)
 *     MiGetWsleContents @ 0x1402E5390 (MiGetWsleContents.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1402EFF38 (MI_WSLE_LOG_ACCESS.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     MiDemoteCombinedPte @ 0x1403FABBC (MiDemoteCombinedPte.c)
 *     MiUpdatePfnPriority @ 0x1403FE790 (MiUpdatePfnPriority.c)
 */

char __fastcall MiDeprioritizeVirtualAddresses(unsigned __int64 a1, __int64 a2, __int64 a3, char a4)
{
  ULONG_PTR v7; // r14
  __int64 *ProcessorFlushList; // r13
  ULONG_PTR v9; // rdi
  unsigned __int64 valid; // r15
  __int64 v11; // rdx
  ULONG_PTR v12; // rsi
  __int64 v13; // r8
  unsigned __int8 v14; // al
  ULONG_PTR v15; // rsi
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // r12
  int PfnPriority; // eax
  unsigned int v21; // r12d
  ULONG_PTR v22; // [rsp+38h] [rbp-60h]
  ULONG_PTR v23[11]; // [rsp+40h] [rbp-58h] BYREF
  char v24; // [rsp+A0h] [rbp+8h]
  unsigned int v25; // [rsp+A8h] [rbp+10h]
  int v26; // [rsp+B0h] [rbp+18h]
  unsigned __int8 v27; // [rsp+B8h] [rbp+20h]

  v25 = a4 & 7;
  v7 = 0LL;
  ProcessorFlushList = 0LL;
  v26 = MiVmAccessLoggingEnabled(a3);
  v9 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  valid = 0LL;
  v12 = v9 + 8 * v11;
  v22 = v12;
  v14 = MiLockWorkingSetShared(v13);
  v27 = v14;
  if ( v9 >= v12 )
    return MiUnlockWorkingSetShared(a3, v14);
  do
  {
    v15 = v9 >> 9;
    if ( valid )
    {
      if ( valid == (v15 & 0x7FFFFFFFF8LL) - 0x98000000000LL )
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
    valid = MiLockLowestValidPageTableEx(a3, v9, v23, 0);
    if ( valid != (v15 & 0x7FFFFFFFF8LL) - 0x98000000000LL )
    {
      MiUnlockPageTableInternal(a3, valid);
      valid = 0LL;
      v9 = (v9 & 0xFFFFFFFFFFFFF000uLL) + 4088;
      goto LABEL_11;
    }
LABEL_6:
    v16 = MI_READ_PTE_LOCK_FREE(v9);
    if ( (v16 & 1) != 0 )
    {
      v17 = 48 * ((v16 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      v18 = (__int64)(v9 << 25) >> 16;
      v24 = MiGetWsleContents(0xFFFFFFFFFFLL, v18) & 0xF;
      if ( v24 != 9 )
      {
        if ( (*(_QWORD *)(v17 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(v17 + 8) > 0 )
          MiDemoteCombinedPte(a3, v9, *(_QWORD *)(v17 + 8) | 0x8000000000000000uLL);
        PfnPriority = MiGetPfnPriority(v17);
        if ( (a4 & 8) == 0 && v25 != PfnPriority )
        {
          v21 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v21 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && KiCheckVpBackingLongSpinWaitHypercall() )
              {
                HvlNotifyLongSpinWait(v21);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(v17 + 24) < 0 );
          }
          MiUpdatePfnPriority(v17, v25, 1LL);
          _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v18 = (__int64)(v9 << 25) >> 16;
        }
        if ( (a4 & 0x10) != 0 && v24 != 8 )
        {
          if ( v26 )
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
          MiInsertTbFlushEntry(v7, v18, 1LL, 0);
        }
      }
    }
LABEL_11:
    v9 += 8LL;
  }
  while ( v9 < v22 );
  if ( valid )
  {
    if ( v7 )
    {
      MiFreeWsleList(a3, v7, 0);
      MiReleaseProcessorFlushList();
    }
    MiUnlockPageTableInternal(a3, valid);
  }
  v14 = v27;
  return MiUnlockWorkingSetShared(a3, v14);
}
