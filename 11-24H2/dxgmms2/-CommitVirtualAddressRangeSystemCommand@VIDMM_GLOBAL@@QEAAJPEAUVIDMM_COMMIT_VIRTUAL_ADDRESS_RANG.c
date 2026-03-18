/*
 * XREFs of ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1401117CC
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEBU_DXGK_ADL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1400BA8FC (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_PAGING_QUE.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400E11C8 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400E2548 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140031710 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140031A2C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x140036EF0 (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x140037628 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x140039AF0 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
 *     Feature_3694358843__private_IsEnabledDeviceUsageNoInline @ 0x14004C408 (Feature_3694358843__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ResetAddressSpaceForFailure@CVirtualAddressAllocator@@QEAAXI@Z @ 0x14009B780 (-ResetAddressSpaceForFailure@CVirtualAddressAllocator@@QEAAXI@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DXGK_ADL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_NW4VIDMM_PAGESIZEUSAGE@@1@Z @ 0x1400ADD10 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DX.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1400BE360 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RAN.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1400F25E8 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 *     ?VidMmiInitializeAdlForPfnArray@@YAXPEAU_DXGK_ADL@@PEB_KI_K@Z @ 0x1400F7C78 (-VidMmiInitializeAdlForPfnArray@@YAXPEAU_DXGK_ADL@@PEB_KI_K@Z.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400F7E30 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?CleanupVadReference@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@@Z @ 0x14011175C (-CleanupVadReference@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CommitVirtualAddressRangeSystemCommand(
        VIDMM_GLOBAL *this,
        struct VIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE *a2,
        struct VIDMM_ALLOC **a3)
{
  int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int16 v8; // ax
  __int64 v9; // r8
  __int64 v10; // rdx
  int v11; // eax
  struct _DXGK_ADL *v12; // rax
  int v13; // r9d
  struct VIDMM_GLOBAL_ALLOC ***v14; // rcx
  struct VIDMM_GLOBAL_ALLOC *v15; // r14
  __int64 v16; // rdx
  unsigned __int64 LogicalAddress; // rbx
  struct _MDL *FullMDL; // rax
  int v19; // r9d
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rdx
  unsigned int v23; // r8d
  unsigned int v24; // edx
  VIDMM_GLOBAL *v25; // rcx
  __int128 v27; // [rsp+60h] [rbp-48h] BYREF
  _BYTE v28[32]; // [rsp+70h] [rbp-38h] BYREF

  *a3 = 0LL;
  v5 = 0;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v28,
    (struct _KTHREAD **)(*(_QWORD *)a2 + 56LL));
  v6 = *((_QWORD *)a2 + 4);
  if ( v6 && (!**(_QWORD **)(v6 + 16) || !**((_QWORD **)a2 + 1)) )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 20710;
    goto LABEL_28;
  }
  v7 = *((_QWORD *)a2 + 1);
  switch ( *(_DWORD *)(v7 + 72) & 0xF )
  {
    case 1:
      v14 = *(struct VIDMM_GLOBAL_ALLOC ****)(v7 + 64);
      if ( (*((_BYTE *)v14 + 28) & 3) == 2 )
      {
        v15 = **v14;
        v16 = *(_QWORD *)v15;
        v27 = 0LL;
        if ( (*(_DWORD *)(*(_QWORD *)(v16 + 64) + 104LL) & 0x1001) != 0 )
        {
          LogicalAddress = SysMmGetLogicalAddress(*((void *const *)v15 + 46));
          FullMDL = VidMmGetFullMDL(v15, 0LL);
          VidMmiInitializeAdlForPfnArray(
            (struct _DXGK_ADL *)&v27,
            (const unsigned __int64 *)&FullMDL[1],
            FullMDL->ByteCount >> 12,
            LogicalAddress);
          v19 = 0;
        }
        else
        {
          v20 = *(_QWORD *)(v16 + 72) >> 12;
          LODWORD(v27) = *(_DWORD *)(v16 + 16) >> 12;
          *((_QWORD *)&v27 + 1) = v20;
          DWORD1(v27) = 1;
          v19 = VIDMM_SEGMENT::DriverId(*(VIDMM_SEGMENT **)(v16 + 64));
        }
        v21 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                *(_QWORD *)a2,
                *((_QWORD *)a2 + 1),
                *((_BYTE *)v15 + 24) & 0x3F,
                v19,
                *(_QWORD *)(*((_QWORD *)a2 + 1) + 80LL),
                (struct _DXGK_ADL *)&v27,
                1,
                a3,
                0LL,
                0,
                0LL);
      }
      else
      {
        v21 = CVirtualAddressAllocator::UncommitVirtualAddressRange(
                *(CVirtualAddressAllocator **)a2,
                (struct VIDMM_MAPPED_VA_RANGE *)v7,
                a3,
                1);
      }
      v5 = v21;
      if ( v21 >= 0 )
        Feature_3694358843__private_IsEnabledDeviceUsageNoInline();
      break;
    case 2:
      goto LABEL_13;
    case 6:
      v12 = (struct _DXGK_ADL *)&unk_14005AAC8;
      v13 = -2;
LABEL_14:
      v11 = CVirtualAddressAllocator::CommitVirtualAddressRange(*(_QWORD *)a2, v7, 0, v13, 0LL, v12, 1, a3, 0LL, 0, 0LL);
      goto LABEL_15;
    case 7:
    case 8:
LABEL_13:
      v12 = (struct VIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE *)((char *)a2 + 16);
      v13 = 0;
      goto LABEL_14;
    case 9:
      v8 = VIDMM_SEGMENT::DriverId(*(VIDMM_SEGMENT **)(*(_QWORD *)(v7 + 64) + 24LL));
      v11 = CVirtualAddressAllocator::CommitVirtualAddressRange(
              *(_QWORD *)a2,
              v10,
              0,
              v8,
              0LL,
              (struct _DXGK_ADL *)(v9 + 8),
              1,
              a3,
              0LL,
              0,
              0LL);
LABEL_15:
      v5 = v11;
      break;
  }
  if ( (unsigned int)Feature_3694358843__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v5 >= 0 )
    {
      v22 = *((_QWORD *)a2 + 1);
      v23 = *(_DWORD *)(v22 + 72);
      if ( (v23 & 0x8000) != 0 )
        v5 = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
               *(struct _KTHREAD ***)a2,
               *(struct VIDMM_VAD **)v22,
               (v23 >> 4) & 0x3F,
               *((struct VIDMM_MAPPED_VA_RANGE **)a2 + 1));
    }
  }
LABEL_28:
  if ( (unsigned int)Feature_3694358843__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v5 == -1073741267 )
    {
      if ( *((_BYTE *)a2 + 40) )
        goto LABEL_40;
      v5 = -1073741823;
    }
    else if ( v5 >= 0 )
    {
LABEL_39:
      VIDMM_GLOBAL::CleanupVadReference(v25, (struct _LIST_ENTRY **)a2);
      goto LABEL_40;
    }
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(*((VIDMM_MAPPED_VA_RANGE **)a2 + 1), v24);
    CVirtualAddressAllocator::ResetAddressSpaceForFailure(*(CVirtualAddressAllocator **)a2);
    goto LABEL_39;
  }
  if ( *((_BYTE *)a2 + 40) && v5 == -1073741267
    || (VIDMM_GLOBAL::CleanupVadReference(v25, (struct _LIST_ENTRY **)a2), v5 == -1073741267) )
  {
    if ( !*((_BYTE *)a2 + 40) )
      v5 = -1073741823;
  }
LABEL_40:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v28);
  return (unsigned int)v5;
}
