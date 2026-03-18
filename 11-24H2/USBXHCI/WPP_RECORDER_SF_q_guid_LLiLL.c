/*
 * XREFs of WPP_RECORDER_SF_q_guid_LLiLL @ 0x1400451B0
 * Callers:
 *     Controller_ExecuteDSM @ 0x14008187C (Controller_ExecuteDSM.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_q_guid_LLiLL(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  __int64 v5; // rbx
  int v8; // [rsp+28h] [rbp-79h]
  __int64 v9; // [rsp+F0h] [rbp+4Fh] BYREF
  va_list va; // [rsp+F0h] [rbp+4Fh]
  __int64 v11; // [rsp+F8h] [rbp+57h]
  __int64 v12; // [rsp+100h] [rbp+5Fh] BYREF
  va_list va1; // [rsp+100h] [rbp+5Fh]
  __int64 v14; // [rsp+108h] [rbp+67h] BYREF
  va_list va2; // [rsp+108h] [rbp+67h]
  __int64 v16; // [rsp+110h] [rbp+6Fh] BYREF
  va_list va3; // [rsp+110h] [rbp+6Fh]
  __int64 v18; // [rsp+118h] [rbp+77h] BYREF
  va_list va4; // [rsp+118h] [rbp+77h]
  va_list va5; // [rsp+120h] [rbp+7Fh] BYREF

  va_start(va5, a5);
  va_start(va4, a5);
  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v9 = va_arg(va1, _QWORD);
  v11 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v12 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v14 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v16 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v18 = va_arg(va5, _QWORD);
  v5 = v11;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, __int64, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
      279LL,
      (__int64 *)va,
      8LL,
      v11,
      16LL,
      (__int64 *)va1,
      4LL,
      (__int64 *)va2,
      4LL,
      (__int64 *)va3,
      8LL,
      (__int64 *)va4,
      4LL,
      va5,
      4LL,
      0LL);
  LOWORD(v8) = 279;
  return WppAutoLogTrace(
           a1,
           4LL,
           4LL,
           &WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
           v8,
           (__int64 *)va,
           8LL,
           v5,
           16LL,
           (__int64 *)va1,
           4LL,
           (__int64 *)va2);
}
