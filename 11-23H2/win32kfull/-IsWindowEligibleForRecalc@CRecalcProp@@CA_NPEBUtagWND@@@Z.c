/*
 * XREFs of ?IsWindowEligibleForRecalc@CRecalcProp@@CA_NPEBUtagWND@@@Z @ 0x1C005D45C
 * Callers:
 *     ?xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@PEAVCRecalcContext@@@Z @ 0x1C005CDD8 (-xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@PEAVCRecalcContext.c)
 *     ?CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcOption@@@Z @ 0x1C005D284 (-CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcOption@.c)
 *     ?s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z @ 0x1C005D750 (-s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0044D3C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     _IsTopLevelWindow @ 0x1C0122A20 (_IsTopLevelWindow.c)
 */

char __fastcall CRecalcProp::IsWindowEligibleForRecalc(const struct tagWND *a1)
{
  __int64 v1; // rcx
  _QWORD *v2; // r10
  char v3; // r8
  __int64 v4; // rdx
  PDEVICE_OBJECT v6; // r9
  unsigned __int16 v7; // cx
  char v8; // dl

  if ( !(unsigned int)IsTopLevelWindow(a1) )
  {
    v6 = WPP_GLOBAL_Control;
    v3 = 1;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (v8 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      v8 = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v3 = 0;
    if ( !v8 && !v3 )
      return 0;
    v7 = 63;
    goto LABEL_34;
  }
  if ( *(char *)(*(_QWORD *)(v1 + 40) + 24LL) < 0 )
  {
    v6 = WPP_GLOBAL_Control;
    v3 = 1;
    v7 = 64;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (v8 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      v8 = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v3 = 0;
    if ( !v8 && !v3 )
      return 0;
    goto LABEL_34;
  }
  v3 = 1;
  v4 = *(_QWORD *)(*(_QWORD *)(v1 + 136) + 8LL);
  if ( *(_WORD *)v4 != *(_WORD *)(gpsi + 898LL) && (*(_BYTE *)(v4 + 10) & 1) == 0 )
    return 1;
  v6 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (v8 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v8 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v3 = 0;
  if ( v8 || v3 )
  {
    v7 = 65;
LABEL_34:
    WPP_RECORDER_AND_TRACE_SF_q(
      (__int64)v6->AttachedDevice,
      v8,
      v3,
      (__int64)v6,
      5u,
      7u,
      v7,
      (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids,
      *v2);
  }
  return 0;
}
