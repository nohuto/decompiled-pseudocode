/*
 * XREFs of ExpPulseCrossVmEvent @ 0x1407C5C54
 * Callers:
 *     NtPulseEvent @ 0x1409E2F70 (NtPulseEvent.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x1404450F0 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExpGetExtensionHostForCrossVmObject @ 0x1406F6E20 (ExpGetExtensionHostForCrossVmObject.c)
 */

__int64 __fastcall ExpPulseCrossVmEvent(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  struct _EX_RUNDOWN_REF *v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  if ( ExpGetExtensionHostForCrossVmObject(a1, (__int64 *)&v6) )
  {
    v4 = guard_dispatch_icall_no_overrides(a1, a2);
    ExReleaseExtensionTable(v6);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v4;
}
