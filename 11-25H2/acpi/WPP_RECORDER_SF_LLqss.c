/*
 * XREFs of WPP_RECORDER_SF_LLqss @ 0x140020ABC
 * Callers:
 *     ACPIBuildProcessDeviceGenericEvalStrict @ 0x14001F8C0 (ACPIBuildProcessDeviceGenericEvalStrict.c)
 *     ACPIBuildProcessDeviceGenericEval @ 0x14001FC20 (ACPIBuildProcessDeviceGenericEval.c)
 *     ACPIBuildProcessDeviceFailure @ 0x140058D60 (ACPIBuildProcessDeviceFailure.c)
 *     ACPIBuildProcessThermalZoneFailure @ 0x140059A20 (ACPIBuildProcessThermalZoneFailure.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_LLqss(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        char a6,
        char a7,
        char a8,
        const char *a9,
        const char *a10)
{
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // rdi
  unsigned int v14; // r14d
  unsigned int v15; // ebp
  __int64 v16; // rax
  __int64 v18; // r8
  __int64 v19; // r8
  const char *v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rcx
  const char *v23; // rdx
  int v24; // [rsp+20h] [rbp-78h]

  v10 = (__int64)a9;
  v11 = -1LL;
  v12 = (__int64)a10;
  v14 = a4;
  v15 = a2;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= a2 )
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
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_a066bce47e7f3a3d1099cda73e5d7dd3_Traceguids,
      v14,
      &a6,
      4LL,
      &a7,
      4LL,
      &a8,
      8LL,
      v23,
      v22,
      v20,
      v19,
      0LL);
  }
  if ( v12 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( *(_BYTE *)(v12 + v16) );
  }
  if ( v10 )
  {
    do
      ++v11;
    while ( *(_BYTE *)(v10 + v11) );
  }
  LOWORD(v24) = v14;
  return WppAutoLogTrace(a1, v15, 6LL, &WPP_a066bce47e7f3a3d1099cda73e5d7dd3_Traceguids, v24, &a6, 4LL, &a7);
}
