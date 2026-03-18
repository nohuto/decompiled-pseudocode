/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qi @ 0x1C01A4360
 * Callers:
 *     rimFindOtherQueuedFrames @ 0x1C01A44C4 (rimFindOtherQueuedFrames.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C01A4980 (rimProcessAnyQueuedCompleteFrames.c)
 *     rimQueueCompleteFrame @ 0x1C01A4E48 (rimQueueCompleteFrame.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_AND_TRACE_SF_qi(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        unsigned __int16 a7,
        int a8,
        ...)
{
  struct RECORDER_LOG__ *v8; // rsi
  __int64 result; // rax
  int v11; // [rsp+20h] [rbp-38h]
  __int64 v12; // [rsp+A0h] [rbp+48h] BYREF
  va_list va; // [rsp+A0h] [rbp+48h]
  va_list va1; // [rsp+A8h] [rbp+50h] BYREF

  va_start(va1, a8);
  va_start(va, a8);
  v12 = va_arg(va1, _QWORD);
  v8 = gRimLog;
  if ( a2 )
    result = ((__int64 (__fastcall *)(__int64, __int64, void *, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))WPP_MAIN_CB.DeviceQueue.32)(
               a1,
               43LL,
               &WPP_6c3dff8734b4343641ce6a69106986e7_Traceguids,
               a7,
               (__int64 *)va,
               8LL,
               va1,
               8LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v11) = a7;
    return WppAutoLogTrace(v8, 4LL, 1LL, &WPP_6c3dff8734b4343641ce6a69106986e7_Traceguids, v11, (__int64 *)va, 8LL, va1);
  }
  return result;
}
