/*
 * XREFs of USBCaptureStartTransfers @ 0x14003A9E0
 * Callers:
 *     USBCaptureResetWorker @ 0x1400045B0 (USBCaptureResetWorker.c)
 *     USBCaptureStateChangePin @ 0x140004850 (USBCaptureStateChangePin.c)
 *     USBCaptureChangePowerState @ 0x14000E3C0 (USBCaptureChangePowerState.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x140005368 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     USBHwDataPipeReset @ 0x14002D70C (USBHwDataPipeReset.c)
 *     USBCaptureSubmitRequest @ 0x14003AB30 (USBCaptureSubmitRequest.c)
 */

__int64 __fastcall USBCaptureStartTransfers(__int64 a1, char a2)
{
  int v4; // edi
  struct _KMUTANT *v5; // r14
  unsigned int v6; // ebx
  char v7; // si
  int v8; // ebx
  int v9; // edx
  int v10; // r8d

  v4 = 0;
  v5 = *(struct _KMUTANT **)(*(_QWORD *)(a1 + 16) + 152LL);
  KeWaitForSingleObject(&v5[3], Executive, 0, 0, 0LL);
  if ( a2 )
    v4 = USBHwDataPipeReset(a1);
  v6 = 0;
  v7 = 1;
  do
  {
    if ( v4 < 0 )
      break;
    v4 = USBCaptureSubmitRequest(&v5[v6++ + 5].MutantListEntry);
    v5[2].Header.Type = v4 >= 0;
  }
  while ( v6 < 0xC );
  v8 = 0;
  if ( v4 != 259 )
    v8 = v4;
  KeReleaseMutex(v5 + 3, 0);
  if ( v8 < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v7 = 0;
    }
    if ( v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = v7;
      LOBYTE(v10) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qd(WPP_GLOBAL_Control->AttachedDevice, v9, v10, WPP_GLOBAL_Control->DeviceExtension);
    }
  }
  return (unsigned int)v8;
}
