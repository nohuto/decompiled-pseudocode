/*
 * XREFs of WPP_RECORDER_SF_sDs @ 0x14000CB48
 * Callers:
 *     DisplayGenAddr @ 0x140028380 (DisplayGenAddr.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_sDs(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        const char *a6,
        char a7,
        __int64 a8)
{
  const char *v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rdx
  const char *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rbx
  int v19; // [rsp+20h] [rbp-58h]

  v8 = a6;
  v9 = -1LL;
  v10 = a8;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
  {
    if ( a8 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( *(_BYTE *)(a8 + v12) );
    }
    if ( a6 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( a6[v13] );
      v14 = v13 + 1;
    }
    else
    {
      v14 = 5LL;
    }
    v15 = a6;
    if ( !a6 )
      v15 = "NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids,
      162LL,
      v15,
      v14,
      &a7);
  }
  if ( v10 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( *(_BYTE *)(v10 + v16) );
  }
  if ( a6 )
  {
    do
      ++v9;
    while ( a6[v9] );
    v17 = v9 + 1;
  }
  else
  {
    v17 = 5LL;
  }
  if ( !a6 )
    v8 = "NULL";
  LOWORD(v19) = 162;
  return WppAutoLogTrace(a1, 5LL, 2LL, &WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids, v19, v8, v17, &a7);
}
