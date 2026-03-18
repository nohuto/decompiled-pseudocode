/*
 * XREFs of ?Create@CScratchRenderTargetBitmap@@KAJPEAVIDeviceTextureTarget@@PEAPEAV1@@Z @ 0x18005B998
 * Callers:
 *     ?CreateScratchRenderTargetBitmap@CD3DDevice@@IEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x18005AC84 (-CreateScratchRenderTargetBitmap@CD3DDevice@@IEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRende.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ??0CScratchRenderTargetBitmap@@IEAA@XZ @ 0x18005BA30 (--0CScratchRenderTargetBitmap@@IEAA@XZ.c)
 *     ?Initialize@CRenderTargetBitmap@@IEAAXPEAVIDeviceTextureTarget@@@Z @ 0x18005BA8C (-Initialize@CRenderTargetBitmap@@IEAAXPEAVIDeviceTextureTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 */

__int64 __fastcall CScratchRenderTargetBitmap::Create(
        struct IDeviceTextureTarget *a1,
        struct CScratchRenderTargetBitmap **a2)
{
  unsigned int v3; // edi
  CScratchRenderTargetBitmap *v5; // rax
  CScratchRenderTargetBitmap *v6; // rax
  CRenderTargetBitmap *v7; // rbx

  v3 = 0;
  *a2 = 0LL;
  v5 = (CScratchRenderTargetBitmap *)MIDL_user_allocate(0x98uLL);
  if ( v5 && (v6 = CScratchRenderTargetBitmap::CScratchRenderTargetBitmap(v5), (v7 = v6) != 0LL) )
  {
    CMILRefCountImpl::AddReference((CScratchRenderTargetBitmap *)((char *)v6 + 8));
    CRenderTargetBitmap::Initialize(v7, a1);
    *a2 = v7;
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x14u, 0LL);
  }
  return v3;
}
