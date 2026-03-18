/*
 * XREFs of DpiIovGetBackingResource @ 0x140248020
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EEE@Z @ 0x140054E24 (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EEE@Z.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x140055794 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x14005A628 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     ?DpiGetVirtualGpuType@@YA?AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z @ 0x14008A7D0 (-DpiGetVirtualGpuType@@YA-AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?GetBackingResource@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETBACKINGRESOURCE@@@Z @ 0x140206E08 (-GetBackingResource@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETBACKINGRESOURCE.c)
 *     DxgkDdiGetResourceForBar @ 0x140209BD4 (DxgkDdiGetResourceForBar.c)
 *     DxgkDdiQueryVirtualFunctionIndexByLuid @ 0x14020A324 (DxgkDdiQueryVirtualFunctionIndexByLuid.c)
 */

__int64 __fastcall DpiIovGetBackingResource(_DWORD *a1, struct _LUID a2, unsigned __int16 a3, __int64 a4, void *a5)
{
  _QWORD *v5; // r14
  unsigned int VirtualGpuType; // eax
  __int64 v9; // r9
  unsigned int v10; // r15d
  int ResourceForBar; // ebx
  _QWORD *v12; // rsi
  int BackingResource; // eax
  __int64 v15; // [rsp+30h] [rbp-39h]
  int v16; // [rsp+38h] [rbp-31h]
  unsigned int v17; // [rsp+48h] [rbp-21h] BYREF
  unsigned __int16 v18; // [rsp+4Ch] [rbp-1Dh]
  __int16 v19; // [rsp+4Eh] [rbp-1Bh]
  __int64 v20; // [rsp+50h] [rbp-19h]
  __int64 v21; // [rsp+58h] [rbp-11h]
  _BYTE v22[8]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v23; // [rsp+68h] [rbp-1h]
  void *v24; // [rsp+70h] [rbp+7h]
  int v25; // [rsp+80h] [rbp+17h]
  struct _LUID v26; // [rsp+D0h] [rbp+67h] BYREF

  v26 = a2;
  v5 = a5;
  a5 = 0LL;
  *(_OWORD *)a4 = 0LL;
  *(_DWORD *)(a4 + 16) = 0;
  *v5 = 0LL;
  VirtualGpuType = DpiGetVirtualGpuType(a1, &a5);
  LOBYTE(v9) = 1;
  v10 = VirtualGpuType;
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v22, a5, 0LL, v9, 0, 0);
  ResourceForBar = v25;
  if ( v25 < 0 )
    goto LABEL_12;
  v12 = v24;
  LOWORD(a5) = 0;
  ResourceForBar = DxgkDdiQueryVirtualFunctionIndexByLuid(v24, v10, &v26, &a5);
  if ( ResourceForBar < 0 )
    goto LABEL_12;
  if ( *(_BYTE *)(v23 + 2716) )
  {
    if ( !*(_QWORD *)(v23 + 5376) )
    {
      ResourceForBar = DxgkDdiGetResourceForBar(v12, v10, (unsigned __int16)a5, a3, a4);
      if ( ResourceForBar >= 0 )
      {
        *v5 = *(_QWORD *)(a4 + 4);
        *(_OWORD *)a4 = 0LL;
        *(_DWORD *)(a4 + 16) = 0;
      }
      goto LABEL_12;
    }
  }
  else if ( !*(_QWORD *)(v23 + 5376) )
  {
    goto LABEL_12;
  }
  v17 = (unsigned __int16)a5;
  v19 = 0;
  v21 = 0LL;
  v18 = a3;
  v20 = a4;
  BackingResource = ADAPTER_RENDER::GetBackingResource(v12[391], v10, &v17);
  ResourceForBar = BackingResource;
  if ( bTracingEnabled )
  {
    v16 = v18;
    LODWORD(v15) = v17;
    VgpuTrace(1, BackingResource, v12, L"DxgkDdiGetBackingResource", (wchar_t *)L"%d %d", v15, v16);
  }
  if ( ResourceForBar >= 0 )
    *v5 = v21;
LABEL_12:
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v22);
  return (unsigned int)ResourceForBar;
}
