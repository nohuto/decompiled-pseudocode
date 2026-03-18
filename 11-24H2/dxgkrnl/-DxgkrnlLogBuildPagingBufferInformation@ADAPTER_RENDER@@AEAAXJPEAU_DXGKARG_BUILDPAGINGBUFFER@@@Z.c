/*
 * XREFs of ?DxgkrnlLogBuildPagingBufferInformation@ADAPTER_RENDER@@AEAAXJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1402AA7D0
 * Callers:
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1402AA4B0 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ADAPTER_RENDER::DxgkrnlLogBuildPagingBufferInformation(
        ADAPTER_RENDER *this,
        __int64 a2,
        struct _DXGKARG_BUILDPAGINGBUFFER *a3,
        __int64 a4)
{
  DXGK_BUILDPAGINGBUFFER_OPERATION Operation; // eax
  __int64 v6; // rdi
  _QWORD *v7; // rax
  unsigned __int64 v8; // rdx
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // rax

  Operation = a3->Operation;
  v6 = (int)a2;
  if ( Operation == DXGK_OPERATION_UPDATE_PAGE_TABLE )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    v7[3] = v6;
    v7[4] = a3->Fill.FillSize;
    v7[5] = a3->UpdatePageTable.hProcess;
    v7[6] = a3->Transfer.Destination.SegmentId;
    this = (ADAPTER_RENDER *)a3->UpdatePageTable.NumPageTableEntries;
    v7[7] = this;
    WdLogGlobalForLineNumber = 2287;
LABEL_3:
    v9 = (_QWORD *)WdLogNewEntry5_WdTrace(this, v8, a3, a4);
    v9[3] = v6;
    v9[4] = a3->Transfer.hAllocation;
    v9[5] = a3->Transfer.TransferOffset;
    this = (ADAPTER_RENDER *)a3->Transfer.TransferSize;
    v9[6] = this;
    WdLogGlobalForLineNumber = 2294;
LABEL_4:
    v10 = (_QWORD *)WdLogNewEntry5_WdTrace(this, v8, a3, a4);
    v10[3] = v6;
    v10[4] = a3->Transfer.hAllocation;
    v10[5] = a3->Transfer.Source.SegmentId & 1;
    v10[6] = a3->Transfer.TransferOffset;
    v10[7] = a3->Transfer.TransferSize;
    WdLogGlobalForLineNumber = 2302;
  }
  else if ( Operation == DXGK_OPERATION_FLUSH_TLB )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    v11[3] = v6;
    v11[4] = a3->Transfer.TransferSize;
    v11[5] = a3->ReadPhysical.SegmentId;
    v11[6] = a3->Fill.FillSize;
    WdLogGlobalForLineNumber = 2278;
  }
  else
  {
    v8 = 0x140000000uLL;
    switch ( Operation )
    {
      case DXGK_OPERATION_TRANSFER:
        v19 = (_QWORD *)WdLogNewEntry5_WdTrace(this, 0x140000000uLL, a3, a4);
        v19[3] = v6;
        v19[4] = a3->Transfer.hAllocation;
        v19[5] = a3->Transfer.Source.SegmentAddress.QuadPart;
        v19[6] = a3->Transfer.Destination.SegmentId;
        v19[7] = a3->Transfer.Destination.SegmentAddress.QuadPart;
        WdLogGlobalForLineNumber = 2200;
        break;
      case DXGK_OPERATION_FILL:
        v17 = (_QWORD *)WdLogNewEntry5_WdTrace(this, 0x140000000uLL, a3, a4);
        v17[3] = v6;
        v17[4] = a3->Transfer.hAllocation;
        v17[5] = a3->Transfer.Source.SegmentId;
        v17[6] = a3->Transfer.Source.SegmentAddress.QuadPart;
        WdLogGlobalForLineNumber = 2208;
        break;
      case DXGK_OPERATION_DISCARD_CONTENT:
        v13 = (_QWORD *)WdLogNewEntry5_WdTrace(this, 0x140000000uLL, a3, a4);
        v13[3] = v6;
        v13[4] = a3->Transfer.hAllocation;
        v13[5] = a3->DiscardContent.SegmentId;
        v13[6] = a3->Transfer.TransferSize;
        WdLogGlobalForLineNumber = 2216;
        break;
      case DXGK_OPERATION_READ_PHYSICAL:
        v20 = (_QWORD *)WdLogNewEntry5_WdTrace(this, 0x140000000uLL, a3, a4);
        v20[3] = v6;
        v20[4] = a3->ReadPhysical.SegmentId;
        v20[5] = a3->Fill.FillSize;
        WdLogGlobalForLineNumber = 2223;
        break;
      case DXGK_OPERATION_WRITE_PHYSICAL:
        v21 = (_QWORD *)WdLogNewEntry5_WdTrace(this, 0x140000000uLL, a3, a4);
        v21[3] = v6;
        v21[4] = a3->ReadPhysical.SegmentId;
        v21[5] = a3->Fill.FillSize;
        WdLogGlobalForLineNumber = 2230;
        break;
      case DXGK_OPERATION_MAP_APERTURE_SEGMENT:
        v12 = (_QWORD *)WdLogNewEntry5_WdTrace(this, 0x140000000uLL, a3, a4);
        v12[3] = v6;
        v12[4] = a3->Transfer.hAllocation;
        v12[5] = a3->Fill.FillSize;
        v12[6] = a3->Fill.FillPattern;
        WdLogGlobalForLineNumber = 2238;
        break;
      case DXGK_OPERATION_UNMAP_APERTURE_SEGMENT:
        v16 = (_QWORD *)WdLogNewEntry5_WdTrace(this, 0x140000000uLL, a3, a4);
        v16[3] = v6;
        v16[4] = a3->Transfer.hAllocation;
        v16[5] = a3->Fill.FillSize;
        v16[6] = a3->Fill.FillPattern;
        WdLogGlobalForLineNumber = 2246;
        break;
      case DXGK_OPERATION_SPECIAL_LOCK_TRANSFER:
        v22 = (_QWORD *)WdLogNewEntry5_WdTrace(this, 0x140000000uLL, a3, a4);
        v22[3] = v6;
        v22[4] = a3->Transfer.hAllocation;
        v22[5] = a3->Transfer.Source.SegmentAddress.QuadPart;
        v22[6] = a3->Transfer.Destination.SegmentId;
        v22[7] = a3->Transfer.Destination.SegmentAddress.QuadPart;
        WdLogGlobalForLineNumber = 2255;
        break;
      case DXGK_OPERATION_VIRTUAL_TRANSFER:
        v15 = (_QWORD *)WdLogNewEntry5_WdTrace(this, 0x140000000uLL, a3, a4);
        v15[3] = v6;
        v15[4] = a3->Transfer.hAllocation;
        v15[5] = a3->MapApertureSegment.OffsetInPages;
        v15[6] = a3->Transfer.Source.SegmentAddress.QuadPart;
        WdLogGlobalForLineNumber = 2263;
        break;
      case DXGK_OPERATION_VIRTUAL_FILL:
        v14 = (_QWORD *)WdLogNewEntry5_WdTrace(this, 0x140000000uLL, a3, a4);
        v14[3] = v6;
        v14[4] = a3->Transfer.hAllocation;
        v14[5] = a3->Transfer.Source.SegmentAddress.QuadPart;
        WdLogGlobalForLineNumber = 2270;
        break;
      case DXGK_OPERATION_INIT_CONTEXT_RESOURCE:
        goto LABEL_3;
      case DXGK_OPERATION_NOTIFY_RESIDENCY:
        goto LABEL_4;
      default:
        v18 = WdLogNewEntry5_WdTrace(this, 0x140000000uLL, a3, a4);
        *(_QWORD *)(v18 + 24) = v6;
        *(_QWORD *)(v18 + 32) = a3->Operation;
        WdLogGlobalForLineNumber = 2308;
        break;
    }
  }
}
