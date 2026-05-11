/*
 * XREFs of USBHwDataPipeReset @ 0x14002D70C
 * Callers:
 *     USBCaptureStateChangePin @ 0x140004850 (USBCaptureStateChangePin.c)
 *     USBType1StateChangePin @ 0x140004CF0 (USBType1StateChangePin.c)
 *     USBType1ChangePowerState @ 0x14000DC90 (USBType1ChangePowerState.c)
 *     USBCaptureChangePowerState @ 0x14000E3C0 (USBCaptureChangePowerState.c)
 *     USBCaptureStartTransfers @ 0x14003A9E0 (USBCaptureStartTransfers.c)
 *     USBType1HandleUrbError @ 0x14003FFC0 (USBType1HandleUrbError.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x140005368 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     PinWaitForStarvation @ 0x14000BDE4 (PinWaitForStarvation.c)
 *     USBHwAbortOrResetPipe @ 0x14003C780 (USBHwAbortOrResetPipe.c)
 */

__int64 __fastcall USBHwDataPipeReset(__int64 a1)
{
  __int64 v1; // rax
  _BYTE *v3; // rdi
  __int64 v4; // rbp
  int v5; // eax
  int v6; // edx
  int v7; // r8d
  int v8; // ebx

  v1 = *(_QWORD *)(a1 + 16);
  v3 = *(_BYTE **)(v1 + 152);
  v4 = *(_QWORD *)(v1 + 16);
  v5 = USBHwAbortOrResetPipe(*(PDEVICE_OBJECT *)(v4 + 40));
  v8 = v5;
  if ( (int)(v5 + 0x80000000) >= 0 && v5 != -1073741810
    || (PinWaitForStarvation(a1),
        v8 = USBHwAbortOrResetPipe(*(PDEVICE_OBJECT *)(v4 + 40)),
        ((v8 + 0x80000000) & 0x80000000) == 0)
    && v8 != -1073741810
    || (*v3 = 0, v8 < 0) )
  {
    LOBYTE(v6) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( (_BYTE)v6 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qd(WPP_GLOBAL_Control->AttachedDevice, v6, v7, WPP_GLOBAL_Control->DeviceExtension);
    }
  }
  return (unsigned int)v8;
}
