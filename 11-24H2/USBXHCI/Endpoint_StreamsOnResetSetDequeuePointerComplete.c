/*
 * XREFs of Endpoint_StreamsOnResetSetDequeuePointerComplete @ 0x1400331C8
 * Callers:
 *     Endpoint_OnResetSetDequeuePointerCompletion @ 0x140008250 (Endpoint_OnResetSetDequeuePointerCompletion.c)
 *     Endpoint_OnResetSetDequeuePointer @ 0x140008E8C (Endpoint_OnResetSetDequeuePointer.c)
 * Callees:
 *     ESM_AddEsmEvent @ 0x140005BC0 (ESM_AddEsmEvent.c)
 *     WPP_RECORDER_SF_dddd @ 0x140044934 (WPP_RECORDER_SF_dddd.c)
 */

PDEVICE_OBJECT __fastcall Endpoint_StreamsOnResetSetDequeuePointerComplete(__int64 *a1, char a2)
{
  __int64 v2; // rbx
  __int64 v4; // rsi
  signed __int32 v5; // edi
  PDEVICE_OBJECT result; // rax
  int v7; // edx

  v2 = *a1;
  v4 = *(_QWORD *)(*a1 + 144);
  v5 = _InterlockedIncrement((volatile signed __int32 *)(v4 + 20));
  result = (PDEVICE_OBJECT)&WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    result = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v7 = *(unsigned __int8 *)(*(_QWORD *)(v2 + 16) + 143LL);
      LOBYTE(v7) = 5;
      result = (PDEVICE_OBJECT)WPP_RECORDER_SF_dddd(
                                 *(_QWORD *)(v2 + 80),
                                 v7,
                                 13,
                                 44,
                                 (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
                                 *(_BYTE *)(*(_QWORD *)(v2 + 16) + 143LL),
                                 *(_DWORD *)(v2 + 152),
                                 a2,
                                 v5);
    }
  }
  if ( v5 == *(_DWORD *)(v4 + 8) )
  {
    *(_DWORD *)(v2 + 296) = 0;
    return (PDEVICE_OBJECT)ESM_AddEsmEvent(v2);
  }
  return result;
}
