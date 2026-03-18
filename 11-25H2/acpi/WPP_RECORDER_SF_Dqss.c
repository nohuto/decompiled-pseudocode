/*
 * XREFs of WPP_RECORDER_SF_dqss @ 0x140033790
 * Callers:
 *     ACPIFanFSTCallback @ 0x14002C010 (ACPIFanFSTCallback.c)
 *     ACPIWakeEnableDisableAsync @ 0x140032750 (ACPIWakeEnableDisableAsync.c)
 *     ACPICMButtonNotify @ 0x140039BD8 (ACPICMButtonNotify.c)
 *     ACPIInitStartDevice @ 0x140044BF4 (ACPIInitStartDevice.c)
 *     ACPIInitDosDeviceName @ 0x14004DA9C (ACPIInitDosDeviceName.c)
 *     ACPICMExperienceButtonHandleEvent @ 0x14005628C (ACPICMExperienceButtonHandleEvent.c)
 *     ACPIFanPrepareImpactZoneSupport @ 0x14009DCC8 (ACPIFanPrepareImpactZoneSupport.c)
 *     ACPIFanValidateImpactZoneSupport @ 0x14009E418 (ACPIFanValidateImpactZoneSupport.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_dqss(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        char a7,
        const char *a8,
        const char *a9)
{
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rdi
  unsigned __int64 v13; // r14
  unsigned int v14; // ebp
  unsigned int v15; // r12d
  int v16; // eax
  char *v17; // r10
  __int64 v18; // rcx
  __int64 v19; // rcx
  const char *v20; // r9
  __int64 v21; // r8
  __int64 v22; // r8
  const char *v23; // rdx
  __int64 v24; // rax
  int v26; // [rsp+20h] [rbp-78h]

  v9 = (__int64)a8;
  v10 = -1LL;
  v11 = (__int64)a9;
  v13 = (unsigned __int64)a3 >> 16;
  v14 = a2;
  v15 = a4;
  v16 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v13 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v16, (a3 - 1) & 0x1F) )
  {
    v17 = (char *)WPP_GLOBAL_Control + 80 * v13;
    if ( (unsigned __int8)v17[41] >= a2 )
    {
      if ( a9 )
      {
        v18 = -1LL;
        do
          ++v18;
        while ( a9[v18] );
        v19 = v18 + 1;
      }
      else
      {
        v19 = 5LL;
      }
      v20 = a9;
      if ( !a9 )
        v20 = "NULL";
      if ( a8 )
      {
        v21 = -1LL;
        do
          ++v21;
        while ( a8[v21] );
        v22 = v21 + 1;
      }
      else
      {
        v22 = 5LL;
      }
      v23 = a8;
      if ( !a8 )
        v23 = "NULL";
      ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
        *((_QWORD *)v17 + 3),
        43LL,
        a5,
        v15,
        &a6,
        4LL,
        &a7,
        8LL,
        v23,
        v22,
        v20,
        v19,
        0LL);
    }
  }
  if ( v11 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( *(_BYTE *)(v11 + v24) );
  }
  if ( v9 )
  {
    do
      ++v10;
    while ( *(_BYTE *)(v9 + v10) );
  }
  LOWORD(v26) = v15;
  return WppAutoLogTrace(a1, v14, a3, a5, v26, &a6, 4LL, &a7);
}
