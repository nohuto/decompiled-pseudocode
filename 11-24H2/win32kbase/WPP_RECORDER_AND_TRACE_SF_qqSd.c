/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qqSd @ 0x1401D8FA8
 * Callers:
 *     RIMOnPnpNotification @ 0x140061480 (RIMOnPnpNotification.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

_UNKNOWN **WPP_RECORDER_AND_TRACE_SF_qqSd(
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
  __int64 v15; // rax
  const wchar_t *v16; // rcx
  int v17; // [rsp+20h] [rbp-68h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF
  __int64 v19; // [rsp+D0h] [rbp+48h] BYREF
  va_list va; // [rsp+D0h] [rbp+48h]
  __int64 v21; // [rsp+D8h] [rbp+50h] BYREF
  va_list va1; // [rsp+D8h] [rbp+50h]
  const wchar_t *v23; // [rsp+E0h] [rbp+58h]
  va_list va2; // [rsp+E8h] [rbp+60h] BYREF

  va_start(va2, a8);
  va_start(va1, a8);
  va_start(va, a8);
  v19 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v21 = va_arg(va2, _QWORD);
  v23 = va_arg(va2, const wchar_t *);
  result = &retaddr;
  v9 = (__int64)v23;
  v10 = -1LL;
  if ( a2 )
  {
    if ( v23 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( v23[v14] );
      v15 = 2 * v14 + 2;
    }
    else
    {
      v15 = 10LL;
    }
    v16 = v23;
    if ( !v23 )
      v16 = L"NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, const wchar_t *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids,
                            68LL,
                            (__int64 *)va,
                            8LL,
                            (__int64 *)va1,
                            8LL,
                            v16,
                            v15,
                            va2,
                            4LL,
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
    LOWORD(v17) = 68;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          4LL,
                          1LL,
                          &WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids,
                          v17,
                          (__int64 *)va,
                          8LL,
                          (__int64 *)va1);
  }
  return result;
}
