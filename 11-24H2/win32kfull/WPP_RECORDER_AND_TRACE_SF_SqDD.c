/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_SqDD @ 0x1402D16C0
 * Callers:
 *     ?ApplyWindowActionErrorCode@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@W4ApplyWindowActionError@AdvancedWindowPos@@@Z @ 0x1402C9084 (-ApplyWindowActionErrorCode@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@W4ApplyWindowActionError@Advance.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

_UNKNOWN **WPP_RECORDER_AND_TRACE_SF_SqDD(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        const char *a9,
        ...)
{
  _UNKNOWN **result; // rax
  const char *v10; // rbx
  __int64 v11; // rdi
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  const char *v18; // rcx
  bool v19; // zf
  int v20; // [rsp+20h] [rbp-68h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF
  __int64 v22; // [rsp+D8h] [rbp+50h] BYREF
  va_list va; // [rsp+D8h] [rbp+50h]
  __int64 v24; // [rsp+E0h] [rbp+58h] BYREF
  va_list va1; // [rsp+E0h] [rbp+58h]
  va_list va2; // [rsp+E8h] [rbp+60h] BYREF

  va_start(va2, a9);
  va_start(va1, a9);
  va_start(va, a9);
  v22 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v24 = va_arg(va2, _QWORD);
  result = &retaddr;
  v10 = a9;
  v11 = -1LL;
  v15 = 10LL;
  if ( a2 )
  {
    if ( a9 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( *(_WORD *)&a9[2 * v16] );
      v17 = 2 * v16 + 2;
    }
    else
    {
      v17 = 10LL;
    }
    v18 = a9;
    if ( !a9 )
      v18 = L"NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, const char *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_9fb880626b093ada35a87c290f7fa346_Traceguids,
                            13LL,
                            v18,
                            v17,
                            (__int64 *)va,
                            8LL,
                            (__int64 *)va1,
                            4LL,
                            va2,
                            4LL,
                            0LL);
  }
  if ( a3 )
  {
    v19 = a9 == 0LL;
    if ( a9 )
    {
      do
        ++v11;
      while ( *(_WORD *)&a9[2 * v11] );
      v15 = 2 * v11 + 2;
      v19 = a9 == 0LL;
    }
    if ( v19 )
      v10 = L"NULL";
    LOWORD(v20) = 13;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          3LL,
                          4LL,
                          &WPP_9fb880626b093ada35a87c290f7fa346_Traceguids,
                          v20,
                          v10,
                          v15,
                          (__int64 *)va,
                          8LL,
                          (__int64 *)va1,
                          4LL,
                          va2);
  }
  return result;
}
