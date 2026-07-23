/*
 * XREFs of MiGetTopLevelPfn @ 0x1402FB290
 * Callers:
 *     MiRestoreTransitionPte @ 0x140226624 (MiRestoreTransitionPte.c)
 *     MiGetPagePrivilege @ 0x140249B80 (MiGetPagePrivilege.c)
 *     MiLockStealUserVm @ 0x14025539C (MiLockStealUserVm.c)
 *     MiStoreCheckCandidatePage @ 0x1402FC214 (MiStoreCheckCandidatePage.c)
 *     MiIdentifyPfn @ 0x1403113F0 (MiIdentifyPfn.c)
 *     MiRecheckCombineVm @ 0x1403F1420 (MiRecheckCombineVm.c)
 *     MiCapturePfnVm @ 0x1404507C4 (MiCapturePfnVm.c)
 *     MiStoreDiscardPoisonedPage @ 0x14068D0B8 (MiStoreDiscardPoisonedPage.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
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
          && KiCheckVpBackingLongSpinWaitHypercall() )
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
