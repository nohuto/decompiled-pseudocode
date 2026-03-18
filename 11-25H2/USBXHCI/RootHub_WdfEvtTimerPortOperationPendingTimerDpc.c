/*
 * XREFs of RootHub_WdfEvtTimerPortOperationPendingTimerDpc @ 0x14004B350
 * Callers:
 *     <none>
 * Callees:
 *     RootHub_DetectAndAcknowledgePortResume @ 0x140008F4C (RootHub_DetectAndAcknowledgePortResume.c)
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

char __fastcall RootHub_WdfEvtTimerPortOperationPendingTimerDpc(__int64 a1)
{
  _QWORD ***v1; // rax
  int v2; // edx
  _QWORD **v3; // rsi
  _QWORD *v4; // rbx
  unsigned int v5; // edi

  v1 = (_QWORD ***)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_14006B268);
  v3 = *v1;
  v4 = **v1;
  v5 = *((_DWORD *)*v1 + 2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v4[1] + 72LL),
      v2,
      11,
      219,
      (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
      v5);
  }
  *((_BYTE *)v3 + 18) = 0;
  return RootHub_DetectAndAcknowledgePortResume(v4, v5, 0);
}
