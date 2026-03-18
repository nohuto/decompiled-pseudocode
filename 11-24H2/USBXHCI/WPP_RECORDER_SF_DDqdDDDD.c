/*
 * XREFs of WPP_RECORDER_SF_DDqdDDDD @ 0x140012700
 * Callers:
 *     Isoch_PrepareStage @ 0x14000F1B0 (Isoch_PrepareStage.c)
 *     Isoch_Stage_CompleteTD @ 0x140010440 (Isoch_Stage_CompleteTD.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x140010D60 (Isoch_Transfer_CompleteCancelable.c)
 *     Isoch_Transfer_PrepareForCompletion @ 0x140012440 (Isoch_Transfer_PrepareForCompletion.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_DDqdDDDD(__int64 a1, _DWORD a2, _DWORD a3, _DWORD a4, __int64 a5, ...)
{
  int v7; // [rsp+20h] [rbp-98h]
  __int64 v8; // [rsp+E8h] [rbp+30h] BYREF
  va_list va; // [rsp+E8h] [rbp+30h]
  __int64 v10; // [rsp+F0h] [rbp+38h] BYREF
  va_list va1; // [rsp+F0h] [rbp+38h]
  __int64 v12; // [rsp+F8h] [rbp+40h] BYREF
  va_list va2; // [rsp+F8h] [rbp+40h]
  __int64 v14; // [rsp+100h] [rbp+48h] BYREF
  va_list va3; // [rsp+100h] [rbp+48h]
  __int64 v16; // [rsp+108h] [rbp+50h] BYREF
  va_list va4; // [rsp+108h] [rbp+50h]
  __int64 v18; // [rsp+110h] [rbp+58h] BYREF
  va_list va5; // [rsp+110h] [rbp+58h]
  __int64 v20; // [rsp+118h] [rbp+60h] BYREF
  va_list va6; // [rsp+118h] [rbp+60h]
  va_list va7; // [rsp+120h] [rbp+68h] BYREF

  va_start(va7, a5);
  va_start(va6, a5);
  va_start(va5, a5);
  va_start(va4, a5);
  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v8 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v10 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v12 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v14 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v16 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v18 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v20 = va_arg(va7, _QWORD);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
      16LL,
      (__int64 *)va,
      4LL,
      (__int64 *)va1,
      4LL,
      (__int64 *)va2,
      8LL,
      (__int64 *)va3,
      4LL,
      (__int64 *)va4,
      4LL,
      (__int64 *)va5,
      4LL,
      (__int64 *)va6,
      4LL,
      va7,
      4LL,
      0LL);
  LOWORD(v7) = 16;
  return WppAutoLogTrace(
           a1,
           4LL,
           14LL,
           &WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
           v7,
           (__int64 *)va,
           4LL,
           (__int64 *)va1,
           4LL,
           (__int64 *)va2,
           8LL,
           (__int64 *)va3);
}
