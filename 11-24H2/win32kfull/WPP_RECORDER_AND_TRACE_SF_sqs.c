/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_sqs @ 0x1402C7F14
 * Callers:
 *     ?SuppressWindowDisplayChangeWorker@DesktopRecalc@@YAXPEAUtagWND@@_N@Z @ 0x1402C4A7C (-SuppressWindowDisplayChangeWorker@DesktopRecalc@@YAXPEAUtagWND@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall WPP_RECORDER_AND_TRACE_SF_sqs(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        const char *a9,
        char a10,
        const char *a11)
{
  _UNKNOWN **result; // rax
  const char *v12; // rsi
  const char *v13; // rdi
  __int64 v14; // rbx
  __int64 v18; // rdx
  __int64 v19; // rdx
  const char *v20; // r8
  __int64 v21; // rax
  __int64 v22; // rax
  const char *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rbx
  int v27; // [rsp+20h] [rbp-58h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF

  result = &retaddr;
  v12 = a9;
  v13 = a11;
  v14 = -1LL;
  if ( a2 )
  {
    if ( a11 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( a11[v18] );
      v19 = v18 + 1;
    }
    else
    {
      v19 = 5LL;
    }
    v20 = a11;
    if ( !a11 )
      v20 = "NULL";
    if ( a9 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( a9[v21] );
      v22 = v21 + 1;
    }
    else
    {
      v22 = 5LL;
    }
    v23 = a9;
    if ( !a9 )
      v23 = "NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, const char *, __int64, char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
                            141LL,
                            v23,
                            v22,
                            &a10,
                            8LL,
                            v20,
                            v19,
                            0LL);
  }
  if ( a3 )
  {
    if ( v13 )
    {
      v24 = -1LL;
      do
        ++v24;
      while ( v13[v24] );
      v25 = v24 + 1;
    }
    else
    {
      v25 = 5LL;
    }
    if ( !v13 )
      v13 = "NULL";
    if ( a9 )
    {
      do
        ++v14;
      while ( a9[v14] );
      v26 = v14 + 1;
    }
    else
    {
      v26 = 5LL;
    }
    if ( !a9 )
      v12 = "NULL";
    LOWORD(v27) = 141;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          4LL,
                          7LL,
                          &WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
                          v27,
                          v12,
                          v26,
                          &a10,
                          8LL,
                          v13,
                          v25,
                          0LL);
  }
  return result;
}
