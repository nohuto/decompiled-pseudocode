/*
 * XREFs of WPP_RECORDER_SF_Sq @ 0x140035B5C
 * Callers:
 *     HUBREG_ReadUsb4HostNameStringFromDeviceHardwareKey @ 0x14008C050 (HUBREG_ReadUsb4HostNameStringFromDeviceHardwareKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_Sq(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, const wchar_t *a6, ...)
{
  const wchar_t *v6; // rbx
  __int64 v7; // rdi
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  const wchar_t *v12; // rcx
  bool v13; // zf
  int v15; // [rsp+20h] [rbp-48h]
  va_list va; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va, a6);
  v6 = a6;
  v7 = -1LL;
  v9 = 10LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a6 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( a6[v10] );
      v11 = 2 * v10 + 2;
    }
    else
    {
      v11 = 10LL;
    }
    v12 = a6;
    if ( !a6 )
      v12 = L"NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, const wchar_t *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_6348287eaa4439ce1c5af6747761b290_Traceguids,
      158LL,
      v12,
      v11,
      va,
      8LL,
      0LL);
  }
  v13 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
    v9 = 2 * v7 + 2;
    v13 = a6 == 0LL;
  }
  if ( v13 )
    v6 = L"NULL";
  LOWORD(v15) = 158;
  return WppAutoLogTrace(a1, 4LL, 5LL, &WPP_6348287eaa4439ce1c5af6747761b290_Traceguids, v15, v6, v9, va);
}
