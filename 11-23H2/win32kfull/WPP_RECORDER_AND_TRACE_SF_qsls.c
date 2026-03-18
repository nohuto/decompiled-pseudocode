/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qsls @ 0x1C013D15C
 * Callers:
 *     xxxGetScrollBarInfo @ 0x1C00E16CC (xxxGetScrollBarInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **__fastcall WPP_RECORDER_AND_TRACE_SF_qsls(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9,
        const char *a10,
        char a11,
        const char *a12)
{
  _UNKNOWN **result; // rax
  const char *v13; // rsi
  const char *v14; // rdi
  __int64 v15; // rbx
  __int64 v19; // rdx
  __int64 v20; // rdx
  const char *v21; // r8
  __int64 v22; // rax
  __int64 v23; // rax
  const char *v24; // rcx
  __int64 v25; // rax
  int v26; // [rsp+20h] [rbp-68h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF

  result = &retaddr;
  v13 = a10;
  v14 = a12;
  v15 = -1LL;
  if ( a2 )
  {
    if ( a12 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( a12[v19] );
      v20 = v19 + 1;
    }
    else
    {
      v20 = 5LL;
    }
    v21 = a12;
    if ( !a12 )
      v21 = "NULL";
    if ( a10 )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( a10[v22] );
      v23 = v22 + 1;
    }
    else
    {
      v23 = 5LL;
    }
    v24 = a10;
    if ( !a10 )
      v24 = "NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, char *, __int64, const char *, __int64, char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_bd7b9e3ad8963c03447c8597d2db5bb0_Traceguids,
                            10LL,
                            &a9,
                            8LL,
                            v24,
                            v23,
                            &a11,
                            4LL,
                            v21,
                            v20,
                            0LL);
  }
  if ( a3 )
  {
    if ( v14 )
    {
      v25 = -1LL;
      do
        ++v25;
      while ( v14[v25] );
    }
    if ( v13 )
    {
      do
        ++v15;
      while ( v13[v15] );
    }
    if ( !v13 )
      v13 = "NULL";
    LOWORD(v26) = 10;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          4LL,
                          9LL,
                          &WPP_bd7b9e3ad8963c03447c8597d2db5bb0_Traceguids,
                          v26,
                          &a9,
                          8LL,
                          v13);
  }
  return result;
}
