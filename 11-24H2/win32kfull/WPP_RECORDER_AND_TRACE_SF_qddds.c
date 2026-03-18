/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qddds @ 0x1402E418C
 * Callers:
 *     xxxSBTrackInit @ 0x1402E6E60 (xxxSBTrackInit.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall WPP_RECORDER_AND_TRACE_SF_qddds(
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
        char a11,
        char a12,
        const char *a13)
{
  _UNKNOWN **result; // rax
  __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 v19; // rcx
  __int64 v20; // rcx
  const char *v21; // rax
  int v22; // [rsp+20h] [rbp-68h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF

  result = &retaddr;
  v14 = (__int64)a13;
  v15 = -1LL;
  if ( a2 )
  {
    if ( a13 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( a13[v19] );
      v20 = v19 + 1;
    }
    else
    {
      v20 = 5LL;
    }
    v21 = a13;
    if ( !a13 )
      v21 = "NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
                            52LL,
                            &a9,
                            8LL,
                            &a10,
                            4LL,
                            &a11,
                            4LL,
                            &a12,
                            4LL,
                            v21,
                            v20,
                            0LL);
  }
  if ( a3 )
  {
    if ( v14 )
    {
      do
        ++v15;
      while ( *(_BYTE *)(v14 + v15) );
    }
    LOWORD(v22) = 52;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          4LL,
                          9LL,
                          &WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
                          v22,
                          &a9,
                          8LL,
                          &a10,
                          4LL,
                          &a11,
                          4LL,
                          &a12);
  }
  return result;
}
