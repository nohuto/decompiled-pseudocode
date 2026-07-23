/*
 * XREFs of MiDecayPfnFullyInitialized @ 0x140437598
 * Callers:
 *     MiDecommitPagesTail @ 0x14023D754 (MiDecommitPagesTail.c)
 *     MiFinishHardFault @ 0x140255E80 (MiFinishHardFault.c)
 *     MiWalkEntireImage @ 0x140349C00 (MiWalkEntireImage.c)
 * Callees:
 *     MiAcquirePageListLock @ 0x140240AB0 (MiAcquirePageListLock.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiUnlinkPageFromListEx @ 0x14033B030 (MiUnlinkPageFromListEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall MiDecayPfnFullyInitialized(ULONG_PTR BugCheckParameter2, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // r14d
  __int64 v8; // rbp
  unsigned __int8 v9; // si
  unsigned int v10; // ebx
  unsigned __int64 v11; // rax
  bool v12; // zf
  char *v13; // rcx
  __int64 v14; // rdx
  int v15; // [rsp+30h] [rbp-A8h]
  _BYTE v16[24]; // [rsp+40h] [rbp-98h] BYREF
  char v17; // [rsp+58h] [rbp-80h] BYREF

  memset_0(v16, 0, 0x68uLL);
  v7 = 0;
  v8 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL));
  if ( a2 )
  {
    v9 = 17;
    v10 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v10 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v10);
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
    v9 = MiLockPageInline(BugCheckParameter2, v4, v5, v6);
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 32) & 0x8000000) != 0 )
  {
    MiAcquirePageListLock(v8 + 3704, BugCheckParameter2, 9LL, 1LL, (__int64)v16);
    v11 = *(_QWORD *)(BugCheckParameter2 + 16);
    if ( qword_140E2DCC0 && (v11 & 0x10) == 0 )
      v11 &= ~qword_140E2DCC0;
    if ( ((v11 >> 12) & 0xFFFFFFFFFFLL) == 0xAAAAAAAAAAAAAAABuLL
                                         * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4) )
    {
      MiUnlinkPageFromListEx(BugCheckParameter2, (v16[0] != 0) + 1);
      v7 = 1;
    }
    v15 = *(_DWORD *)(BugCheckParameter2 + 32);
    v12 = v16[0] == 0;
    HIBYTE(v15) &= ~8u;
    *(_DWORD *)(BugCheckParameter2 + 32) = v15;
    if ( v12 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 3736));
    }
    else
    {
      v13 = &v17;
      v14 = 4LL;
      do
      {
        if ( *v13 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(*((_QWORD *)v13 - 1) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
          *v13 = 0;
        }
        v13 += 24;
        --v14;
      }
      while ( v14 );
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v8 + 3736));
    }
  }
  else
  {
    v7 = 1;
  }
  if ( v9 == 17 )
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  else
    MiUnlockPage(BugCheckParameter2, v9);
  if ( v7 )
    RtlpInterlockedPushEntrySList(&stru_140E35C50, (PSLIST_ENTRY)BugCheckParameter2);
}
