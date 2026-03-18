/*
 * XREFs of VerifierIoAllocateMdl @ 0x140B8AE80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     VfFaultsInjectResourceFailure @ 0x140B96568 (VfFaultsInjectResourceFailure.c)
 */

__int64 __fastcall VerifierIoAllocateMdl(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  char v5; // di
  unsigned int v6; // esi

  v4 = a4;
  v5 = a3;
  v6 = a2;
  if ( (VfRuleClasses & 4) != 0 && (unsigned int)VfFaultsInjectResourceFailure(0LL)
    || (VfRuleClasses & 0x40000) != 0
    && ViFnAutoFailInject
    && (unsigned __int8)guard_dispatch_icall_no_overrides("IoAllocateMdl", a2, a3, a4) )
  {
    return 0LL;
  }
  LOBYTE(a4) = v4;
  LOBYTE(a3) = v5;
  return guard_dispatch_icall_no_overrides(a1, v6, a3, a4);
}
