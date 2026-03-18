/*
 * XREFs of ?InternalRelease@?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@IEAAKXZ @ 0x18017F020
 * Callers:
 *     ?CreateLinkedShader@CShaderCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x180042F34 (-CreateLinkedShader@CShaderCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V-$span@.c)
 *     ?AddKeyframe@KeyframeSequence@@QEAAXIMPEAVKeyframeValue@@PEAVKeyframeInterpolation@@@Z @ 0x18017EDAC (-AddKeyframe@KeyframeSequence@@QEAAXIMPEAVKeyframeValue@@PEAVKeyframeInterpolation@@@Z.c)
 *     ?CreateConstantKeyframeValue@KeyframeValue@@SAXPEBVCExpressionValue@@PEAPEAV1@@Z @ 0x18017EEBC (-CreateConstantKeyframeValue@KeyframeValue@@SAXPEBVCExpressionValue@@PEAPEAV1@@Z.c)
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x18017EF84 (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ??1Keyframe@KeyframeSequence@@QEAA@XZ @ 0x18017F240 (--1Keyframe@KeyframeSequence@@QEAA@XZ.c)
 *     ?CreateStartingValueKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyframeAnimation@@PEAPEAV1@@Z @ 0x18017FB74 (-CreateStartingValueKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyfram.c)
 *     ?CreateExpressionKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyframeAnimation@@IPEAPEAV1@@Z @ 0x18018056C (-CreateExpressionKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyframeAn.c)
 *     ?AddLinkedShader@CShaderCache@@IEAAJULookupKey@ShaderLinkingConfig@@PEAVCLinkedShader@@@Z @ 0x1801B4180 (-AddLinkedShader@CShaderCache@@IEAAJULookupKey@ShaderLinkingConfig@@PEAVCLinkedShader@@@Z.c)
 *     ??4?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@QEAAAEAV012@PEAVCLinkedShader@@@Z @ 0x1801B41FC (--4-$ComPtr@VCLinkedShader@@@WRL@Microsoft@@QEAAAEAV012@PEAVCLinkedShader@@@Z.c)
 *     ??_GCShaderCache@@QEAAPEAXI@Z @ 0x1801B424C (--_GCShaderCache@@QEAAPEAXI@Z.c)
 *     ??1CCompositingShaderCache@@QEAA@XZ @ 0x180248154 (--1CCompositingShaderCache@@QEAA@XZ.c)
 *     ??1CCompiledEffectCache@@QEAA@XZ @ 0x180273CB8 (--1CCompiledEffectCache@@QEAA@XZ.c)
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEBUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x18029E040 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEBUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 * Callees:
 *     ??1CReconstructableDrawListEntry@@UEAA@XZ @ 0x180110430 (--1CReconstructableDrawListEntry@@UEAA@XZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCReconstructableDrawListEntry_UVx2@@V1@@@SAXPEAX@Z @ 0x18011049C (-Free@-$CThreadLocalObjectCache@VCReconstructableDrawListEntry_UVx2@@V1@@@SAXPEAX@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCDrawListEntry@@V1@@@SAXPEAX@Z @ 0x18011058C (-Free@-$CThreadLocalObjectCache@VCDrawListEntry@@V1@@@SAXPEAX@Z.c)
 *     ??1CDrawListEntry@@MEAA@XZ @ 0x18011067C (--1CDrawListEntry@@MEAA@XZ.c)
 *     ??1CDrawListCache@@EEAA@XZ @ 0x1801106D8 (--1CDrawListCache@@EEAA@XZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCDrawListCache@@V1@@@SAXPEAX@Z @ 0x180110710 (-Free@-$CThreadLocalObjectCache@VCDrawListCache@@V1@@@SAXPEAX@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180249CC0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CLinkedShader>::InternalRelease(volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rbx
  int v2; // edi
  CDrawListEntry *(__fastcall *v3)(CDrawListEntry *, char); // rax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    v2 = _InterlockedDecrement(v1 + 2);
    if ( v2 < -1 )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x26,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v5);
    if ( !v2 )
    {
      if ( _InterlockedAdd(v1 + 2, 1u) <= 0 )
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x18,
          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          (const char *)0x8007029CLL,
          v5);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 24LL))(v1);
      v2 = _InterlockedDecrement(v1 + 2);
      if ( v2 < -1 )
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x26,
          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          (const char *)0x8007029CLL,
          v5);
      if ( !v2 )
      {
        if ( _InterlockedDecrement(v1 + 2) < -1 )
          wil::details::in1diag3::Log_Hr(
            retaddr,
            (void *)0x26,
            (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
            (const char *)0x8007029CLL,
            v5);
        v3 = *(CDrawListEntry *(__fastcall **)(CDrawListEntry *, char))(*(_QWORD *)v1 + 16LL);
        if ( v3 == CReconstructableDrawListEntry_UVx2::`vector deleting destructor' )
        {
          CReconstructableDrawListEntry::~CReconstructableDrawListEntry((CReconstructableDrawListEntry *)v1);
          CThreadLocalObjectCache<CReconstructableDrawListEntry_UVx2,CReconstructableDrawListEntry_UVx2>::Free(v1);
        }
        else
        {
          if ( v3 == CDrawListEntry::`scalar deleting destructor' )
          {
            CDrawListEntry::~CDrawListEntry((CDrawListEntry *)v1);
            CThreadLocalObjectCache<CDrawListEntry,CDrawListEntry>::Free(v1);
            return 0LL;
          }
          if ( v3 == CDrawListCache::`scalar deleting destructor' )
          {
            CDrawListCache::~CDrawListCache((CDrawListCache *)v1);
            CThreadLocalObjectCache<CDrawListCache,CDrawListCache>::Free(v1);
            return 0LL;
          }
          v3((CDrawListEntry *)v1, 1);
        }
      }
    }
    return (unsigned int)v2;
  }
  return 0LL;
}
