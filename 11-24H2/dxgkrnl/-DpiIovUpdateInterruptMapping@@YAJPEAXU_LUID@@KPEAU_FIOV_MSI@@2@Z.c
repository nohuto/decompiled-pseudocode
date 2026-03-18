/*
 * XREFs of ?DpiIovUpdateInterruptMapping@@YAJPEAXU_LUID@@KPEAU_FIOV_MSI@@2@Z @ 0x14008B710
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EEE@Z @ 0x1400573EC (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EEE@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x14005A028 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     ?DpiGetVirtualGpuType@@YA?AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z @ 0x14008B6E0 (-DpiGetVirtualGpuType@@YA-AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     DxgkUpdateInterruptMappings @ 0x140211800 (DxgkUpdateInterruptMappings.c)
 */

__int64 __fastcall DpiIovUpdateInterruptMapping(
        _DWORD *a1,
        struct _LUID a2,
        __int64 a3,
        struct _FIOV_MSI *a4,
        struct _FIOV_MSI *a5)
{
  __int64 v6; // r9
  unsigned int updated; // ebx
  void *v9; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v10[16]; // [rsp+38h] [rbp-40h] BYREF
  void *v11; // [rsp+48h] [rbp-30h]
  int v12; // [rsp+58h] [rbp-20h]

  v9 = 0LL;
  DpiGetVirtualGpuType(a1, &v9);
  LOBYTE(v6) = 1;
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v10, v9, 0LL, v6, 0, 0);
  updated = v12;
  if ( v12 >= 0 )
    updated = DxgkUpdateInterruptMappings(v11, (__int64)a4, (__int64)a5);
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v10);
  return updated;
}
