/*
 * XREFs of ExpObCloseCrossVmMutant @ 0x1407C5B50
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseExtensionTable @ 0x1404450F0 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExpGetExtensionHostForCrossVmObject @ 0x1406F6E20 (ExpGetExtensionHostForCrossVmObject.c)
 */

void __fastcall ExpObCloseCrossVmMutant(__int64 a1, __int64 a2)
{
  struct _EX_RUNDOWN_REF *v4; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0LL;
  if ( ExpGetExtensionHostForCrossVmObject(a1, (__int64 *)&v4) )
  {
    guard_dispatch_icall_no_overrides(a1, a2);
    ExReleaseExtensionTable(v4);
  }
}
