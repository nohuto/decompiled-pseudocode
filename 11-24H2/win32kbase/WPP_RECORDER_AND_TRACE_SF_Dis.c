/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_Dis @ 0x1401A665C
 * Callers:
 *     ?HasCapabilities@tagPROCESSINFO@@QEBA_NW4Win32ProcessCapabilities@@@Z @ 0x1401A6014 (-HasCapabilities@tagPROCESSINFO@@QEBA_NW4Win32ProcessCapabilities@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall WPP_RECORDER_AND_TRACE_SF_Dis(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9,
        char a10,
        const char *a11)
{
  const char *v11; // rdi
  __int64 v12; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  const char *v18; // rcx
  int v19; // [rsp+20h] [rbp-48h]

  v11 = a11;
  v12 = -1LL;
  if ( a2 )
  {
    if ( a11 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a11[v16] );
      v17 = v16 + 1;
    }
    else
    {
      v17 = 5LL;
    }
    v18 = a11;
    if ( !a11 )
      v18 = "NULL";
    ((void (__fastcall *)(__int64, __int64, void *, __int64, char *, __int64, char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      a1,
      43LL,
      &WPP_022b3b488a93348482baeb51c6b66338_Traceguids,
      12LL,
      &a9,
      4LL,
      &a10,
      8LL,
      v18,
      v17,
      0LL);
  }
  if ( a3 )
  {
    if ( v11 )
    {
      do
        ++v12;
      while ( v11[v12] );
    }
    LOWORD(v19) = 12;
    WppAutoLogTrace(a4, 4LL, 8LL, &WPP_022b3b488a93348482baeb51c6b66338_Traceguids, v19, &a9, 4LL, &a10);
  }
}
