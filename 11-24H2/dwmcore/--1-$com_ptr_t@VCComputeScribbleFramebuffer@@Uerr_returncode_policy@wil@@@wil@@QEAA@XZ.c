/*
 * XREFs of ??1?$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180048A58
 * Callers:
 *     ??1CWindowNode@@MEAA@XZ @ 0x1800489BC (--1CWindowNode@@MEAA@XZ.c)
 *     ??1CaptureBitsResponse@@MEAA@XZ @ 0x18018DBE8 (--1CaptureBitsResponse@@MEAA@XZ.c)
 *     ??1CDrawListBatchManager@@IEAA@XZ @ 0x1801B1608 (--1CDrawListBatchManager@@IEAA@XZ.c)
 *     ??1CSuperWetInkScribble@@UEAA@XZ @ 0x1801FB370 (--1CSuperWetInkScribble@@UEAA@XZ.c)
 *     ??1CSwapChainBuffer@@UEAA@XZ @ 0x1801FB9F0 (--1CSwapChainBuffer@@UEAA@XZ.c)
 *     ?Create@CComputeScribbleFramebuffer@@SAJPEAVCD3DDevice@@PEAUID3D12Resource@@IPEAPEAV1@@Z @ 0x1802889AC (-Create@CComputeScribbleFramebuffer@@SAJPEAVCD3DDevice@@PEAUID3D12Resource@@IPEAPEAV1@@Z.c)
 *     ?CreateCompositingShader@CCompositingShaderCache@@QEAAJW4D3DShaderProfileVersion@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAVCLinkedShader@@@Z @ 0x1802DC1F4 (-CreateCompositingShader@CCompositingShaderCache@@QEAAJW4D3DShaderProfileVersion@@V-$span@$$CBUP.c)
 * Callees:
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x180110290 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>::~com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>(
        CDrawListCache **a1)
{
  CDrawListCache *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release(v1);
  return result;
}
