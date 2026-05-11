/*
 * XREFs of PropertyGetAudioPositionEx @ 0x14003A980
 * Callers:
 *     <none>
 * Callees:
 *     WmiLogStreamPosition @ 0x140003710 (WmiLogStreamPosition.c)
 *     WPP_RECORDER_AND_TRACE_SF_ii @ 0x1400088B0 (WPP_RECORDER_AND_TRACE_SF_ii.c)
 *     _guard_dispatch_icall @ 0x14001BB50 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PropertyGetAudioPositionEx(IRP *a1, __int64 a2, _QWORD *a3)
{
  unsigned int v4; // edi
  PKSPIN PinFromIrp; // rax
  int v6; // edx
  int v7; // r8d
  _QWORD *Context; // rbx

  v4 = -1073741811;
  PinFromIrp = KsGetPinFromIrp(a1);
  if ( PinFromIrp )
  {
    Context = PinFromIrp->Context;
    if ( *((_BYTE *)Context + 46) )
    {
      v4 = -1073741130;
    }
    else
    {
      v4 = (*(__int64 (__fastcall **)(PKSPIN, _QWORD *))(*(_QWORD *)(Context[18] + 128LL) + 56LL))(PinFromIrp, a3);
      a3[3] = Context[10];
    }
    LOBYTE(v6) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
    LOBYTE(v7) = *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
              && LOWORD(WPP_GLOBAL_Control->DeviceType);
    if ( (_BYTE)v6 || (_BYTE)v7 )
      WPP_RECORDER_AND_TRACE_SF_ii(WPP_GLOBAL_Control->AttachedDevice, v6, v7, WPP_GLOBAL_Control->DeviceExtension);
  }
  WmiLogStreamPosition(a3, v4);
  return v4;
}
