/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_ddsdddddd @ 0x1401E7B68
 * Callers:
 *     ?SHData_NeedsArrangementCallout@MOVESIZEDATA@@QEBA_NW4THRESHOLD_MARGIN_DIRECTION@@AEBUtagPOINT@@@Z @ 0x14006C398 (-SHData_NeedsArrangementCallout@MOVESIZEDATA@@QEBA_NW4THRESHOLD_MARGIN_DIRECTION@@AEBUtagPOINT@@.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

_UNKNOWN **WPP_RECORDER_AND_TRACE_SF_ddsdddddd(
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
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  const char *v17; // rcx
  int v18; // [rsp+28h] [rbp-99h]
  _UNKNOWN *retaddr; // [rsp+E0h] [rbp+1Fh] BYREF
  __int64 v20; // [rsp+128h] [rbp+67h] BYREF
  va_list va; // [rsp+128h] [rbp+67h]
  __int64 v22; // [rsp+130h] [rbp+6Fh] BYREF
  va_list va1; // [rsp+130h] [rbp+6Fh]
  const char *v24; // [rsp+138h] [rbp+77h]
  __int64 v25; // [rsp+140h] [rbp+7Fh] BYREF
  va_list va2; // [rsp+140h] [rbp+7Fh]
  __int64 v27; // [rsp+148h] [rbp+87h] BYREF
  va_list va3; // [rsp+148h] [rbp+87h]
  __int64 v29; // [rsp+150h] [rbp+8Fh] BYREF
  va_list va4; // [rsp+150h] [rbp+8Fh]
  __int64 v31; // [rsp+158h] [rbp+97h] BYREF
  va_list va5; // [rsp+158h] [rbp+97h]
  __int64 v33; // [rsp+160h] [rbp+9Fh] BYREF
  va_list va6; // [rsp+160h] [rbp+9Fh]
  va_list va7; // [rsp+168h] [rbp+A7h] BYREF

  va_start(va7, a8);
  va_start(va6, a8);
  va_start(va5, a8);
  va_start(va4, a8);
  va_start(va3, a8);
  va_start(va2, a8);
  va_start(va1, a8);
  va_start(va, a8);
  v20 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v22 = va_arg(va2, _QWORD);
  v24 = va_arg(va2, const char *);
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
  result = &retaddr;
  v9 = v24;
  v10 = -1LL;
  if ( a2 )
  {
    if ( v24 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( v24[v15] );
      v16 = v15 + 1;
    }
    else
    {
      v16 = 5LL;
    }
    v17 = v24;
    if ( !v24 )
      v17 = "NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, const char *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_3a3e36d3d12b304605d2c81e14d21b4c_Traceguids,
                            13LL,
                            (__int64 *)va,
                            4LL,
                            (__int64 *)va1,
                            4LL,
                            v17,
                            v16,
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
                            va7,
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
      v14 = v10 + 1;
    }
    else
    {
      v14 = 5LL;
    }
    if ( !v9 )
      v9 = "NULL";
    LOWORD(v18) = 13;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          4LL,
                          1LL,
                          &WPP_3a3e36d3d12b304605d2c81e14d21b4c_Traceguids,
                          v18,
                          (__int64 *)va,
                          4LL,
                          (__int64 *)va1,
                          4LL,
                          v9,
                          v14,
                          (__int64 *)va2,
                          4LL,
                          (__int64 *)va3,
                          4LL,
                          (__int64 *)va4);
  }
  return result;
}
