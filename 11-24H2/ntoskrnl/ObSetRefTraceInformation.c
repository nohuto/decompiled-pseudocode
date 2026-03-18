/*
 * XREFs of ObSetRefTraceInformation @ 0x140744B14
 * Callers:
 *     NtSetSystemInformation @ 0x140AE1300 (NtSetSystemInformation.c)
 * Callees:
 *     ObpStartRuntimeStackTrace @ 0x140745494 (ObpStartRuntimeStackTrace.c)
 *     ObpStopRuntimeStackTrace @ 0x1407458D4 (ObpStopRuntimeStackTrace.c)
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall ObSetRefTraceInformation(_BYTE *a1, unsigned int a2)
{
  __int64 v2; // rdi
  KPROCESSOR_MODE PreviousMode; // si
  _BYTE *v5; // rcx

  v2 = a2;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
    return 3221225506LL;
  if ( (unsigned int)v2 < 0x28 )
    return 3221225485LL;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)a1 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v5 = &a1[v2];
  }
  if ( *a1 )
    return ObpStartRuntimeStackTrace(a1);
  else
    return ObpStopRuntimeStackTrace(v5);
}
