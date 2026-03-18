/*
 * XREFs of ExpReleaseCrossVmMutant @ 0x1407C5850
 * Callers:
 *     NtReleaseMutant @ 0x14099E790 (NtReleaseMutant.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x14044FE80 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExpGetExtensionHostForCrossVmObject @ 0x1406F91E0 (ExpGetExtensionHostForCrossVmObject.c)
 */

__int64 __fastcall ExpReleaseCrossVmMutant(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // ebx
  struct _EX_RUNDOWN_REF *v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0LL;
  if ( ExpGetExtensionHostForCrossVmObject(a1, (__int64 *)&v8) )
  {
    v6 = guard_dispatch_icall_no_overrides(a1, a2, v4, v5);
    ExReleaseExtensionTable(v8);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v6;
}
