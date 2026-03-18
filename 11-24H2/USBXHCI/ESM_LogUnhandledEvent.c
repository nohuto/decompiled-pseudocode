/*
 * XREFs of ESM_LogUnhandledEvent @ 0x140054F74
 * Callers:
 *     ESM_FindAndSetTargetState @ 0x140006E74 (ESM_FindAndSetTargetState.c)
 * Callees:
 *     WPP_RECORDER_SF_qDD @ 0x140018934 (WPP_RECORDER_SF_qDD.c)
 *     WPP_RECORDER_SF_qLL @ 0x14002C7F8 (WPP_RECORDER_SF_qLL.c)
 */

char __fastcall ESM_LogUnhandledEvent(__int64 a1, int a2)
{
  int *v3; // rdi
  const void **v4; // rsi
  char result; // al
  int v8; // [rsp+38h] [rbp-10h]
  int v9; // [rsp+38h] [rbp-10h]

  if ( *(_DWORD *)(a1 + 976) == 2000 )
  {
    v3 = (int *)(a1 + 852);
    v4 = (const void **)(a1 + 960);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = *v3;
      WPP_RECORDER_SF_qLL(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x11u,
        0xAu,
        (__int64)&WPP_98a83f24598b3525d75ef9dd6ca2eaeb_Traceguids,
        *v4,
        a2,
        v9);
    }
    if ( !KdRefreshDebuggerNotPresent() )
      DbgPrint("ESM 0x%p: is not handling Event %u, Current Top Level State is %u\n", *v4, a2, *v3);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = *(_DWORD *)(a1 + 852);
    WPP_RECORDER_SF_qDD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x11u,
      0xBu,
      (__int64)&WPP_98a83f24598b3525d75ef9dd6ca2eaeb_Traceguids,
      *(_QWORD *)(a1 + 960),
      a2,
      v8);
  }
  result = KdRefreshDebuggerNotPresent();
  if ( !result )
  {
    result = DbgPrint("Unhandled event in USBXHCI Endpoint State Machine\n");
    __debugbreak();
  }
  return result;
}
