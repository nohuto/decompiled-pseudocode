/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qsllllDddddd @ 0x1402E6104
 * Callers:
 *     xxxSetScrollBar @ 0x140032F08 (xxxSetScrollBar.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

_UNKNOWN **WPP_RECORDER_AND_TRACE_SF_qsllllDddddd(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        ...)
{
  _UNKNOWN **result; // rax
  const char *v9; // rdi
  __int64 v10; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  const char *v16; // rcx
  __int64 v17; // rbx
  int v18; // [rsp+28h] [rbp-C9h]
  _UNKNOWN *retaddr; // [rsp+110h] [rbp+1Fh] BYREF
  __int64 v20; // [rsp+158h] [rbp+67h] BYREF
  va_list va; // [rsp+158h] [rbp+67h]
  const char *v22; // [rsp+160h] [rbp+6Fh]
  __int64 v23; // [rsp+168h] [rbp+77h] BYREF
  va_list va1; // [rsp+168h] [rbp+77h]
  __int64 v25; // [rsp+170h] [rbp+7Fh] BYREF
  va_list va2; // [rsp+170h] [rbp+7Fh]
  __int64 v27; // [rsp+178h] [rbp+87h] BYREF
  va_list va3; // [rsp+178h] [rbp+87h]
  __int64 v29; // [rsp+180h] [rbp+8Fh] BYREF
  va_list va4; // [rsp+180h] [rbp+8Fh]
  __int64 v31; // [rsp+188h] [rbp+97h] BYREF
  va_list va5; // [rsp+188h] [rbp+97h]
  __int64 v33; // [rsp+190h] [rbp+9Fh] BYREF
  va_list va6; // [rsp+190h] [rbp+9Fh]
  __int64 v35; // [rsp+198h] [rbp+A7h] BYREF
  va_list va7; // [rsp+198h] [rbp+A7h]
  __int64 v37; // [rsp+1A0h] [rbp+AFh] BYREF
  va_list va8; // [rsp+1A0h] [rbp+AFh]
  __int64 v39; // [rsp+1A8h] [rbp+B7h] BYREF
  va_list va9; // [rsp+1A8h] [rbp+B7h]
  va_list va10; // [rsp+1B0h] [rbp+BFh] BYREF

  va_start(va10, a8);
  va_start(va9, a8);
  va_start(va8, a8);
  va_start(va7, a8);
  va_start(va6, a8);
  va_start(va5, a8);
  va_start(va4, a8);
  va_start(va3, a8);
  va_start(va2, a8);
  va_start(va1, a8);
  va_start(va, a8);
  v20 = va_arg(va1, _QWORD);
  v22 = va_arg(va1, const char *);
  va_copy(va2, va1);
  v23 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v25 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v27 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v29 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v31 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v33 = va_arg(va7, _QWORD);
  va_copy(va8, va7);
  v35 = va_arg(va8, _QWORD);
  va_copy(va9, va8);
  v37 = va_arg(va9, _QWORD);
  va_copy(va10, va9);
  v39 = va_arg(va10, _QWORD);
  result = &retaddr;
  v9 = v22;
  v10 = -1LL;
  if ( a2 )
  {
    if ( v22 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( v22[v14] );
      v15 = v14 + 1;
    }
    else
    {
      v15 = 5LL;
    }
    v16 = v22;
    if ( !v22 )
      v16 = "NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, const char *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
                            27LL,
                            (__int64 *)va,
                            8LL,
                            v16,
                            v15,
                            (__int64 *)va1,
                            4LL,
                            (__int64 *)va2,
                            4LL,
                            (__int64 *)va3,
                            4LL,
                            (__int64 *)va4,
                            4LL,
                            (__int64 *)va5,
                            4LL,
                            (__int64 *)va6,
                            4LL,
                            (__int64 *)va7,
                            4LL,
                            (__int64 *)va8,
                            4LL,
                            (__int64 *)va9,
                            4LL,
                            va10,
                            4LL,
                            0LL);
  }
  if ( a3 )
  {
    if ( v9 )
    {
      do
        ++v10;
      while ( v9[v10] );
      v17 = v10 + 1;
    }
    else
    {
      v17 = 5LL;
    }
    if ( !v9 )
      v9 = "NULL";
    LOWORD(v18) = 27;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          4LL,
                          9LL,
                          &WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
                          v18,
                          (__int64 *)va,
                          8LL,
                          v9,
                          v17,
                          (__int64 *)va1,
                          4LL,
                          (__int64 *)va2);
  }
  return result;
}
