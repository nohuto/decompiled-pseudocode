/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_ddds @ 0x140267E4C
 * Callers:
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x14003F500 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

void __fastcall WPP_RECORDER_AND_TRACE_SF_ddds(
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
        const char *a12)
{
  const char *v12; // rdi
  __int64 v13; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  const char *v19; // rcx
  int v20; // [rsp+20h] [rbp-68h]

  v12 = a12;
  v13 = -1LL;
  if ( a2 )
  {
    if ( a12 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( a12[v17] );
      v18 = v17 + 1;
    }
    else
    {
      v18 = 5LL;
    }
    v19 = a12;
    if ( !a12 )
      v19 = "NULL";
    ((void (__fastcall *)(__int64, __int64, void *, __int64, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      a1,
      43LL,
      &WPP_1b25774d2ec6355ca4d29f861006c482_Traceguids,
      14LL,
      &a9,
      4LL,
      &a10,
      4LL,
      &a11,
      4LL,
      v19,
      v18,
      0LL);
  }
  if ( a3 )
  {
    if ( v12 )
    {
      do
        ++v13;
      while ( v12[v13] );
    }
    if ( !v12 )
      v12 = "NULL";
    LOWORD(v20) = 14;
    WppAutoLogTrace(
      a4,
      5LL,
      15LL,
      &WPP_1b25774d2ec6355ca4d29f861006c482_Traceguids,
      v20,
      &a9,
      4LL,
      &a10,
      4LL,
      &a11,
      4LL,
      v12);
  }
}
