/*
 * XREFs of Endpoint_StreamsOnCancelSetDequeuePointerComplete @ 0x1400087C4
 * Callers:
 *     Endpoint_OnCancelSetDequeuePointerCompletion @ 0x1400085E0 (Endpoint_OnCancelSetDequeuePointerCompletion.c)
 *     Endpoint_OnCancelSetDequeuePointer @ 0x14000AB48 (Endpoint_OnCancelSetDequeuePointer.c)
 * Callees:
 *     ESM_AddEsmEvent @ 0x140005BC0 (ESM_AddEsmEvent.c)
 *     WPP_RECORDER_SF_dddd @ 0x140044934 (WPP_RECORDER_SF_dddd.c)
 */

PDEVICE_OBJECT __fastcall Endpoint_StreamsOnCancelSetDequeuePointerComplete(__int64 a1, int a2)
{
  __int64 v2; // rsi
  signed __int32 v4; // ebx
  PDEVICE_OBJECT result; // rax
  char v6; // [rsp+38h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 144);
  v4 = _InterlockedIncrement((volatile signed __int32 *)(v2 + 20));
  result = (PDEVICE_OBJECT)&WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    result = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v6 = a2;
      LOBYTE(a2) = 5;
      result = (PDEVICE_OBJECT)WPP_RECORDER_SF_dddd(
                                 *(_QWORD *)(a1 + 80),
                                 a2,
                                 13,
                                 64,
                                 (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
                                 *(_BYTE *)(*(_QWORD *)(a1 + 16) + 143LL),
                                 *(_DWORD *)(a1 + 152),
                                 v6,
                                 v4);
    }
  }
  if ( v4 == *(_DWORD *)(v2 + 8) )
    return (PDEVICE_OBJECT)ESM_AddEsmEvent(a1);
  return result;
}
