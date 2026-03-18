/*
 * XREFs of PpmHeteroUpdateHgsConfiguration @ 0x140267B4C
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x140A2061C (PopInitializeHeteroProcessors.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140256160 (KeAddProcessorAffinityEx.c)
 *     ?KiAndAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x140267478 (-KiAndAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     PPmHeteroHgsUpdateOrderValue @ 0x140268694 (PPmHeteroHgsUpdateOrderValue.c)
 *     PpmEventHgsHardwareTable @ 0x140268A24 (PpmEventHgsHardwareTable.c)
 *     KeCheckProcessorAffinityEx @ 0x14026BAA0 (KeCheckProcessorAffinityEx.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140271570 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     ?KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x140272B6C (-KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     KeIsForceParkingEnabled @ 0x140313D80 (KeIsForceParkingEnabled.c)
 *     KeIsEmptyAffinityEx @ 0x140377880 (KeIsEmptyAffinityEx.c)
 *     KeGetPrcb @ 0x1403B0CC0 (KeGetPrcb.c)
 *     PpmHeteroHgsCheckContainmentDecision @ 0x1404AF124 (PpmHeteroHgsCheckContainmentDecision.c)
 *     PpmHeteroHgsGetContainmentType @ 0x1404BBB70 (PpmHeteroHgsGetContainmentType.c)
 *     PpmEventHgsHardwareTableResonChanged @ 0x1404CD078 (PpmEventHgsHardwareTableResonChanged.c)
 *     PpmEventHgsContainmentHwUpdate @ 0x1404CE158 (PpmEventHgsContainmentHwUpdate.c)
 *     Feature_Servicing_WpsContainmentFixNoneZone__private_IsEnabledDeviceUsageNoInline @ 0x1404F2210 (Feature_Servicing_WpsContainmentFixNoneZone__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmHeteroHgsDetectContainmentPresence @ 0x1405D23A8 (PpmHeteroHgsDetectContainmentPresence.c)
 *     PpmHeteroHgsEvalAndRegisterContainmentGroups @ 0x1405D278C (PpmHeteroHgsEvalAndRegisterContainmentGroups.c)
 *     PpmHeteroHgsUpdateContainmentGlobalHints @ 0x1405D2B40 (PpmHeteroHgsUpdateContainmentGlobalHints.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1406A86C0 (RtlCompareMemory.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

char PpmHeteroUpdateHgsConfiguration()
{
  char v0; // r13
  __int64 v1; // rdx
  bool v2; // r12
  struct _KAFFINITY_EX *v3; // rdx
  __int64 Size; // rcx
  unsigned __int16 v5; // bx
  unsigned __int16 Count; // di
  __int64 v7; // rax
  unsigned int i; // r14d
  __int64 v9; // r9
  __int64 v10; // rsi
  unsigned __int64 j; // r15
  unsigned __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 Prcb; // rax
  __int64 v15; // r8
  __int64 v16; // rax
  char v17; // di
  char v18; // dl
  bool v19; // zf
  __int64 v20; // rax
  _DWORD *v21; // r10
  __int64 v22; // rcx
  unsigned int v23; // r8d
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned int v26; // r8d
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  _DWORD *v32; // r10
  __int64 v33; // rcx
  unsigned int v34; // r8d
  __int64 v35; // rdx
  unsigned __int64 v36; // rcx
  unsigned int v37; // r8d
  __int64 v38; // rcx
  __int64 v39; // rdx
  unsigned __int64 v40; // rcx
  char v41; // r13
  _BYTE *v42; // rbx
  int v43; // eax
  int v44; // r9d
  unsigned int v45; // r8d
  size_t k; // rdi
  char v47; // cl
  __int64 v48; // rdx
  unsigned int v49; // esi
  unsigned int v50; // ebx
  unsigned __int64 v51; // r14
  __int64 v52; // rdi
  _DWORD *v53; // r10
  __int64 v54; // rcx
  unsigned int v55; // r8d
  __int64 v56; // rdx
  __int64 v57; // rcx
  unsigned int v58; // r8d
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rcx
  char v62; // al
  char Count_high; // r10
  unsigned __int64 v64; // rdx
  __int64 v65; // r15
  unsigned int v66; // eax
  unsigned int v67; // r8d
  __int64 v68; // rcx
  __int64 v69; // rdx
  unsigned __int64 v70; // rcx
  unsigned __int16 m; // cx
  unsigned __int64 v72; // rdi
  __int64 v73; // rbx
  unsigned __int64 v74; // rdx
  __int64 v75; // r14
  __int64 v76; // rax
  __int64 v77; // r8
  __int64 v78; // rdx
  char v79; // dl
  __int64 v80; // rcx
  __int64 v81; // rcx
  __int64 v82; // rcx
  __int64 v83; // rdx
  struct _KAFFINITY_EX *v84; // rcx
  struct _KAFFINITY_EX *v85; // rcx
  bool v86; // [rsp+28h] [rbp-E0h]
  _DWORD v87[3]; // [rsp+2Ch] [rbp-DCh] BYREF
  struct _KAFFINITY_EX v88; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v89; // [rsp+148h] [rbp+40h] BYREF
  _QWORD v90[33]; // [rsp+150h] [rbp+48h] BYREF
  __int64 v91; // [rsp+258h] [rbp+150h] BYREF
  _QWORD v92[33]; // [rsp+260h] [rbp+158h] BYREF
  struct _KAFFINITY_EX v93; // [rsp+368h] [rbp+260h] BYREF
  struct _KAFFINITY_EX v94; // [rsp+478h] [rbp+370h] BYREF
  struct _KAFFINITY_EX v95; // [rsp+588h] [rbp+480h] BYREF
  struct _KAFFINITY_EX v96; // [rsp+698h] [rbp+590h] BYREF
  struct _KAFFINITY_EX v97; // [rsp+7A8h] [rbp+6A0h] BYREF

  v87[0] = 0;
  memset_0(&v95, 0, sizeof(v95));
  memset_0(&v91, 0, 0x108uLL);
  memset_0(&v88.8, 0, sizeof(v88.8));
  memset_0(&v94, 0, sizeof(v94));
  memset_0(&v93, 0, sizeof(v93));
  memset_0(&v97.8, 0, sizeof(v97.8));
  memset_0(&v96, 0, sizeof(v96));
  memset_0(&v89, 0, 0x108uLL);
  v0 = 0;
  if ( PpmHeteroHgsEnabled
    && !(unsigned int)KeIsEmptyAffinityEx(&PpmCheckRegistered)
    && PpmHeteroCheckWpsTableUpdated
    && (unsigned __int8)guard_dispatch_icall_no_overrides(PpmHeteroWpsUpdateInterfaceHandle, v1) )
  {
    v2 = PpmHeteroHgsPopulated == 0;
    PpmHeteroHgsPopulated = 1;
    v86 = v2;
    v88.Size = 32;
    memset_0(&v88.8, 0, sizeof(v88.8));
    *(_QWORD *)&PpmParkNewForceParkingMask.Count = 2097153LL;
    memset_0(&PpmParkNewForceParkingMask.8, 0, sizeof(PpmParkNewForceParkingMask.8));
    Size = 32LL;
    v5 = 0;
    Count = 32;
    v88.Reserved = 0;
    if ( PpmCheckRegistered.Count <= 0x20u )
      Count = PpmCheckRegistered.Count;
    v88.Count = Count;
    if ( Count )
    {
      memmove(&v88.8, &PpmCheckRegistered.8, 8LL * Count);
      do
        ++v5;
      while ( v5 < Count );
      Size = v88.Size;
    }
    if ( v5 < (unsigned __int16)Size )
    {
      do
      {
        v7 = v5++;
        v88.Bitmap[v7] = 0LL;
      }
      while ( v5 < v88.Size );
    }
    for ( i = 0; i < *(_DWORD *)(PpmHeteroCapability + 4); ++i )
    {
      *(_QWORD *)&v95.Count = 2097153LL;
      memset_0(&v95.8, 0, sizeof(v95.8));
      *(_QWORD *)&v96.Count = 2097153LL;
      memset_0(&v96.8, 0, sizeof(v96.8));
      v91 = 2097153LL;
      memset_0(v92, 0, 0x100uLL);
      v89 = 2097153LL;
      memset_0(v90, 0, 0x100uLL);
      *(_QWORD *)&v97.Count = 2097153LL;
      memset_0(&v97.8, 0, sizeof(v97.8));
      LOWORD(v10) = 0;
      for ( j = PpmCheckRegistered.Bitmap[0]; ; j = PpmCheckRegistered.Bitmap[v10] )
      {
        while ( j )
        {
          _BitScanForward64(&v12, j);
          j &= ~(1LL << v12);
          v13 = *((unsigned int *)qword_140F216A8 + 64 * (unsigned __int16)v10 + (unsigned __int8)v12);
          Prcb = KeGetPrcb(v13);
          v15 = Prcb;
          if ( PpmHeteroCapabilitySimulation && (PpmHeteroSimulationStateConfig & 2) != 0 )
          {
            v81 = i + *(_DWORD *)(PpmHeteroCapabilitySimulation + 4) * (_DWORD)v13;
            v17 = *(_BYTE *)(PpmHeteroCapabilitySimulation + 4 * v81 + 24);
            v18 = *(_BYTE *)(PpmHeteroCapabilitySimulation + 4 * v81 + 25);
          }
          else if ( PpmHeteroHgsVendor == 2 )
          {
            v16 = PpmHeteroHgsCapabilityBits * i + *(unsigned __int16 *)(Prcb + 35402);
            v17 = *(_BYTE *)(PpmHeteroHgsTableEntry + v16 + 1);
            v18 = *(_BYTE *)(PpmHeteroHgsTableEntry + v16);
          }
          else if ( PpmHeteroHgsVendor == 1 )
          {
            v82 = 4 * PpmHeteroHgsCapabilityBits * i;
            v83 = PpmHeteroHgsTableEntry + *(unsigned __int16 *)(Prcb + 35402);
            v17 = *(_BYTE *)(v83 + v82);
            v18 = *(_BYTE *)(v83 + v82 + 4);
          }
          else
          {
            v17 = 1;
            v18 = 1;
          }
          v19 = PpmHeteroHgsParkingHintEnabled == 0;
          v20 = *(_QWORD *)(v15 + 35408);
          *(_BYTE *)(v20 + 4LL * i + 6) = v18;
          *(_BYTE *)(v20 + 4LL * i + 7) = v17;
          if ( v19 )
          {
            v21 = KiGlobalState;
            v22 = *((_DWORD *)KiGlobalState + v13) >> 6;
            v23 = *((_DWORD *)KiGlobalState + v13) & 0x3F;
            if ( (unsigned __int16)v89 > (unsigned int)v22 )
              goto LABEL_18;
            if ( WORD1(v89) > (unsigned int)v22 )
            {
              LOWORD(v89) = v22 + 1;
LABEL_18:
              v24 = (unsigned int)v22;
              v25 = v90[v22];
              _bittestandset64(&v25, v23);
              v90[v24] = v25;
            }
            v26 = v21[v13] & 0x3F;
            v27 = v21[v13] >> 6;
            if ( (unsigned __int16)v91 > (unsigned int)v27 )
              goto LABEL_20;
            if ( WORD1(v91) > (unsigned int)v27 )
            {
              LOWORD(v91) = v27 + 1;
LABEL_20:
              v28 = (unsigned int)v27;
              v29 = v92[v27];
              _bittestandset64(&v29, v26);
              v92[v28] = v29;
            }
          }
          else if ( PpmHeteroHgsEePerfHintsIndependentEnabled && PpmHeteroHgsThreadEnabled )
          {
            v84 = &v96;
            if ( v18 )
              v84 = (struct _KAFFINITY_EX *)&v89;
            KeAddProcessorAffinityEx(&v84->Count, v13);
            v85 = &v95;
            if ( v17 )
              v85 = (struct _KAFFINITY_EX *)&v91;
            KeAddProcessorAffinityEx(&v85->Count, v13);
          }
          else if ( v18 && v17 )
          {
            v53 = KiGlobalState;
            v54 = *((_DWORD *)KiGlobalState + v13) >> 6;
            v55 = *((_DWORD *)KiGlobalState + v13) & 0x3F;
            if ( (unsigned __int16)v91 > (unsigned int)v54 )
              goto LABEL_48;
            if ( WORD1(v91) > (unsigned int)v54 )
            {
              LOWORD(v91) = v54 + 1;
LABEL_48:
              v56 = (unsigned int)v54;
              v57 = v92[v54];
              _bittestandset64(&v57, v55);
              v92[v56] = v57;
            }
            v58 = v53[v13] & 0x3F;
            v59 = v53[v13] >> 6;
            if ( (unsigned __int16)v89 > (unsigned int)v59 )
              goto LABEL_50;
            if ( WORD1(v89) > (unsigned int)v59 )
            {
              LOWORD(v89) = v59 + 1;
LABEL_50:
              v60 = (unsigned int)v59;
              v61 = v90[v59];
              _bittestandset64(&v61, v58);
              v90[v60] = v61;
            }
          }
          else
          {
            v32 = KiGlobalState;
            v33 = *((_DWORD *)KiGlobalState + v13) >> 6;
            v34 = *((_DWORD *)KiGlobalState + v13) & 0x3F;
            if ( v95.Count > (unsigned int)v33 )
              goto LABEL_29;
            if ( v95.Size > (unsigned int)v33 )
            {
              v95.Count = v33 + 1;
LABEL_29:
              v35 = (unsigned int)v33;
              v36 = v95.Bitmap[v33];
              _bittestandset64((__int64 *)&v36, v34);
              v95.Bitmap[v35] = v36;
            }
            v37 = v32[v13] & 0x3F;
            v38 = v32[v13] >> 6;
            if ( v96.Count > (unsigned int)v38 )
              goto LABEL_31;
            if ( v96.Size > (unsigned int)v38 )
            {
              v96.Count = v38 + 1;
LABEL_31:
              v39 = (unsigned int)v38;
              v40 = v96.Bitmap[v38];
              _bittestandset64((__int64 *)&v40, v37);
              v96.Bitmap[v39] = v40;
            }
          }
        }
        v10 = (unsigned __int16)(v10 + 1);
        if ( (unsigned int)v10 >= PpmCheckRegistered.Count )
          break;
      }
      LOBYTE(v9) = 1;
      v41 = PPmHeteroHgsUpdateOrderValue(&v89, &v96, i, v9) | v0;
      v0 = PPmHeteroHgsUpdateOrderValue(&v91, &v95, i, 0LL) | v41;
      KiAndAffinityEx(&v96, &v95, &v97, v97.Size);
      KiAndAffinityEx(&v88, &v97, &v88, v88.Size);
    }
    if ( PpmHeteroHgsParkingHintEnabled )
    {
      v72 = PpmCheckRegistered.Bitmap[0];
      LOWORD(v73) = 0;
      while ( 1 )
      {
        Size = PpmCheckRegistered.Count;
        v3 = &PpmCheckRegistered;
        while ( !v72 )
        {
          v73 = (unsigned __int16)(v73 + 1);
          if ( (unsigned int)v73 >= PpmCheckRegistered.Count )
            goto LABEL_34;
          v72 = PpmCheckRegistered.Bitmap[v73];
        }
        _BitScanForward64(&v74, v72);
        v72 &= ~(1LL << v74);
        v75 = *((unsigned int *)qword_140F216A8 + 64 * (unsigned __int16)v73 + (unsigned __int8)v74);
        v76 = KeGetPrcb(v75);
        v77 = *((unsigned int *)KiGlobalState + v75);
        v78 = *((_DWORD *)KiGlobalState + v75) >> 6;
        if ( (unsigned int)v78 >= v88.Count )
        {
          v79 = 0;
        }
        else
        {
          v77 &= 0x3Fu;
          v79 = (v88.Bitmap[v78] >> v77) & 1;
        }
        if ( *(_BYTE *)(v76 + 35404) != v79 )
        {
          v0 = 1;
          *(_BYTE *)(v76 + 35404) = KeCheckProcessorAffinityEx(&v88, (unsigned int)v75, v77, 1LL);
        }
      }
    }
LABEL_34:
    if ( PpmHeteroHgsDynamicUpdateEnabled )
    {
      if ( PpmHeteroHgsDynamicUpdateReasonEnabled )
      {
        v42 = PpmHeteroHgsNewUpdateReason;
        if ( PpmHeteroHgsNewUpdateReason )
        {
          if ( PpmHeteroHgsOldUpdateReason )
          {
            v43 = PpmHeteroWorkloadClasses;
            v44 = 0;
            v45 = 0;
            for ( k = (unsigned int)(2 * PpmHeteroWorkloadClasses); v45 < PpmHeteroWorkloadClasses; ++v45 )
            {
              v42 = PpmHeteroHgsNewUpdateReason;
              Size = v45;
              v3 = (struct _KAFFINITY_EX *)(PpmHgsUpdateChangeReasonOffset
                                          + PpmHeteroHgsCapabilityBits * v45
                                          + PpmHeteroHgsTableEntry);
              v62 = v3->Count;
              *((_BYTE *)PpmHeteroHgsNewUpdateReason + 2 * v45) = v3->Count;
              Count_high = HIBYTE(v3->Count);
              v42[2 * v45 + 1] = Count_high;
              if ( (v62 & 2) != 0 && (Count_high & 2) != 0 )
                ++v44;
              v43 = PpmHeteroWorkloadClasses;
            }
            LOBYTE(Size) = v44 == v43;
            if ( (unsigned __int8)KeIsForceParkingEnabled(Size, v3) && v47 )
              KiCopyAffinityEx(&PpmParkNewForceParkingMask, PpmParkNewForceParkingMask.Size, &v88);
            if ( RtlCompareMemory(v42, PpmHeteroHgsOldUpdateReason, k) != k )
            {
              memmove(PpmHeteroHgsOldUpdateReason, PpmHeteroHgsNewUpdateReason, k);
              PpmEventHgsHardwareTableResonChanged(0LL);
            }
          }
        }
      }
    }
    if ( (PpmHeteroHgsContainmentState & 4) == 0 && !v2 )
      goto LABEL_22;
    *(_QWORD *)&v93.Count = 2097153LL;
    memset_0(&v93.8, 0, sizeof(v93.8));
    v49 = 0;
LABEL_44:
    if ( v49 < *(_DWORD *)(PpmHeteroCapability + 4) )
    {
      v50 = -1;
      *(_QWORD *)&v94.Count = 2097153LL;
      memset_0(&v94.8, 0, sizeof(v94.8));
      v51 = PpmCheckRegistered.Bitmap[0];
      LOWORD(v52) = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              do
              {
                while ( !v51 )
                {
                  v52 = (unsigned __int16)(v52 + 1);
                  if ( (unsigned int)v52 >= PpmCheckRegistered.Count )
                  {
                    v2 = v86;
                    if ( v50 == -1 )
                    {
                      *(_QWORD *)&v93.Count = 2097153LL;
                      memset_0(&v93.8, 0, sizeof(v93.8));
                      goto LABEL_69;
                    }
                    KiOrAffinityEx(&v93, &v94, &v93, v93.Size);
                    ++v49;
                    goto LABEL_44;
                  }
                  v51 = PpmCheckRegistered.Bitmap[v52];
                }
                _BitScanForward64(&v64, v51);
                v51 &= ~(1LL << v64);
                v65 = *((unsigned int *)qword_140F216A8 + 64 * (unsigned __int16)v52 + (unsigned __int8)v64);
                v66 = *(unsigned __int8 *)(PpmHeteroHgsTableEntry
                                         + *(unsigned __int16 *)(KeGetPrcb(v65) + 35402)
                                         + PpmHeteroHgsCapabilityBits * v49
                                         + 1);
              }
              while ( !(_BYTE)v66 );
              if ( v50 != -1 )
                break;
LABEL_110:
              *(_QWORD *)&v94.Count = 2097153LL;
              v50 = v66;
              memset_0(&v94.8, 0, sizeof(v94.8));
              KeAddProcessorAffinityEx(&v94.Count, v65);
            }
            if ( v66 == v50 )
              break;
            if ( v66 > v50 )
              goto LABEL_110;
          }
          v67 = *((_DWORD *)KiGlobalState + v65) & 0x3F;
          v68 = *((_DWORD *)KiGlobalState + v65) >> 6;
          if ( v94.Count <= (unsigned int)v68 )
            break;
LABEL_66:
          v69 = (unsigned int)v68;
          v70 = v94.Bitmap[v68];
          _bittestandset64((__int64 *)&v70, v67);
          v94.Bitmap[v69] = v70;
        }
        if ( v94.Size > (unsigned int)v68 )
        {
          v94.Count = v68 + 1;
          goto LABEL_66;
        }
      }
    }
LABEL_69:
    for ( m = 0; m < v93.Count; ++m )
    {
      if ( v93.Bitmap[m] )
      {
        if ( (PpmHeteroHgsContainmentState & 4) != 0 )
        {
          PpmHeteroHgsGetContainmentType(&v93, v87);
          PpmEventHgsContainmentHwUpdate(&v93, v87, 0LL);
        }
        else if ( v2 )
        {
          LOBYTE(v48) = v2;
          PpmHeteroHgsDetectContainmentPresence(&v93, v48);
          PpmHeteroHgsEvalAndRegisterContainmentGroups();
        }
        break;
      }
    }
    if ( (unsigned int)Feature_Servicing_WpsContainmentFixNoneZone__private_IsEnabledDeviceUsageNoInline() )
    {
      LOBYTE(v80) = (unsigned int)KeIsEmptyAffinityEx(&v88) == 0;
      PpmHeteroHgsUpdateContainmentGlobalHints(v80);
      PpmHeteroHgsCheckContainmentDecision();
    }
LABEL_22:
    PpmEventHgsHardwareTable(0LL);
    guard_dispatch_icall_no_overrides(PpmHeteroWpsUpdateInterfaceHandle, v30);
  }
  return v0;
}
