/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_DSd @ 0x1C0199FEC
 * Callers:
 *     RIMRegisterForDeviceChangeNotifications @ 0x1C0079F44 (RIMRegisterForDeviceChangeNotifications.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
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
    ((void (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, const wchar_t *, __int64, char *, __int64, _QWORD))WPP_MAIN_CB.DeviceQueue.32)(
      a1,
      43LL,
      &WPP_772c79a03a0531bfc5b802d15a9024f9_Traceguids,
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
    WppAutoLogTrace(a4, 4LL, 1LL, &WPP_772c79a03a0531bfc5b802d15a9024f9_Traceguids, v17, (__int64 *)va, 4LL, v8);
  }
}
