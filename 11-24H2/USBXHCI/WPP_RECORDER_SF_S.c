/*
 * XREFs of WPP_RECORDER_SF_S @ 0x140044728
 * Callers:
 *     Controller_PopulateDeviceFlagsFromKse @ 0x140041408 (Controller_PopulateDeviceFlagsFromKse.c)
 *     Controller_CreateWdfDevice @ 0x140075BC4 (Controller_CreateWdfDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_S(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        const wchar_t *a6)
{
  const wchar_t *v6; // rbx
  __int64 v7; // rdi
  unsigned int v9; // ebp
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  const wchar_t *v14; // rcx
  bool v15; // zf
  int v17; // [rsp+20h] [rbp-48h]
  __int64 v18; // [rsp+40h] [rbp-28h]
  __int64 v19; // [rsp+48h] [rbp-20h]
  __int64 v20; // [rsp+50h] [rbp-18h]
  __int64 v21; // [rsp+58h] [rbp-10h]

  v6 = a6;
  v7 = -1LL;
  v9 = a2;
  v11 = 10LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= a2 )
  {
    if ( a6 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( a6[v12] );
      v13 = 2 * v12 + 2;
    }
    else
    {
      v13 = 10LL;
    }
    v14 = a6;
    if ( !a6 )
      v14 = L"NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
      a4,
      v14,
      v13,
      0LL);
  }
  v15 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
    v11 = 2 * v7 + 2;
    v15 = a6 == 0LL;
  }
  if ( v15 )
    v6 = L"NULL";
  LOWORD(v17) = a4;
  return WppAutoLogTrace(
           a1,
           v9,
           4LL,
           &WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
           v17,
           v6,
           v11,
           0LL,
           v18,
           v19,
           v20,
           v21);
}
