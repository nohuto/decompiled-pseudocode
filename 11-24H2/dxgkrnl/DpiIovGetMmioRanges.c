/*
 * XREFs of DpiIovGetMmioRanges @ 0x14024F0F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EEE@Z @ 0x1400573EC (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EEE@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x14005A028 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     ?DpiGetVirtualGpuType@@YA?AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z @ 0x14008B6E0 (-DpiGetVirtualGpuType@@YA-AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     DxgkDdiGetMmioRanges @ 0x140210160 (DxgkDdiGetMmioRanges.c)
 *     DxgkDdiQueryVirtualFunctionIndexByLuid @ 0x1402109E8 (DxgkDdiQueryVirtualFunctionIndexByLuid.c)
 */

__int64 __fastcall DpiIovGetMmioRanges(
        _DWORD *a1,
        struct _LUID a2,
        unsigned __int16 a3,
        unsigned __int64 a4,
        __int64 a5)
{
  unsigned int v5; // r14d
  unsigned int VirtualGpuType; // eax
  __int64 v8; // r9
  unsigned int v9; // edi
  int MmioRanges; // ebx
  unsigned __int16 v12; // [rsp+38h] [rbp-21h] BYREF
  void *v13; // [rsp+40h] [rbp-19h] BYREF
  unsigned int v14[4]; // [rsp+48h] [rbp-11h] BYREF
  __int64 v15; // [rsp+58h] [rbp-1h]
  _BYTE v16[8]; // [rsp+60h] [rbp+7h] BYREF
  __int64 v17; // [rsp+68h] [rbp+Fh]
  void *v18; // [rsp+70h] [rbp+17h]
  int v19; // [rsp+80h] [rbp+27h]
  struct _LUID v20; // [rsp+C0h] [rbp+67h] BYREF

  v20 = a2;
  v5 = a3;
  v13 = 0LL;
  VirtualGpuType = DpiGetVirtualGpuType(a1, &v13);
  LOBYTE(v8) = 1;
  v9 = VirtualGpuType;
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v16, v13, 0LL, v8, 0, 0);
  MmioRanges = v19;
  if ( v19 >= 0 )
  {
    if ( *(_QWORD *)(v17 + 5392) )
    {
      v12 = 0;
      MmioRanges = DxgkDdiQueryVirtualFunctionIndexByLuid(v18, v9, &v20, &v12);
      if ( MmioRanges >= 0 )
      {
        v14[3] = 0;
        v15 = a5;
        v14[2] = a4 / 0x18;
        v14[1] = v5;
        v14[0] = v12;
        MmioRanges = DxgkDdiGetMmioRanges(v18, v9, v14);
      }
    }
    else
    {
      MmioRanges = -1073741811;
    }
  }
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v16);
  return (unsigned int)MmioRanges;
}
