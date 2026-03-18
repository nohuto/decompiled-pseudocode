/*
 * XREFs of ??1?$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801BEF70
 * Callers:
 *     ??1CaptureBitsResponse@@MEAA@XZ @ 0x1801855AC (--1CaptureBitsResponse@@MEAA@XZ.c)
 *     ??1CDrawListBatchManager@@IEAA@XZ @ 0x1801BE9A4 (--1CDrawListBatchManager@@IEAA@XZ.c)
 *     ??1CWindowNode@@MEAA@XZ @ 0x1802044FC (--1CWindowNode@@MEAA@XZ.c)
 *     ??1CSuperWetInkScribble@@UEAA@XZ @ 0x1802079E0 (--1CSuperWetInkScribble@@UEAA@XZ.c)
 *     ??1CSwapChainBuffer@@UEAA@XZ @ 0x180208060 (--1CSwapChainBuffer@@UEAA@XZ.c)
 *     ?Create@CComputeScribbleFramebuffer@@SAJPEAVCD3DDevice@@PEAUID3D12Resource@@IPEAPEAV1@@Z @ 0x180293BFC (-Create@CComputeScribbleFramebuffer@@SAJPEAVCD3DDevice@@PEAUID3D12Resource@@IPEAPEAV1@@Z.c)
 *     ?CreateCompositingShader@CCompositingShaderCache@@QEAAJW4D3DShaderProfileVersion@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAVCLinkedShader@@@Z @ 0x1802E5494 (-CreateCompositingShader@CCompositingShaderCache@@QEAAJW4D3DShaderProfileVersion@@V-$span@$$CBUP.c)
 * Callees:
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18014BED0 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
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
