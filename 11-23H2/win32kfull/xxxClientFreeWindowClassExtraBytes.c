/*
 * XREFs of xxxClientFreeWindowClassExtraBytes @ 0x1C00E944C
 * Callers:
 *     xxxConsoleControl @ 0x1C0042DE8 (xxxConsoleControl.c)
 *     xxxValidateClassAndSize @ 0x1C00DF5B4 (xxxValidateClassAndSize.c)
 *     xxxFreeWindow @ 0x1C00F2D20 (xxxFreeWindow.c)
 * Callees:
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9418 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9504 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall xxxClientFreeWindowClassExtraBytes(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  _QWORD v6[3]; // [rsp+30h] [rbp-18h] BYREF
  int v7; // [rsp+50h] [rbp+8h] BYREF
  int v8; // [rsp+58h] [rbp+10h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF

  v9 = 0LL;
  v8 = 0;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 232LL) & 0x10) != 0 )
  {
    v7 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6734LL);
  }
  v6[0] = *(_QWORD *)(a1 + 40) - *((_QWORD *)PtiCurrentShared() + 59);
  v6[1] = a2;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v7);
  EtwTraceBeginCallback(124LL);
  KeUserModeCallback(124LL, v6, 16LL, &v9, &v8);
  EtwTraceEndCallback(124LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v7, v4, v5);
}
