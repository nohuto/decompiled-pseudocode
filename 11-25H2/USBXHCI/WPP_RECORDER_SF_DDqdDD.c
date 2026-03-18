/*
 * XREFs of WPP_RECORDER_SF_DDqDDD @ 0x14004D52C
 * Callers:
 *     Isoch_PrepareStage @ 0x14001DDB0 (Isoch_PrepareStage.c)
 *     Isoch_Stage_EstimateRequiredSegments @ 0x140024120 (Isoch_Stage_EstimateRequiredSegments.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_DDqDDD(
        __int64 a1,
        _DWORD a2,
        _DWORD a3,
        _DWORD a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        ...)
{
  int v12; // [rsp+28h] [rbp-51h]
  va_list va; // [rsp+F8h] [rbp+7Fh] BYREF

  va_start(va, a10);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_dd4fc339be0d3de3d8d0a5a4ecea6bb9_Traceguids,
      46LL,
      &a6,
      4LL,
      &a7,
      4LL,
      &a8,
      8LL,
      &a9,
      4LL,
      &a10,
      4LL,
      va,
      4LL,
      0LL);
  LOWORD(v12) = 46;
  return WppAutoLogTrace(a1, 5LL, 14LL, &WPP_dd4fc339be0d3de3d8d0a5a4ecea6bb9_Traceguids, v12, &a6, 4LL, &a7, 4LL, &a8);
}
