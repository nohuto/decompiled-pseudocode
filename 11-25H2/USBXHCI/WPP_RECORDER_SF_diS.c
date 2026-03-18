/*
 * XREFs of WPP_RECORDER_SF_diS @ 0x1400356B0
 * Callers:
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1400418B0 (Controller_PopulateDeviceFlagsFromKse.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
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
  __int64 v12; // rax
  bool v13; // zf
  int v15; // [rsp+20h] [rbp-58h]

  v8 = a8;
  v9 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a8 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( a8[v12] );
    }
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
      a4,
      &a6,
      4LL,
      &a7);
  }
  v13 = v8 == 0LL;
  if ( v8 )
  {
    do
      ++v9;
    while ( v8[v9] );
    v13 = v8 == 0LL;
  }
  if ( v13 )
    v8 = L"NULL";
  LOWORD(v15) = a4;
  return WppAutoLogTrace(a1, 4LL, 4LL, &WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids, v15, &a6, 4LL, &a7, 8LL, v8);
}
