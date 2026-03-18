/*
 * XREFs of WPP_RECORDER_SF_DDqq @ 0x1400076A0
 * Callers:
 *     Control_ProcessTransferEventWithED1 @ 0x140005EE0 (Control_ProcessTransferEventWithED1.c)
 *     Isoch_RetrieveNextStage @ 0x14000E290 (Isoch_RetrieveNextStage.c)
 *     Isoch_Stage_AcquireMdl @ 0x140010300 (Isoch_Stage_AcquireMdl.c)
 *     Isoch_Stage_CompleteTD @ 0x140010440 (Isoch_Stage_CompleteTD.c)
 *     Isoch_FindTrbMatch @ 0x140012FE8 (Isoch_FindTrbMatch.c)
 *     Control_Transfer_MapIntoRing @ 0x14001E7C0 (Control_Transfer_MapIntoRing.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_DDqq(__int64 a1, unsigned __int8 a2, __int64 a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned int v7; // ebx
  int v9; // [rsp+20h] [rbp-58h]
  __int64 v10; // [rsp+A8h] [rbp+30h] BYREF
  va_list va; // [rsp+A8h] [rbp+30h]
  __int64 v12; // [rsp+B0h] [rbp+38h] BYREF
  va_list va1; // [rsp+B0h] [rbp+38h]
  __int64 v14; // [rsp+B8h] [rbp+40h] BYREF
  va_list va2; // [rsp+B8h] [rbp+40h]
  va_list va3; // [rsp+C0h] [rbp+48h] BYREF

  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v10 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v12 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v14 = va_arg(va3, _QWORD);
  v7 = a2;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= a2 )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, __int64, _QWORD, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      a5,
      a4,
      (__int64 *)va,
      4LL,
      (__int64 *)va1,
      4LL,
      (__int64 *)va2,
      8LL,
      va3,
      8LL,
      0LL);
  LOWORD(v9) = a4;
  return WppAutoLogTrace(a1, v7, 14LL, a5, v9, (__int64 *)va, 4LL, (__int64 *)va1, 4LL, (__int64 *)va2, 8LL, va3);
}
