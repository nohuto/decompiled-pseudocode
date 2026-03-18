/*
 * XREFs of ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400F515C
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEBU_DXGK_ADL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1400B2918 (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_PAGING_QUE.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DD034 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400DE3C0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400338D0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140036BF0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x14003835C (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x14003C090 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DXGK_ADL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_NW4VIDMM_PAGESIZEUSAGE@@1@Z @ 0x1400BE2C0 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DX.c)
 *     ?VidMmiInitializeAdlForPfnArray@@YAXPEAU_DXGK_ADL@@PEB_KI_K@Z @ 0x1400BFF30 (-VidMmiInitializeAdlForPfnArray@@YAXPEAU_DXGK_ADL@@PEB_KI_K@Z.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400BFF5C (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1400D00E0 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 *     ?CleanupVadReference@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@@Z @ 0x1400F77E4 (-CleanupVadReference@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CommitVirtualAddressRangeSystemCommand(
        VIDMM_GLOBAL *this,
        struct VIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE *a2,
        struct VIDMM_ALLOC **a3)
{
  unsigned int v5; // ebx
  bool v6; // zf
  struct _KTHREAD **v7; // rsi
  __int64 v8; // rcx
  VIDMM_GLOBAL *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int16 v12; // ax
  __int64 v13; // r8
  int v14; // r9d
  unsigned int v15; // eax
  struct VIDMM_GLOBAL_ALLOC ***v16; // rcx
  struct VIDMM_GLOBAL_ALLOC *v17; // rsi
  __int64 v18; // rdx
  unsigned __int64 LogicalAddress; // rbx
  struct _MDL *FullMDL; // rax
  int v21; // r9d
  __int64 v22; // rcx
  struct _DXGK_ADL *v24; // [rsp+28h] [rbp-80h]
  struct VIDMM_ALLOC **v25; // [rsp+38h] [rbp-70h]
  __int128 v26; // [rsp+60h] [rbp-48h] BYREF
  _BYTE v27[8]; // [rsp+70h] [rbp-38h] BYREF
  struct _KTHREAD **v28; // [rsp+78h] [rbp-30h]
  int v29; // [rsp+80h] [rbp-28h]

  *a3 = 0LL;
  v5 = 0;
  v6 = *(_QWORD *)a2 == -56LL;
  v7 = (struct _KTHREAD **)(*(_QWORD *)a2 + 56LL);
  v28 = v7;
  if ( !v6 )
  {
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    if ( v7[1] == KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1575;
      DxgkLogInternalTriageEvent(v8, 262146LL);
    }
  }
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v7);
  v10 = *((_QWORD *)a2 + 4);
  v29 = 2;
  if ( v10 && (!**(_QWORD **)(v10 + 16) || !**((_QWORD **)a2 + 1)) )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 20439;
    goto LABEL_25;
  }
  v11 = *((_QWORD *)a2 + 1);
  if ( (*(_DWORD *)(v11 + 72) & 0xF) == 1 )
  {
    v16 = *(struct VIDMM_GLOBAL_ALLOC ****)(v11 + 64);
    if ( (*((_BYTE *)v16 + 28) & 3) == 2 )
    {
      v17 = **v16;
      v18 = *(_QWORD *)v17;
      v26 = 0LL;
      if ( (*(_DWORD *)(*(_QWORD *)(v18 + 64) + 104LL) & 0x1001) != 0 )
      {
        LogicalAddress = SysMmGetLogicalAddress(*((void *const *)v17 + 44));
        FullMDL = VidMmGetFullMDL(v17, 0LL);
        VidMmiInitializeAdlForPfnArray(
          (struct _DXGK_ADL *)&v26,
          (const unsigned __int64 *)&FullMDL[1],
          FullMDL->ByteCount >> 12,
          LogicalAddress);
        v21 = 0;
      }
      else
      {
        v22 = *(_QWORD *)(v18 + 72) >> 12;
        LODWORD(v26) = *(_DWORD *)(v18 + 16) >> 12;
        *((_QWORD *)&v26 + 1) = v22;
        DWORD1(v26) = 1;
        v21 = VIDMM_SEGMENT::DriverId(*(VIDMM_SEGMENT **)(v18 + 64));
      }
      v15 = CVirtualAddressAllocator::CommitVirtualAddressRange(
              *(_QWORD *)a2,
              *((_QWORD *)a2 + 1),
              *((_BYTE *)v17 + 24) & 0x3F,
              v21,
              *(_QWORD *)(*((_QWORD *)a2 + 1) + 80LL),
              (struct _DXGK_ADL *)&v26,
              1,
              a3,
              0LL,
              0,
              0LL);
    }
    else
    {
      v15 = CVirtualAddressAllocator::UncommitVirtualAddressRange(
              *(CVirtualAddressAllocator **)a2,
              (struct VIDMM_MAPPED_VA_RANGE *)v11,
              a3,
              1);
    }
    goto LABEL_24;
  }
  if ( (*(_DWORD *)(v11 + 72) & 0xF) == 2 )
  {
LABEL_17:
    v14 = 0;
    v25 = a3;
    v24 = (struct VIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE *)((char *)a2 + 16);
    goto LABEL_15;
  }
  if ( (*(_DWORD *)(v11 + 72) & 0xF) != 6 )
  {
    if ( (*(_DWORD *)(v11 + 72) & 0xF) != 7 && (*(_DWORD *)(v11 + 72) & 0xF) != 8 )
    {
      if ( (*(_DWORD *)(v11 + 72) & 0xF) != 9 )
        goto LABEL_25;
      v12 = VIDMM_SEGMENT::DriverId(*(VIDMM_SEGMENT **)(*(_QWORD *)(v11 + 64) + 24LL));
      v25 = a3;
      v24 = (struct _DXGK_ADL *)(v13 + 8);
      v14 = v12;
      goto LABEL_15;
    }
    goto LABEL_17;
  }
  v14 = -2;
  v25 = a3;
  v24 = (struct _DXGK_ADL *)&xmmword_140059C70;
LABEL_15:
  v15 = CVirtualAddressAllocator::CommitVirtualAddressRange(*(_QWORD *)a2, v11, 0, v14, 0LL, v24, 1, v25, 0LL, 0, 0LL);
LABEL_24:
  v5 = v15;
LABEL_25:
  if ( *((_BYTE *)a2 + 40) && v5 == -1073741267 || (VIDMM_GLOBAL::CleanupVadReference(v9, a2), v5 == -1073741267) )
  {
    if ( !*((_BYTE *)a2 + 40) )
      v5 = -1073741823;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v27);
  return v5;
}
