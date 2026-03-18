/*
 * XREFs of DpiDoInterfaceReferenceGpuP @ 0x140247420
 * Callers:
 *     DpiFdoHandleQueryFlexibleIovInterface @ 0x140247460 (DpiFdoHandleQueryFlexibleIovInterface.c)
 *     DpiFdoHandleQueryPartitioningDeviceInterface @ 0x140247690 (DpiFdoHandleQueryPartitioningDeviceInterface.c)
 *     DpiFdoHandleQuerySrIovInterface @ 0x140247820 (DpiFdoHandleQuerySrIovInterface.c)
 * Callees:
 *     ?DpiGetVirtualGpuType@@YA?AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z @ 0x14008A7D0 (-DpiGetVirtualGpuType@@YA-AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z.c)
 */

LONG_PTR __fastcall DpiDoInterfaceReferenceGpuP(_DWORD *a1)
{
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  Object = 0LL;
  DpiGetVirtualGpuType(a1, &Object);
  return ObfReferenceObject(Object);
}
