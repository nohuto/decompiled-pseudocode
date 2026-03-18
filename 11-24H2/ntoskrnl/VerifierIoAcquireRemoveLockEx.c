/*
 * XREFs of VerifierIoAcquireRemoveLockEx @ 0x140B92590
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ViRemLockFindSurrogate @ 0x140B929A4 (ViRemLockFindSurrogate.c)
 */

__int64 __fastcall VerifierIoAcquireRemoveLockEx(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int a5)
{
  __int64 Surrogate; // rax
  __int64 v10; // rcx

  if ( ViRemLockInitialized && a5 != 120 && (Surrogate = ViRemLockFindSurrogate()) != 0 )
    v10 = Surrogate + 16;
  else
    v10 = a1;
  return guard_dispatch_icall_no_overrides(v10, a2, a3, a4);
}
