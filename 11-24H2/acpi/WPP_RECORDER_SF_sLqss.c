/*
 * XREFs of WPP_RECORDER_SF_sLqss @ 0x14005ADBC
 * Callers:
 *     ACPIBuildDevicePowerNodes @ 0x140020F04 (ACPIBuildDevicePowerNodes.c)
 *     ACPIBuildDeviceResetPowerNode @ 0x14005817C (ACPIBuildDeviceResetPowerNode.c)
 *     ACPIBuildWakeEventDeviceContext @ 0x14005A504 (ACPIBuildWakeEventDeviceContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_sLqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        const char *a6,
        char a7,
        char a8,
        const char *a9,
        const char *a10)
{
  const char *v10; // rbp
  __int64 v11; // rbx
  const char *v12; // rsi
  const char *v14; // rdi
  unsigned int v15; // r14d
  __int64 v16; // r9
  __int64 v17; // r9
  const char *v18; // r11
  __int64 v19; // r8
  __int64 v20; // r8
  const char *v21; // r10
  __int64 v22; // rdx
  __int64 v23; // rdx
  const char *v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rbx
  int v29; // [rsp+20h] [rbp-78h]

  v10 = a6;
  v11 = -1LL;
  v12 = a9;
  v14 = a10;
  v15 = a4;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a10 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a10[v16] );
      v17 = v16 + 1;
    }
    else
    {
      v17 = 5LL;
    }
    v18 = a10;
    if ( !a10 )
      v18 = "NULL";
    if ( a9 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( a9[v19] );
      v20 = v19 + 1;
    }
    else
    {
      v20 = 5LL;
    }
    v21 = a9;
    if ( !a9 )
      v21 = "NULL";
    if ( a6 )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( a6[v22] );
      v23 = v22 + 1;
    }
    else
    {
      v23 = 5LL;
    }
    v24 = a6;
    if ( !a6 )
      v24 = "NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_a066bce47e7f3a3d1099cda73e5d7dd3_Traceguids,
      v15,
      v24,
      v23,
      &a7,
      4LL,
      &a8,
      8LL,
      v21,
      v20,
      v18,
      v17,
      0LL);
  }
  if ( v14 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( v14[v25] );
  }
  if ( v12 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( v12[v26] );
  }
  if ( a6 )
  {
    do
      ++v11;
    while ( a6[v11] );
    v27 = v11 + 1;
  }
  else
  {
    v27 = 5LL;
  }
  if ( !a6 )
    v10 = "NULL";
  LOWORD(v29) = v15;
  return WppAutoLogTrace(a1, 2LL, 10LL, &WPP_a066bce47e7f3a3d1099cda73e5d7dd3_Traceguids, v29, v10, v27, &a7);
}
