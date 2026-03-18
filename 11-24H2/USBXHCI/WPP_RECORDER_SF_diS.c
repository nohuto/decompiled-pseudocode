/*
 * XREFs of WPP_RECORDER_SF_diS @ 0x140033B10
 * Callers:
 *     Controller_PopulateDeviceFlagsFromKse @ 0x140041408 (Controller_PopulateDeviceFlagsFromKse.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_diS(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        char a6,
        char a7,
        const wchar_t *a8)
{
  const wchar_t *v8; // rbx
  __int64 v9; // rdi
  __int64 v12; // rsi
  __int64 v13; // rax
  bool v14; // zf
  int v16; // [rsp+20h] [rbp-58h]

  v8 = a8;
  v9 = -1LL;
  v12 = 10LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a8 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( a8[v13] );
    }
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
      a4,
      &a6,
      4LL,
      &a7);
  }
  v14 = v8 == 0LL;
  if ( v8 )
  {
    do
      ++v9;
    while ( v8[v9] );
    v12 = 2 * v9 + 2;
    v14 = v8 == 0LL;
  }
  if ( v14 )
    v8 = L"NULL";
  LOWORD(v16) = a4;
  return WppAutoLogTrace(
           a1,
           4LL,
           4LL,
           &WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
           v16,
           &a6,
           4LL,
           &a7,
           8LL,
           v8,
           v12,
           0LL);
}
