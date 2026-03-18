/*
 * XREFs of NtUserGetWOWClass @ 0x1402972D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _GetWOWClass @ 0x140285CA4 (_GetWOWClass.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

_QWORD *__fastcall NtUserGetWOWClass(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct tagTHREADINFO *v6; // rdi
  int v7; // ecx
  char *v8; // rdx
  ULONG64 v9; // r8
  _QWORD *WOWClass; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rbx
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v14, 1LL);
  v6 = PtiCurrent(v5, v4);
  if ( a2 >= MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  v7 = *(_DWORD *)a2;
  LODWORD(v14) = *(_DWORD *)a2;
  v8 = *(char **)(a2 + 8);
  if ( ((unsigned __int8)v8 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v9 = (ULONG64)&v8[(unsigned __int16)v7 + 2];
  if ( v9 <= (unsigned __int64)v8 || v9 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v7 > WORD1(v14) )
  {
    if ( (v7 & 1) == 0 )
      goto LABEL_13;
    goto LABEL_12;
  }
  if ( (v7 & 1) != 0 )
  {
LABEL_12:
    LODWORD(v14) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2997);
LABEL_13:
    ExRaiseAccessViolation();
  }
  WOWClass = GetWOWClass(a1, v8);
  v12 = WOWClass;
  if ( WOWClass )
    v12 = (_QWORD *)(WOWClass[1] - *((_QWORD *)v6 + 64));
  UserSessionSwitchLeaveCrit(v11);
  return v12;
}
