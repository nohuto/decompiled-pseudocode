/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_dqss @ 0x140281A40
 * Callers:
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x140281DB8 (_SetDeferredDpiStateForWindowAndChildren.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall WPP_RECORDER_AND_TRACE_SF_dqss(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9,
        char a10,
        const char *a11,
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
  __int64 v26; // rbx
  int v27; // [rsp+20h] [rbp-68h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF

  result = &retaddr;
  v13 = a11;
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
    if ( a11 )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( a11[v22] );
      v23 = v22 + 1;
    }
    else
    {
      v23 = 5LL;
    }
    v24 = a11;
    if ( !a11 )
      v24 = "NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_1b25774d2ec6355ca4d29f861006c482_Traceguids,
                            21LL,
                            &a9,
                            4LL,
                            &a10,
                            8LL,
                            v24,
                            v23,
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
    if ( !v14 )
      v14 = "NULL";
    if ( v13 )
    {
      do
        ++v15;
      while ( v13[v15] );
      v26 = v15 + 1;
    }
    else
    {
      v26 = 5LL;
    }
    if ( !v13 )
      v13 = "NULL";
    LOWORD(v27) = 21;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          5LL,
                          4LL,
                          &WPP_1b25774d2ec6355ca4d29f861006c482_Traceguids,
                          v27,
                          &a9,
                          4LL,
                          &a10,
                          8LL,
                          v13,
                          v26,
                          v14);
  }
  return result;
}
