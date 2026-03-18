/*
 * XREFs of VerifierIoReleaseRemoveLockEx @ 0x140B92820
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ViRemLockFindSurrogate @ 0x140B929A4 (ViRemLockFindSurrogate.c)
 */

__int64 __fastcall VerifierIoReleaseRemoveLockEx(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 Surrogate; // rax
  __int64 v8; // rcx
  __int64 v9; // r8

  if ( ViRemLockInitialized && a3 != 120 && (Surrogate = ViRemLockFindSurrogate()) != 0 )
  {
    v8 = Surrogate + 16;
    v9 = 120LL;
  }
  else
  {
    v9 = a3;
    v8 = a1;
  }
  return guard_dispatch_icall_no_overrides(v8, a2, v9, a4);
}
