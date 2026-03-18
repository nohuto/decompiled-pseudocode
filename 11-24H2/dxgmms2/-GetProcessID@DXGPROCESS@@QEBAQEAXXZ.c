/*
 * XREFs of ?GetProcessID@DXGPROCESS@@QEBAQEAXXZ @ 0x140046080
 * Callers:
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1400A9800 (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1400BEE60 (-InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 *     VidMmReportDmaPoolState @ 0x1400F43B0 (VidMmReportDmaPoolState.c)
 *     ?ReportVaAllocatorState@CVirtualAddressAllocator@@QEAAXXZ @ 0x1400F4620 (-ReportVaAllocatorState@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     VidMmReportContextAllocList @ 0x1400F4900 (VidMmReportContextAllocList.c)
 *     ?Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1400FA060 (-Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     VidSchCreateProcess @ 0x1400FE760 (VidSchCreateProcess.c)
 *     VidMmReportMultiAlloc @ 0x1400FEC40 (VidMmReportMultiAlloc.c)
 * Callees:
 *     Feature_Servicing_GraphicsKernel_StabilityImprovements__private_IsEnabledDeviceUsageNoInline @ 0x14004CF60 (Feature_Servicing_GraphicsKernel_StabilityImprovements__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall DXGPROCESS::GetProcessID(DXGPROCESS *this)
{
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v3; // rdx
  bool v4; // zf
  __int64 v5; // rax

  IsEnabledDeviceUsageNoInline = Feature_Servicing_GraphicsKernel_StabilityImprovements__private_IsEnabledDeviceUsageNoInline();
  v3 = 0LL;
  v4 = IsEnabledDeviceUsageNoInline == 0;
  v5 = *((_QWORD *)this + 8);
  if ( v4 )
    return *(_QWORD *)(v5 + 80);
  if ( v5 )
    return *(_QWORD *)(v5 + 80);
  return v3;
}
