/*
 * XREFs of ImageTlsCallbackCaller @ 0x1800EA380
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ImageTlsCallbackCaller(_RTL_SRWLOCK *a1, __int64 a2, void (__cdecl *a3)(PRTL_SRWLOCK SRWLock))
{
  if ( a3 == RtlAcquireSRWLockExclusive )
    RtlAcquireSRWLockExclusive(a1);
  else
    ((void (__fastcall *)(_RTL_SRWLOCK *, __int64, _QWORD))a3)(a1, a2, 0LL);
  return 1LL;
}
