/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qsDdd @ 0x1402E5738
 * Callers:
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1402E2314 (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     ?xxxTrackBox@@YAXPEAUtagWND@@I_K_JPEAUtagSBCALC@@@Z @ 0x1402E2820 (-xxxTrackBox@@YAXPEAUtagWND@@I_K_JPEAUtagSBCALC@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

void WPP_RECORDER_AND_TRACE_SF_qsDdd(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int16 a7,
        __int64 a8,
        ...)
{
  const char *v8; // rdi
  __int64 v9; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  const char *v15; // rcx
  __int64 v16; // rbx
  int v17; // [rsp+20h] [rbp-78h]
  __int64 v18; // [rsp+E0h] [rbp+48h] BYREF
  va_list va; // [rsp+E0h] [rbp+48h]
  const char *v20; // [rsp+E8h] [rbp+50h]
  __int64 v21; // [rsp+F0h] [rbp+58h] BYREF
  va_list va1; // [rsp+F0h] [rbp+58h]
  __int64 v23; // [rsp+F8h] [rbp+60h] BYREF
  va_list va2; // [rsp+F8h] [rbp+60h]
  va_list va3; // [rsp+100h] [rbp+68h] BYREF

  va_start(va3, a8);
  va_start(va2, a8);
  va_start(va1, a8);
  va_start(va, a8);
  v18 = va_arg(va1, _QWORD);
  v20 = va_arg(va1, const char *);
  va_copy(va2, va1);
  v21 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v23 = va_arg(va3, _QWORD);
  v8 = v20;
  v9 = -1LL;
  if ( a2 )
  {
    if ( v20 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( v20[v13] );
      v14 = v13 + 1;
    }
    else
    {
      v14 = 5LL;
    }
    v15 = v20;
    if ( !v20 )
      v15 = "NULL";
    ((void (__fastcall *)(__int64, __int64, void *, _QWORD, __int64 *, __int64, const char *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      a1,
      43LL,
      &WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
      a7,
      (__int64 *)va,
      8LL,
      v15,
      v14,
      (__int64 *)va1,
      4LL,
      (__int64 *)va2,
      4LL,
      va3,
      4LL,
      0LL);
  }
  if ( a3 )
  {
    if ( v8 )
    {
      do
        ++v9;
      while ( v8[v9] );
      v16 = v9 + 1;
    }
    else
    {
      v16 = 5LL;
    }
    if ( !v8 )
      v8 = "NULL";
    LOWORD(v17) = a7;
    WppAutoLogTrace(
      a4,
      4LL,
      9LL,
      &WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
      v17,
      (__int64 *)va,
      8LL,
      v8,
      v16,
      (__int64 *)va1,
      4LL,
      (__int64 *)va2);
  }
}
