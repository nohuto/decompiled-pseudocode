/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_ssdddddd @ 0x1401D8A0C
 * Callers:
 *     _anonymous_namespace_::xxxMigrateWindowPosition @ 0x140223790 (_anonymous_namespace_--xxxMigrateWindowPosition.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

_UNKNOWN **WPP_RECORDER_AND_TRACE_SF_ssdddddd(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        const char *a9,
        const char *a10,
        ...)
{
  _UNKNOWN **result; // rax
  const char *v11; // rsi
  __int64 v12; // rbx
  const char *v13; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rax
  const char *v22; // rcx
  int v23; // [rsp+28h] [rbp-89h]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+1Fh] BYREF
  __int64 v25; // [rsp+128h] [rbp+77h] BYREF
  va_list va; // [rsp+128h] [rbp+77h]
  __int64 v27; // [rsp+130h] [rbp+7Fh] BYREF
  va_list va1; // [rsp+130h] [rbp+7Fh]
  __int64 v29; // [rsp+138h] [rbp+87h] BYREF
  va_list va2; // [rsp+138h] [rbp+87h]
  va_list va3; // [rsp+140h] [rbp+8Fh] BYREF

  va_start(va3, a10);
  va_start(va2, a10);
  va_start(va1, a10);
  va_start(va, a10);
  v25 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v27 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v29 = va_arg(va3, _QWORD);
  result = &retaddr;
  v11 = a9;
  v12 = -1LL;
  v13 = a10;
  if ( a2 )
  {
    if ( a10 )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( a10[v20] );
    }
    if ( a9 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( a9[v21] );
    }
    WORD1(v22) = WORD1(a9);
    if ( !a9 )
      v22 = "NULL";
    HIWORD(v23) = WORD1(v22);
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
  }
  if ( a3 )
  {
    if ( a10 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( a10[v17] );
      v18 = v17 + 1;
    }
    else
    {
      v18 = 5LL;
    }
    if ( !a10 )
      v13 = "NULL";
    if ( a9 )
    {
      do
        ++v12;
      while ( a9[v12] );
      v19 = v12 + 1;
    }
    else
    {
      v19 = 5LL;
    }
    if ( !a9 )
      v11 = "NULL";
    LOWORD(v23) = 40;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          4LL,
                          4LL,
                          &WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
                          v23,
                          v11,
                          v19,
                          v13,
                          v18,
                          (__int64 *)va,
                          4LL,
                          (__int64 *)va1,
                          4LL,
                          (__int64 *)va2,
                          4LL,
                          va3);
  }
  return result;
}
