/*
 * XREFs of WPP_RECORDER_SF_qqsd @ 0x1C00037A0
 * Callers:
 *     KeyboardClassPower @ 0x1C00031A0 (KeyboardClassPower.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1C00072D0 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_qqsd(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  const char *v5; // rdi
  __int64 v6; // rbx
  __int64 v8; // rbx
  __int64 v10; // rdx
  __int64 v11; // rdx
  const char *v12; // rcx
  int v13; // [rsp+20h] [rbp-58h]
  __int64 v14; // [rsp+A8h] [rbp+30h] BYREF
  va_list va; // [rsp+A8h] [rbp+30h]
  __int64 v16; // [rsp+B0h] [rbp+38h] BYREF
  va_list va1; // [rsp+B0h] [rbp+38h]
  const char *v18; // [rsp+B8h] [rbp+40h]
  va_list va2; // [rsp+C0h] [rbp+48h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v14 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v16 = va_arg(va2, _QWORD);
  v18 = va_arg(va2, const char *);
  v5 = v18;
  v6 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( v18 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( v18[v10] );
      v11 = v10 + 1;
    }
    else
    {
      v11 = 5LL;
    }
    v12 = v18;
    if ( !v18 )
      v12 = "NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_1b6d0084df9f3ca48f318fdd34bf6db2_Traceguids,
      96LL,
      (__int64 *)va,
      8LL,
      (__int64 *)va1,
      8LL,
      v12,
      v11,
      va2,
      4LL,
      0LL);
  }
  if ( v5 )
  {
    do
      ++v6;
    while ( v5[v6] );
    v8 = v6 + 1;
  }
  else
  {
    v8 = 5LL;
    v5 = "NULL";
  }
  LOWORD(v13) = 96;
  return WppAutoLogTrace(
           a1,
           4LL,
           5LL,
           &WPP_1b6d0084df9f3ca48f318fdd34bf6db2_Traceguids,
           v13,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           8LL,
           v5,
           v8,
           va2);
}
