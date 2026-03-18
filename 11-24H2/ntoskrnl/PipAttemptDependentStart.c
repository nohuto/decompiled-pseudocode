/*
 * XREFs of PipAttemptDependentStart @ 0x14071E570
 * Callers:
 *     PipAttemptDependentsStart @ 0x14098EA5C (PipAttemptDependentsStart.c)
 *     PipDeleteAllDependencyRelations @ 0x140A0F350 (PipDeleteAllDependencyRelations.c)
 * Callees:
 *     PnpRequestDeviceAction @ 0x14046C968 (PnpRequestDeviceAction.c)
 *     PipClearDevNodeProblem @ 0x1409C5678 (PipClearDevNodeProblem.c)
 *     PipCheckForUnsatisfiedDependencies @ 0x140A0F844 (PipCheckForUnsatisfiedDependencies.c)
 */

__int64 __fastcall PipAttemptDependentStart(_QWORD *Object)
{
  __int64 v2; // rax
  __int64 v3; // rbx

  if ( !Object )
    return 3221225473LL;
  v2 = Object[39];
  v3 = *(_QWORD *)(v2 + 40);
  if ( !v3
    || (*(_DWORD *)(v3 + 396) & 0x2000) == 0
    || *(_DWORD *)(v3 + 404) != 51
    || (unsigned __int8)PipCheckForUnsatisfiedDependencies(*(_QWORD *)(v2 + 40), 3LL) )
  {
    return 3221225473LL;
  }
  PipClearDevNodeProblem(v3);
  return PnpRequestDeviceAction(Object, 0x10u, 1, 0LL, 0LL, 0LL, 0LL);
}
