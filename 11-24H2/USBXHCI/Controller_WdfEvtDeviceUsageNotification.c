/*
 * XREFs of Controller_WdfEvtDeviceUsageNotification @ 0x14007A400
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qLD @ 0x140044CCC (WPP_RECORDER_SF_qLD.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

PVOID __fastcall Controller_WdfEvtDeviceUsageNotification(__int64 a1, char a2, char a3)
{
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax
  int v10; // ecx
  PVOID result; // rax
  int v12; // [rsp+20h] [rbp-28h]

  v6 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_14006B240)
                 + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLD(*(_QWORD *)(v6 + 72), v5, v7, v8, v12);
  v9 = 1 << a2;
  v10 = *(_DWORD *)(v6 + 788);
  if ( a3 )
  {
    *(_DWORD *)(v6 + 788) = v10 | v9;
    return MmLockPagableDataSection(Controller_WdfEvtDeviceAdd);
  }
  else
  {
    result = (PVOID)(v10 & (unsigned int)~v9);
    *(_DWORD *)(v6 + 788) = (_DWORD)result;
  }
  return result;
}
