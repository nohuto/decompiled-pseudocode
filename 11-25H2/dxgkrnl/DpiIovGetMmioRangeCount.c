/*
 * XREFs of DpiIovGetMmioRangeCount @ 0x1402481C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EEE@Z @ 0x140054E24 (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EEE@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x14005A628 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     ?DpiGetVirtualGpuType@@YA?AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z @ 0x14008A7D0 (-DpiGetVirtualGpuType@@YA-AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     DxgkDdiGetMmioRangeCount @ 0x1402099D0 (DxgkDdiGetMmioRangeCount.c)
 *     DxgkDdiQueryVirtualFunctionIndexByLuid @ 0x14020A324 (DxgkDdiQueryVirtualFunctionIndexByLuid.c)
 */

__int64 __fastcall DpiIovGetMmioRangeCount(_DWORD *a1, struct _LUID a2, __int64 a3)
{
  unsigned int VirtualGpuType; // eax
  __int64 v5; // r9
  unsigned int v6; // esi
  int MmioRangeCount; // edi
  __int64 v8; // xmm1_8
  unsigned __int16 v10; // [rsp+30h] [rbp-39h] BYREF
  void *v11; // [rsp+38h] [rbp-31h] BYREF
  struct _LUID v12; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v13[8]; // [rsp+48h] [rbp-21h] BYREF
  __int64 v14; // [rsp+50h] [rbp-19h]
  void *v15; // [rsp+58h] [rbp-11h]
  int v16; // [rsp+68h] [rbp-1h]
  unsigned int v17; // [rsp+78h] [rbp+Fh] BYREF
  __int128 v18; // [rsp+7Ch] [rbp+13h]
  __int64 v19; // [rsp+8Ch] [rbp+23h]

  v12 = a2;
  v11 = 0LL;
  VirtualGpuType = DpiGetVirtualGpuType(a1, &v11);
  LOBYTE(v5) = 1;
  v6 = VirtualGpuType;
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v13, v11, 0LL, v5, 0, 0);
  MmioRangeCount = v16;
  if ( v16 >= 0 )
  {
    if ( *(_QWORD *)(v14 + 5384) )
    {
      v10 = 0;
      MmioRangeCount = DxgkDdiQueryVirtualFunctionIndexByLuid(v15, v6, &v12, &v10);
      if ( MmioRangeCount >= 0 )
      {
        v17 = v10;
        v18 = 0LL;
        v19 = 0LL;
        MmioRangeCount = DxgkDdiGetMmioRangeCount(v15, v6, &v17);
        if ( MmioRangeCount >= 0 )
        {
          v8 = v19;
          *(_OWORD *)a3 = v18;
          *(_QWORD *)(a3 + 16) = v8;
        }
      }
    }
    else
    {
      *(_OWORD *)a3 = 0LL;
      *(_QWORD *)(a3 + 16) = 0LL;
    }
  }
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v13);
  return (unsigned int)MmioRangeCount;
}
