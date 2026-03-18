/*
 * XREFs of ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1400F71BC
 * Callers:
 *     ?NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1400418F0 (-NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     ?RestoreFromPurge@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400BC7A8 (-RestoreFromPurge@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1400D339C (-VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400E2548 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     VidSchCreateHwQueue @ 0x1400224D0 (VidSchCreateHwQueue.c)
 *     ?IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ @ 0x140034DC0 (-IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x140037628 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     VidSchRecommitSchedulingLogs @ 0x140039964 (VidSchRecommitSchedulingLogs.c)
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x140039AF0 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
 *     ?EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z @ 0x140040150 (-EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z.c)
 *     ??0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@111K@Z @ 0x14004C118 (--0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUA.c)
 *     memset @ 0x140056340 (memset.c)
 *     ?RecommitSystemFenceGpuVA@VIDMM_GLOBAL@@QEAAJI@Z @ 0x140098074 (-RecommitSystemFenceGpuVA@VIDMM_GLOBAL@@QEAAJI@Z.c)
 *     ?MapPagingQueueGpuVAs@VIDMM_DEVICE@@QEAAJI@Z @ 0x1400989EC (-MapPagingQueueGpuVAs@VIDMM_DEVICE@@QEAAJI@Z.c)
 *     ??2VIDMM_MAPPED_VA_RANGE@@SAPEAX_K@Z @ 0x1400997A0 (--2VIDMM_MAPPED_VA_RANGE@@SAPEAX_K@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N6@Z @ 0x14009AF84 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?QueryPagingProcessInfo@VIDMM_GLOBAL@@QEAAXPEA_KPEA_N@Z @ 0x14009B2FC (-QueryPagingProcessInfo@VIDMM_GLOBAL@@QEAAXPEA_KPEA_N@Z.c)
 *     VidSchGetSchedulingLogSize @ 0x1400A7E8C (VidSchGetSchedulingLogSize.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1400A8F40 (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DXGK_ADL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_NW4VIDMM_PAGESIZEUSAGE@@1@Z @ 0x1400ADD10 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DX.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1400BC21C (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1400BCAA4 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?VidMmiInitializeAdlForPfnArray@@YAXPEAU_DXGK_ADL@@PEB_KI_K@Z @ 0x1400F7C78 (-VidMmiInitializeAdlForPfnArray@@YAXPEAU_DXGK_ADL@@PEB_KI_K@Z.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400F7E30 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z.c)
 *     VidSchSetPagingNodePageDirectory @ 0x1400F7EB4 (VidSchSetPagingNodePageDirectory.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1400F7FC4 (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1400F94DC (-MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STOR.c)
 *     VidSchSetHwQueueProgressFenceObject @ 0x140103BB0 (VidSchSetHwQueueProgressFenceObject.c)
 */

