/*
 * XREFs of ImageTlsCallbackCaller @ 0x1800E9010
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ImageTlsCallbackCaller(
        volatile signed __int32 *a1,
        volatile signed __int32 **a2,
        struct _TEB *(__fastcall *a3)(volatile signed __int32 *a1, volatile signed __int32 **a2, unsigned __int64 i))
{
  if ( a3 == RtlAcquireSRWLockExclusive )
    RtlAcquireSRWLockExclusive(a1, a2, 0LL);
  else
    a3(a1, a2, 0LL);
  return 1LL;
}
