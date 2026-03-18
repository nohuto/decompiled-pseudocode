/*
 * XREFs of ?TraceCloseParavirtualizedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x14018894C
 * Callers:
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1403252DC (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?CreateVidMmAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@EPEAVCOREDEVICEACCESS@@@Z @ 0x14032DAA0 (-CreateVidMmAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x14033A348 (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1403AB220 (-DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 * Callees:
 *     ?GetProcessID@DXGPROCESS@@QEBAQEAXXZ @ 0x14005DA58 (-GetProcessID@DXGPROCESS@@QEBAQEAXXZ.c)
 *     McTemplateK0ppppppppppppq_EtwWriteTransfer @ 0x14006B8A4 (McTemplateK0ppppppppppppq_EtwWriteTransfer.c)
 */

void __fastcall DXGDEVICE::TraceCloseParavirtualizedAllocation(DXGDEVICE *this, struct DXGALLOCATION *a2)
{
  __int64 v4; // rbx
  __int64 ProcessID; // rax
  __int64 v6; // r8
  unsigned int v7; // [rsp+B8h] [rbp+10h]

  if ( (*((_DWORD *)a2 + 18) & 0x40000) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x1000) != 0 )
  {
    v7 = *((_DWORD *)a2 + 5);
    v4 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    ProcessID = DXGPROCESS::GetProcessID(*((DXGPROCESS **)this + 5));
    McTemplateK0ppppppppppppq_EtwWriteTransfer(v7, &EventDestroyDeviceAllocation, v6, ProcessID, this, v4, a2);
  }
}