__int64 __fastcall VIDMM_GLOBAL::InitPagingProcessVaSpace(VIDMM_GLOBAL *this, unsigned int a2, char a3)
{
  __int64 v3; // r15
  __int64 v5; // rdi
  char v6; // dl
  int HwQueue; // esi
  __int64 v8; // r13
  VIDMM_MAPPED_VA_RANGE *v9; // r12
  __int64 v10; // rcx
  PVOID v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned int v15; // edx
  unsigned __int64 v16; // r8
  int v17; // eax
  _QWORD **v18; // rcx
  _QWORD *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rsi
  unsigned __int64 LogicalAddress; // rdi
  struct _MDL *FullMDL; // rax
  __int64 v24; // rdi
  unsigned int v25; // r10d
  VIDMM_PAGE_TABLE_BASE **v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // r8
  int v29; // r10d
  int v30; // r9d
  __int64 v31; // rax
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rdi
  unsigned __int64 v41; // rdx
  __int64 v42; // rdi
  unsigned __int64 v43; // rdi
  unsigned __int64 v44; // r12
  __int64 v45; // rax
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rdi
  int v48; // eax
  __int64 *v49; // r9
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rcx
  int v53; // eax
  unsigned __int64 v54; // [rsp+50h] [rbp-B0h]
  struct VIDMM_ALLOC *v55; // [rsp+80h] [rbp-80h] BYREF
  struct VIDMM_ALLOC *v56; // [rsp+88h] [rbp-78h] BYREF
  _QWORD *v57; // [rsp+90h] [rbp-70h]
  struct VIDMM_ALLOC *v58; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v59; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v60; // [rsp+A8h] [rbp-58h]
  __int64 v61; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v62; // [rsp+B8h] [rbp-48h]
  __int64 v63; // [rsp+C0h] [rbp-40h]
  __int128 v64; // [rsp+C8h] [rbp-38h] BYREF
  _OWORD v65[3]; // [rsp+D8h] [rbp-28h] BYREF
  _DWORD v66[36]; // [rsp+110h] [rbp+10h] BYREF
  bool v67; // [rsp+1B0h] [rbp+B0h] BYREF
  unsigned int v68; // [rsp+1C8h] [rbp+C8h]

  v3 = a2;
  v5 = *(_QWORD *)(*((_QWORD *)this + 5029) + 8LL * a2);
  v60 = v5;
  v6 = *(_BYTE *)(v5 + 476);
  if ( (v6 & 0x60) != 0x60 )
  {
    if ( *(_BYTE *)(*((_QWORD *)this + 3) + 3039LL) && (v6 & 1) != 0 )
      goto LABEL_49;
    if ( *(_DWORD *)(v5 + 464) != 1 && !*(_BYTE *)(*((_QWORD *)this + 2) + 1880LL) )
      return 0LL;
  }
  if ( (v6 & 1) == 0 )
    goto LABEL_7;
LABEL_49:
  if ( (*(_BYTE *)(v5 + 477) & 1) == 0 )
    return 0LL;
  if ( (unsigned int)(dword_1400814C8 - 1) <= 0x3D )
  {
LABEL_7:
    HwQueue = 0;
    if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)this + 8LL) )
    {
      *((_BYTE *)this + 40940) = 1;
      v8 = *((_QWORD *)this + v3 + 5052);
      if ( (*(_BYTE *)(v5 + 476) & 1) == 0 )
        goto LABEL_9;
      if ( a3 )
        CVirtualAddressAllocator::EvictRootPageTable(*((CVirtualAddressAllocator **)this + v3 + 5052), v3, 0);
      if ( *((_QWORD *)this + 5119) )
        goto LABEL_9;
      v59 = 0LL;
      v67 = 0;
      VIDMM_GLOBAL::QueryPagingProcessInfo(this, &v59, &v67);
      v38 = *(unsigned int *)(v5 + 32);
      if ( (_DWORD)v38 )
      {
        v43 = v38 << 20;
      }
      else
      {
        v39 = *((_QWORD *)this + 2);
        v40 = 0x800000LL;
        if ( *(_BYTE *)(v39 + 1880) )
          v40 = (unsigned int)VidSchGetSchedulingLogSize(*(_QWORD *)(v39 + 744)) + 0x800000LL;
        v41 = v40 + (v59 >> 2);
        v42 = 1LL << dword_1400814C8;
        if ( v41 < 1LL << dword_1400814C8 )
          v42 = v41;
        v43 = (v42 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
      }
      v44 = v43;
      if ( v67 )
      {
        v45 = (*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5029) + 8 * v3) + 216LL) << 12) - 1LL;
        v43 = ~v45 & (v45 + v43);
        v44 = 2 * v43;
      }
      if ( v44 <= *(_QWORD *)(v8 + 16) )
      {
        HwQueue = CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
                    (struct _KTHREAD **)v8,
                    v44,
                    v37,
                    0LL,
                    0LL,
                    v67 ? 0x10000 : 4096,
                    (unsigned __int64 *)this + 5118);
        if ( HwQueue < 0 )
        {
          WdLogSingleEntry1(1LL, v44);
          v13 = 0x40000LL;
          WdLogGlobalForLineNumber = 9155;
          goto LABEL_13;
        }
        CVirtualAddressAllocator::FreeVirtualAddressRange((struct _KTHREAD **)v8, *((_QWORD *)this + 5118));
        v46 = v43 + *((_QWORD *)this + 5118);
        *((_QWORD *)this + 5119) = v46;
        *((_QWORD *)this + 5122) = v46;
        if ( v67 )
        {
          *((_QWORD *)this + 5120) = v46;
          *((_QWORD *)this + 5121) = v46 + v43;
          *((_QWORD *)this + 5122) = v46 + v43;
        }
        v47 = v43 >> 2;
        if ( v47 > 0xFFFEFFFF )
          LODWORD(v47) = -65537;
        v48 = v47 + 0xFFFF;
        v5 = v60;
        *((_DWORD *)this + 10246) = v48 & 0xFFFF0000;
