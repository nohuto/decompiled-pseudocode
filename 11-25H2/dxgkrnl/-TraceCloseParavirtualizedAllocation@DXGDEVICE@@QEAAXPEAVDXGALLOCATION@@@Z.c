/*
 * XREFs of ?TraceCloseParavirtualizedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x14018887C
 * Callers:
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x140339754 (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x14033AFE0 (-DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 *     ?CreateVidMmAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@EPEAVCOREDEVICEACCESS@@@Z @ 0x14033E700 (-CreateVidMmAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1403502AC (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 * Callees:
 *     McTemplateK0ppppppppppppq_EtwWriteTransfer @ 0x14006BB88 (McTemplateK0ppppppppppppq_EtwWriteTransfer.c)
 */

void __fastcall DXGDEVICE::TraceCloseParavirtualizedAllocation(DXGDEVICE *this, struct DXGALLOCATION *a2)
{
  if ( (*((_DWORD *)a2 + 18) & 0x40000) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x1000) != 0 )
    McTemplateK0ppppppppppppq_EtwWriteTransfer(
      *((_QWORD *)this + 2),
      &EventDestroyDeviceAllocation,
      *((_QWORD *)a2 + 5),
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 64LL) + 80LL),
      this,
      *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
      a2);
}
