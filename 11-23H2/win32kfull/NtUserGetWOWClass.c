/*
 * XREFs of NtUserGetWOWClass @ 0x1C01D3B20
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _GetWOWClass @ 0x1C01BD988 (_GetWOWClass.c)
 */

_QWORD *__fastcall NtUserGetWOWClass(__int64 a1, ULONG64 a2, __int64 a3)
{
  ULONG64 v3; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct tagTHREADINFO *v9; // rdi
  ULONG64 v10; // r9
  int v11; // ecx
  size_t *v12; // rdx
  ULONG64 v13; // r8
  _QWORD *WOWClass; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // rbx

  v3 = a2;
  EnterSharedCrit(a1, a2, a3);
  v9 = PtiCurrentShared(v6, v5, v7, v8);
  v10 = MmUserProbeAddress;
  if ( v3 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  v11 = *(_DWORD *)v3;
  v12 = *(size_t **)(v3 + 8);
  LOBYTE(v10) = 1;
  if ( ((unsigned __int8)v12 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v13 = (ULONG64)v12 + (unsigned __int16)v11 + 2;
  if ( v13 <= (unsigned __int64)v12 || v13 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v11 > (unsigned __int16)HIWORD(*(_DWORD *)v3) )
  {
    if ( (v11 & 1) == 0 )
      goto LABEL_13;
    goto LABEL_12;
  }
  if ( (v11 & 1) != 0 )
  {
LABEL_12:
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2819);
LABEL_13:
    ExRaiseAccessViolation();
  }
  WOWClass = GetWOWClass(a1, v12, v13, v10);
  v19 = WOWClass;
  if ( WOWClass )
    v19 = (_QWORD *)(WOWClass[1] - *((_QWORD *)v9 + 59));
  UserSessionSwitchLeaveCrit(v16, v15, v17, v18);
  return v19;
}
