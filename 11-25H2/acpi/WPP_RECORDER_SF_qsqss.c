/*
 * XREFs of WPP_RECORDER_SF_qsqss @ 0x140035FA4
 * Callers:
 *     OSNotifyDeviceWake @ 0x140018190 (OSNotifyDeviceWake.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qsqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        const char *a7,
        char a8,
        const char *a9,
        const char *a10)
{
  const char *v10; // rbp
  __int64 v11; // rbx
  const char *v12; // rsi
  const char *v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v18; // r9
  __int64 v19; // r9
  const char *v20; // r11
  __int64 v21; // r8
  __int64 v22; // r8
  const char *v23; // r10
  __int64 v24; // rdx
  __int64 v25; // rdx
  const char *v26; // rcx
  int v27; // [rsp+20h] [rbp-78h]

  v10 = a7;
  v11 = -1LL;
  v12 = a9;
  v14 = a10;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a10 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( a10[v18] );
      v19 = v18 + 1;
    }
    else
    {
      v19 = 5LL;
    }
    v20 = a10;
    if ( !a10 )
      v20 = "NULL";
    if ( a9 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( a9[v21] );
      v22 = v21 + 1;
    }
    else
    {
      v22 = 5LL;
    }
    v23 = a9;
    if ( !a9 )
      v23 = "NULL";
    if ( a7 )
    {
      v24 = -1LL;
      do
        ++v24;
      while ( a7[v24] );
      v25 = v24 + 1;
    }
    else
    {
      v25 = 5LL;
    }
    v26 = a7;
    if ( !a7 )
      v26 = "NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_537052fec54a3dab9555f154ee754e1c_Traceguids,
      26LL,
      &a6,
      8LL,
      v26,
      v25,
      &a8,
      8LL,
      v23,
      v22,
      v20,
      v19,
      0LL);
  }
  if ( v14 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( v14[v15] );
  }
  if ( v12 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( v12[v16] );
  }
  if ( v10 )
  {
    do
      ++v11;
    while ( v10[v11] );
  }
  if ( !v10 )
    v10 = "NULL";
  LOWORD(v27) = 26;
  return WppAutoLogTrace(a1, 4LL, 17LL, &WPP_537052fec54a3dab9555f154ee754e1c_Traceguids, v27, &a6, 8LL, v10);
}
