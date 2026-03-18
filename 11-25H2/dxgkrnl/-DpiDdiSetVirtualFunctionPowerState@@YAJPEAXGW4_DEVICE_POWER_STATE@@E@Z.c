/*
 * XREFs of ?DpiDdiSetVirtualFunctionPowerState@@YAJPEAXGW4_DEVICE_POWER_STATE@@E@Z @ 0x14008A5C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EEE@Z @ 0x140054E24 (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EEE@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x14005A628 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     ?DpiGetVirtualGpuType@@YA?AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z @ 0x14008A7D0 (-DpiGetVirtualGpuType@@YA-AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     DxgkDdiSetVirtualFunctionPowerState @ 0x14020A9C4 (DxgkDdiSetVirtualFunctionPowerState.c)
 */

__int64 __fastcall DpiDdiSetVirtualFunctionPowerState(void *a1, __int64 a2, enum _DEVICE_POWER_STATE a3, char a4)
{
  __int64 v5; // r9
  unsigned int v6; // ebx
  void *v8; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v9[16]; // [rsp+38h] [rbp-40h] BYREF
  void *v10; // [rsp+48h] [rbp-30h]
  int v11; // [rsp+58h] [rbp-20h]

  v8 = 0LL;
  DpiGetVirtualGpuType(a1, &v8);
  LOBYTE(v5) = 1;
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v9, v8, 0LL, v5, 0, 0);
  v6 = v11;
  if ( v11 >= 0 )
    v6 = DxgkDdiSetVirtualFunctionPowerState(v10, a4);
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v9);
  return v6;
}
