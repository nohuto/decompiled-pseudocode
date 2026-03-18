/*
 * XREFs of DpiIovGetVirtualizationFlags @ 0x1402483C0
 * Callers:
 *     DpiGetVirtualizationFlags @ 0x140242220 (DpiGetVirtualizationFlags.c)
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EEE@Z @ 0x140054E24 (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EEE@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x14005A628 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     ?DpiGetVirtualGpuType@@YA?AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z @ 0x14008A7D0 (-DpiGetVirtualGpuType@@YA-AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     DxgkDdiGetVirtualGpuProfile @ 0x140209D50 (DxgkDdiGetVirtualGpuProfile.c)
 */

__int64 __fastcall DpiIovGetVirtualizationFlags(_DWORD *a1, __int64 a2, _DWORD *a3)
{
  int VirtualGpuProfile; // ebx
  int VirtualGpuType; // eax
  __int64 v6; // r9
  int v7; // esi
  void *v9; // [rsp+30h] [rbp-108h] BYREF
  _BYTE v10[16]; // [rsp+38h] [rbp-100h] BYREF
  void *v11; // [rsp+48h] [rbp-F0h]
  int v12; // [rsp+58h] [rbp-E0h]
  unsigned int v13[44]; // [rsp+70h] [rbp-C8h] BYREF

  *a3 = 0;
  if ( a2 )
  {
    VirtualGpuProfile = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1405;
  }
  else
  {
    v9 = 0LL;
    VirtualGpuType = DpiGetVirtualGpuType(a1, &v9);
    LOBYTE(v6) = 1;
    v7 = VirtualGpuType;
    CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v10, v9, 0LL, v6, 0, 0);
    VirtualGpuProfile = v12;
    if ( v12 >= 0 )
    {
      memset(v13, 0, 0xA8uLL);
      VirtualGpuProfile = DxgkDdiGetVirtualGpuProfile((ADAPTER_RENDER **)v11, v7, v13);
      if ( VirtualGpuProfile >= 0 )
        *a3 = v13[1];
    }
    CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v10);
  }
  return (unsigned int)VirtualGpuProfile;
}
