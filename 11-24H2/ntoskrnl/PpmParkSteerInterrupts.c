/*
 * XREFs of PpmParkSteerInterrupts @ 0x1402B0A40
 * Callers:
 *     <none>
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140287740 (KeAddProcessorAffinityEx.c)
 *     ?KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x1402AA18C (-KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x1402B0944 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     KeIntSteerPeriodic @ 0x1402B1294 (KeIntSteerPeriodic.c)
 *     KeIntSteerSnapPerf @ 0x1402B1C30 (KeIntSteerSnapPerf.c)
 *     KiIntPartGetLowestClassProcessorInMask @ 0x1402B2334 (KiIntPartGetLowestClassProcessorInMask.c)
 *     ?KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x1402B2A28 (-KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     HalQueryMaximumProcessorCount @ 0x140375540 (HalQueryMaximumProcessorCount.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

char PpmParkSteerInterrupts()
{
  __int64 v0; // rcx
  unsigned __int16 v1; // bx
  unsigned __int16 Count; // di
  __int64 v3; // rax
  unsigned __int16 v4; // ax
  unsigned int v5; // edi
  unsigned int v6; // r8d
  __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int16 v10; // bx
  __int64 v11; // rax
  unsigned __int16 v12; // cx
  unsigned __int16 v13; // ax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  int v16; // edi
  unsigned __int64 v17; // r9
  __int64 v18; // r10
  unsigned __int64 v19; // rdx
  __int64 v20; // r8
  unsigned int v21; // ecx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 *v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  unsigned int v28; // ecx
  unsigned int v29; // r8d
  __int64 v30; // rcx
  unsigned __int64 *v31; // rdx
  unsigned __int64 v32; // rcx
  unsigned __int16 Size; // cx
  unsigned __int16 v34; // bx
  unsigned __int16 v35; // si
  __int64 v36; // rax
  int v37; // edi
  struct _KAFFINITY_EX *v38; // r14
  struct _KAFFINITY_EX *v39; // r15
  struct _KAFFINITY_EX *v40; // rsi
  unsigned int v41; // edi
  unsigned int v42; // ecx
  $B38C3B1372D6E954799962D5DD404846 *v43; // rdx
  __int64 v44; // r8
  $B38C3B1372D6E954799962D5DD404846 *v45; // rdx
  __int64 v46; // r10
  __int64 v48; // rcx
  _QWORD *v49; // rdx
  unsigned int v50; // r8d
  __int64 v51; // rcx
  unsigned __int64 *v52; // rdx
  unsigned __int64 v53; // rcx
  int MaximumProcessorCount; // eax
  unsigned int LowestClassProcessorInMask; // eax
  __int64 v56; // [rsp+20h] [rbp-E0h]
  __int64 v57; // [rsp+28h] [rbp-D8h]
  struct _KAFFINITY_EX *v58; // [rsp+30h] [rbp-D0h]
  struct _KAFFINITY_EX *v59; // [rsp+38h] [rbp-C8h]
  int v60; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v61; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v62; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int16 v63; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 v64; // [rsp+72h] [rbp-8Eh]
  int v65; // [rsp+74h] [rbp-8Ch]
  _QWORD Src[33]; // [rsp+78h] [rbp-88h] BYREF
  struct _KAFFINITY_EX v67; // [rsp+180h] [rbp+80h] BYREF
  struct _KAFFINITY_EX v68; // [rsp+290h] [rbp+190h] BYREF
  unsigned __int16 v69; // [rsp+3A0h] [rbp+2A0h] BYREF
  unsigned __int16 v70; // [rsp+3A2h] [rbp+2A2h]
  int v71; // [rsp+3A4h] [rbp+2A4h]
  _QWORD v72[33]; // [rsp+3A8h] [rbp+2A8h] BYREF
  struct _KAFFINITY_EX v73; // [rsp+4B0h] [rbp+3B0h] BYREF
  struct _KAFFINITY_EX v74; // [rsp+5C0h] [rbp+4C0h] BYREF

  memset_0(v72, 0, 0x100uLL);
  *(_QWORD *)&v61 = 0LL;
  v62 = 0LL;
  memset_0(&v67, 0, sizeof(v67));
  memset_0(&v68.8, 0, sizeof(v68.8));
  memset_0(&v73, 0, sizeof(v73));
  memset_0(Src, 0, 0x100uLL);
  memset_0(&v74, 0, sizeof(v74));
  v60 = 0;
  if ( PpmIntSteerDisabled )
    return 1;
  if ( !KiIntTrackRootEnabled )
    return 1;
  if ( !PpmIntSteerTrigger )
  {
    MaximumProcessorCount = HalQueryMaximumProcessorCount();
    PpmIntSteerTrigger = ExAllocatePool2(0x40uLL, (unsigned int)(8 * MaximumProcessorCount), 0x6B725449u);
    if ( !PpmIntSteerTrigger )
      return 1;
  }
  v70 = 32;
  memset_0(v72, 0, 0x100uLL);
  v0 = v70;
  v1 = 0;
  Count = v70;
  v71 = 0;
  if ( KeActiveProcessors.Count <= v70 )
    Count = KeActiveProcessors.Count;
  v69 = Count;
  if ( Count )
  {
    memmove(v72, &KeActiveProcessors.8, 8LL * Count);
    do
      ++v1;
    while ( v1 < Count );
    v0 = v70;
  }
  if ( v1 < (unsigned __int16)v0 )
  {
    do
    {
      v3 = v1++;
      v72[v3] = 0LL;
    }
    while ( v1 < v70 );
  }
  KeIntSteerSnapPerf(v0, &v62, &v60, &v61);
  v64 = 32;
  memset_0(Src, 0, 0x100uLL);
  v4 = PpmPerfCoreParkingMask.Count;
  v5 = v64;
  if ( PpmPerfCoreParkingMask.Count > v64 )
    v4 = v64;
  v6 = 0;
  if ( v4 )
  {
    v6 = v4;
    v7 = 0LL;
    v8 = v4;
    do
    {
      v9 = PpmPerfCoreParkingMask.Bitmap[v7++];
      *(_QWORD *)((char *)&v63 + v7 * 8) = ~v9;
      --v8;
    }
    while ( v8 );
  }
  v65 = 0;
  v10 = v5;
  v64 = v5;
  v63 = v5;
  if ( v6 < v5 )
  {
    do
    {
      v11 = v6++;
      Src[v11] = -1LL;
      v10 = v64;
    }
    while ( v6 < v64 );
    LOWORD(v5) = v63;
  }
  KeQuerySystemAllowedCpuSetAffinity();
  v12 = PpmCachedSystemAllowedCpuSet.Count;
  if ( (unsigned __int16)v5 < PpmCachedSystemAllowedCpuSet.Count )
    v12 = v5;
  v63 = v12;
  if ( v12 > v10 )
  {
    v63 = v10;
    v12 = v10;
  }
  v13 = 0;
  if ( v12 )
  {
    do
    {
      v48 = v13;
      v49 = &Src[v13++];
      *v49 &= PpmCachedSystemAllowedCpuSet.Bitmap[v48];
    }
    while ( v13 < v63 );
    v10 = v64;
  }
  v65 = 0;
  if ( v13 < v10 )
  {
    do
    {
      v14 = v13++;
      Src[v14] = 0LL;
    }
    while ( v13 < v64 );
  }
  *(_QWORD *)&v68.Count = 2097153LL;
  v15 = 0;
  v16 = 0;
  memset_0(&v68.8, 0, sizeof(v68.8));
  v17 = v72[0];
  LOWORD(v18) = 0;
  while ( 1 )
  {
    while ( v17 )
    {
      _BitScanForward64(&v19, v17);
      v17 &= ~(1LL << v19);
      v20 = *((unsigned int *)qword_140F22998 + 64 * (unsigned __int16)v18 + (unsigned __int8)v19);
      v21 = *((_DWORD *)KiGlobalState + v20);
      v22 = v21 >> 6;
      if ( (unsigned int)v22 >= v63 )
      {
        v24 = 8 * v20;
LABEL_37:
        *(_QWORD *)(v24 + PpmIntSteerTrigger) = 0LL;
      }
      else
      {
        v23 = Src[v22] >> (v21 & 0x3F);
        v24 = 8 * v20;
        if ( (v23 & 1) == 0 )
          goto LABEL_37;
        ++v16;
        v25 = (__int64 *)(v24 + PpmIntSteerTrigger);
        v26 = v61;
        v27 = *v25;
        if ( !*v25 )
        {
          *v25 = v61;
          v27 = v26;
        }
        if ( v26 - v27 >= (unsigned __int64)(10000 * PpmIntSteerTriggerMax) )
        {
          v28 = *((_DWORD *)KiGlobalState + v20);
          v29 = v28 & 0x3F;
          v30 = v28 >> 6;
          if ( v68.Count > (unsigned int)v30 )
            goto LABEL_32;
          if ( v68.Size > (unsigned int)v30 )
          {
            v68.Count = v30 + 1;
LABEL_32:
            v31 = &v68.Bitmap[v30];
            v32 = *v31;
            _bittestandset64((__int64 *)&v32, v29);
            *v31 = v32;
          }
          ++v15;
        }
      }
    }
    v18 = (unsigned __int16)(v18 + 1);
    if ( (unsigned int)v18 >= v69 )
      break;
    v17 = v72[v18];
  }
  if ( !v16 )
  {
    if ( PpmCachedSystemAllowedCpuSet.Count == 1 )
    {
      v61 = PpmCachedSystemAllowedCpuSet.Bitmap[0];
      LowestClassProcessorInMask = KiIntPartGetLowestClassProcessorInMask(&v61);
    }
    else
    {
      LowestClassProcessorInMask = 0;
    }
    KeAddProcessorAffinityEx(&v63, LowestClassProcessorInMask);
    v16 = 1;
  }
  if ( !v15 )
  {
    Size = v68.Size;
    v34 = 0;
    v35 = v68.Size;
    v68.Reserved = 0;
    if ( v63 <= v68.Size )
      v35 = v63;
    v68.Count = v35;
    if ( v35 )
    {
      memmove(&v68.8, Src, 8LL * v35);
      do
        ++v34;
      while ( v34 < v35 );
      Size = v68.Size;
    }
    if ( v34 < Size )
    {
      do
      {
        v36 = v34++;
        v68.Bitmap[v36] = 0LL;
      }
      while ( v34 < v68.Size );
    }
    v15 = v16;
  }
  v37 = PpmIntSteerMode;
  switch ( PpmIntSteerMode )
  {
    case 1:
      v40 = 0LL;
      v39 = (struct _KAFFINITY_EX *)&v69;
      v38 = 0LL;
      goto LABEL_60;
    case 2:
      v40 = 0LL;
      v39 = &v68;
      v38 = 0LL;
      goto LABEL_60;
    case 3:
      v40 = 0LL;
      v39 = (struct _KAFFINITY_EX *)&v63;
      v38 = 0LL;
      goto LABEL_60;
    case 5:
    case 6:
      *(_QWORD *)&v67.Count = 2097153LL;
      memset_0(&v67.8, 0, sizeof(v67.8));
      v50 = *((_DWORD *)KiGlobalState + (unsigned int)(v37 - 5)) & 0x3F;
      v51 = *((_DWORD *)KiGlobalState + (unsigned int)(v37 - 5)) >> 6;
      if ( v67.Count > (unsigned int)v51 )
        goto LABEL_66;
      if ( v67.Size > (unsigned int)v51 )
      {
        v67.Count = v51 + 1;
LABEL_66:
        v52 = &v67.Bitmap[v51];
        v53 = *v52;
        _bittestandset64((__int64 *)&v53, v50);
        *v52 = v53;
      }
      v40 = 0LL;
      v39 = &v67;
      v38 = 0LL;
      goto LABEL_60;
    default:
      v38 = &v68;
      v39 = (struct _KAFFINITY_EX *)&v63;
      v40 = 0LL;
      v41 = (PpmIntSteerLoadMax + v60) / (unsigned int)PpmIntSteerLoadMax;
      if ( v41 < v15 )
      {
        *(_QWORD *)&v67.Count = 2097153LL;
        memset_0(&v67.8, 0, sizeof(v67.8));
        *(_QWORD *)&v74.Count = 2097153LL;
        memset_0(&v74.8, 0, sizeof(v74.8));
        if ( PpmParkPreferenceHandler )
        {
          v59 = &v67;
          v58 = &v74;
          v57 = 0LL;
          v56 = 0LL;
          guard_dispatch_icall_no_overrides(1LL, PpmCheckTime);
        }
        v42 = 0;
        if ( v67.Count )
        {
          v43 = &v67.8;
          v44 = v67.Count;
          do
          {
            v42 += __popcnt(v43->Bitmap[0]);
            v43 = ($B38C3B1372D6E954799962D5DD404846 *)((char *)v43 + 8);
            --v44;
          }
          while ( v44 );
        }
        if ( v42 <= v41 )
        {
          if ( v42 < v41 )
          {
            *(_QWORD *)&v73.Count = 2097153LL;
            memset_0(&v73.8, 0, sizeof(v73.8));
            KiSubtractAffinityEx(&v68, &v74, &v73, v73.Size);
            KiOrAffinityEx(&v67, &v73, &v67, v67.Size);
            v42 = 0;
            if ( v67.Count )
            {
              v45 = &v67.8;
              v46 = v67.Count;
              do
              {
                v42 += __popcnt(v45->Bitmap[0]);
                v45 = ($B38C3B1372D6E954799962D5DD404846 *)((char *)v45 + 8);
                --v46;
              }
              while ( v46 );
            }
          }
          if ( v42 )
            v40 = &v67;
        }
      }
LABEL_60:
      KeIntSteerPeriodic(v62, v40, v38, v39, v56, v57, v58, v59);
      break;
  }
  return 1;
}
