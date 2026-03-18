/*
 * XREFs of ?GetVirtualGpuInfo@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETVIRTUALGPUINFO@@PEAU_LUID@@PEAU_GUID@@@Z @ 0x140207360
 * Callers:
 *     DxgkDdiGetVirtualGpuInfo @ 0x140209C6C (DxgkDdiGetVirtualGpuInfo.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140013C98 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?GetVirtualGpuManager@ADAPTER_RENDER@@QEAAPEAVDXGVIRTUALGPUMANAGER@@W4DXG_VIRTUAL_GPU_TYPE@@@Z @ 0x1403D3C8C (-GetVirtualGpuManager@ADAPTER_RENDER@@QEAAPEAVDXGVIRTUALGPUMANAGER@@W4DXG_VIRTUAL_GPU_TYPE@@@Z.c)
 *     ?GetVirtualGpuByIndex@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@I@Z @ 0x1403D3CAC (-GetVirtualGpuByIndex@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@I@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::GetVirtualGpuInfo(__int64 a1, __int64 a2, unsigned int *a3, _QWORD *a4, _OWORD *a5)
{
  unsigned int v7; // ebx
  __int64 VirtualGpuManager; // rax
  __int64 VirtualGpuByIndex; // rax
  unsigned int v11; // r8d
  unsigned int v12; // ebx
  _BYTE v14[40]; // [rsp+20h] [rbp-28h] BYREF

  v7 = a2;
  VirtualGpuManager = ADAPTER_RENDER::GetVirtualGpuManager(a1, a2);
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v14,
    (struct _KTHREAD **)(VirtualGpuManager + 40));
  VirtualGpuByIndex = ADAPTER_RENDER::GetVirtualGpuByIndex(a1, v7, *a3);
  if ( VirtualGpuByIndex )
  {
    *a4 = *(_QWORD *)(VirtualGpuByIndex + 28);
    *a5 = *(_OWORD *)(VirtualGpuByIndex + 36);
    v12 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)VirtualGpuByIndex + 120LL))(
            VirtualGpuByIndex,
            a3);
  }
  else
  {
    WdLogSingleEntry1(3LL, v11);
    WdLogGlobalForLineNumber = 2192;
    v12 = -1073741811;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14);
  return v12;
}
