/*
 * XREFs of ?SetStateAfterProcessing@CRecalcProp@@AEAAXPEAVCMonitorTopology@@@Z @ 0x1C005C18C
 * Callers:
 *     ?xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@PEAVCRecalcContext@@@Z @ 0x1C005CDD8 (-xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@PEAVCRecalcContext.c)
 * Callees:
 *     ?CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcOption@@@Z @ 0x1C005D284 (-CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcOption@.c)
 *     ?CompareToCurrent@CMonitorTopology@@QEBA?AW4CompareResult@1@W4CompareType@1@@Z @ 0x1C005E700 (-CompareToCurrent@CMonitorTopology@@QEBA-AW4CompareResult@1@W4CompareType@1@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qs @ 0x1C00A623C (WPP_RECORDER_AND_TRACE_SF_qs.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00EEC50 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?s_PostRecalcForWindow@CRecalcProp@@SAXPEAUtagWND@@@Z @ 0x1C0225D0C (-s_PostRecalcForWindow@CRecalcProp@@SAXPEAUtagWND@@@Z.c)
 */

void __fastcall CRecalcProp::SetStateAfterProcessing(CRecalcProp *this, struct CMonitorTopology *a2)
{
  char v2; // bl
  unsigned int v5; // eax
  int v6; // edx
  int v7; // r8d
  __int64 v8; // r9
  const char *v9; // r9
  int v10; // r8d

  v2 = 1;
  if ( (unsigned int)(*((_DWORD *)this + 6) - 1) > 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2568LL);
  v5 = CMonitorTopology::CompareToCurrent(a2, 0LL);
  *((_DWORD *)this + 6) = *((_QWORD *)this + 4) != 0LL;
  v8 = v5;
  if ( v5 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v6) = 0;
    }
    if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        v7,
        (_DWORD)gFullLog,
        4,
        7,
        79,
        (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids,
        v5);
    }
    if ( (unsigned __int8)CRecalcProp::CreateForTopologyChange(**((_QWORD **)this + 2), a2, 0LL, v8) )
      CRecalcProp::s_PostRecalcForWindow(*((struct tagWND **)this + 2));
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v6) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v2 = 0;
  if ( (_BYTE)v6 || v2 )
  {
    v9 = "has pending recalc state";
    if ( !*((_QWORD *)this + 4) )
      v9 = "in free state";
    v10 = 80;
    LOBYTE(v10) = v2;
    WPP_RECORDER_AND_TRACE_SF_qs(
      WPP_GLOBAL_Control->AttachedDevice,
      v6,
      v10,
      (_DWORD)gFullLog,
      5,
      7,
      80,
      (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids,
      **((_QWORD **)this + 2),
      (__int64)v9);
  }
}
