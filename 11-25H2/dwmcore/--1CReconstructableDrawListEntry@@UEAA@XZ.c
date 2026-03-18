/*
 * XREFs of ??1CReconstructableDrawListEntry@@UEAA@XZ @ 0x18014C070
 * Callers:
 *     ??_GCReconstructableDrawListEntry_UVx0@@UEAAPEAXI@Z @ 0x180043A60 (--_GCReconstructableDrawListEntry_UVx0@@UEAAPEAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D680 (-InternalRelease@-$ComPtr@VCLinkedShader@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800D2B10 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800D4130 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x180148520 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?LookupShader@CShaderCache@@QEBAPEAVCLinkedShader@@IAEBUShaderLinkingConfig@@@Z @ 0x18014A630 (-LookupShader@CShaderCache@@QEBAPEAVCLinkedShader@@IAEBUShaderLinkingConfig@@@Z.c)
 *     ?GetCommonRenderingShaderInternalNoRef@CCommonRenderingShaderCache@@AEAAJPEAVCD3DDevice@@AEBUCommonRenderingShaderDesc@@PEAIPEAPEAUID3D11PixelShader@@@Z @ 0x18014ABE0 (-GetCommonRenderingShaderInternalNoRef@CCommonRenderingShaderCache@@AEAAJPEAVCD3DDevice@@AEBUCom.c)
 *     ?LookupLinkedShader@CShaderCache@@IEBAPEAVCLinkedShader@@ULookupKey@ShaderLinkingConfig@@@Z @ 0x18014B5C0 (-LookupLinkedShader@CShaderCache@@IEBAPEAVCLinkedShader@@ULookupKey@ShaderLinkingConfig@@@Z.c)
 *     ??1?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18014BD30 (--1-$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18014BED0 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ @ 0x18014C440 (-InternalRelease@-$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18014C600 (-RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ??_ECReconstructableDrawListEntry_UVxN@@UEAAPEAXI@Z @ 0x180212A20 (--_ECReconstructableDrawListEntry_UVxN@@UEAAPEAXI@Z.c)
 *     ??_ECReconstructableDrawListEntry@@UEAAPEAXI@Z @ 0x180293F40 (--_ECReconstructableDrawListEntry@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@VCRenderingEffect@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800CFBC0 (-InternalRelease@-$CMILRefCountBaseT@VCRenderingEffect@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CReconstructableDrawListEntry::~CReconstructableDrawListEntry(CReconstructableDrawListEntry *this)
{
  CBrushRenderingEffect *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  void (__fastcall ***v5)(_QWORD, __int64); // rcx

  v2 = (CBrushRenderingEffect *)*((_QWORD *)this + 10);
  if ( v2 )
    CMILRefCountBaseT<CRenderingEffect,CMilObjectDeleter>::InternalRelease(v2);
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *((_QWORD *)this + 3);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 2);
  if ( v5 )
    (**v5)(v5, 1LL);
}
