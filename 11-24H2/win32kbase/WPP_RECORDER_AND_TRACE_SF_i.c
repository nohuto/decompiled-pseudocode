/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_i @ 0x1400F0D84
 * Callers:
 *     rimDoProcessAnyPointerDeviceInput @ 0x1400D6DC8 (rimDoProcessAnyPointerDeviceInput.c)
 *     RIMIDEValidateMouseInputStruct @ 0x14012D5B0 (RIMIDEValidateMouseInputStruct.c)
 *     RIMIDEValidateKeybdInputStruct @ 0x14019B144 (RIMIDEValidateKeybdInputStruct.c)
 *     RIMGetLastInvertedPenTime @ 0x1401D7D30 (RIMGetLastInvertedPenTime.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_AND_TRACE_SF_i(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        unsigned __int8 a5,
        int a6,
        unsigned __int16 a7,
        __int64 a8,
        ...)
{
  __int64 result; // rax
  int v11; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+90h] [rbp+48h] BYREF

  va_start(va, a8);
  if ( a2 )
    result = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, char *, __int64, _QWORD))pfnWppTraceMessage)(
               a1,
               43LL,
               a8,
               a7,
               va,
               8LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v11) = a7;
    return WppAutoLogTrace(a4, a5, 1LL, a8, v11, va, 8LL, 0LL);
  }
  return result;
}
