/*
 * XREFs of PpmHeteroUpdateHgsConfiguration @ 0x140203248
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x140A2A138 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     PpmEventHgsHardwareTable @ 0x140203014 (PpmEventHgsHardwareTable.c)
 *     PPmHeteroHgsUpdateOrderValue @ 0x140203D90 (PPmHeteroHgsUpdateOrderValue.c)
 *     KeIsForceParkingEnabled @ 0x140204250 (KeIsForceParkingEnabled.c)
 *     ?KiAndAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x140205220 (-KiAndAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     KeAddProcessorAffinityEx @ 0x140257130 (KeAddProcessorAffinityEx.c)
 *     ?KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x14029B69C (-KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     KeGetPrcb @ 0x140352980 (KeGetPrcb.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x1403B1720 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeIsEmptyAffinityEx @ 0x1403B55D0 (KeIsEmptyAffinityEx.c)
 *     KeCheckProcessorAffinityEx @ 0x1403C9F30 (KeCheckProcessorAffinityEx.c)
 *     PpmHeteroHgsCheckContainmentDecision @ 0x140457958 (PpmHeteroHgsCheckContainmentDecision.c)
 *     Feature_Servicing_WpsContainmentFixNoneZone__private_IsEnabledDeviceUsageNoInline @ 0x140457B34 (Feature_Servicing_WpsContainmentFixNoneZone__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmHeteroHgsGetContainmentType @ 0x1404BAFC0 (PpmHeteroHgsGetContainmentType.c)
 *     PpmEventHgsHardwareTableResonChanged @ 0x1404CCC34 (PpmEventHgsHardwareTableResonChanged.c)
 *     PpmEventHgsContainmentHwUpdate @ 0x1404CDF38 (PpmEventHgsContainmentHwUpdate.c)
 *     PpmHeteroHgsDetectContainmentPresence @ 0x1405D6E5C (PpmHeteroHgsDetectContainmentPresence.c)
 *     PpmHeteroHgsEvalAndRegisterContainmentGroups @ 0x1405D7220 (PpmHeteroHgsEvalAndRegisterContainmentGroups.c)
 *     PpmHeteroHgsUpdateContainmentGlobalHints @ 0x1405D7664 (PpmHeteroHgsUpdateContainmentGlobalHints.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1406B3990 (RtlCompareMemory.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

char PpmHeteroUpdateHgsConfiguration()
{
  char v0; // r13
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  BOOL v4; // r12d
  struct _KAFFINITY_EX *v5; // rdx
  __int64 Size; // rcx
  unsigned __int16 v7; // bx
  unsigned __int16 Count; // di
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int v11; // r14d
  __int64 v12; // r9
  __int64 v13; // rsi
  unsigned __int64 i; // r15
  unsigned __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 Prcb; // rax
  __int64 v18; // r8
  __int64 v19; // rax
  char v20; // di
  char v21; // dl
  bool v22; // zf
  __int64 v23; // rax
  _DWORD *v24; // r10
  __int64 v25; // rcx
  unsigned int v26; // r8d
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned int v29; // r8d
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  _DWORD *v37; // r10
  __int64 v38; // rcx
  unsigned int v39; // r8d
  __int64 v40; // rdx
  unsigned __int64 v41; // rcx
  unsigned int v42; // r8d
  __int64 v43; // rcx
  __int64 v44; // rdx
  unsigned __int64 v45; // rcx
  char v46; // r13
  __int64 v47; // rax
  _BYTE *v48; // rbx
  int v49; // eax
  int v50; // r9d
  __int64 v51; // r8
  size_t j; // rdi
  char v53; // cl
  __int64 v54; // rdx
  unsigned int v55; // esi
  __int64 v56; // rax
  unsigned int v57; // ebx
  unsigned __int64 v58; // r14
  __int64 v59; // rdi
  _DWORD *v60; // r10
  __int64 v61; // rcx
  unsigned int v62; // r8d
  __int64 v63; // rdx
  __int64 v64; // rcx
  unsigned int v65; // r8d
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rcx
  char v69; // al
  char Count_high; // r10
  unsigned __int64 v71; // rdx
  __int64 v72; // r15
  unsigned int v73; // eax
  unsigned int v74; // r8d
  __int64 v75; // rcx
  __int64 v76; // rdx
  unsigned __int64 v77; // rcx
  unsigned __int16 k; // cx
  __int64 v79; // rcx
  unsigned __int64 v80; // rdi
  __int64 v81; // rbx
  unsigned __int64 v82; // rdx
  __int64 v83; // r14
  __int64 v84; // rax
  unsigned int v85; // r8d
  __int64 v86; // rdx
  char v87; // dl
  __int64 v88; // rcx
  __int64 v89; // rcx
  __int64 v90; // rdx
  struct _KAFFINITY_EX *v91; // rcx
  struct _KAFFINITY_EX *v92; // rcx
  __int64 v93; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v94; // [rsp+30h] [rbp-D8h]
  struct _KAFFINITY_EX v95; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v96; // [rsp+148h] [rbp+40h] BYREF
  _QWORD v97[33]; // [rsp+150h] [rbp+48h] BYREF
  __int64 v98; // [rsp+258h] [rbp+150h] BYREF
  _QWORD v99[33]; // [rsp+260h] [rbp+158h] BYREF
  struct _KAFFINITY_EX v100; // [rsp+368h] [rbp+260h] BYREF
  struct _KAFFINITY_EX v101; // [rsp+478h] [rbp+370h] BYREF
  struct _KAFFINITY_EX v102; // [rsp+588h] [rbp+480h] BYREF
  struct _KAFFINITY_EX v103; // [rsp+698h] [rbp+590h] BYREF
  struct _KAFFINITY_EX v104; // [rsp+7A8h] [rbp+6A0h] BYREF

  HIDWORD(v93) = 0;
  memset_0(&v102, 0, sizeof(v102));
  memset_0(&v98, 0, 0x108uLL);
  memset_0(&v95.8, 0, sizeof(v95.8));
  memset_0(&v101, 0, sizeof(v101));
  memset_0(&v100, 0, sizeof(v100));
  memset_0(&v104.8, 0, sizeof(v104.8));
  memset_0(&v103, 0, sizeof(v103));
  memset_0(&v96, 0, 0x108uLL);
  v0 = 0;
  if ( PpmHeteroHgsEnabled
    && !(unsigned int)KeIsEmptyAffinityEx(&PpmCheckRegistered)
    && PpmHeteroCheckWpsTableUpdated
    && (unsigned __int8)guard_dispatch_icall_no_overrides(
                          PpmHeteroWpsUpdateInterfaceHandle,
                          v1,
                          v2,
                          v3,
                          v93,
                          v94,
                          *(_QWORD *)&v95.Count,
                          v95.Bitmap[0]) )
  {
    v4 = PpmHeteroHgsPopulated == 0;
    PpmHeteroHgsPopulated = 1;
    LODWORD(v93) = v4;
    v95.Size = 32;
    memset_0(&v95.8, 0, sizeof(v95.8));
    *(_QWORD *)&PpmParkNewForceParkingMask.Count = 2097153LL;
    memset_0(&PpmParkNewForceParkingMask.8, 0, sizeof(PpmParkNewForceParkingMask.8));
    Size = 32LL;
    v7 = 0;
    Count = 32;
    v95.Reserved = 0;
    if ( PpmCheckRegistered.Count <= 0x20u )
      Count = PpmCheckRegistered.Count;
    v95.Count = Count;
    if ( Count )
    {
      memmove(&v95.8, &PpmCheckRegistered.8, 8LL * Count);
      do
        ++v7;
      while ( v7 < Count );
      Size = v95.Size;
    }
    if ( v7 < (unsigned __int16)Size )
    {
      do
      {
        v9 = v7++;
        v95.Bitmap[v9] = 0LL;
      }
      while ( v7 < v95.Size );
    }
    v10 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
    v11 = 0;
    if ( *(_DWORD *)(v10 + 4) )
    {
      while ( 1 )
      {
        *(_QWORD *)&v102.Count = 2097153LL;
        memset_0(&v102.8, 0, sizeof(v102.8));
        *(_QWORD *)&v103.Count = 2097153LL;
        memset_0(&v103.8, 0, sizeof(v103.8));
        v98 = 2097153LL;
        memset_0(v99, 0, 0x100uLL);
        v96 = 2097153LL;
        memset_0(v97, 0, 0x100uLL);
        *(_QWORD *)&v104.Count = 2097153LL;
        memset_0(&v104.8, 0, sizeof(v104.8));
        LOWORD(v13) = 0;
        for ( i = PpmCheckRegistered.Bitmap[0]; ; i = PpmCheckRegistered.Bitmap[v13] )
        {
          while ( i )
          {
            _BitScanForward64(&v15, i);
            i &= ~(1LL << v15);
            v16 = *((unsigned int *)qword_140F21E78 + 64 * (unsigned __int16)v13 + (unsigned __int8)v15);
            Prcb = KeGetPrcb(v16);
            v18 = Prcb;
            if ( PpmHeteroCapabilitySimulation && (PpmHeteroSimulationStateConfig & 2) != 0 )
            {
              v88 = v11 + *(_DWORD *)(PpmHeteroCapabilitySimulation + 4) * (_DWORD)v16;
              v20 = *(_BYTE *)(PpmHeteroCapabilitySimulation + 4 * v88 + 24);
              v21 = *(_BYTE *)(PpmHeteroCapabilitySimulation + 4 * v88 + 25);
            }
            else if ( PpmHeteroHgsVendor == 2 )
            {
              v19 = PpmHeteroHgsCapabilityBits * v11 + *(unsigned __int16 *)(Prcb + 35402);
              v20 = *(_BYTE *)(PpmHeteroHgsTableEntry + v19 + 1);
              v21 = *(_BYTE *)(PpmHeteroHgsTableEntry + v19);
            }
            else if ( PpmHeteroHgsVendor == 1 )
            {
              v89 = 4 * PpmHeteroHgsCapabilityBits * v11;
              v90 = PpmHeteroHgsTableEntry + *(unsigned __int16 *)(Prcb + 35402);
              v20 = *(_BYTE *)(v90 + v89);
              v21 = *(_BYTE *)(v90 + v89 + 4);
            }
            else
            {
              v20 = 1;
              v21 = 1;
            }
            v22 = PpmHeteroHgsParkingHintEnabled == 0;
            v23 = *(_QWORD *)(v18 + 35408);
            *(_BYTE *)(v23 + 4LL * v11 + 6) = v21;
            *(_BYTE *)(v23 + 4LL * v11 + 7) = v20;
            if ( v22 )
            {
              v24 = KiGlobalState;
              v25 = *((_DWORD *)KiGlobalState + v16) >> 6;
              v26 = *((_DWORD *)KiGlobalState + v16) & 0x3F;
              if ( (unsigned __int16)v96 > (unsigned int)v25 )
                goto LABEL_18;
              if ( WORD1(v96) > (unsigned int)v25 )
              {
                LOWORD(v96) = v25 + 1;
LABEL_18:
                v27 = (unsigned int)v25;
                v28 = v97[v25];
                _bittestandset64(&v28, v26);
                v97[v27] = v28;
              }
              v29 = v24[v16] & 0x3F;
              v30 = v24[v16] >> 6;
              if ( (unsigned __int16)v98 > (unsigned int)v30 )
                goto LABEL_20;
              if ( WORD1(v98) > (unsigned int)v30 )
              {
                LOWORD(v98) = v30 + 1;
LABEL_20:
                v31 = (unsigned int)v30;
                v32 = v99[v30];
                _bittestandset64(&v32, v29);
                v99[v31] = v32;
              }
            }
            else if ( PpmHeteroHgsEePerfHintsIndependentEnabled && PpmHeteroHgsThreadEnabled )
            {
              v91 = &v103;
              if ( v21 )
                v91 = (struct _KAFFINITY_EX *)&v96;
              KeAddProcessorAffinityEx(v91);
              v92 = &v102;
              if ( v20 )
                v92 = (struct _KAFFINITY_EX *)&v98;
              KeAddProcessorAffinityEx(v92);
            }
            else if ( v21 && v20 )
            {
              v60 = KiGlobalState;
              v61 = *((_DWORD *)KiGlobalState + v16) >> 6;
              v62 = *((_DWORD *)KiGlobalState + v16) & 0x3F;
              if ( (unsigned __int16)v98 > (unsigned int)v61 )
                goto LABEL_49;
              if ( WORD1(v98) > (unsigned int)v61 )
              {
                LOWORD(v98) = v61 + 1;
LABEL_49:
                v63 = (unsigned int)v61;
                v64 = v99[v61];
                _bittestandset64(&v64, v62);
                v99[v63] = v64;
              }
              v65 = v60[v16] & 0x3F;
              v66 = v60[v16] >> 6;
              if ( (unsigned __int16)v96 > (unsigned int)v66 )
                goto LABEL_51;
              if ( WORD1(v96) > (unsigned int)v66 )
              {
                LOWORD(v96) = v66 + 1;
LABEL_51:
                v67 = (unsigned int)v66;
                v68 = v97[v66];
                _bittestandset64(&v68, v65);
                v97[v67] = v68;
              }
            }
            else
            {
              v37 = KiGlobalState;
              v38 = *((_DWORD *)KiGlobalState + v16) >> 6;
              v39 = *((_DWORD *)KiGlobalState + v16) & 0x3F;
              if ( v102.Count > (unsigned int)v38 )
                goto LABEL_29;
              if ( v102.Size > (unsigned int)v38 )
              {
                v102.Count = v38 + 1;
LABEL_29:
                v40 = (unsigned int)v38;
                v41 = v102.Bitmap[v38];
                _bittestandset64((__int64 *)&v41, v39);
                v102.Bitmap[v40] = v41;
              }
              v42 = v37[v16] & 0x3F;
              v43 = v37[v16] >> 6;
              if ( v103.Count > (unsigned int)v43 )
                goto LABEL_31;
              if ( v103.Size > (unsigned int)v43 )
              {
                v103.Count = v43 + 1;
LABEL_31:
                v44 = (unsigned int)v43;
                v45 = v103.Bitmap[v43];
                _bittestandset64((__int64 *)&v45, v42);
                v103.Bitmap[v44] = v45;
              }
            }
          }
          v13 = (unsigned __int16)(v13 + 1);
          if ( (unsigned int)v13 >= PpmCheckRegistered.Count )
            break;
        }
        LOBYTE(v12) = 1;
        v46 = PPmHeteroHgsUpdateOrderValue(&v96, &v103, v11, v12) | v0;
        v0 = PPmHeteroHgsUpdateOrderValue(&v98, &v102, v11, 0LL) | v46;
        KiAndAffinityEx(&v103, &v102, &v104, v104.Size);
        KiAndAffinityEx(&v95, &v104, &v95, v95.Size);
        v47 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
        if ( ++v11 >= *(_DWORD *)(v47 + 4) )
        {
          LOBYTE(v4) = v93;
          break;
        }
      }
    }
    if ( PpmHeteroHgsParkingHintEnabled )
    {
      v80 = PpmCheckRegistered.Bitmap[0];
      LOWORD(v81) = 0;
      while ( 1 )
      {
        Size = PpmCheckRegistered.Count;
        v5 = &PpmCheckRegistered;
        while ( !v80 )
        {
          v81 = (unsigned __int16)(v81 + 1);
          if ( (unsigned int)v81 >= PpmCheckRegistered.Count )
            goto LABEL_35;
          v80 = PpmCheckRegistered.Bitmap[v81];
        }
        _BitScanForward64(&v82, v80);
        v80 &= ~(1LL << v82);
        v83 = *((unsigned int *)qword_140F21E78 + 64 * (unsigned __int16)v81 + (unsigned __int8)v82);
        v84 = KeGetPrcb(v83);
        v85 = *((_DWORD *)KiGlobalState + v83);
        v86 = v85 >> 6;
        if ( (unsigned int)v86 >= v95.Count )
          v87 = 0;
        else
          v87 = (v95.Bitmap[v86] >> (v85 & 0x3F)) & 1;
        if ( *(_BYTE *)(v84 + 35404) != v87 )
        {
          v0 = 1;
          *(_BYTE *)(v84 + 35404) = KeCheckProcessorAffinityEx(&v95, (unsigned int)v83);
        }
      }
    }
LABEL_35:
    if ( PpmHeteroHgsDynamicUpdateEnabled )
    {
      if ( PpmHeteroHgsDynamicUpdateReasonEnabled )
      {
        v48 = PpmHeteroHgsNewUpdateReason;
        if ( PpmHeteroHgsNewUpdateReason )
        {
          if ( PpmHeteroHgsOldUpdateReason )
          {
            v49 = PpmHeteroWorkloadClasses;
            v50 = 0;
            v51 = 0LL;
            for ( j = (unsigned int)(2 * PpmHeteroWorkloadClasses);
                  (unsigned int)v51 < PpmHeteroWorkloadClasses;
                  v51 = (unsigned int)(v51 + 1) )
            {
              v48 = PpmHeteroHgsNewUpdateReason;
              Size = (unsigned int)v51;
              v5 = (struct _KAFFINITY_EX *)((unsigned int)(PpmHgsUpdateChangeReasonOffset
                                                         + PpmHeteroHgsCapabilityBits * v51)
                                          + PpmHeteroHgsTableEntry);
              v69 = v5->Count;
              *((_BYTE *)PpmHeteroHgsNewUpdateReason + 2 * (unsigned int)v51) = v5->Count;
              Count_high = HIBYTE(v5->Count);
              v48[2 * (unsigned int)v51 + 1] = Count_high;
              if ( (v69 & 2) != 0 && (Count_high & 2) != 0 )
                ++v50;
              v49 = PpmHeteroWorkloadClasses;
            }
            LOBYTE(Size) = v50 == v49;
            if ( (unsigned __int8)KeIsForceParkingEnabled(Size, v5, v51) && v53 )
              KiCopyAffinityEx(&PpmParkNewForceParkingMask, PpmParkNewForceParkingMask.Size, &v95);
            if ( RtlCompareMemory(v48, PpmHeteroHgsOldUpdateReason, j) != j )
            {
              memmove(PpmHeteroHgsOldUpdateReason, PpmHeteroHgsNewUpdateReason, j);
              PpmEventHgsHardwareTableResonChanged(0LL);
            }
          }
        }
      }
    }
    if ( (PpmHeteroHgsContainmentState & 4) == 0 && !v4 )
      goto LABEL_22;
    *(_QWORD *)&v100.Count = 2097153LL;
    memset_0(&v100.8, 0, sizeof(v100.8));
    v55 = 0;
LABEL_45:
    v56 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
    if ( v55 < *(_DWORD *)(v56 + 4) )
    {
      v57 = -1;
      *(_QWORD *)&v101.Count = 2097153LL;
      memset_0(&v101.8, 0, sizeof(v101.8));
      v58 = PpmCheckRegistered.Bitmap[0];
      LOWORD(v59) = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          do
          {
            while ( 1 )
            {
              do
              {
                while ( !v58 )
                {
                  v59 = (unsigned __int16)(v59 + 1);
                  if ( (unsigned int)v59 >= PpmCheckRegistered.Count )
                  {
                    LOBYTE(v4) = v93;
                    if ( v57 == -1 )
                    {
                      *(_QWORD *)&v100.Count = 2097153LL;
                      memset_0(&v100.8, 0, sizeof(v100.8));
                      goto LABEL_74;
                    }
                    KiOrAffinityEx(&v100, &v101, &v100, v100.Size);
                    ++v55;
                    goto LABEL_45;
                  }
                  v58 = PpmCheckRegistered.Bitmap[v59];
                }
                _BitScanForward64(&v71, v58);
                v58 &= ~(1LL << v71);
                v72 = *((unsigned int *)qword_140F21E78 + 64 * (unsigned __int16)v59 + (unsigned __int8)v71);
                v73 = *(unsigned __int8 *)(PpmHeteroHgsTableEntry
                                         + *(unsigned __int16 *)(KeGetPrcb(v72) + 35402)
                                         + PpmHeteroHgsCapabilityBits * v55
                                         + 1);
              }
              while ( !(_BYTE)v73 );
              if ( v57 != -1 && v73 <= v57 )
                break;
              *(_QWORD *)&v101.Count = 2097153LL;
              v57 = v73;
              memset_0(&v101.8, 0, sizeof(v101.8));
              KeAddProcessorAffinityEx(&v101);
            }
          }
          while ( v73 != v57 );
          v74 = *((_DWORD *)KiGlobalState + v72) & 0x3F;
          v75 = *((_DWORD *)KiGlobalState + v72) >> 6;
          if ( v101.Count <= (unsigned int)v75 )
            break;
LABEL_68:
          v76 = (unsigned int)v75;
          v77 = v101.Bitmap[v75];
          _bittestandset64((__int64 *)&v77, v74);
          v101.Bitmap[v76] = v77;
        }
        if ( v101.Size > (unsigned int)v75 )
        {
          v101.Count = v75 + 1;
          goto LABEL_68;
        }
      }
    }
LABEL_74:
    for ( k = 0; k < v100.Count; ++k )
    {
      if ( v100.Bitmap[k] )
      {
        if ( (PpmHeteroHgsContainmentState & 4) != 0 )
        {
          PpmHeteroHgsGetContainmentType(&v100, (char *)&v93 + 4);
          PpmEventHgsContainmentHwUpdate(&v100, (char *)&v93 + 4, 0LL);
        }
        else if ( v4 )
        {
          LOBYTE(v54) = v4;
          PpmHeteroHgsDetectContainmentPresence(&v100, v54);
          PpmHeteroHgsEvalAndRegisterContainmentGroups();
        }
        break;
      }
    }
    if ( (unsigned int)Feature_Servicing_WpsContainmentFixNoneZone__private_IsEnabledDeviceUsageNoInline() )
    {
      LOBYTE(v79) = (unsigned int)KeIsEmptyAffinityEx(&v95) == 0;
      PpmHeteroHgsUpdateContainmentGlobalHints(v79);
      PpmHeteroHgsCheckContainmentDecision();
    }
LABEL_22:
    PpmEventHgsHardwareTable(0);
    guard_dispatch_icall_no_overrides(
      PpmHeteroWpsUpdateInterfaceHandle,
      v33,
      v34,
      v35,
      v93,
      v94,
      *(_QWORD *)&v95.Count,
      v95.Bitmap[0]);
  }
  return v0;
}
