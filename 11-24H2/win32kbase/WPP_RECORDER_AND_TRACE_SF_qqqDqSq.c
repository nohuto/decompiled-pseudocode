/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qqqDqSq @ 0x1401D3A50
 * Callers:
 *     RIMWatchDog @ 0x14005AC20 (RIMWatchDog.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

_UNKNOWN **WPP_RECORDER_AND_TRACE_SF_qqqDqSq(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        ...)
{
  _UNKNOWN **result; // rax
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  const wchar_t *v16; // rax
  int v17; // [rsp+28h] [rbp-79h]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+2Fh] BYREF
  __int64 v19; // [rsp+118h] [rbp+77h] BYREF
  va_list va; // [rsp+118h] [rbp+77h]
  __int64 v21; // [rsp+120h] [rbp+7Fh] BYREF
  va_list va1; // [rsp+120h] [rbp+7Fh]
  __int64 v23; // [rsp+128h] [rbp+87h] BYREF
  va_list va2; // [rsp+128h] [rbp+87h]
  __int64 v25; // [rsp+130h] [rbp+8Fh] BYREF
  va_list va3; // [rsp+130h] [rbp+8Fh]
  __int64 v27; // [rsp+138h] [rbp+97h] BYREF
  va_list va4; // [rsp+138h] [rbp+97h]
  const wchar_t *v29; // [rsp+140h] [rbp+9Fh]
  va_list va5; // [rsp+148h] [rbp+A7h] BYREF

  va_start(va5, a8);
  va_start(va4, a8);
  va_start(va3, a8);
  va_start(va2, a8);
  va_start(va1, a8);
  va_start(va, a8);
  v19 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v21 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v23 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v25 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v27 = va_arg(va5, _QWORD);
  v29 = va_arg(va5, const wchar_t *);
  result = &retaddr;
  v9 = (__int64)v29;
  v10 = -1LL;
  if ( a2 )
  {
    if ( v29 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( v29[v14] );
      v15 = 2 * v14 + 2;
    }
    else
    {
      v15 = 10LL;
    }
    v16 = v29;
    if ( !v29 )
      v16 = L"NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, const wchar_t *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_338f35887e8d3b7dfd4b8f1796ce7fcb_Traceguids,
                            17LL,
                            (__int64 *)va,
                            8LL,
                            (__int64 *)va1,
                            8LL,
                            (__int64 *)va2,
                            8LL,
                            (__int64 *)va3,
                            4LL,
                            (__int64 *)va4,
                            8LL,
                            v16,
                            v15,
                            va5,
                            8LL,
                            0LL);
  }
  if ( a3 )
  {
    if ( v9 )
    {
      do
        ++v10;
      while ( *(_WORD *)(v9 + 2 * v10) );
    }
    LOWORD(v17) = 17;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          2LL,
                          1LL,
                          &WPP_338f35887e8d3b7dfd4b8f1796ce7fcb_Traceguids,
                          v17,
                          (__int64 *)va,
                          8LL,
                          (__int64 *)va1);
  }
  return result;
}
