/*
 * XREFs of ExpObDeleteCrossVmEvent @ 0x1407C5BC0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseExtensionTable @ 0x1404450F0 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExpGetExtensionHostForCrossVmObject @ 0x1406F6E20 (ExpGetExtensionHostForCrossVmObject.c)
 */

void __fastcall ExpObDeleteCrossVmEvent(__int64 a1)
{
  __int64 v2; // rdx
  struct _EX_RUNDOWN_REF *v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  if ( ExpGetExtensionHostForCrossVmObject(a1, (__int64 *)&v3) )
  {
    guard_dispatch_icall_no_overrides(a1, v2);
    ExReleaseExtensionTable(v3);
  }
}