LABEL_9:
        v9 = 0LL;
        v10 = *(_QWORD *)(*((_QWORD *)this + 2) + 744LL);
        v63 = v10;
        if ( *(_BYTE *)(v10 + 55) )
        {
          v49 = (__int64 *)(*(_QWORD *)(v10 + 336) + 8 * v3);
          if ( !*v49 )
          {
            v50 = *(_QWORD *)(v10 + 328);
            memset(v65, 0, sizeof(v65));
            HwQueue = VidSchCreateHwQueue(0LL, *(_QWORD *)(v50 + 8 * v3), (__int64)v65, v49);
            if ( HwQueue < 0 )
              goto LABEL_14;
            VidSchSetHwQueueProgressFenceObject(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 744LL) + 336LL) + 8 * v3),
              *((_QWORD *)this + v3 + 740),
              0LL);
          }
        }
        LOBYTE(v68) = *(_BYTE *)(v5 + 477) & 0x10;
        if ( (*(_BYTE *)(v5 + 476) & 1) == 0 )
          goto LABEL_21;
        v11 = VIDMM_MAPPED_VA_RANGE::operator new();
        if ( !v11
          || (v9 = (VIDMM_MAPPED_VA_RANGE *)VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                                              (__int64)v11,
                                              0LL,
                                              *((_QWORD *)this + 5118),
                                              *((_QWORD *)this + 5119),
                                              v3,
                                              0LL,
                                              0LL,
                                              0,
                                              0LL,
                                              0LL,
                                              0LL,
                                              0LL,
                                              0)) == 0LL )
        {
          _InterlockedAdd(&dword_1400817E4, 1u);
          WdLogSingleEntry0(6LL);
          v13 = 262145LL;
          WdLogGlobalForLineNumber = 9244;
LABEL_13:
          DxgkLogInternalTriageEvent(v12, v13);
LABEL_14:
          *((_BYTE *)this + 40940) = 0;
          return (unsigned int)HwQueue;
        }
        v54 = *((_QWORD *)this + 5121) >> 12;
        v55 = 0LL;
        HwQueue = CVirtualAddressAllocator::CommitVirtualAddressRange(
                    v8,
                    (__int64)v9,
                    v3,
                    -1,
                    0LL,
                    (struct _DXGK_ADL *)&unk_14005AAC8,
                    0,
                    &v55,
                    0LL,
                    0,
                    v54);
        if ( HwQueue < 0 )
        {
          WdLogSingleEntry2(1LL, v8, v55);
          WdLogGlobalForLineNumber = 9271;
        }
        else if ( (_BYTE)v68
               && (*((_QWORD *)v9 + 13) = *((_QWORD *)this + 5120),
                   *((_QWORD *)v9 + 14) = *((_QWORD *)this + 5121),
                   v56 = 0LL,
                   HwQueue = CVirtualAddressAllocator::CommitVirtualAddressRange(
                               v8,
                               (__int64)v9,
                               v3,
                               -3,
                               0LL,
                               (struct _DXGK_ADL *)&unk_14005AAC8,
                               0,
                               &v56,
                               0LL,
                               0,
                               0LL),
                   HwQueue < 0) )
        {
          WdLogSingleEntry2(1LL, v8, v56);
          WdLogGlobalForLineNumber = 9296;
        }
        else
        {
          HwQueue = VIDMM_PAGE_DIRECTORY::MapPageTablesToVaSpace(
                      *(VIDMM_PAGE_DIRECTORY **)(32 * v3 + *(_QWORD *)(v8 + 120)),
                      (struct CVirtualAddressAllocator *)v8);
          if ( HwQueue >= 0 )
          {
LABEL_21:
            v15 = 0;
            v16 = (unsigned __int64)*((unsigned int *)this + v3 + 29) >> 12;
            v62 = v16;
            while ( 1 )
            {
              v68 = v15;
              if ( v15 >= 2 )
                break;
              v17 = 0;
              v18 = (_QWORD **)(*((_QWORD *)this + v3 + 79) + 80LL);
              v19 = *v18;
              while ( 1 )
              {
                v57 = v19;
                if ( v19 == v18 )
                  break;
                if ( v15 == v17 )
                  goto LABEL_27;
                v19 = (_QWORD *)*v19;
                ++v17;
              }
              v19 = 0LL;
              v57 = 0LL;
LABEL_27:
              v20 = v19[7];
              v61 = v20;
              if ( v20 )
              {
                if ( !v19[11] )
                {
                  v51 = CVirtualAddressAllocator::MapVirtualAddressRange(
                          (_QWORD *)v8,
                          v19,
                          0LL,
                          4,
                          v16 << 12,
                          0LL,
                          *((_QWORD *)this + 5118),
                          *((_QWORD *)this + 5119),
                          0x1000u,
                          (_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE)((*((_DWORD *)this + 8) < 0x6000u) | 2LL),
                          0LL,
                          v3,
                          0LL,
                          0,
                          0);
                  if ( !v51 )
                  {
                    HwQueue = -1073741823;
                    WdLogSingleEntry2(1LL, v8, v19);
                    WdLogGlobalForLineNumber = 9362;
LABEL_85:
                    DxgkLogInternalTriageEvent(v52, 0x40000LL);
                    goto LABEL_41;
                  }
                  v19[11] = *(_QWORD *)(v51 + 104);
                  v20 = v61;
                }
                v21 = *(_QWORD *)(v20 + 128);
                v64 = 0LL;
                LogicalAddress = SysMmGetLogicalAddress(*(void *const *)(v19[6] + 368LL));
                FullMDL = VidMmGetFullMDL((struct VIDMM_GLOBAL_ALLOC *)v57[6], 0LL);
                VidMmiInitializeAdlForPfnArray(
                  (struct _DXGK_ADL *)&v64,
                  (const unsigned __int64 *)&FullMDL[1],
                  FullMDL->ByteCount >> 12,
                  LogicalAddress);
                v58 = 0LL;
                HwQueue = CVirtualAddressAllocator::CommitVirtualAddressRange(
                            v8,
                            v21 - 32,
                            v3,
                            0,
                            0LL,
                            (struct _DXGK_ADL *)&v64,
                            0,
                            &v58,
                            0LL,
                            0,
                            0LL);
                if ( HwQueue < 0 )
                {
                  WdLogSingleEntry2(1LL, v8, v58);
                  WdLogGlobalForLineNumber = 9386;
                  goto LABEL_85;
                }
                v15 = v68;
                v16 = v62;
              }
              ++v15;
            }
            if ( (**(_DWORD **)(*((_QWORD *)this + 3) + 3008LL) & 0x10000000) != 0 )
            {
              HwQueue = VidSchRecommitSchedulingLogs(*(_QWORD *)(*((_QWORD *)this + 2) + 744LL), v3);
              if ( HwQueue < 0 )
              {
                WdLogSingleEntry2(1LL, *((_QWORD *)this + 2), v3);
                WdLogGlobalForLineNumber = 9399;
                goto LABEL_85;
              }
            }
            if ( !*(_BYTE *)(v63 + 55) )
              goto LABEL_34;
            if ( *((_QWORD *)this + v3 + 804) )
            {
              v53 = VIDMM_GLOBAL::RecommitSystemFenceGpuVA(this, v3);
            }
            else
            {
              HwQueue = VIDMM_GLOBAL::MapGpuVA(
                          this,
                          *((struct VIDMM_DEVICE **)this + 5049),
                          0LL,
                          (struct VIDMM_MONITORED_FENCE_STORAGE *)(*((_QWORD *)this + v3 + 740) + 64LL),
                          (unsigned __int64 *)this + v3 + 804,
                          1 << v3,
                          1);
              if ( HwQueue < 0 )
                goto LABEL_41;
              v53 = VIDMM_DEVICE::MapPagingQueueGpuVAs(*((VIDMM_DEVICE **)this + 5049), v3);
            }
            HwQueue = v53;
            if ( v53 >= 0 )
            {
LABEL_34:
              v24 = v60;
              v25 = 1;
              if ( (*(_BYTE *)(v60 + 476) & 1) != 0 )
              {
                v26 = (VIDMM_PAGE_TABLE_BASE **)(*(_QWORD *)(v8 + 120) + 32 * v3);
                if ( v26 && *v26 && VIDMM_PAGE_TABLE_BASE::IsResident(*v26) )
                {
                  v29 = *(_DWORD *)(v27 + 16);
                  v30 = *(_DWORD *)(v27 + 24);
                  v31 = *(_QWORD *)(**(_QWORD **)(v28 + 16) + 72LL);
                }
                else
                {
                  WdLogSingleEntry2(v25, v8, v3);
                  WdLogGlobalForLineNumber = 3112;
                  DxgkLogInternalTriageEvent(v32, 0x40000LL);
                  v29 = 0;
                  v31 = 0LL;
                  v30 = 0;
                }
                VidSchSetPagingNodePageDirectory(*(_QWORD *)(*((_QWORD *)this + 2) + 744LL), v3, v29, v30, v31);
              }
              *(_BYTE *)(v24 + 477) &= 0xFCu;
            }
LABEL_41:
            if ( !v9 )
              goto LABEL_14;
            goto LABEL_48;
          }
          WdLogSingleEntry1(1LL, v8);
          WdLogGlobalForLineNumber = 9306;
        }
        DxgkLogInternalTriageEvent(v34, 0x40000LL);
LABEL_48:
        VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v9, v15);
        goto LABEL_14;
      }
      *((_BYTE *)this + 40940) = 0;
      WdLogSingleEntry1(1LL, v44);
      WdLogGlobalForLineNumber = 9145;
      goto LABEL_53;
    }
    memset(&v66[2], 0, 0x50uLL);
    v66[0] = 118;
    v66[1] = v3;
    v33 = VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v66, 1);
    HwQueue = v33;
    if ( v33 < 0 )
    {
      WdLogSingleEntry1(1LL, v33);
      WdLogGlobalForLineNumber = 9051;
      DxgkLogInternalTriageEvent(v36, 0x40000LL);
      return (unsigned int)HwQueue;
    }
    return 0LL;
  }
  WdLogSingleEntry1(1LL, (unsigned int)dword_1400814C8);
  WdLogGlobalForLineNumber = 9035;
LABEL_53:
  DxgkLogInternalTriageEvent(v35, 0x40000LL);
  return 3221225485LL;
}
