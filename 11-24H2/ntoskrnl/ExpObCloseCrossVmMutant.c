/*
 * XREFs of ExpObCloseCrossVmMutant @ 0x1407C56F0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseExtensionTable @ 0x14044FE80 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExpGetExtensionHostForCrossVmObject @ 0x1406F91E0 (ExpGetExtensionHostForCrossVmObject.c)
 */

void __fastcall ExpObCloseCrossVmMutant(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _EX_RUNDOWN_REF *v8; // [rsp+30h] [rbp-18h] BYREF

  v8 = 0LL;
  if ( ExpGetExtensionHostForCrossVmObject(a1, (__int64 *)&v8) )
  {
    guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
    ExReleaseExtensionTable(v8);
  }
}
