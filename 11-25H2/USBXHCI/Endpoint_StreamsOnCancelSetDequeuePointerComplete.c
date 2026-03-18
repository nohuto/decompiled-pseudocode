/*
 * XREFs of Endpoint_StreamsOnCancelSetDequeuePointerComplete @ 0x140014F54
 * Callers:
 *     Endpoint_OnCancelSetDequeuePointer @ 0x140010288 (Endpoint_OnCancelSetDequeuePointer.c)
 *     Endpoint_OnCancelSetDequeuePointerCompletion @ 0x140014D70 (Endpoint_OnCancelSetDequeuePointerCompletion.c)
 * Callees:
 *     ESM_AddEsmEvent @ 0x140012218 (ESM_AddEsmEvent.c)
 *     WPP_RECORDER_SF_dddd @ 0x140044E38 (WPP_RECORDER_SF_dddd.c)
 */

PDEVICE_OBJECT __fastcall Endpoint_StreamsOnCancelSetDequeuePointerComplete(__int64 a1, int a2)
{
  __int64 v2; // rsi
  signed __int32 v4; // ebx
  PDEVICE_OBJECT result; // rax
  char v6; // [rsp+38h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 136);
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
                                 62,
                                 (__int64)&WPP_0e51d3b82fdb347dedaae242937bad3f_Traceguids,
                                 *(_BYTE *)(*(_QWORD *)(a1 + 16) + 135LL),
                                 *(_DWORD *)(a1 + 144),
                                 v6,
                                 v4);
    }
  }
  if ( v4 == *(_DWORD *)(v2 + 8) )
    return (PDEVICE_OBJECT)ESM_AddEsmEvent(a1);
  return result;
}
