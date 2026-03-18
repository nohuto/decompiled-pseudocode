/*
 * XREFs of ACPISystemPowerUpdateWakeCapabilitiesForFilters @ 0x140045B00
 * Callers:
 *     ACPISystemPowerUpdateWakeCapabilities @ 0x1400BC84C (ACPISystemPowerUpdateWakeCapabilities.c)
 * Callees:
 *     ACPISystemPowerDetermineSupportedDeviceWakeState @ 0x1400563D0 (ACPISystemPowerDetermineSupportedDeviceWakeState.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     ACPISystemPowerGetDeviceWake @ 0x1400B9788 (ACPISystemPowerGetDeviceWake.c)
 *     AcpiGetIdleWakeInfo @ 0x1400B9C10 (AcpiGetIdleWakeInfo.c)
 */

__int64 __fastcall ACPISystemPowerUpdateWakeCapabilitiesForFilters(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        int *a5,
        _DWORD *a6,
        signed int *a7,
        signed int *a8)
{
  signed int v9; // ebx
  __int64 v11; // rdi
  int v12; // ecx
  int DeviceWake; // eax
  signed int *v14; // rdx
  int v15; // eax
  signed int v16; // ecx
  int v17; // eax
  signed int v19; // ecx
  int v20; // eax
  KIRQL v21; // al
  unsigned int v22; // r12d
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // r8
  signed int v26; // r13d
  KIRQL v27; // r9
  bool v28; // r13
  int IdleWakeInfo; // eax
  bool v30; // zf
  int v31; // esi
  __int64 v32; // rax
  unsigned int v33; // ecx
  int v34; // eax
  int v35; // eax
  char v36; // [rsp+20h] [rbp-50h]
  unsigned int v37; // [rsp+24h] [rbp-4Ch] BYREF
  __int64 v38; // [rsp+28h] [rbp-48h]
  _DWORD *v39; // [rsp+30h] [rbp-40h]
  signed int *v40; // [rsp+38h] [rbp-38h]
  signed int *v41; // [rsp+40h] [rbp-30h]
  __m128i si128; // [rsp+48h] [rbp-28h]
  int v43; // [rsp+58h] [rbp-18h]
  int v44; // [rsp+5Ch] [rbp-14h]

  v9 = a3[12];
  v11 = (unsigned int)a3[11];
  v12 = 0;
  v39 = a6;
  v40 = a7;
  *a5 = 0;
  v30 = (a3[1] & 0x400) == 0;
  v41 = a8;
  v38 = a4;
  v36 = 0;
  v37 = 0;
  if ( !v30 )
  {
    v12 = 2;
    *a5 = 2;
  }
  if ( (a3[1] & 0x800) != 0 )
  {
    v12 |= 4u;
    *a5 = v12;
  }
  if ( (a3[1] & 0x1000) != 0 )
  {
    v12 |= 8u;
    *a5 = v12;
  }
  if ( (a3[1] & 0x2000) != 0 )
    *a5 = v12 | 0x10;
  if ( !v9 || !(_DWORD)v11 )
  {
    v36 = 1;
    v9 = 0;
    v11 = 0LL;
  }
  if ( (*(_DWORD *)(a1 + 8) & 0x10000LL) != 0 )
  {
    v21 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
    v22 = *(_DWORD *)(a1 + 536);
    LOBYTE(v23) = v21;
    v26 = ACPISystemPowerDetermineSupportedDeviceWakeState(a1, v24, v25, v23);
    KeReleaseSpinLock(&AcpiPowerLock, v27);
    if ( (int)v22 < (int)v11 || v36 )
      v11 = v22;
    if ( !(_DWORD)v11 )
    {
      v32 = *(_QWORD *)(a1 + 1120);
      if ( (v32 & 0x400000000LL) != 0 )
      {
        if ( (AcpiSupportedSystemStates & 0x20) != 0 )
          v11 = 5LL;
        else
          v11 = (AcpiSupportedSystemStates & 0x10) != 0 ? 4 : 1;
      }
      else if ( (v32 & 0x100000000LL) != 0 )
      {
        v11 = 1LL;
      }
    }
    if ( v26 )
      v9 = v26;
    v28 = v26 != 0;
    IdleWakeInfo = AcpiGetIdleWakeInfo(a1, v22, &v37);
    if ( IdleWakeInfo == -1073741275 )
    {
      IdleWakeInfo = AcpiGetIdleWakeInfo(a1, (unsigned int)v11, &v37);
      if ( IdleWakeInfo == -1073741275 )
        IdleWakeInfo = ACPISystemPowerGetDeviceWake(a1, &v37);
    }
    if ( IdleWakeInfo >= 0
      && ((si128 = _mm_load_si128((const __m128i *)&_xmm), v43 = 4, v44 = 4, v37 > 5)
        ? (v33 = 0)
        : (v33 = si128.m128i_u32[v37]),
          v34 = *a5,
          _bittest(&v34, v33)) )
    {
      v9 = v33;
    }
    else if ( !v28 )
    {
      if ( (unsigned int)v11 > 6 )
        v11 = 0LL;
      v9 = *(_DWORD *)(v38 + 4 * v11);
      if ( !v9 )
        v9 = 4;
    }
    if ( v36 )
    {
LABEL_45:
      v30 = v9 == 5;
    }
    else
    {
      v30 = v9 == 5;
      if ( v9 < 5 )
      {
        while ( 1 )
        {
          v35 = *a5;
          if ( _bittest(&v35, v9) )
            break;
          if ( ++v9 >= 5 )
            goto LABEL_45;
        }
LABEL_74:
        if ( v9 )
        {
          v31 = 1 << v9;
          goto LABEL_48;
        }
LABEL_47:
        v9 = 0;
        LODWORD(v11) = 0;
        v31 = 0;
LABEL_48:
        *a5 = v31;
        goto LABEL_24;
      }
    }
    if ( v30 )
      goto LABEL_47;
    goto LABEL_74;
  }
  DeviceWake = AcpiGetIdleWakeInfo(a1, (unsigned int)v11, &v37);
  if ( DeviceWake == -1073741275 )
    DeviceWake = ACPISystemPowerGetDeviceWake(a1, &v37);
  if ( DeviceWake >= 0 )
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v43 = 4;
    v44 = 4;
    if ( v37 <= 5 )
      v19 = si128.m128i_i32[v37];
    else
      v19 = 0;
    while ( v19 > 0 )
    {
      v20 = *a5;
      if ( _bittest(&v20, v19) )
      {
        v9 = v19;
        break;
      }
      --v19;
    }
  }
  v14 = (signed int *)(a4 + 4LL * (int)v11);
  while ( (int)v11 > 0 )
  {
    v15 = AcpiSupportedSystemStates;
    if ( _bittest(&v15, v11) )
    {
      v16 = *v14;
      if ( *v14 )
      {
        if ( v16 <= v9 )
          goto LABEL_24;
        v17 = *a5;
        if ( _bittest(&v17, v16) )
        {
          v9 = *v14;
          goto LABEL_24;
        }
      }
    }
    LODWORD(v11) = v11 - 1;
    --v14;
  }
  if ( !(_DWORD)v11 )
  {
    v9 = 0;
    *a5 = 0;
  }
LABEL_24:
  if ( v39 )
    *v39 = v11;
  if ( v40 )
    *v40 = v9;
  if ( v41 )
    *v41 = v9;
  return 0LL;
}
