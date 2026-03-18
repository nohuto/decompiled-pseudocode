/*
 * XREFs of ?DpiDdiQueryPhysicalFunctionLuid@@YAJPEAXPEAU_LUID@@@Z @ 0x14008A2F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EEE@Z @ 0x140054E24 (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EEE@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x14005A628 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     ?DpiGetVirtualGpuType@@YA?AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z @ 0x14008A7D0 (-DpiGetVirtualGpuType@@YA-AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     DxgkDdiQueryPhysicalFunctionLuid @ 0x14020A1A0 (DxgkDdiQueryPhysicalFunctionLuid.c)
 */

__int64 __fastcall DpiDdiQueryPhysicalFunctionLuid(void *a1, struct _LUID *a2)
{
  __int64 v2; // r9
  unsigned int v3; // ebx
  _BYTE v5[16]; // [rsp+30h] [rbp-38h] BYREF
  void *v6; // [rsp+40h] [rbp-28h]
  int v7; // [rsp+50h] [rbp-18h]
  void *v8; // [rsp+80h] [rbp+18h] BYREF

  v8 = 0LL;
  DpiGetVirtualGpuType(a1, &v8);
  LOBYTE(v2) = 1;
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v5, v8, 0LL, v2, 0, 0);
  v3 = v7;
  if ( v7 >= 0 )
  {
    DxgkDdiQueryPhysicalFunctionLuid(v6);
    v3 = 0;
  }
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v5);
  return v3;
}
