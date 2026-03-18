/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_sddddd @ 0x1402D9A3C
 * Callers:
 *     ?UpdateActionForFullScreenWindow@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402D4AB0 (-UpdateActionForFullScreenWindow@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

void WPP_RECORDER_AND_TRACE_SF_sddddd(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        const char *a9,
        ...)
{
  const char *v9; // rdi
  __int64 v10; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  const char *v16; // rcx
  __int64 v17; // rbx
  int v18; // [rsp+20h] [rbp-88h]
  __int64 v19; // [rsp+F8h] [rbp+50h] BYREF
  va_list va; // [rsp+F8h] [rbp+50h]
  __int64 v21; // [rsp+100h] [rbp+58h] BYREF
  va_list va1; // [rsp+100h] [rbp+58h]
  __int64 v23; // [rsp+108h] [rbp+60h] BYREF
  va_list va2; // [rsp+108h] [rbp+60h]
  __int64 v25; // [rsp+110h] [rbp+68h] BYREF
  va_list va3; // [rsp+110h] [rbp+68h]
  va_list va4; // [rsp+118h] [rbp+70h] BYREF

  va_start(va4, a9);
  va_start(va3, a9);
  va_start(va2, a9);
  va_start(va1, a9);
  va_start(va, a9);
  v19 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v21 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v23 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v25 = va_arg(va4, _QWORD);
  v9 = a9;
  v10 = -1LL;
  if ( a2 )
  {
    if ( a9 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a9[v14] );
      v15 = v14 + 1;
    }
    else
    {
      v15 = 5LL;
    }
    v16 = a9;
    if ( !a9 )
      v16 = "NULL";
    ((void (__fastcall *)(__int64, __int64, void *, __int64, const char *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      a1,
      43LL,
      &WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
      145LL,
      v16,
      v15,
      (__int64 *)va,
      4LL,
      (__int64 *)va1,
      4LL,
      (__int64 *)va2,
      4LL,
      (__int64 *)va3,
      4LL,
      va4,
      4LL,
      0LL);
  }
  if ( a3 )
  {
    if ( a9 )
    {
      do
        ++v10;
      while ( a9[v10] );
      v17 = v10 + 1;
    }
    else
    {
      v17 = 5LL;
    }
    if ( !a9 )
      v9 = "NULL";
    LOWORD(v18) = 145;
    WppAutoLogTrace(
      a4,
      4LL,
      4LL,
      &WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
      v18,
      v9,
      v17,
      (__int64 *)va,
      4LL,
      (__int64 *)va1,
      4LL,
      (__int64 *)va2);
  }
}
