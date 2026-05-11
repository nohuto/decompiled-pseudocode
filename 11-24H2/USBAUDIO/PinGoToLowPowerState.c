/*
 * XREFs of PinGoToLowPowerState @ 0x140030B10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x140005138 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     _guard_dispatch_icall @ 0x14001BB50 (_guard_dispatch_icall.c)
 */

void __fastcall PinGoToLowPowerState(PKSPIN Pin, DEVICE_POWER_STATE State)
{
  _QWORD *Context; // rdi
  DEVICE_POWER_STATE v3; // r15d
  int v5; // esi
  __int64 v6; // r8
  __int64 (__fastcall *v7)(PKSPIN, _QWORD, __int64); // r14
  char v8; // bl

  Context = Pin->Context;
  v3 = State;
  v5 = 0;
  v6 = *(_QWORD *)(Context[18] + 128LL);
  v7 = *(__int64 (__fastcall **)(PKSPIN, _QWORD, __int64))(v6 + 40);
  v8 = 1;
  LOBYTE(State) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(v6) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)State || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qd(WPP_GLOBAL_Control->AttachedDevice, State, v6, WPP_GLOBAL_Control->DeviceExtension);
  if ( *((_BYTE *)Context + 168) )
  {
    if ( v7 )
      v5 = v7(Pin, (unsigned int)v3, v6);
    *((_BYTE *)Context + 168) = 0;
    if ( v5 < 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v8 = 0;
      }
      if ( v8 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(State) = v8;
        LOBYTE(v6) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_qd(WPP_GLOBAL_Control->AttachedDevice, State, v6, WPP_GLOBAL_Control->DeviceExtension);
      }
    }
  }
}
