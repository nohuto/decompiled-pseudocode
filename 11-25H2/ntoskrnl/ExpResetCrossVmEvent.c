/*
 * XREFs of ExpResetCrossVmEvent @ 0x1407B60DC
 * Callers:
 *     NtResetEvent @ 0x1408C3160 (NtResetEvent.c)
 *     NtClearEvent @ 0x1409A7B00 (NtClearEvent.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x1404516B0 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExpGetExtensionHostForCrossVmObject @ 0x1406ED5A0 (ExpGetExtensionHostForCrossVmObject.c)
 */

__int64 __fastcall ExpResetCrossVmEvent(__int64 a1)
{
  unsigned int v2; // ebx
  struct _EX_RUNDOWN_REF *v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0LL;
  if ( ExpGetExtensionHostForCrossVmObject(a1, (__int64 *)&v4) )
  {
    v2 = guard_dispatch_icall_no_overrides(a1);
    ExReleaseExtensionTable(v4);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v2;
}
