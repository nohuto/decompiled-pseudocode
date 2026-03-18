/*
 * XREFs of WPP_RECORDER_SF_sqss @ 0x1400441C4
 * Callers:
 *     ACPIBuildDevicePowerNodes @ 0x140020F04 (ACPIBuildDevicePowerNodes.c)
 *     ACPIBuildProcessSynchronizationList @ 0x14002AB4C (ACPIBuildProcessSynchronizationList.c)
 *     ACPIBuildDeviceResetPowerNode @ 0x14005817C (ACPIBuildDeviceResetPowerNode.c)
 *     ACPIBuildWakeEventDeviceContext @ 0x14005A504 (ACPIBuildWakeEventDeviceContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_sqss(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        const char *a6,
        char a7,
        const char *a8,
        const char *a9)
{
  const char *v9; // rbp
  const char *v10; // rsi
  __int64 v11; // r11
  const char *v12; // rdi
  unsigned int v13; // r13d
  unsigned int v14; // r12d
  __int64 v15; // rbx
  unsigned __int64 v16; // r9
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v22; // r14
  __int64 v23; // r9
  __int64 v24; // r9
  const char *v25; // r11
  __int64 v26; // r8
  __int64 v27; // r8
  const char *v28; // r10
  __int64 v29; // rdx
  __int64 v30; // rdx
  const char *v31; // rcx
  int v32; // [rsp+20h] [rbp-88h]
  unsigned int v34; // [rsp+C0h] [rbp+18h]

  v34 = a3;
  v9 = a6;
  v10 = a8;
  v11 = a1;
  v12 = a9;
  v13 = a4;
  v14 = a2;
  v15 = -1LL;
  v16 = (unsigned __int64)(unsigned int)a3 >> 16;
  v17 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v16 + (((unsigned int)(a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v17, (a3 - 1) & 0x1F) )
  {
    v22 = 10 * v16;
    if ( *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v16 + 1) >= a2 )
    {
      if ( a9 )
      {
        v23 = -1LL;
        do
          ++v23;
        while ( a9[v23] );
        v24 = v23 + 1;
      }
      else
      {
        v24 = 5LL;
      }
      v25 = a9;
      if ( !a9 )
        v25 = "NULL";
      if ( a8 )
      {
        v26 = -1LL;
        do
          ++v26;
        while ( a8[v26] );
        v27 = v26 + 1;
      }
      else
      {
        v27 = 5LL;
      }
      v28 = a8;
      if ( !a8 )
        v28 = "NULL";
      if ( a6 )
      {
        v29 = -1LL;
        do
          ++v29;
        while ( a6[v29] );
        v30 = v29 + 1;
      }
      else
      {
        v30 = 5LL;
      }
      v31 = a6;
      if ( !a6 )
        v31 = "NULL";
      ((void (__fastcall *)(_QWORD, __int64, void *, _QWORD, const char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
        *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + v22),
        43LL,
        &WPP_a066bce47e7f3a3d1099cda73e5d7dd3_Traceguids,
        v13,
        v31,
        v30,
        &a7,
        8LL,
        v28,
        v27,
        v25,
        v24,
        0LL);
      a3 = v34;
      v11 = a1;
    }
  }
  if ( v12 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( v12[v18] );
  }
  if ( v10 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( v10[v19] );
  }
  if ( a6 )
  {
    do
      ++v15;
    while ( a6[v15] );
    v20 = v15 + 1;
  }
  else
  {
    v20 = 5LL;
  }
  if ( !a6 )
    v9 = "NULL";
  LOWORD(v32) = v13;
  return WppAutoLogTrace(v11, v14, a3, &WPP_a066bce47e7f3a3d1099cda73e5d7dd3_Traceguids, v32, v9, v20, &a7);
}
