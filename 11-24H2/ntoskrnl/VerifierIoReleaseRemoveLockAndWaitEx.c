/*
 * XREFs of VerifierIoReleaseRemoveLockAndWaitEx @ 0x140B947B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ViRemLockFindSurrogate @ 0x140B949A4 (ViRemLockFindSurrogate.c)
 */

__int64 __fastcall VerifierIoReleaseRemoveLockAndWaitEx(__int64 a1, __int64 a2, int a3)
{
  __int64 Surrogate; // rax
  __int64 v6; // rcx

  if ( ViRemLockInitialized && a3 != 120 && (Surrogate = ViRemLockFindSurrogate()) != 0 )
    v6 = Surrogate + 16;
  else
    v6 = a1;
  return guard_dispatch_icall_no_overrides(v6, a2);
}
