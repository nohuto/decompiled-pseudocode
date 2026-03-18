/*
 * XREFs of MiDecayPfnFullyInitialized @ 0x140440EE8
 * Callers:
 *     MiFinishHardFault @ 0x14023BBC0 (MiFinishHardFault.c)
 *     MiDecommitPagesTail @ 0x1402B2194 (MiDecommitPagesTail.c)
 *     MiWalkEntireImage @ 0x14033BD50 (MiWalkEntireImage.c)
 * Callees:
 *     MiAcquirePageListLock @ 0x1402122F0 (MiAcquirePageListLock.c)
 *     MiUnlinkPageFromListEx @ 0x14021A1F0 (MiUnlinkPageFromListEx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402B5440 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void __fastcall MiDecayPfnFullyInitialized(ULONG_PTR BugCheckParameter2, int a2)
{
  int v4; // r14d
  __int64 v5; // rbp
  unsigned __int8 v6; // si
  int v7; // ebx
  unsigned __int64 v8; // rax
  bool v9; // zf
  char *v10; // rcx
  __int64 v11; // rdx
  int v12; // [rsp+30h] [rbp-A8h]
  _BYTE v13[24]; // [rsp+40h] [rbp-98h] BYREF
  char v14; // [rsp+58h] [rbp-80h] BYREF

  memset_0(v13, 0, 0x68uLL);
  v4 = 0;
  v5 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL));
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
          HvlNotifyLongSpinWait();
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
    if ( qword_140E2D940 && (v8 & 0x10) == 0 )
      v8 &= ~qword_140E2D940;
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
