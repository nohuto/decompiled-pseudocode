/*
 * XREFs of HvlpDetermineEnlightenments @ 0x140588CEC
 * Callers:
 *     HvlPhase0Initialize @ 0x14070C3D8 (HvlPhase0Initialize.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x1402313D4 (VslGetNestedPageProtectionFlags.c)
 *     HvlpReleaseHypercallPage @ 0x14039DEB0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF20 (HvcallInitiateHypercall.c)
 *     HvlpGetRegister64 @ 0x1403BC420 (HvlpGetRegister64.c)
 *     HvlpAcquireHypercallPage @ 0x14045D900 (HvlpAcquireHypercallPage.c)
 *     HviGetHardwareFeatures @ 0x14049E6A0 (HviGetHardwareFeatures.c)
 *     HvlpSetRegister64 @ 0x1404CCED0 (HvlpSetRegister64.c)
 *     HvlpQueryHypervisorSchedulerType @ 0x140582FF4 (HvlpQueryHypervisorSchedulerType.c)
 *     HvlpGetRegister128 @ 0x140588A80 (HvlpGetRegister128.c)
 *     HvlpQueryExtendedCapabilities @ 0x140589318 (HvlpQueryExtendedCapabilities.c)
 *     HviGetEnlightenmentInformation @ 0x14066234C (HviGetEnlightenmentInformation.c)
 *     HviGetHypervisorFeatures @ 0x1406623A0 (HviGetHypervisorFeatures.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 (__fastcall *HvlpDetermineEnlightenments())(_DWORD *a1)
{
  int v0; // edi
  int v1; // esi
  __int64 v2; // rbx
  int v3; // r15d
  unsigned __int64 v4; // rax
  int v5; // edx
  int v6; // ecx
  int v7; // r14d
  int v8; // r8d
  int v9; // edx
  int v10; // ecx
  int v11; // edi
  unsigned int v12; // ecx
  char v13; // r14
  int v14; // ecx
  int v15; // edx
  int v16; // ecx
  ULONG v17; // eax
  int v18; // ecx
  int v19; // r14d
  __int64 *v20; // rdi
  int v21; // ecx
  int v22; // edi
  int v23; // ebx
  char v24; // al
  __int64 v25; // rax
  int v26; // edx
  __int64 (__fastcall *result)(_DWORD *); // rax
  __int64 v28; // [rsp+28h] [rbp-49h] BYREF
  __int128 v29; // [rsp+30h] [rbp-41h] BYREF
  __int64 v30; // [rsp+40h] [rbp-31h]
  __int64 v31; // [rsp+48h] [rbp-29h]
  __int128 v32; // [rsp+50h] [rbp-21h] BYREF
  __int128 v33; // [rsp+60h] [rbp-11h] BYREF
  __int128 v34; // [rsp+70h] [rbp-1h] BYREF
  __int128 v35; // [rsp+80h] [rbp+Fh] BYREF
  __int128 v36; // [rsp+90h] [rbp+1Fh] BYREF
  _BYTE v37[16]; // [rsp+A0h] [rbp+2Fh] BYREF

  v28 = 0LL;
  v33 = 0LL;
  v30 = 0LL;
  v0 = 0;
  v32 = 0LL;
  LODWORD(v31) = 0;
  v36 = 0LL;
  HvlEnableIdleYield = 0;
  v34 = 0LL;
  v29 = 0LL;
  HviGetEnlightenmentInformation(&v32);
  v35 = 0LL;
  HviGetHypervisorFeatures(&v35);
  HviGetHypervisorFeatures(&v36);
  HviGetHardwareFeatures((__int64)&v34);
  v1 = v32;
  if ( (v32 & 1) != 0 )
  {
    v0 = 8388615;
  }
  else if ( (v32 & 2) != 0 )
  {
    v0 = 8388614;
  }
  else if ( (v32 & 4) != 0 )
  {
    if ( (v32 & 0x20000) != 0 || (v0 = 8388612, v1 = v32, KeGetCurrentPrcb()->CpuVendor == 2) )
      v0 = 4;
  }
  v2 = v35;
  if ( (v35 & 0x10) != 0 )
    HvlpFlags |= 0x80000u;
  if ( (v1 & 8) != 0 )
  {
    v0 |= 0x10u;
    HvlpFlags |= 1u;
  }
  if ( (v1 & 0x200) != 0 )
  {
    v0 |= 0x1000u;
    HvlpFlags |= 0x10u;
  }
  v3 = HIDWORD(v36);
  if ( (HIDWORD(v36) & 0x40000) != 0 )
  {
    v4 = __readmsr(0x40000001u);
    if ( (v4 & 2) == 0 )
      __writemsr(0x40000001u, v4 | 2);
    v0 |= 0x100000u;
  }
  if ( (v1 & 0x40000) != 0 )
    HvlpFlags |= 0x400000u;
  if ( (v1 & 0x10000) != 0 )
    HvlpFlags |= 0x800000u;
  v5 = v0 | 0x20000000;
  if ( (v1 & 0x100000) == 0 )
    v5 = v0;
  v6 = v5 | 0x80;
  v7 = (HIDWORD(v36) >> 4) & 1;
  if ( !v7 )
    v6 = v5;
  v8 = v6 | 0x40000000;
  if ( (v1 & 0x800000) == 0 )
    v8 = v6;
  if ( (v1 & 0x800) != 0 )
    HvlpFlags |= 0x80u;
  v9 = v8 | 0x20;
  if ( (v1 & 0x20) == 0 )
    v9 = v8;
  v10 = v9 | 0x4000;
  if ( (v1 & 0x400) == 0 )
    v10 = v9;
  v11 = v10 | 0x200;
  if ( (BYTE12(v36) & 0x20) == 0 )
    v11 = v10;
  if ( SDWORD1(v32) > 0 )
  {
    _BitScanReverse(&v12, DWORD1(v32));
    v11 |= 0x40u;
    HvlLongSpinCountMask = DWORD1(v32) | ((1 << v12) - 1);
  }
  if ( (v35 & 0x100000000000LL) != 0 )
  {
    *(_QWORD *)&v32 = 1LL;
    HvlpSetRegister64(589831, 1uLL);
    HvlpGetRegister64(589831, &v32);
    if ( (v32 & 0x4000000000000000LL) != 0 )
    {
      HvlpSetRegister64(589831, 0x8000000000000001uLL);
      HvlpFlags |= 2u;
    }
  }
  if ( (v2 & 0x100000000LL) != 0 )
    HvlpFlags |= 0x2000000u;
  if ( (v3 & 0x10000000) != 0 )
  {
    v11 |= 0x4000000u;
    if ( !v7 )
      v11 &= ~0x4000000u;
  }
  if ( (HvlpFlags & 2) != 0 )
  {
    HvlpGetRegister128(516, &v33);
    v13 = v33;
    v14 = v11 | 0x400;
    if ( (BYTE4(v33) & 1) == 0 )
      v14 = v11;
    v15 = v14 | 0x10000000;
    if ( (BYTE4(v33) & 8) == 0 )
      v15 = v14;
    v16 = v15 | 0x20000;
    if ( (BYTE4(v33) & 2) == 0 )
      v16 = v15;
    v11 = v16 | 0x40000;
    if ( (BYTE4(v33) & 4) == 0 )
      v11 = v16;
    if ( (v33 & 1) != 0 )
      HvlpRootFlags |= 0x20u;
    if ( (v33 & 2) != 0 )
      HvlpRootFlags |= 0x40u;
    if ( (int)v33 < 0 )
    {
      HvlpRootFlags |= 0x187u;
      v11 |= 0x10000u;
      HvlHyperVRootPartition = 1;
      if ( (unsigned int)HvlpQueryHypervisorSchedulerType() == 4 )
        v11 |= 0x40000u;
    }
    v17 = HvlpRootFlags;
    if ( (HvlpRootFlags & 1) != 0 && (v13 & 4) != 0 )
    {
      v17 = HvlpRootFlags | 0x200;
      HvlpRootFlags |= 0x200u;
    }
    if ( (v2 & 0x10000000000LL) != 0 )
    {
      v17 |= 0x10u;
      HvlpRootFlags = v17;
    }
    if ( (v1 & 0x1000) != 0 )
      HvlpRootFlags = v17 | 0x400;
  }
  v18 = v11 | 0x800;
  if ( (v3 & 0x80u) == 0 )
    v18 = v11;
  if ( (v3 & 8) == 0 )
    HvlpFlags |= 4u;
  v19 = v18 | 0x100;
  if ( (v2 & 0x202) != 0x202 )
    v19 = v18;
  if ( (v2 & 0x200000000LL) != 0 )
  {
    v20 = HvlpAcquireHypercallPage((__int64)&v29, 2, (__int64)v37, 8LL);
    HvcallInitiateHypercall(70);
    HvlpReleaseHypercallPage((unsigned int *)&v29);
    HvlPartitionId = *v20;
  }
  v21 = v19 | 0x2000;
  if ( (v3 & 0x400) == 0 )
    v21 = v19;
  if ( (v2 & 4) != 0 )
    HvlpFlags |= 0x20u;
  if ( (v3 & 0x4000) == 0 )
    HvlpFlags |= 0x2000u;
  if ( (v2 & 0x1000000000000LL) != 0 )
    HvlpFlags |= 0x40u;
  v22 = v21 | 0x8000;
  if ( (v35 & 0x20000000000000LL) == 0 )
    v22 = v21;
  if ( (v1 & 0x2000) != 0 )
  {
    v23 = v22 | 0x80000;
    if ( (VslGetNestedPageProtectionFlags(0LL) & 2) == 0 )
      v23 = v22;
  }
  else
  {
    v23 = v22;
    if ( (HvlpFlags & 0x40) != 0 )
      HvlpFlags |= 0x20000u;
  }
  if ( (v34 & 0x800000) != 0 )
    HvlpFlags |= 0x1000000u;
  if ( (v1 & 0x8000) != 0 && (v23 & 0x100) != 0 )
    HvlpFlags |= 0x4000u;
  if ( (v34 & 0x10000) != 0 )
    HvlpFlags |= 0x40000u;
  v24 = HvlpQueryExtendedCapabilities(&v28);
  v25 = v28 & -(__int64)(v24 != 0);
  if ( (v25 & 0x10) != 0 )
    HvlpFlags |= 0x8000u;
  if ( (v25 & 0x20) != 0 )
    HvlpFlags |= 0x10000u;
  if ( (v25 & 8) != 0 )
    HvlpFlags |= 0x180000u;
  if ( (v25 & 0x40) != 0 )
    HvlpFlags |= 0x200000u;
  v26 = v23 | 0x200000;
  if ( (v25 & 2) == 0 )
    v26 = v23;
  if ( (v25 & 4) != 0 )
  {
    v26 |= 0x400000u;
    if ( (v25 & 0x80u) != 0LL )
      v26 |= 0x8000000u;
  }
  result = HvlGetEnlightenmentInfo;
  qword_140E00950 = (__int64)HvlGetEnlightenmentInfo;
  HvlpEnlightenments = ~HvlpRescindedEnlightenments & 0x7CFFFFF7 & v26;
  HvlEnlightenments = ~HvlpRescindedEnlightenments & 0x7CFFFFF7 & v26;
  return result;
}
