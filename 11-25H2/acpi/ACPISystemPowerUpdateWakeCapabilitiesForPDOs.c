/*
 * XREFs of ACPISystemPowerUpdateWakeCapabilitiesForPDOs @ 0x140049B90
 * Callers:
 *     ACPISystemPowerUpdateWakeCapabilities @ 0x1400BC84C (ACPISystemPowerUpdateWakeCapabilities.c)
 * Callees:
 *     ACPISystemPowerDetermineSupportedDeviceWakeState @ 0x1400563D0 (ACPISystemPowerDetermineSupportedDeviceWakeState.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     ACPISystemPowerGetDeviceWake @ 0x1400B9788 (ACPISystemPowerGetDeviceWake.c)
 *     AcpiGetIdleWakeInfo @ 0x1400B9C10 (AcpiGetIdleWakeInfo.c)
 */

__int64 __fastcall ACPISystemPowerUpdateWakeCapabilitiesForPDOs(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int *a5,
        __int64 a6,
        int *a7,
        int *a8)
{
  int v8; // esi
  int v9; // ebx
  int *v10; // r15
  unsigned int v11; // edi
  int v13; // eax
  KIRQL v14; // al
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  int v18; // r15d
  KIRQL v19; // r9
  __int64 v20; // rax
  int v21; // eax
  int v22; // ebp
  _DWORD *v23; // rax
  char v25; // cl
  int IdleWakeInfo; // eax
  int v27; // edx
  char v28; // [rsp+20h] [rbp-68h]
  unsigned int v29; // [rsp+24h] [rbp-64h] BYREF
  int *v30; // [rsp+28h] [rbp-60h]
  __int64 v31; // [rsp+30h] [rbp-58h]
  __int64 v32; // [rsp+38h] [rbp-50h]
  __m128i si128; // [rsp+40h] [rbp-48h]
  int v34; // [rsp+50h] [rbp-38h]
  int v35; // [rsp+54h] [rbp-34h]

  v8 = 0;
  v29 = 0;
  v9 = 0;
  v10 = a5;
  v11 = 0;
  v32 = a6;
  v13 = *(_DWORD *)(a1 + 8);
  v31 = a4;
  v30 = a5;
  v28 = 0;
  if ( (*(_QWORD *)&v13 & 0x10000LL) == 0 )
    goto LABEL_10;
  v14 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v11 = *(_DWORD *)(a1 + 536);
  LOBYTE(v15) = v14;
  v18 = ACPISystemPowerDetermineSupportedDeviceWakeState(a1, v16, v17, v15);
  KeReleaseSpinLock(&AcpiPowerLock, v19);
  if ( !v11 )
  {
    v20 = *(_QWORD *)(a1 + 1120);
    if ( (v20 & 0x400000000LL) != 0 )
    {
      if ( (AcpiSupportedSystemStates & 0x20) != 0 )
        v11 = 5;
      else
        v11 = (AcpiSupportedSystemStates & 0x10) != 0 ? 4 : 1;
    }
    else
    {
      v11 = (v20 & 0x100000000LL) != 0;
    }
  }
  v21 = AcpiSupportedSystemStates;
  if ( !_bittest(&v21, v11) )
  {
    v10 = v30;
    v11 = 0;
LABEL_10:
    v22 = 0;
    goto LABEL_11;
  }
  if ( v18 )
  {
    v25 = v18;
    v28 = 1;
    v9 = v18;
    v10 = v30;
    *v30 = 1 << v25;
  }
  else
  {
    v10 = v30;
  }
  v8 = v9;
  IdleWakeInfo = AcpiGetIdleWakeInfo(a1, v11, &v29);
  if ( IdleWakeInfo == -1073741275 )
    IdleWakeInfo = ACPISystemPowerGetDeviceWake(a1, &v29);
  if ( IdleWakeInfo < 0 )
  {
    v27 = v9;
    if ( !v28 )
    {
      v9 = *(_DWORD *)(v31 + 4LL * (int)v11);
      if ( !v9 )
        v9 = 4;
      goto LABEL_29;
    }
  }
  else
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v34 = 4;
    v35 = 4;
    if ( v29 > 5 )
      v9 = 0;
    else
      v9 = si128.m128i_i32[v29];
    v8 = v9;
    v27 = v9;
  }
  if ( !v9 )
    goto LABEL_10;
LABEL_29:
  v8 = v27;
  v22 = 1 << v9;
LABEL_11:
  v23 = (_DWORD *)v32;
  *v10 = v22;
  if ( v23 )
    *v23 = v11;
  if ( a7 )
    *a7 = v9;
  if ( a8 )
    *a8 = v8;
  return 0LL;
}
