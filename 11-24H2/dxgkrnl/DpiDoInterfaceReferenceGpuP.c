/*
 * XREFs of DpiDoInterfaceReferenceGpuP @ 0x14024E250
 * Callers:
 *     DpiFdoHandleQueryFlexibleIovInterface @ 0x14024E290 (DpiFdoHandleQueryFlexibleIovInterface.c)
 *     DpiFdoHandleQueryPartitioningDeviceInterface @ 0x14024E4C0 (DpiFdoHandleQueryPartitioningDeviceInterface.c)
 *     DpiFdoHandleQuerySrIovInterface @ 0x14024E650 (DpiFdoHandleQuerySrIovInterface.c)
 * Callees:
 *     ?DpiGetVirtualGpuType@@YA?AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z @ 0x14008B6E0 (-DpiGetVirtualGpuType@@YA-AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z.c)
 */

LONG_PTR __fastcall DpiDoInterfaceReferenceGpuP(_DWORD *a1)
{
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  Object = 0LL;
  DpiGetVirtualGpuType(a1, &Object);
  return ObfReferenceObject(Object);
}
