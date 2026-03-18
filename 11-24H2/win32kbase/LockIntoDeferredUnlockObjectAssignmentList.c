/*
 * XREFs of LockIntoDeferredUnlockObjectAssignmentList @ 0x1401A7950
 * Callers:
 *     ??$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z @ 0x140045BD8 (--$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z.c)
 *     ??$DeferrableUnlockObjectAssignment@UtagWINDOWSTATION@@@@YAXPEAPEAUtagWINDOWSTATION@@@Z @ 0x140121A30 (--$DeferrableUnlockObjectAssignment@UtagWINDOWSTATION@@@@YAXPEAPEAUtagWINDOWSTATION@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 *__fastcall LockIntoDeferredUnlockObjectAssignmentList(__int64 a1, __int64 a2)
{
  __int64 *result; // rax
  _QWORD *v5; // rcx

  if ( !PtiCurrent(a1) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 603);
  result = (__int64 *)(unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a2 + 24));
  if ( (_DWORD)result == 1 )
  {
    v5 = *(_QWORD **)(a1 + 8);
    result = (__int64 *)(a2 + 8);
    if ( *v5 != a1 )
      __fastfail(3u);
    *result = a1;
    *(_QWORD *)(a2 + 16) = v5;
    *v5 = result;
    *(_QWORD *)(a1 + 8) = result;
  }
  return result;
}
