/*
 * XREFs of ACPISystemPowerUpdateDeviceCapabilities @ 0x1400444A4
 * Callers:
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1400AE5B0 (ACPISystemPowerQueryDeviceCapabilities.c)
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x14001E4C0 (WPP_RECORDER_SF_Lqss.c)
 *     WPP_RECORDER_SF_Dqss @ 0x14002AD3C (WPP_RECORDER_SF_Dqss.c)
 *     ACPISystemPowerDetermineSupportedSystemState @ 0x140044BB0 (ACPISystemPowerDetermineSupportedSystemState.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     ACPISystemPowerGetSxD @ 0x1400BA420 (ACPISystemPowerGetSxD.c)
 *     ACPIDevicePowerDetermineSupportedDeviceStates @ 0x1400BAA18 (ACPIDevicePowerDetermineSupportedDeviceStates.c)
 *     ACPISystemPowerUpdateWakeCapabilities @ 0x1400BC84C (ACPISystemPowerUpdateWakeCapabilities.c)
 */

__int64 __fastcall ACPISystemPowerUpdateDeviceCapabilities(ULONG_PTR BugCheckParameter2, __m128i *a2, __int64 a3)
{
  __int32 v3; // eax
  char v4; // di
  __int64 v5; // xmm0_8
  int v7; // eax
  const char *v8; // rsi
  unsigned int v9; // edx
  int v10; // r14d
  unsigned int v11; // r14d
  int updated; // eax
  int v13; // eax
  int v14; // eax
  int SxD; // eax
  char v16; // cl
  char v17; // r8
  CCHAR LeastSignificantBit; // al
  ULONG_PTR BugCheckParameter4; // r13
  __int64 *v20; // rax
  __int64 result; // rax
  const char *v22; // rcx
  KIRQL v23; // al
  __int32 v24; // ecx
  KIRQL v25; // r8
  unsigned int v26; // eax
  __int64 v27; // xmm1_8
  int v28; // edx
  KIRQL v29; // r10
  const char *v30; // rdx
  const char *v31; // rsi
  const char *v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rcx
  char v35; // r8
  const char *v36; // r10
  const char *v37; // rdx
  __int64 v38; // rax
  const char *v39; // rdx
  __int64 v40; // rcx
  const char *v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdx
  char v44; // [rsp+50h] [rbp-49h]
  unsigned int v45; // [rsp+54h] [rbp-45h]
  signed int v46; // [rsp+54h] [rbp-45h]
  signed int v47; // [rsp+58h] [rbp-41h] BYREF
  int v48; // [rsp+5Ch] [rbp-3Dh] BYREF
  __int64 *i; // [rsp+60h] [rbp-39h]
  int v50; // [rsp+68h] [rbp-31h] BYREF
  int v51; // [rsp+6Ch] [rbp-2Dh]
  unsigned int v52; // [rsp+70h] [rbp-29h]
  int v53; // [rsp+74h] [rbp-25h] BYREF
  int v54; // [rsp+78h] [rbp-21h] BYREF
  signed int v55; // [rsp+7Ch] [rbp-1Dh]
  int v56; // [rsp+80h] [rbp-19h]
  __int64 v57; // [rsp+88h] [rbp-11h]
  __m128i v58; // [rsp+90h] [rbp-9h] BYREF
  __int64 v59; // [rsp+A0h] [rbp+7h]
  __int32 v60; // [rsp+A8h] [rbp+Fh]

  v3 = a2[2].m128i_i32[2];
  v4 = 0;
  v5 = a2[2].m128i_i64[0];
  v58 = a2[1];
  v60 = v3;
  v57 = a3;
  v7 = _mm_cvtsi128_si32(_mm_srli_si128(v58, 4));
  v50 = 0;
  v54 = 0;
  if ( v58.m128i_i32[1] != 1 )
    v7 = 1;
  v53 = 0;
  v58.m128i_i32[1] = v7;
  v47 = 0;
  v51 = 0;
  v56 = 0;
  v48 = 0;
  v59 = v5;
  v8 = byte_1400753E8;
  v10 = ACPIDevicePowerDetermineSupportedDeviceStates(BugCheckParameter2);
  if ( v10 < 0 )
  {
    v30 = byte_1400753E8;
    if ( BugCheckParameter2 )
    {
      v33 = *(_QWORD *)(BugCheckParameter2 + 8);
      v4 = BugCheckParameter2;
      if ( (v33 & 0x200000000000LL) != 0 )
      {
        v8 = *(const char **)(BugCheckParameter2 + 608);
        if ( (v33 & 0x400000000000LL) != 0 )
          v30 = *(const char **)(BugCheckParameter2 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xFu,
        0x14u,
        (__int64)&WPP_d6652a4346ea3569847e2fcd20d541a2_Traceguids,
        v10,
        v4,
        v8,
        v30);
    return (unsigned int)v10;
  }
  else
  {
    v11 = v51 | v56;
    if ( !(v51 | v56) )
    {
      v9 = *(_DWORD *)(v57 + 4);
      if ( (*(_BYTE *)(BugCheckParameter2 + 8) & 0x60) == 64 && (v9 & 3) == 0 )
      {
LABEL_22:
        result = ACPISystemPowerUpdateWakeCapabilities(
                   BugCheckParameter2,
                   v9,
                   v57,
                   (unsigned int)&v58,
                   (__int64)&v48,
                   (__int64)&v47,
                   (__int64)&v54,
                   (__int64)&v53);
        v55 = result;
        if ( (int)result >= 0 )
        {
          v23 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
          v24 = v60;
          v25 = v23;
          v26 = *(_DWORD *)(BugCheckParameter2 + 600) & 0xFFFFFFC0;
          v27 = v59;
          v28 = 2 * (v48 & 0x1E);
          *(__m128i *)(BugCheckParameter2 + 508) = v58;
          *(_QWORD *)(BugCheckParameter2 + 524) = v27;
          *(_DWORD *)(BugCheckParameter2 + 532) = v24;
          *(_DWORD *)(BugCheckParameter2 + 540) = v54;
          *(_DWORD *)(BugCheckParameter2 + 536) = v47;
          *(_DWORD *)(BugCheckParameter2 + 600) = v26 | (v11 >> 2) & 3 | v28;
          KeReleaseSpinLock(&AcpiPowerLock, v25);
          if ( !_bittest64((const signed __int64 *)(BugCheckParameter2 + 8), 0x33u) )
            _InterlockedOr64((volatile signed __int64 *)(BugCheckParameter2 + 8), 0x100000000000000uLL);
          return 0LL;
        }
        else
        {
          v22 = byte_1400753E8;
          if ( BugCheckParameter2 )
          {
            v43 = *(_QWORD *)(BugCheckParameter2 + 8);
            v4 = BugCheckParameter2;
            if ( (v43 & 0x200000000000LL) != 0 )
            {
              v8 = *(const char **)(BugCheckParameter2 + 608);
              if ( (v43 & 0x400000000000LL) != 0 )
                v22 = *(const char **)(BugCheckParameter2 + 616);
            }
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            WPP_RECORDER_SF_Lqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              0xFu,
              0x19u,
              (__int64)&WPP_d6652a4346ea3569847e2fcd20d541a2_Traceguids,
              result,
              v4,
              v8,
              v22);
            return (unsigned int)v55;
          }
        }
        return result;
      }
      v11 = 4 * (*(_DWORD *)(v57 + 4) & 1) + 18;
      if ( (v9 & 2) != 0 )
        v11 |= 8u;
    }
    updated = ACPISystemPowerUpdateWakeCapabilities(
                BugCheckParameter2,
                v9,
                v57,
                (unsigned int)&v58,
                (__int64)&v48,
                (__int64)&v47,
                (__int64)&v54,
                (__int64)&v53);
    v45 = updated;
    if ( updated >= 0 )
    {
      v13 = 2;
      for ( i = &v58.m128i_i64[1]; ; i = (__int64 *)((char *)i + 4) )
      {
        v46 = v13;
        if ( v13 > 6 )
          goto LABEL_22;
        v14 = AcpiSupportedSystemStates;
        if ( !_bittest(&v14, v46) )
          goto LABEL_12;
        SxD = ACPISystemPowerGetSxD(BugCheckParameter2, (unsigned int)v46, &v50);
        v16 = SxD;
        if ( SxD < 0 )
          break;
        if ( v50 > *(_DWORD *)i )
          *(_DWORD *)i = v50;
LABEL_12:
        v13 = v46 + 1;
      }
      if ( SxD != -1073741772 )
      {
        v35 = 0;
        v36 = byte_1400753E8;
        v37 = byte_1400753E8;
        if ( BugCheckParameter2 )
        {
          v38 = *(_QWORD *)(BugCheckParameter2 + 8);
          v35 = BugCheckParameter2;
          if ( (v38 & 0x200000000000LL) != 0 )
          {
            v36 = *(const char **)(BugCheckParameter2 + 608);
            if ( (v38 & 0x400000000000LL) != 0 )
              v37 = *(const char **)(BugCheckParameter2 + 616);
          }
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Lqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0xFu,
            0x16u,
            (__int64)&WPP_d6652a4346ea3569847e2fcd20d541a2_Traceguids,
            v16,
            v35,
            v36,
            v37);
      }
      v17 = v46;
      v44 = 0;
      v9 = v11 & (-1 << *(_DWORD *)i);
      v52 = v9;
      while ( 1 )
      {
        while ( 1 )
        {
          if ( !v9 )
          {
            if ( !v44 )
            {
              v39 = byte_1400753E8;
              if ( BugCheckParameter2 )
              {
                v40 = *(_QWORD *)(BugCheckParameter2 + 8);
                v4 = BugCheckParameter2;
                if ( (v40 & 0x200000000000LL) != 0 )
                {
                  v8 = *(const char **)(BugCheckParameter2 + 608);
                  if ( (v40 & 0x400000000000LL) != 0 )
                    v39 = *(const char **)(BugCheckParameter2 + 616);
                }
              }
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_Dqss(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  2u,
                  0xFu,
                  0x18u,
                  (__int64)&WPP_d6652a4346ea3569847e2fcd20d541a2_Traceguids,
                  v17 - 1,
                  v4,
                  v8,
                  v39);
              KeBugCheckEx(0xA5u, 0x10uLL, BugCheckParameter2, 1uLL, v46);
            }
            goto LABEL_12;
          }
          LeastSignificantBit = RtlFindLeastSignificantBit(v9);
          v17 = v46;
          BugCheckParameter4 = LeastSignificantBit;
          v50 = LeastSignificantBit;
          v9 = ~(1 << LeastSignificantBit) & v52;
          v52 = v9;
          if ( v46 <= v47 )
            break;
          v20 = i;
LABEL_19:
          if ( (_DWORD)BugCheckParameter4 == 4 || !v51 )
            goto LABEL_20;
          KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
          v55 = ACPISystemPowerDetermineSupportedSystemState(BugCheckParameter2, (unsigned int)BugCheckParameter4);
          if ( !v55 )
          {
            v41 = byte_1400753E8;
            if ( BugCheckParameter2 )
            {
              v42 = *(_QWORD *)(BugCheckParameter2 + 8);
              v4 = BugCheckParameter2;
              if ( (v42 & 0x200000000000LL) != 0 )
              {
                v8 = *(const char **)(BugCheckParameter2 + 608);
                if ( (v42 & 0x400000000000LL) != 0 )
                  v41 = *(const char **)(BugCheckParameter2 + 616);
              }
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Dqss(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                2u,
                0xFu,
                0x17u,
                (__int64)&WPP_d6652a4346ea3569847e2fcd20d541a2_Traceguids,
                BugCheckParameter4 - 1,
                v4,
                v8,
                v41);
            KeBugCheckEx(0xA5u, 0x10uLL, BugCheckParameter2, 0LL, BugCheckParameter4);
          }
          KeReleaseSpinLock(&AcpiPowerLock, v29);
          v17 = v46;
          v9 = v52;
          if ( v55 >= v46 )
          {
            v20 = i;
LABEL_20:
            *(_DWORD *)v20 = BugCheckParameter4;
            goto LABEL_12;
          }
        }
        if ( (v9 & v48) == 0 )
        {
          v20 = i;
          if ( (_DWORD)BugCheckParameter4 == v53 )
          {
            v44 = 1;
            *(_DWORD *)i = BugCheckParameter4;
          }
          goto LABEL_19;
        }
      }
    }
    v31 = byte_1400753E8;
    v32 = byte_1400753E8;
    if ( BugCheckParameter2 )
    {
      v34 = *(_QWORD *)(BugCheckParameter2 + 8);
      v4 = BugCheckParameter2;
      if ( (v34 & 0x200000000000LL) != 0 )
      {
        v31 = *(const char **)(BugCheckParameter2 + 608);
        if ( (v34 & 0x400000000000LL) != 0 )
          v32 = *(const char **)(BugCheckParameter2 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xFu,
        0x15u,
        (__int64)&WPP_d6652a4346ea3569847e2fcd20d541a2_Traceguids,
        updated,
        v4,
        v31,
        v32);
    return v45;
  }
}
