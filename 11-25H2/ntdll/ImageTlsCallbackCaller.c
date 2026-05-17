/*
 * XREFs of ImageTlsCallbackCaller @ 0x1800EA380
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ImageTlsCallbackCaller(
        volatile signed __int32 *a1,
        __int64 a2,
        struct _TEB *(__fastcall *a3)(volatile signed __int32 *a1))
{
  if ( a3 == RtlAcquireSRWLockExclusive )
    RtlAcquireSRWLockExclusive(a1);
  else
    ((void (__fastcall *)(volatile signed __int32 *, __int64, _QWORD))a3)(a1, a2, 0LL);
  return 1LL;
}
