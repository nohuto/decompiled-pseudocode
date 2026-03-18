/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_DSd @ 0x1401E9160
 * Callers:
 *     RIMRegisterForDeviceChangeNotifications @ 0x14013BC64 (RIMRegisterForDeviceChangeNotifications.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void WPP_RECORDER_AND_TRACE_SF_DSd(__int64 a1, char a2, char a3, __int64 a4, int a5, int a6, int a7, __int64 a8, ...)
{
  const wchar_t *v8; // rbx
  __int64 v9; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  const wchar_t *v15; // rcx
  bool v16; // zf
  int v17; // [rsp+20h] [rbp-68h]
  __int64 v18; // [rsp+D0h] [rbp+48h] BYREF
  va_list va; // [rsp+D0h] [rbp+48h]
  const wchar_t *v20; // [rsp+D8h] [rbp+50h]
  va_list va1; // [rsp+E0h] [rbp+58h] BYREF

  va_start(va1, a8);
  va_start(va, a8);
  v18 = va_arg(va1, _QWORD);
  v20 = va_arg(va1, const wchar_t *);
  v8 = v20;
  v9 = -1LL;
  if ( a2 )
  {
    if ( v20 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( v20[v13] );
      v14 = 2 * v13 + 2;
    }
    else
    {
      v14 = 10LL;
    }
    v15 = v20;
    if ( !v20 )
      v15 = L"NULL";
    ((void (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, const wchar_t *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      a1,
      43LL,
      &WPP_8f2753a93c4e3e90acbb2f7643baf67d_Traceguids,
      48LL,
      (__int64 *)va,
      4LL,
      v15,
      v14,
      va1,
      4LL,
      0LL);
  }
  if ( a3 )
  {
    v16 = v8 == 0LL;
    if ( v8 )
    {
      do
        ++v9;
      while ( v8[v9] );
      v16 = v8 == 0LL;
    }
    if ( v16 )
      v8 = L"NULL";
    LOWORD(v17) = 48;
    WppAutoLogTrace(a4, 4LL, 1LL, &WPP_8f2753a93c4e3e90acbb2f7643baf67d_Traceguids, v17, (__int64 *)va, 4LL, v8);
  }
}
