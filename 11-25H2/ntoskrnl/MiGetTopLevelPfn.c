/*
 * XREFs of MiGetTopLevelPfn @ 0x1402C9D70
 * Callers:
 *     MiIdentifyPfn @ 0x140221170 (MiIdentifyPfn.c)
 *     MiRecheckCombineVm @ 0x140224E0C (MiRecheckCombineVm.c)
 *     MiGetPagePrivilege @ 0x140230BA0 (MiGetPagePrivilege.c)
 *     MiRestoreTransitionPte @ 0x14024EBD8 (MiRestoreTransitionPte.c)
 *     MiLockStealUserVm @ 0x1402C97A0 (MiLockStealUserVm.c)
 *     MiStoreCheckCandidatePage @ 0x1402CA054 (MiStoreCheckCandidatePage.c)
 *     MiCapturePfnVm @ 0x14045C04C (MiCapturePfnVm.c)
 *     MiStoreDiscardPoisonedPage @ 0x1406806F8 (MiStoreDiscardPoisonedPage.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall MiGetTopLevelPfn(ULONG_PTR BugCheckParameter2)
{
  __int64 v1; // rbx
  __int64 v3; // rdi
  unsigned int v4; // esi
  unsigned int v5; // ebp
  __int64 v6; // rcx
  unsigned int v7; // r14d
  __int64 *v8; // rcx
  __int64 v9; // rax
  _OWORD v11[2]; // [rsp+30h] [rbp-58h] BYREF

  memset(v11, 0, sizeof(v11));
  v1 = BugCheckParameter2;
  v3 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4);
  v4 = 0;
  v5 = 0;
  while ( 1 )
  {
    v6 = v5;
    if ( (*(_QWORD *)(v1 + 40) & 0xFFFFFFFFFFLL) == v3 )
      break;
    v3 = *(_QWORD *)(v1 + 40) & 0xFFFFFFFFFFLL;
    v1 = 48 * v3 - 0x220000000000LL;
    if ( ++v5 > 4 )
      KeBugCheckEx(0x1Au, 0x9696uLL, BugCheckParameter2, 0LL, 0LL);
    *((_QWORD *)v11 + v6) = v1;
    v7 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v7 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v6) )
        {
          HvlNotifyLongSpinWait(v7);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v1 + 24) < 0 );
    }
  }
  v8 = (__int64 *)v11;
  do
  {
    v9 = *v8;
    if ( !*v8 )
      break;
    if ( v9 != v1 )
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ++v4;
    ++v8;
  }
  while ( v4 < 4 );
  return v1;
}
