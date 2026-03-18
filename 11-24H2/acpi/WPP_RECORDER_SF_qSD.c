/*
 * XREFs of WPP_RECORDER_SF_qSD @ 0x14005FF6C
 * Callers:
 *     ExternalRequestBiosNameDeviceAssociation @ 0x14009D610 (ExternalRequestBiosNameDeviceAssociation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_qSD(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  const wchar_t *v5; // rbx
  __int64 v6; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  const wchar_t *v10; // rcx
  bool v11; // zf
  int v13; // [rsp+20h] [rbp-58h]
  __int64 v14; // [rsp+A8h] [rbp+30h] BYREF
  va_list va; // [rsp+A8h] [rbp+30h]
  const wchar_t *v16; // [rsp+B0h] [rbp+38h]
  va_list va1; // [rsp+B8h] [rbp+40h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v14 = va_arg(va1, _QWORD);
  v16 = va_arg(va1, const wchar_t *);
  v5 = v16;
  v6 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( v16 )
    {
      v8 = -1LL;
      do
        ++v8;
      while ( v16[v8] );
      v9 = 2 * v8 + 2;
    }
    else
    {
      v9 = 10LL;
    }
    v10 = v16;
    if ( !v16 )
      v10 = L"NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, const wchar_t *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_8cd4999731163fb3621cd0c511e30926_Traceguids,
      12LL,
      (__int64 *)va,
      8LL,
      v10,
      v9,
      va1,
      4LL,
      0LL);
  }
  v11 = v5 == 0LL;
  if ( v5 )
  {
    do
      ++v6;
    while ( v5[v6] );
    v11 = v5 == 0LL;
  }
  if ( v11 )
    v5 = L"NULL";
  LOWORD(v13) = 12;
  return WppAutoLogTrace(a1, 2LL, 21LL, &WPP_8cd4999731163fb3621cd0c511e30926_Traceguids, v13, (__int64 *)va, 8LL, v5);
}
