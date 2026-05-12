/*
 * XREFs of RaUnitStartIo @ 0x14004E6F0
 * Callers:
 *     RaidStartIoPacket @ 0x140004760 (RaidStartIoPacket.c)
 * Callees:
 *     RaidNtStatusToSrbStatus @ 0x1400059F0 (RaidNtStatusToSrbStatus.c)
 *     RaidXrbDeallocateResources @ 0x140011E50 (RaidXrbDeallocateResources.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x140012900 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidAdapterScatterGatherExecuteBidirectionalRequest @ 0x140012F48 (RaidAdapterScatterGatherExecuteBidirectionalRequest.c)
 *     RaidSrbStatusToNtStatus @ 0x14001EF94 (RaidSrbStatusToNtStatus.c)
 *     McTemplateK0dud_EtwWriteTransfer @ 0x140022C5C (McTemplateK0dud_EtwWriteTransfer.c)
 *     McTemplateK0zqjuuujssstsxx_EtwWriteTransfer @ 0x140022CE4 (McTemplateK0zqjuuujssstsxx_EtwWriteTransfer.c)
 *     StorUnmapSenseInfo @ 0x140025620 (StorUnmapSenseInfo.c)
 *     RaidAdapterScatterGatherExecute @ 0x140025860 (RaidAdapterScatterGatherExecute.c)
 *     RaidProcessDeferredItemsWorker @ 0x140025B4C (RaidProcessDeferredItemsWorker.c)
 *     RaidDeleteDeviceQueueEntry @ 0x140026BC8 (RaidDeleteDeviceQueueEntry.c)
 *     RaidSrbIsPowerRequired @ 0x140026F70 (RaidSrbIsPowerRequired.c)
 *     RaidUpdateZoneIoMetadata @ 0x1400282B0 (RaidUpdateZoneIoMetadata.c)
 *     RaidIsUnresponsiveBlockedCmd @ 0x140032C14 (RaidIsUnresponsiveBlockedCmd.c)
 *     RaidAdapterAcquireCryptoKeyResources @ 0x14004537C (RaidAdapterAcquireCryptoKeyResources.c)
 *     RaidUnitClaimIrp @ 0x14004FB60 (RaidUnitClaimIrp.c)
 *     StorRemoveIoGatewayItem @ 0x140050F10 (StorRemoveIoGatewayItem.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0zx_EtwWriteTransfer @ 0x140053848 (McTemplateK0zx_EtwWriteTransfer.c)
 *     WPP_SF_qqD @ 0x140055624 (WPP_SF_qqD.c)
 *     RaidAdapterReleaseCryptoKeyResources @ 0x140055F58 (RaidAdapterReleaseCryptoKeyResources.c)
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140056648 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidAcquireNvmeIceKeyResources @ 0x1400697EC (RaidAcquireNvmeIceKeyResources.c)
 *     RaidReleaseNvmeIceKeyResources @ 0x14006AB70 (RaidReleaseNvmeIceKeyResources.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

char __fastcall RaUnitStartIo(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // rax
  _BYTE *v5; // r12
  __int64 v6; // r15
  unsigned __int64 v8; // r13
  __int64 v9; // rdi
  __int64 v10; // rsi
  char v11; // bl
  unsigned int v12; // r11d
  unsigned int v13; // r10d
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // r9
  __int64 v17; // r8
  int v18; // ecx
  int v19; // ecx
  char *v20; // r9
  unsigned __int64 v21; // rcx
  _QWORD *v22; // rbx
  unsigned __int64 v23; // r8
  signed __int32 v24; // eax
  signed __int32 v25; // ett
  char v26; // cl
  char v27; // cl
  char v28; // al
  int v29; // esi
  USHORT CurrentNodeNumber; // ax
  PSLIST_ENTRY v31; // rax
  int v32; // r14d
  unsigned int v33; // esi
  unsigned int v34; // ebx
  __int64 v35; // r14
  unsigned __int64 v36; // rdx
  __int64 v37; // rcx
  unsigned __int64 v38; // r8
  signed __int32 v39; // eax
  signed __int32 v40; // ett
  char v41; // al
  __int64 v42; // rbx
  __int64 v43; // rbx
  __int64 v44; // rsi
  __int64 v45; // r14
  bool v46; // zf
  LARGE_INTEGER v47; // r13
  __int64 v48; // rsi
  const char *v49; // r14
  __int64 v50; // r8
  __int64 v51; // rcx
  int v52; // eax
  char v53; // cl
  char v54; // al
  __int64 v55; // rax
  char v56; // r14
  __int64 v57; // rcx
  __int64 v58; // r13
  __int64 v59; // rsi
  __int64 v60; // rdi
  int v61; // edi
  bool v62; // di
  __int64 *v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rdx
  void (__fastcall *v66)(__int64, _QWORD, bool); // rax
  __int64 *v67; // rax
  __int64 v68; // rcx
  __int64 v69; // rdx
  void (__fastcall *v70)(__int64, _QWORD, bool); // rax
  __int64 v71; // rbx
  __int64 v72; // rbx
  unsigned __int64 v73; // rdx
  int v74; // ecx
  __int64 v75; // rcx
  unsigned int v76; // edi
  __int64 v77; // r14
  __int64 v78; // rax
  unsigned int HighestNodeNumber; // r8d
  char v80; // al
  __int64 v81; // rdi
  __int64 v82; // rsi
  __int64 v83; // r14
  int *v84; // r13
  __int64 v85; // rbx
  int *v86; // r12
  KIRQL CurrentIrql; // al
  KSPIN_LOCK *v88; // rcx
  char v89; // al
  int v90; // r9d
  __int64 v91; // rcx
  __int64 v92; // r8
  _QWORD *v93; // rax
  __int64 v94; // rcx
  __int64 v95; // rdx
  _QWORD *v96; // rax
  char v97; // al
  int v98; // r9d
  __int64 v99; // rcx
  __int64 v100; // r8
  _QWORD *v101; // rax
  __int64 v102; // rcx
  __int64 v103; // rdx
  _QWORD *v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r9
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // rcx
  __int64 v111; // rdx
  __int64 v112; // rax
  __int64 v113; // r13
  LARGE_INTEGER v114; // rax
  LARGE_INTEGER v115; // rbx
  unsigned int v116; // r8d
  unsigned int v117; // edx
  __int64 v118; // rcx
  unsigned __int64 v119; // rax
  __int64 v120; // r9
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v122; // rdx
  unsigned int LowPart; // ecx
  unsigned __int64 v124; // r8
  char v125; // r9
  __int64 v126; // r9
  unsigned int v127; // r11d
  unsigned int v128; // edx
  __int64 v129; // rcx
  unsigned __int64 v130; // r9
  __int64 v131; // r8
  int v132; // eax
  int v133; // eax
  int v134; // eax
  unsigned __int64 v135; // r8
  signed __int32 v136; // eax
  signed __int32 v137; // ett
  __int64 v138; // rax
  unsigned __int8 v139; // bl
  __int64 v140; // rdi
  _QWORD *v141; // rcx
  __int64 v142; // rdi
  __int64 v143; // rcx
  __int64 v144; // rdx
  _DWORD *v145; // rax
  void *v146; // rdx
  __int64 v147; // rdx
  unsigned __int8 v148; // r11
  char v149; // bl
  char v150; // r13
  char v151; // r14
  unsigned __int8 *v152; // rdi
  unsigned int v153; // esi
  unsigned int v154; // r10d
  __int64 v155; // rcx
  unsigned __int64 v156; // r8
  __int64 v157; // r9
  int v158; // ecx
  int v159; // ecx
  char v160; // r10
  unsigned __int64 v161; // rcx
  char *v162; // rcx
  char v163; // r8
  char *v164; // rax
  unsigned int v165; // eax
  unsigned __int64 v166; // r8
  struct _KDPC *v167; // rcx
  int v169; // [rsp+78h] [rbp-98h]
  char v170; // [rsp+90h] [rbp-80h]
  char v172; // [rsp+91h] [rbp-7Fh]
  __int64 v173; // [rsp+98h] [rbp-78h]
  int v174; // [rsp+98h] [rbp-78h]
  int v176; // [rsp+A8h] [rbp-68h]
  int v177; // [rsp+ACh] [rbp-64h]
  __int64 v178; // [rsp+B0h] [rbp-60h]
  int v179; // [rsp+B8h] [rbp-58h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+C0h] [rbp-50h] BYREF
  union _LARGE_INTEGER v181; // [rsp+C8h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+D0h] [rbp-40h] BYREF
  __int128 v183; // [rsp+E8h] [rbp-28h] BYREF
  __int128 v184; // [rsp+F8h] [rbp-18h] BYREF

  v4 = *(_QWORD *)(a2 + 184);
  v5 = 0LL;
  v6 = *(_QWORD *)(a1 + 64);
  PerformanceFrequency.QuadPart = 0LL;
  v8 = 0LL;
  v9 = *(_QWORD *)(v4 + 8);
  v10 = *(_QWORD *)(v6 + 24);
  *(_QWORD *)&v183 = a3;
  *(_BYTE *)(v9 + 3) = 0;
  v177 = 0;
  v179 = 0;
  v178 = 0LL;
  v170 = 0;
  if ( *(int *)(v10 + 4120) <= 0 && ExQueryDepthSList((PSLIST_HEADER)(v10 + 1104)) )
  {
    if ( _InterlockedIncrement((volatile signed __int32 *)(v10 + 4120)) == 1 )
      RaidProcessDeferredItemsWorker(v10 + 1008, *(_QWORD *)(v10 + 8), a4);
    _InterlockedDecrement((volatile signed __int32 *)(v10 + 4120));
  }
  v11 = *(_BYTE *)(v9 + 2);
  if ( v11 != 40 )
  {
    v176 = *(_DWORD *)(v9 + 12);
    v170 = *(_BYTE *)(v9 + 72);
    v173 = *(_QWORD *)(v9 + 40);
    if ( v173 )
      *(_QWORD *)(v9 + 40) = 0LL;
    goto LABEL_28;
  }
  v173 = *(_QWORD *)(v9 + 104);
  v178 = v9;
  v176 = *(_DWORD *)(v9 + 24);
  if ( *(_DWORD *)(v9 + 20) )
    goto LABEL_28;
  v12 = *(_DWORD *)(v9 + 56);
  v13 = 0;
  if ( !v12 )
    goto LABEL_28;
  while ( 1 )
  {
    v14 = *(unsigned int *)(v9 + 4LL * v13 + 120);
    if ( (unsigned int)v14 < 0x80 )
      goto LABEL_20;
    v15 = *(unsigned int *)(v9 + 16);
    if ( (unsigned int)v14 >= (unsigned int)v15 )
      goto LABEL_20;
    v16 = v14 + v9;
    v17 = (unsigned int)v14;
    v18 = *(_DWORD *)(v14 + v9) - 64;
    if ( !v18 )
      break;
    v19 = v18 - 1;
    if ( !v19 )
    {
      v21 = v17 + 56;
      goto LABEL_19;
    }
    if ( v19 == 1 && v17 + 40 <= v15 )
    {
      if ( !*(_DWORD *)(v16 + 12) )
        goto LABEL_28;
      v20 = (char *)(v16 + 32);
      goto LABEL_24;
    }
LABEL_20:
    if ( ++v13 >= v12 )
      goto LABEL_28;
  }
  v21 = v17 + 40;
LABEL_19:
  if ( v21 > v15 )
    goto LABEL_20;
  if ( !*(_BYTE *)(v16 + 10) )
    goto LABEL_28;
  v20 = (char *)(v16 + 24);
LABEL_24:
  if ( v20 )
    v170 = *v20;
LABEL_28:
  if ( (*(_BYTE *)(a2 + 142) & 0x20) != 0 )
  {
    if ( v11 == 40 )
    {
      v22 = *(_QWORD **)(v9 + 96);
      v178 = v9;
      *(_QWORD *)(v9 + 96) = v22[2];
    }
    else
    {
      v22 = *(_QWORD **)(v9 + 48);
      *(_QWORD *)(v9 + 48) = v22[2];
    }
    if ( v22[1] != -1LL )
      v8 = KeQueryUnbiasedInterruptTime() + (unsigned int)(5000000 * *(_DWORD *)(v6 + 3392)) - v22[1];
    ExFreePoolWithTag(v22, 0x54436152u);
  }
  if ( (*(_BYTE *)(v6 + 506) & 2) != 0 && RaidIsUnresponsiveBlockedCmd(v9) )
  {
    v23 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
    v24 = *(_DWORD *)(v23 + *(_QWORD *)(v6 + 40));
    if ( (v24 & 1) != 0 )
    {
LABEL_40:
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 1032), 0xFFFFFFFF) == 1 )
        KeSetEvent((PRKEVENT)(v6 + 520), 0, 0);
    }
    else
    {
      while ( 1 )
      {
        v25 = v24;
        v24 = _InterlockedCompareExchange((volatile signed __int32 *)(v23 + *(_QWORD *)(v6 + 40)), v24 - 2, v24);
        if ( v25 == v24 )
          break;
        if ( (v24 & 1) != 0 )
          goto LABEL_40;
      }
    }
    v26 = *(_BYTE *)(v9 + 3);
    if ( *(_BYTE *)(v9 + 2) == 40 )
    {
      v27 = ((v26 >> 7) & 0x80) + 56;
    }
    else
    {
      v28 = 56;
      if ( v26 < 0 )
        v28 = -72;
      v27 = v28;
    }
    v29 = -1073740534;
    *(_BYTE *)(v9 + 3) = v27;
    v174 = -1073740534;
    _InterlockedIncrement64((volatile signed __int64 *)(v6 + 2232));
    goto LABEL_132;
  }
  if ( *(_DWORD *)v10 != 1094997074 || (*(_BYTE *)(v10 + 111) & 4) == 0 )
  {
    CurrentNodeNumber = KeGetCurrentNodeNumber();
    v31 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(v6 + 576) + ((unsigned __int64)CurrentNodeNumber << 6)));
    if ( !v31 )
    {
      v32 = 0;
      v33 = KeQueryHighestNodeNumber() + 1;
      while ( 1 )
      {
        v34 = 0;
        if ( v33 )
          break;
LABEL_55:
        if ( ++v32 == 10 )
        {
          v179 = 1;
          *(_DWORD *)v183 = -1;
          goto LABEL_58;
        }
      }
      while ( 1 )
      {
        v31 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(v6 + 576) + ((unsigned __int64)v34 << 6)));
        if ( v31 )
          break;
        if ( ++v34 >= v33 )
          goto LABEL_55;
      }
    }
    v179 = 1;
    *(_DWORD *)v183 = *((_DWORD *)&v31->Next + 2);
  }
LABEL_58:
  v35 = v173;
  v174 = RaidUnitClaimIrp(v6, a2, v173);
  v29 = v174;
  if ( v174 >= 0 )
  {
    v177 = 1;
    if ( !*(_DWORD *)(*(_QWORD *)(v6 + 24) + 2076LL) && v170 != 18 && v170 != -96 )
    {
      *(_BYTE *)(v9 + 3) = 37;
      v29 = RaidSrbStatusToNtStatus(37);
      v174 = v29;
      goto LABEL_132;
    }
    if ( FeatureFixKcsanRacyAccessV2 )
      v41 = (*(_DWORD *)(v6 + 504) & 0x8000) != 0;
    else
      v41 = *(_BYTE *)(v6 + 505) >> 7;
    if ( v41 && *(_DWORD *)(v6 + 548) != 1 && RaidSrbIsPowerRequired(v6, v9) && (v176 & 0x100000) != 0 )
    {
      v29 = -1073741823;
      *(_BYTE *)(v9 + 3) = 36;
      v174 = -1073741823;
      goto LABEL_132;
    }
    v42 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
    if ( *(_BYTE *)(v42 + 2) == 40 )
      v43 = *(_QWORD *)(v42 + 96);
    else
      v43 = *(_QWORD *)(v42 + 48);
    *(_QWORD *)(v43 + 768) = v35;
    *(_QWORD *)(v43 + 656) = RaidUnitCompleteRequest;
    if ( v8
      || *(_BYTE *)(v9 + 2) != 40
      || (v44 = *(unsigned int *)(v9 + 4), v178 = v9, !(_DWORD)v44) && !*(_DWORD *)(v9 + 28) )
    {
LABEL_96:
      *(_QWORD *)(v43 + 688) = v8;
      if ( v8 < DeviceQueueIoWaitThreshold )
      {
        v48 = _InterlockedExchange64((volatile __int64 *)(v6 + 2360), 0LL);
        if ( !v48 )
          goto LABEL_103;
        v49 = "End";
      }
      else
      {
        v48 = _InterlockedIncrement64((volatile signed __int64 *)(v6 + 2360));
        if ( v48 != 1 )
          goto LABEL_103;
        v49 = "Start";
      }
      if ( (byte_140171466 & 2) != 0 )
        McTemplateK0zqjuuujssstsxx_EtwWriteTransfer(
          v6 + 177,
          v6 + 168,
          v6 + 2104,
          *(const wchar_t **)(*(_QWORD *)(v6 + 24) + 4720LL),
          *(_DWORD *)(*(_QWORD *)(v6 + 24) + 56LL),
          *(_QWORD *)(v6 + 24) + 5064LL,
          *(_BYTE *)(v6 + 104),
          *(_BYTE *)(v6 + 105),
          *(_BYTE *)(v6 + 106),
          v6 + 2104,
          (const char *)(v6 + 168),
          (const char *)(v6 + 177),
          (const char *)(v6 + 242),
          *(_BYTE *)(v6 + 506) & 1,
          v49,
          v169,
          v48);
LABEL_103:
      if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline(v37, v36) )
      {
        v55 = *(_QWORD *)(v6 + 3600);
        v56 = 0;
        if ( v55 && *(_QWORD *)(v55 + 104) )
        {
          v52 = RaidAcquireNvmeIceKeyResources(v6, v43);
          v56 = 1;
        }
        else
        {
          v57 = *(_QWORD *)(v6 + 24);
          if ( !*(_QWORD *)(v57 + 5616) )
            goto LABEL_133;
          v52 = RaidAdapterAcquireCryptoKeyResources(v57, v43);
        }
        v174 = v52;
        v29 = v52;
        if ( v52 == 259 )
          return v52;
        if ( v52 < 0 )
        {
          if ( *(_BYTE *)(v9 + 2) == 40 )
          {
            if ( v56 )
              *(_BYTE *)(v178 + 3) = RaidNtStatusToSrbStatus(v52);
            else
              *(_BYTE *)(v178 + 3) = 48;
            *(_DWORD *)(v178 + 44) = v29;
            goto LABEL_132;
          }
          if ( v56 )
            goto LABEL_116;
          goto LABEL_130;
        }
      }
      else
      {
        v51 = *(_QWORD *)(v6 + 24);
        if ( *(_QWORD *)(v51 + 5624) )
        {
          if ( (*(_BYTE *)(v51 + 112) & 0x10) != 0 )
            v52 = RaidAcquireNvmeIceKeyResources(v6, v43);
          else
            v52 = RaidAdapterAcquireCryptoKeyResources(v51, v43);
          v174 = v52;
          v29 = v52;
          if ( v52 == 259 )
            return v52;
          if ( v52 < 0 )
          {
            v53 = *(_BYTE *)(*(_QWORD *)(v6 + 24) + 112LL);
            if ( *(_BYTE *)(v9 + 2) == 40 )
            {
              if ( (v53 & 0x10) != 0 )
                *(_BYTE *)(v178 + 3) = RaidNtStatusToSrbStatus(v52);
              else
                *(_BYTE *)(v178 + 3) = 48;
              *(_DWORD *)(v178 + 44) = v29;
              goto LABEL_132;
            }
            if ( (v53 & 0x10) != 0 )
            {
LABEL_116:
              v54 = RaidNtStatusToSrbStatus(v52);
LABEL_131:
              *(_DWORD *)(v9 + 64) = v29;
              *(_BYTE *)(v9 + 3) = v54;
              goto LABEL_132;
            }
LABEL_130:
            v54 = 48;
            goto LABEL_131;
          }
        }
      }
LABEL_133:
      v59 = *(_QWORD *)(v6 + 24);
      if ( *(_BYTE *)(v59 + 4370) )
      {
        v60 = *(_QWORD *)(v43 + 168);
        if ( *(_BYTE *)(v60 + 2) == 40 )
          v61 = *(_DWORD *)(v60 + 24);
        else
          v61 = *(_DWORD *)(v60 + 12);
        if ( (*(_BYTE *)(v59 + 4371) & 4) != 0 )
        {
          v62 = (v61 & 0x40) != 0;
          if ( *(_QWORD *)(v43 + 104) )
          {
            v63 = (__int64 *)(v59 + 880);
            if ( v59 != -880 )
            {
              v64 = *v63;
              if ( *v63 )
              {
                v65 = *(_QWORD *)(v64 + 8);
                if ( v65 )
                {
                  if ( *(int *)(v59 + 908) >= 3
                    && (v66 = *(void (__fastcall **)(__int64, _QWORD, bool))(v65 + 240)) != 0LL )
                  {
                    v66(v64, *(_QWORD *)(v43 + 104), v62);
                  }
                  else
                  {
                    LOBYTE(v50) = 1;
                    KeFlushIoBuffers(*(_QWORD *)(v43 + 104), v62, v50);
                  }
                }
              }
            }
          }
          if ( *(_QWORD *)(v43 + 136) )
          {
            v67 = (__int64 *)(v59 + 880);
            if ( v59 != -880 )
            {
              v68 = *v67;
              if ( *v67 )
              {
                v69 = *(_QWORD *)(v68 + 8);
                if ( v69 )
                {
                  if ( *(int *)(v59 + 908) >= 3
                    && (v70 = *(void (__fastcall **)(__int64, _QWORD, bool))(v69 + 240)) != 0LL )
                  {
                    v70(v68, *(_QWORD *)(v43 + 136), v62);
                  }
                  else
                  {
                    LOBYTE(v50) = 1;
                    KeFlushIoBuffers(*(_QWORD *)(v43 + 136), v62, v50);
                  }
                }
              }
            }
          }
        }
        else
        {
          if ( *(_QWORD *)(v43 + 136) )
          {
            v52 = RaidAdapterScatterGatherExecuteBidirectionalRequest(*(_QWORD *)(v6 + 24), (unsigned int *)v43, v50);
LABEL_159:
            v174 = v52;
            v29 = v52;
            if ( v52 < 0 )
            {
              v58 = a2;
              goto LABEL_166;
            }
            v71 = *(_QWORD *)(v6 + 24);
            if ( *(int *)(v71 + 4120) <= 0 )
            {
              LOWORD(v52) = ExQueryDepthSList((PSLIST_HEADER)(v71 + 1104));
              if ( (_WORD)v52 )
              {
                v52 = _InterlockedIncrement((volatile signed __int32 *)(v71 + 4120));
                if ( v52 == 1 )
                  LOBYTE(v52) = RaidProcessDeferredItemsWorker(v71 + 1008, *(_QWORD *)(v71 + 8), a4);
                _InterlockedDecrement((volatile signed __int32 *)(v71 + 4120));
              }
            }
            return v52;
          }
          if ( (v61 & 0xC0) != 0 )
          {
            v52 = RaidAdapterScatterGatherExecute(*(_QWORD *)(v6 + 24), v43, v50);
            goto LABEL_159;
          }
        }
      }
      v52 = RaidAdapterPostScatterGatherExecute(v59, v43);
      goto LABEL_159;
    }
    v46 = StorEtwLoggingEnabled == 0;
    v45 = *(unsigned int *)(v9 + 28);
    *(_DWORD *)(v9 + 28) = 0;
    *(_DWORD *)(v9 + 4) = 0;
    if ( v46 )
    {
      if ( !g_StorpTraceLoggingPerformanceEnabled )
      {
        v47.QuadPart = 0LL;
        goto LABEL_92;
      }
      if ( !UseQPCTime )
        goto LABEL_90;
      v46 = g_StorpTraceLoggingPerformanceHighResolutionTimer == 0;
    }
    else
    {
      v46 = UseQPCTime == 0;
    }
    if ( !v46 )
    {
      v47 = KeQueryPerformanceCounter(&PerformanceFrequency);
LABEL_92:
      v37 = v44 | (v45 << 32);
      v8 = v47.QuadPart - v37;
      if ( UseQPCTime && (g_StorpTraceLoggingPerformanceHighResolutionTimer || StorEtwLoggingEnabled) )
      {
        v36 = 10000000 * v8 % PerformanceFrequency.QuadPart;
        v8 = 10000000 * v8 / PerformanceFrequency.QuadPart;
      }
      goto LABEL_96;
    }
LABEL_90:
    v47.QuadPart = KeQueryUnbiasedInterruptTime();
    goto LABEL_92;
  }
  v38 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
  v39 = *(_DWORD *)(v38 + *(_QWORD *)(v6 + 40));
  if ( (v39 & 1) != 0 )
  {
LABEL_62:
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 1032), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(v6 + 520), 0, 0);
  }
  else
  {
    while ( 1 )
    {
      v40 = v39;
      v39 = _InterlockedCompareExchange((volatile signed __int32 *)(v38 + *(_QWORD *)(v6 + 40)), v39 - 2, v39);
      if ( v40 == v39 )
        break;
      if ( (v39 & 1) != 0 )
        goto LABEL_62;
    }
  }
LABEL_132:
  v58 = a2;
  RaidUpdateZoneIoMetadata(v6, a2, 0LL);
LABEL_166:
  v72 = *(_QWORD *)(*(_QWORD *)(v58 + 184) + 8LL);
  if ( *(_BYTE *)(v72 + 2) == 40 )
  {
    v73 = *(unsigned int *)(v72 + 20);
    v74 = *(_DWORD *)(v72 + 24);
    v178 = *(_QWORD *)(*(_QWORD *)(v58 + 184) + 8LL);
  }
  else
  {
    v74 = *(_DWORD *)(v72 + 12);
    v73 = *(unsigned __int8 *)(v72 + 2);
  }
  v76 = 0;
  if ( (v74 & 0x102) != 0x102 && (v74 & 0x80010) == 0 )
  {
    if ( (unsigned int)v73 > 0x20 || (v75 = 0x1000D0000LL, !_bittest64(&v75, v73)) )
      v76 = 1;
  }
  if ( v179 )
  {
    v77 = *(unsigned int *)v183;
    v78 = *(_QWORD *)(v6 + 24);
    if ( *(_DWORD *)v78 != 1094997074 || (*(_BYTE *)(v78 + 111) & 4) == 0 )
    {
      HighestNodeNumber = KeQueryHighestNodeNumber();
      if ( (unsigned int)v77 / *(_DWORD *)(v6 + 648) < HighestNodeNumber + 1 )
        HighestNodeNumber = (unsigned int)v77 / *(_DWORD *)(v6 + 648);
      ExpInterlockedPushEntrySList(
        (PSLIST_HEADER)(*(_QWORD *)(v6 + 576) + ((unsigned __int64)HighestNodeNumber << 6)),
        (PSLIST_ENTRY)(*(_QWORD *)(v6 + 640) + 16 * v77));
    }
  }
  RaidDeleteDeviceQueueEntry(v6 + 720, v76);
  if ( (*(_BYTE *)(v72 + 3) & 0x3F) == 0 )
  {
    v80 = RaidNtStatusToSrbStatus(v29);
    *(_BYTE *)(v72 + 3) = v80;
    if ( (v80 & 0x3F) == 0x30 )
    {
      if ( *(_BYTE *)(v72 + 2) == 40 )
        *(_DWORD *)(v178 + 44) = -1073741670;
      else
        *(_DWORD *)(v72 + 64) = -1073741670;
    }
  }
  if ( !v177 )
    goto LABEL_295;
  v81 = *(_QWORD *)(*(_QWORD *)(v58 + 184) + 8LL);
  if ( *(_BYTE *)(v81 + 2) == 40 )
    v82 = *(_QWORD *)(v81 + 96);
  else
    v82 = *(_QWORD *)(v81 + 48);
  v83 = *(_QWORD *)(v82 + 224);
  if ( (*(_BYTE *)(v82 + 16) & 2) == 0 )
    goto LABEL_225;
  v84 = *(int **)(v83 + 560);
  v85 = v82 + 48;
  v86 = &v84[16 * *(unsigned int *)(v82 + 84) + 16];
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentIrql = KeGetCurrentIrql();
  v88 = (KSPIN_LOCK *)(v86 + 10);
  if ( CurrentIrql != 2 )
  {
    KeAcquireInStackQueuedSpinLock(v88, &LockHandle);
    v97 = *(_BYTE *)(v82 + 16);
    v98 = *v84;
    if ( (v97 & 2) != 0 )
    {
      *(_BYTE *)(v82 + 16) = v97 & 0xFD;
      v99 = *(_QWORD *)v85;
      v100 = *(_QWORD *)v86;
      if ( *(_QWORD *)(*(_QWORD *)v85 + 8LL) != v85 )
        goto LABEL_230;
      v101 = *(_QWORD **)(v82 + 56);
      if ( *v101 != v85 )
        goto LABEL_230;
      *v101 = v99;
      *(_QWORD *)(v99 + 8) = v101;
      if ( (*(_DWORD *)(v82 + 96) & 1) != 0 )
      {
        v102 = v82 + 64;
        if ( *((_QWORD *)v86 + 4) == v82 + 64 )
          *((_QWORD *)v86 + 4) = *(_QWORD *)v102;
        v103 = *(_QWORD *)v102;
        if ( *(_QWORD *)(*(_QWORD *)v102 + 8LL) != v102 )
          goto LABEL_230;
        v104 = *(_QWORD **)(v82 + 72);
        if ( *v104 != v102 )
          goto LABEL_230;
        *v104 = v103;
        *(_QWORD *)(v103 + 8) = v104;
        *(_DWORD *)(v82 + 96) &= ~1u;
      }
      if ( (v98 & 4) == 0 && v100 == v85 )
      {
        if ( *(int **)v86 == v86 )
          v86[12] = -1;
        else
          v86[12] = *(_DWORD *)(*(_QWORD *)v86 + 32LL);
      }
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    goto LABEL_221;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v88, &LockHandle);
  v89 = *(_BYTE *)(v82 + 16);
  v90 = *v84;
  if ( (v89 & 2) == 0 )
    goto LABEL_206;
  *(_BYTE *)(v82 + 16) = v89 & 0xFD;
  v91 = *(_QWORD *)v85;
  v92 = *(_QWORD *)v86;
  if ( *(_QWORD *)(*(_QWORD *)v85 + 8LL) != v85 )
    goto LABEL_230;
  v93 = *(_QWORD **)(v82 + 56);
  if ( *v93 != v85 )
    goto LABEL_230;
  *v93 = v91;
  *(_QWORD *)(v91 + 8) = v93;
  if ( (*(_DWORD *)(v82 + 96) & 1) == 0 )
    goto LABEL_201;
  v94 = v82 + 64;
  if ( *((_QWORD *)v86 + 4) == v82 + 64 )
    *((_QWORD *)v86 + 4) = *(_QWORD *)v94;
  v95 = *(_QWORD *)v94;
  if ( *(_QWORD *)(*(_QWORD *)v94 + 8LL) != v94 || (v96 = *(_QWORD **)(v82 + 72), *v96 != v94) )
LABEL_230:
    __fastfail(3u);
  *v96 = v95;
  *(_QWORD *)(v95 + 8) = v96;
  *(_DWORD *)(v82 + 96) &= ~1u;
LABEL_201:
  if ( (v90 & 4) == 0 && v92 == v85 )
  {
    if ( *(int **)v86 == v86 )
      v86[12] = -1;
    else
      v86[12] = *(_DWORD *)(*(_QWORD *)v86 + 32LL);
  }
LABEL_206:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
LABEL_221:
  if ( StorEtwLoggingEnabled )
  {
    v184 = 0LL;
    IoGetActivityIdIrp(a2, &v184);
    if ( byte_140171462 < 0 )
      McTemplateK0dud_EtwWriteTransfer(v106, v105, (__int64)&v184, v107, 4);
  }
  v5 = 0LL;
LABEL_225:
  StorUnmapSenseInfo(v82, *(_QWORD *)(*(_QWORD *)(v83 + 24) + 8LL));
  if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline(v109, v108) )
  {
    v112 = *(_QWORD *)(v83 + 3600);
    if ( v112 && *(_QWORD *)(v112 + 104) )
    {
LABEL_228:
      RaidReleaseNvmeIceKeyResources(v83, v82);
    }
    else
    {
      v110 = *(_QWORD *)(v83 + 24);
      if ( *(_QWORD *)(v110 + 5616) )
      {
        v111 = v82;
        goto LABEL_235;
      }
    }
  }
  else
  {
    v110 = *(_QWORD *)(v83 + 24);
    if ( *(_QWORD *)(v110 + 5624) )
    {
      v111 = v82;
      if ( (*(_BYTE *)(v110 + 112) & 0x10) != 0 )
        goto LABEL_228;
LABEL_235:
      RaidAdapterReleaseCryptoKeyResources(v110, v111);
    }
  }
  if ( *(_BYTE *)(v81 + 2) == 40 )
  {
    if ( (*(_BYTE *)(v82 + 16) & 0x40) != 0 )
    {
      v113 = *(_QWORD *)(v82 + 752);
      v181.QuadPart = 1LL;
      if ( v113 )
      {
        if ( UseQPCTime )
          v114 = KeQueryPerformanceCounter(&v181);
        else
          v114.QuadPart = KeQueryUnbiasedInterruptTime();
        v115 = v114;
        *(_BYTE *)(v113 + 3) = *(_BYTE *)(v81 + 3);
        *(_DWORD *)(v113 + 12) = *(_DWORD *)(v81 + 24);
        if ( (*(_DWORD *)(v81 + 24) & 0x40) != 0 )
          *(_DWORD *)(v113 + 16) = *(_DWORD *)(v81 + 60);
        if ( *(_BYTE *)(v81 + 3) == 48 )
          *(_DWORD *)(v113 + 64) = *(_DWORD *)(v81 + 44);
        if ( !*(_DWORD *)(v81 + 20) )
        {
          v116 = *(_DWORD *)(v81 + 56);
          v117 = 0;
          if ( v116 )
          {
            while ( 1 )
            {
              v118 = *(unsigned int *)(v81 + 4LL * v117 + 120);
              if ( (unsigned int)v118 >= 0x80 )
              {
                v119 = *(unsigned int *)(v81 + 16);
                if ( (unsigned int)v118 <= (unsigned int)v119 )
                {
                  v120 = v118 + v81;
                  if ( *(_DWORD *)(v118 + v81) == 64 && v118 + 40 <= v119 )
                    break;
                }
              }
              if ( ++v117 >= v116 )
                goto LABEL_253;
            }
            *(_BYTE *)(v113 + 4) = *(_BYTE *)(v120 + 8);
            *(_QWORD *)(v113 + 32) = *(_QWORD *)(v120 + 16);
            *(_BYTE *)(v113 + 11) = *(_BYTE *)(v120 + 9);
          }
          else
          {
LABEL_253:
            *(_BYTE *)(v113 + 3) = 48;
            *(_DWORD *)(v113 + 64) = -1073741811;
          }
        }
        if ( UseQPCTime )
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
        else
          PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
        if ( PerformanceCounter.QuadPart <= 0 || PerformanceCounter.QuadPart >= v115.QuadPart )
          v124 = PerformanceCounter.QuadPart - v115.QuadPart;
        else
          v124 = PerformanceCounter.QuadPart - v115.QuadPart - 1;
        if ( UseQPCTime )
        {
          LowPart = v181.LowPart;
          v125 = 0;
          if ( v181.QuadPart && v124 )
          {
            v126 = v124 / v181.QuadPart;
            v124 = 1000 * (v124 % v181.QuadPart);
            v122.QuadPart = 10000 * (v124 % v181.QuadPart) % v181.QuadPart;
            v125 = 10000 * (v124 % v181.QuadPart) / v181.QuadPart + 16 * (-24 * v126 + v124 / v181.QuadPart);
          }
        }
        else
        {
          v125 = v124;
        }
        if ( (Microsoft_Windows_StorPortEnableBits & 0x40) != 0 )
          McTemplateK0zx_EtwWriteTransfer(
            LowPart,
            v122.LowPart,
            v124,
            (unsigned int)L"Translate STORAGE_REQUEST_BLOCK result",
            v125);
      }
      *(_QWORD *)(*(_QWORD *)(v82 + 752) + 48LL) = *(_QWORD *)(v82 + 176);
      *(_QWORD *)(*(_QWORD *)(v82 + 752) + 24LL) = *(_QWORD *)(v82 + 184);
      *(_QWORD *)(*(_QWORD *)(v82 + 752) + 56LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)(v82 + 752) + 40LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL) = *(_QWORD *)(v82 + 752);
      *(_BYTE *)(v82 + 16) &= ~0x40u;
      *(_QWORD *)(v82 + 752) = 0LL;
    }
    else
    {
      *(_QWORD *)(v81 + 96) = 0LL;
      *(_QWORD *)(v81 + 64) = *(_QWORD *)(v82 + 184);
      *(_QWORD *)(v81 + 104) = 0LL;
      if ( *(_QWORD *)(v82 + 192) )
      {
        if ( (*(_BYTE *)(v81 + 24) & 0xC0) == 0xC0 )
        {
          v127 = *(_DWORD *)(v81 + 56);
          v128 = 0;
          if ( v127 )
          {
            while ( 1 )
            {
              v129 = *(unsigned int *)(v81 + 4LL * v128 + 120);
              if ( (unsigned int)v129 >= 0x80 )
              {
                v130 = *(unsigned int *)(v81 + 16);
                if ( (unsigned int)v129 <= (unsigned int)v130 )
                {
                  v131 = v129 + v81;
                  if ( *(_DWORD *)(v129 + v81) == 1 && v129 + 24 <= v130 )
                    break;
                }
              }
              if ( ++v128 >= v127 )
                goto LABEL_281;
            }
            if ( v131 )
              *(_QWORD *)(v131 + 16) = *(_QWORD *)(v82 + 192);
          }
        }
      }
LABEL_281:
      v132 = *(_DWORD *)(v81 + 24);
      if ( (v132 & 0x2000000) != 0 )
        *(_DWORD *)(v81 + 24) = v132 & 0xFDFFFFFF;
    }
  }
  else
  {
    *(_QWORD *)(v81 + 48) = *(_QWORD *)(v82 + 176);
    *(_QWORD *)(v81 + 24) = *(_QWORD *)(v82 + 184);
    v133 = *(_DWORD *)(v81 + 12);
    *(_QWORD *)(v81 + 56) = 0LL;
    *(_QWORD *)(v81 + 40) = 0LL;
    if ( (v133 & 0x2000000) != 0 )
      *(_DWORD *)(v81 + 12) = v133 & 0xFDFFFFFF;
  }
  RaidXrbDeallocateResources(v82, 1);
  if ( *(_BYTE *)(v81 + 2) == 40 )
    v134 = *(_DWORD *)(v81 + 24);
  else
    v134 = *(_DWORD *)(v81 + 12);
  if ( (v134 & 0x4000) == 0 )
  {
    v135 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
    v136 = *(_DWORD *)(v135 + *(_QWORD *)(v83 + 40));
    if ( (v136 & 1) != 0 )
    {
LABEL_292:
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v83 + 1032), 0xFFFFFFFF) == 1 )
        KeSetEvent((PRKEVENT)(v83 + 520), 0, 0);
    }
    else
    {
      while ( 1 )
      {
        v137 = v136;
        v136 = _InterlockedCompareExchange((volatile signed __int32 *)(v135 + *(_QWORD *)(v83 + 40)), v136 - 2, v136);
        if ( v137 == v136 )
          break;
        if ( (v136 & 1) != 0 )
          goto LABEL_292;
      }
    }
  }
  v29 = v174;
LABEL_295:
  v172 = StorRemoveIoGatewayItem(v183, 0LL, 0LL);
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      22LL,
      &WPP_e6323699744f33baefc587a6e43a33df_Traceguids,
      *(_QWORD *)(v6 + 8),
      a2,
      *(_DWORD *)(a2 + 48));
  }
  v138 = *(_QWORD *)(a2 + 184);
  v139 = *(_BYTE *)(v138 + 16) & 3;
  *(_QWORD *)(v138 + 16) = 0LL;
  v140 = *(_QWORD *)(v6 + 24);
  if ( (v139 & 1) != 0
    && (*(_DWORD *)(v6 + 504) & 0x8000) != 0
    && ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v6 + 1864)) )
  {
    PoFxIdleComponent(**(_QWORD **)(v6 + 1872), 0LL, 0LL);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v6 + 1864));
  }
  if ( v139 >= 2u )
  {
    v141 = *(_QWORD **)(v140 + 4960);
    if ( v141 )
      PoFxIdleComponent(*v141, 0LL, 0LL);
  }
  v46 = StorEtwLoggingEnabled == 0;
  v142 = a2;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v29;
  if ( v46 )
    goto LABEL_363;
  v183 = 0LL;
  IoGetActivityIdIrp(a2, &v183);
  v144 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v144 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_363;
    v146 = &EventNonReadWriteRequestComplete;
    goto LABEL_362;
  }
  if ( *(_BYTE *)v144 != 15 )
  {
    if ( *(_BYTE *)v144 != 27 )
      goto LABEL_363;
    if ( *(_BYTE *)(v144 + 1) == 7 && !*(_DWORD *)(v144 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v145 = *(_DWORD **)(a2 + 56);
        if ( v145 )
          LODWORD(v5) = *v145;
        McTemplateK0pqd_EtwWriteTransfer(v143, v144, (unsigned int)&v183, a2, (char)v5, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_363;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_363;
    v146 = &EventPnpRequestComplete;
LABEL_362:
    McTemplateK0pd_EtwWriteTransfer(v143, v146, &v183, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_363;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_363;
  v147 = *(_QWORD *)(v144 + 8);
  v148 = 0;
  v149 = 0;
  v150 = 0;
  v151 = 0;
  if ( *(_BYTE *)(v147 + 2) == 40 )
  {
    v152 = 0LL;
    if ( *(_DWORD *)(v147 + 20) )
      goto LABEL_363;
    v153 = *(_DWORD *)(v147 + 56);
    v154 = 0;
    if ( !v153 )
    {
LABEL_335:
      v160 = 0;
      goto LABEL_336;
    }
    while ( 2 )
    {
      v155 = *(unsigned int *)(v147 + 4LL * v154 + 120);
      if ( (unsigned int)v155 >= 0x80 )
      {
        v156 = *(unsigned int *)(v147 + 16);
        if ( (unsigned int)v155 < (unsigned int)v156 )
        {
          v157 = (unsigned int)v155;
          v158 = *(_DWORD *)(v147 + v155) - 64;
          if ( v158 )
          {
            v159 = v158 - 1;
            if ( v159 )
            {
              if ( v159 == 1 && v157 + 40 <= v156 )
              {
                if ( *(_DWORD *)(v147 + v157 + 12) )
                  v152 = (unsigned __int8 *)(v157 + v147 + 32);
                v160 = *(_BYTE *)(v147 + v157 + 8);
                v5 = *(_BYTE **)(v147 + v157 + 24);
                v148 = *(_BYTE *)(v147 + v157 + 9);
                goto LABEL_336;
              }
              goto LABEL_334;
            }
            v161 = v157 + 56;
          }
          else
          {
            v161 = v157 + 40;
          }
          if ( v161 <= v156 )
          {
            if ( *(_BYTE *)(v147 + v157 + 10) )
              v152 = (unsigned __int8 *)(v157 + v147 + 24);
            v160 = *(_BYTE *)(v147 + v157 + 8);
            v5 = *(_BYTE **)(v147 + v157 + 16);
            v148 = *(_BYTE *)(v147 + v157 + 9);
LABEL_336:
            if ( v152 )
            {
              LODWORD(v162) = *v152;
              v142 = a2;
              goto LABEL_342;
            }
            goto LABEL_363;
          }
        }
      }
LABEL_334:
      if ( ++v154 >= v153 )
        goto LABEL_335;
      continue;
    }
  }
  LODWORD(v162) = *(unsigned __int8 *)(v147 + 72);
  v5 = *(_BYTE **)(v147 + 32);
  v148 = *(_BYTE *)(v147 + 11);
  v160 = *(_BYTE *)(v147 + 4);
  if ( *(_BYTE *)(v147 + 2) )
    goto LABEL_363;
LABEL_342:
  LOBYTE(v162) = (_BYTE)v162 - 8;
  if ( ((unsigned __int8)v162 & 0x5D) == 0 )
  {
    if ( *(_BYTE *)(v147 + 3) == 1 || !v5 || !v148 )
      goto LABEL_358;
    v163 = 0;
    v162 = &v5[v148];
    v164 = v5 + 8;
    if ( (unsigned __int8)((*v5 & 0x7F) - 114) <= 1u )
    {
      if ( v164 <= v162 )
      {
        v150 = v5[2];
        v149 = v5[1] & 0xF;
        v151 = v5[3];
        goto LABEL_356;
      }
    }
    else if ( v164 <= v162 )
    {
      v149 = v5[2] & 0xF;
      v165 = v148;
      if ( (unsigned int)(unsigned __int8)v5[7] + 8 <= v148 )
        v165 = (unsigned __int8)v5[7] + 8;
      v162 = v5 + 13;
      v166 = (unsigned __int64)&v5[v165];
      if ( (unsigned __int64)(v5 + 13) <= v166 )
        v150 = v5[12];
      if ( (unsigned __int64)(v5 + 14) <= v166 )
        v151 = *v162;
LABEL_356:
      v163 = 1;
    }
    if ( !v163 )
    {
LABEL_358:
      v151 = 0;
      v150 = 0;
      v149 = 0;
    }
    McTemplateK0pduuuuup_EtwWriteTransfer(
      (_DWORD)v162,
      v147,
      (unsigned int)&v183,
      v142,
      *(_DWORD *)(v142 + 48),
      *(_BYTE *)(v147 + 3),
      v160,
      v149,
      v150,
      v151,
      v142);
  }
LABEL_363:
  IofCompleteRequest((PIRP)a2, 0);
  if ( v172 )
    v167 = (struct _KDPC *)(*(_QWORD *)(v6 + 24) + 1712LL);
  else
    v167 = (struct _KDPC *)(v6 + 1312);
  LOBYTE(v52) = KeInsertQueueDpc(v167, 0LL, 0LL);
  return v52;
}
