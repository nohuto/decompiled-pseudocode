/*
 * XREFs of WPP_RECORDER_SF_PD @ 0x140065334
 * Callers:
 *     AcpiConvertObjDataToMethodArguments @ 0x14003A250 (AcpiConvertObjDataToMethodArguments.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_PD(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+20h] [rbp-48h]
  _DWORD v8[6]; // [rsp+50h] [rbp-18h] BYREF
  va_list va; // [rsp+98h] [rbp+30h] BYREF

  va_start(va, a5);
  v8[0] = -1073741670;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, char *, __int64, _DWORD *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_ddc14e6fd4133db509d0c44d0c15805e_Traceguids,
      22LL,
      va,
      8LL,
      v8,
      4LL,
      0LL);
  LOWORD(v7) = 22;
  return WppAutoLogTrace(a1, 2LL, 21LL, &WPP_ddc14e6fd4133db509d0c44d0c15805e_Traceguids, v7, va, 8LL, v8);
}
