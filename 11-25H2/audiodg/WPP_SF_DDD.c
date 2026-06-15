/*
 * XREFs of WPP_SF_DDD @ 0x1400747A8
 * Callers:
 *     ?OnLeftSubmixStarted@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x140039630 (-OnLeftSubmixStarted@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?OnLeftSubmixStopped@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x140039900 (-OnLeftSubmixStopped@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z @ 0x14003ACD8 (-SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_DDD(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // [rsp+88h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, &WPP_14fbdab4759831348651410bb2c6c307_Traceguids, 29LL, &v5);
}
