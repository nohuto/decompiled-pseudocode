/*
 * XREFs of ?VidMmReportGlobalAlloc@@YAXPEBVDXGADAPTER@@PEBVDXGDEVICE@@PEBUVIDMM_GLOBAL_ALLOC@@PEBVDXGSHAREDRESOURCE@@@Z @ 0x1400F7548
 * Callers:
 *     VidMmReportDmaPoolState @ 0x1400F6D70 (VidMmReportDmaPoolState.c)
 *     VidMmReportContextAllocList @ 0x1400F7290 (VidMmReportContextAllocList.c)
 *     ?ReportState@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@@Z @ 0x1400F745C (-ReportState@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@@Z.c)
 *     VidMmReportMultiGlobalAlloc @ 0x1400F7520 (VidMmReportMultiGlobalAlloc.c)
 * Callees:
 *     McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer @ 0x14003CC8C (McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer.c)
 *     McTemplateK0puu_EtwWriteTransfer @ 0x14004081C (McTemplateK0puu_EtwWriteTransfer.c)
 *     ?VidMmGetAllocationHint@@YAPEBU_DXGK_ALLOCATIONUSAGEHINT@@PEBUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400F77C0 (-VidMmGetAllocationHint@@YAPEBU_DXGK_ALLOCATIONUSAGEHINT@@PEBUVIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VidMmReportGlobalAlloc(
        const struct DXGADAPTER *a1,
        const struct DXGDEVICE *a2,
        const struct VIDMM_GLOBAL_ALLOC *a3,
        const struct DXGSHAREDRESOURCE *a4)
{
  const struct _DXGK_ALLOCATIONUSAGEHINT *AllocationHint; // rax
  char v6; // dl
  __int64 v7; // r8
  __int64 v8; // rcx
  UINT SlicePitch; // esi
  UINT Depth; // ebp
  UINT Pitch; // r14d
  UINT Height; // r15d
  UINT Width; // r12d
  UINT ByteOffset; // r13d
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // [rsp+20h] [rbp-148h]
  __int64 v19; // [rsp+28h] [rbp-140h]
  int v20; // [rsp+48h] [rbp-120h]
  int v21; // [rsp+60h] [rbp-108h]
  int v22; // [rsp+88h] [rbp-E0h]
  UINT Value; // [rsp+100h] [rbp-68h]
  UINT Version; // [rsp+104h] [rbp-64h]
  D3DDDIFORMAT Format; // [rsp+180h] [rbp+18h]
  UINT SwizzledFormat; // [rsp+188h] [rbp+20h]

  AllocationHint = VidMmGetAllocationHint(a3);
  if ( (byte_140081241 & 0x10) != 0 )
  {
    SlicePitch = AllocationHint->v1.SlicePitch;
    Depth = AllocationHint->v1.Depth;
    Pitch = AllocationHint->v1.Pitch;
    Height = AllocationHint->v1.Height;
    Width = AllocationHint->v1.Width;
    ByteOffset = AllocationHint->v1.ByteOffset;
    SwizzledFormat = AllocationHint->v1.SwizzledFormat;
    Format = AllocationHint->v1.Format;
    Version = AllocationHint->Version;
    Value = AllocationHint->v1.Flags.Value;
    v16 = 0LL;
    v17 = *((_QWORD *)a3 + 6);
    if ( v17 )
      v16 = *(_QWORD *)(*(_QWORD *)(v17 + 8) + 8LL);
    v15 = (*((_DWORD *)a3 + 6) >> 8) & 1;
    McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer(
      v15,
      &EventReportAdapterAllocation,
      v7,
      v16,
      v6,
      v7,
      **((_DWORD **)a3 + 47),
      *(_QWORD *)(*(_QWORD *)a3 + 16LL),
      *(_DWORD *)(*(_QWORD *)a3 + 32LL),
      v20,
      *(_DWORD *)(*(_QWORD *)a3 + 40LL),
      *(_DWORD *)(*(_QWORD *)a3 + 44LL),
      v21,
      *(_DWORD *)(*(_QWORD *)a3 + 36LL),
      *(_DWORD *)(*(_QWORD *)a3 + 48LL),
      (char)a3,
      *((_QWORD *)a3 + 1),
      v22,
      Version,
      Value,
      Format,
      SwizzledFormat,
      ByteOffset,
      Width,
      Height,
      Pitch,
      Depth,
      SlicePitch,
      (*((_DWORD *)a3 + 8) & 2) != 0,
      *((_QWORD *)a3 + 26),
      *((_BYTE *)a3 + 24) & 0x3F,
      v15);
  }
  v8 = *((_QWORD *)a3 + 47);
  if ( *(_WORD *)(v8 + 8) )
  {
    if ( (byte_140081241 & 1) != 0 )
    {
      LOBYTE(v19) = *((_BYTE *)a3 + 296);
      LOBYTE(v18) = *(_BYTE *)(v8 + 8);
      McTemplateK0puu_EtwWriteTransfer(v8, &EventReportOfferAllocation, v7, a3, v18, v19);
    }
  }
}
