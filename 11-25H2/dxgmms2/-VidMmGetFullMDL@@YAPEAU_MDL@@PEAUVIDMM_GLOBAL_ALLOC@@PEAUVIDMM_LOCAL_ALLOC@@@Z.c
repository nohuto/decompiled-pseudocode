/*
 * XREFs of ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400BFF5C
 * Callers:
 *     ?GetSegmentAddressMdl@VIDMM_PAGE_TABLE_BASE@@QEAAPEAU_MDL@@XZ @ 0x14003BEC8 (-GetSegmentAddressMdl@VIDMM_PAGE_TABLE_BASE@@QEAAPEAU_MDL@@XZ.c)
 *     LockParavirtualizedAllocationOnHost @ 0x140095A34 (LockParavirtualizedAllocationOnHost.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400BF1DC (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400F515C (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?UnmapAllocationFromIoMmu@VIDMM_SEGMENT@@IEAAXPEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400FF4B0 (-UnmapAllocationFromIoMmu@VIDMM_SEGMENT@@IEAAXPEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x140104104 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?MapAllocationToIoMmu@VIDMM_SEGMENT@@IEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14010F5CC (-MapAllocationToIoMmu@VIDMM_SEGMENT@@IEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x140112398 (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 *     ?ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAIPEAT_LARGE_INTEGER@@PEA_KPEAPEAUVIDMM_ALLOC@@PEAUVIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x140112C20 (-ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAI.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 */

struct _MDL *__fastcall VidMmGetFullMDL(struct VIDMM_GLOBAL_ALLOC *a1, struct VIDMM_LOCAL_ALLOC *a2)
{
  struct _MDL *result; // rax
  __int64 v3; // r8

  result = (struct _MDL *)*((_QWORD *)a1 + 7);
  if ( !result )
  {
    if ( (*((_DWORD *)a1 + 7) & 0x14000) != 0 )
    {
      return (struct _MDL *)*((_QWORD *)a1 + 49);
    }
    else
    {
      if ( !a2 )
        a2 = (struct VIDMM_LOCAL_ALLOC *)*((_QWORD *)a1 + 6);
      v3 = *((_QWORD *)a1 + 29);
      if ( v3 )
        return (struct _MDL *)(*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)a1 + 28) + 88LL))(
                                *((_QWORD *)a1 + 28),
                                v3);
      else
        return (struct _MDL *)*((_QWORD *)a2 + 9);
    }
  }
  return result;
}
