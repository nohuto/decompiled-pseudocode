/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_sscc @ 0x14021F428
 * Callers:
 *     _anonymous_namespace_::IsMouseButtonSwapped @ 0x14010E624 (_anonymous_namespace_--IsMouseButtonSwapped.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall WPP_RECORDER_AND_TRACE_SF_sscc(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        const char *a9,
        const char *a10)
{
  _UNKNOWN **result; // rax
  const char *v11; // rsi
  __int64 v12; // rbx
  const char *v13; // rdi
  __int64 v17; // rdx
  __int64 v18; // rax
  const char *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rbx
  int v22; // [rsp+20h] [rbp-68h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF

  result = &retaddr;
  v11 = a9;
  v12 = -1LL;
  v13 = a10;
  if ( a2 )
  {
    if ( a10 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( a10[v17] );
    }
    if ( a9 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( a9[v18] );
    }
    WORD1(v19) = WORD1(a9);
    if ( !a9 )
      v19 = "NULL";
    HIWORD(v22) = WORD1(v19);
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_f61ee55f31d8345b2339769354926a3f_Traceguids);
  }
  if ( a3 )
  {
    if ( a10 )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( a10[v20] );
    }
    if ( !a10 )
      v13 = "NULL";
    if ( a9 )
    {
      do
        ++v12;
      while ( a9[v12] );
      v21 = v12 + 1;
    }
    else
    {
      v21 = 5LL;
    }
    if ( !a9 )
      v11 = "NULL";
    LOWORD(v22) = 11;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          4LL,
                          6LL,
                          &WPP_f61ee55f31d8345b2339769354926a3f_Traceguids,
                          v22,
                          v11,
                          v21,
                          v13);
  }
  return result;
}
