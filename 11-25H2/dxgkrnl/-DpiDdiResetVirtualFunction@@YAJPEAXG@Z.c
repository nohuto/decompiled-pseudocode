/*
 * XREFs of ?DpiDdiResetVirtualFunction@@YAJPEAXG@Z @ 0x14008A580
 * Callers:
 *     <none>
 * Callees:
 *     ?DpiGetVirtualGpuType@@YA?AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z @ 0x14008A7D0 (-DpiGetVirtualGpuType@@YA-AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     DxgkDdiResetVirtualFunction @ 0x14020A50C (DxgkDdiResetVirtualFunction.c)
 */

__int64 __fastcall DpiDdiResetVirtualFunction(void *a1)
{
  __int64 v2; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0LL;
  DpiGetVirtualGpuType(a1, &v2);
  return DxgkDdiResetVirtualFunction(*(void **)(*(_QWORD *)(v2 + 64) + 4032LL));
}
