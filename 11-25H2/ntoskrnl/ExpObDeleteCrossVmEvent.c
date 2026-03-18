/*
 * XREFs of ExpObDeleteCrossVmEvent @ 0x1407B5F90
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseExtensionTable @ 0x1404516B0 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExpGetExtensionHostForCrossVmObject @ 0x1406ED5A0 (ExpGetExtensionHostForCrossVmObject.c)
 */

void __fastcall ExpObDeleteCrossVmEvent(__int64 a1)
{
  struct _EX_RUNDOWN_REF *v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  if ( ExpGetExtensionHostForCrossVmObject(a1, (__int64 *)&v2) )
  {
    guard_dispatch_icall_no_overrides(a1);
    ExReleaseExtensionTable(v2);
  }
}
