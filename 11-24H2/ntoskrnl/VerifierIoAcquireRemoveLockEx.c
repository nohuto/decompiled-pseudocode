/*
 * XREFs of VerifierIoAcquireRemoveLockEx @ 0x140B94590
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ViRemLockFindSurrogate @ 0x140B949A4 (ViRemLockFindSurrogate.c)
 */

__int64 __fastcall VerifierIoAcquireRemoveLockEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 Surrogate; // rax
  __int64 v8; // rcx

  if ( ViRemLockInitialized && a5 != 120 && (Surrogate = ViRemLockFindSurrogate()) != 0 )
    v8 = Surrogate + 16;
  else
    v8 = a1;
  return guard_dispatch_icall_no_overrides(v8, a2);
}
