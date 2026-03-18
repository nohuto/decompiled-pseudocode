/*
 * XREFs of WPP_RECORDER_SF_qLss @ 0x140044ED0
 * Callers:
 *     Controller_LogDiagnosticsOnD0Exit @ 0x1400410B4 (Controller_LogDiagnosticsOnD0Exit.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qLss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        char a7,
        const char *a8,
        const char *a9)
{
  const char *v9; // rsi
  __int64 v10; // rbx
  const char *v11; // rdi
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rbx
  int v18; // [rsp+20h] [rbp-68h]

  v9 = a8;
  v10 = -1LL;
  v11 = a9;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    if ( a9 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( a9[v13] );
    }
    if ( a8 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a8[v14] );
    }
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
      88LL,
      &a6,
      8LL,
      &a7);
  }
  if ( v11 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( v11[v15] );
  }
  if ( !v11 )
    v11 = "NULL";
  if ( v9 )
  {
    do
      ++v10;
    while ( v9[v10] );
    v16 = v10 + 1;
  }
  else
  {
    v16 = 5LL;
  }
  if ( !v9 )
    v9 = "NULL";
  LOWORD(v18) = 88;
  return WppAutoLogTrace(
           a1,
           3LL,
           4LL,
           &WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
           v18,
           &a6,
           8LL,
           &a7,
           4LL,
           v9,
           v16,
           v11);
}
