/*
 * XREFs of ExpObDeleteCrossVmEvent @ 0x1407C5760
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseExtensionTable @ 0x14044FE80 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExpGetExtensionHostForCrossVmObject @ 0x1406F91E0 (ExpGetExtensionHostForCrossVmObject.c)
 */

void __fastcall ExpObDeleteCrossVmEvent(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  struct _EX_RUNDOWN_REF *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  if ( ExpGetExtensionHostForCrossVmObject(a1, (__int64 *)&v5) )
  {
    guard_dispatch_icall_no_overrides(a1, v2, v3, v4);
    ExReleaseExtensionTable(v5);
  }
}
