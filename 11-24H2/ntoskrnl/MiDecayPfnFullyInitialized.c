/*
 * XREFs of MiDecayPfnFullyInitialized @ 0x140440AC8
 * Callers:
 *     MiDecommitPagesTail @ 0x1402DBE74 (MiDecommitPagesTail.c)
 *     MiWalkEntireImage @ 0x1402E85C0 (MiWalkEntireImage.c)
 *     MiFinishHardFault @ 0x1402F0070 (MiFinishHardFault.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140210C80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiUnlinkPageFromListEx @ 0x140211CD0 (MiUnlinkPageFromListEx.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiAcquirePageListLock @ 0x1402DF1D0 (MiAcquirePageListLock.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void __fastcall MiDecayPfnFullyInitialized(ULONG_PTR BugCheckParameter2, int a2)
{
  int v4; // r14d
  __int64 v5; // rbp
  unsigned __int8 v6; // si
  unsigned int v7; // ebx
  unsigned __int64 v8; // rax
  bool v9; // zf
  char *v10; // rcx
  __int64 v11; // rdx
  int v12; // [rsp+30h] [rbp-A8h]
  _BYTE v13[24]; // [rsp+40h] [rbp-98h] BYREF
  char v14; // [rsp+58h] [rbp-80h] BYREF

  memset_0(v13, 0, 0x68uLL);
  v4 = 0;
  v5 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL));
  if ( a2 )
  {
    v6 = 17;
    v7 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v7 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v7);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
    }
  }
  else
  {
    v6 = MiLockPageInline(BugCheckParameter2);
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 32) & 0x8000000) != 0 )
  {
    MiAcquirePageListLock(v5 + 3704, BugCheckParameter2, 9, 1, (__int64)v13);
    v8 = *(_QWORD *)(BugCheckParameter2 + 16);
    if ( qword_140E2DB80 && (v8 & 0x10) == 0 )
      v8 &= ~qword_140E2DB80;
    if ( ((v8 >> 12) & 0xFFFFFFFFFFLL) == 0xAAAAAAAAAAAAAAABuLL
                                        * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4) )
    {
      MiUnlinkPageFromListEx(BugCheckParameter2, (v13[0] != 0) + 1);
      v4 = 1;
    }
    v12 = *(_DWORD *)(BugCheckParameter2 + 32);
    v9 = v13[0] == 0;
    HIBYTE(v12) &= ~8u;
    *(_DWORD *)(BugCheckParameter2 + 32) = v12;
    if ( v9 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 3736));
    }
    else
    {
      v10 = &v14;
      v11 = 4LL;
      do
      {
        if ( *v10 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(*((_QWORD *)v10 - 1) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
          *v10 = 0;
        }
        v10 += 24;
        --v11;
      }
      while ( v11 );
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v5 + 3736));
    }
  }
  else
  {
    v4 = 1;
  }
  if ( v6 == 17 )
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  else
    MiUnlockPage(BugCheckParameter2, v6);
  if ( v4 )
    RtlpInterlockedPushEntrySList(&ListHead, (PSLIST_ENTRY)BugCheckParameter2);
}
