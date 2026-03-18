/*
 * XREFs of ?InternalRelease@?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D680
 * Callers:
 *     ?AddKeyframe@KeyframeSequence@@QEAAXIMPEAVKeyframeValue@@PEAVKeyframeInterpolation@@@Z @ 0x18005D3DC (-AddKeyframe@KeyframeSequence@@QEAAXIMPEAVKeyframeValue@@PEAVKeyframeInterpolation@@@Z.c)
 *     ?CreateConstantKeyframeValue@KeyframeValue@@SAXPEBVCExpressionValue@@PEAPEAV1@@Z @ 0x18005D4EC (-CreateConstantKeyframeValue@KeyframeValue@@SAXPEBVCExpressionValue@@PEAPEAV1@@Z.c)
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x18005D5B4 (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ??1Keyframe@KeyframeSequence@@QEAA@XZ @ 0x18005D8A0 (--1Keyframe@KeyframeSequence@@QEAA@XZ.c)
 *     ?CreateLinkedShader@CShaderCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x18006CBB0 (-CreateLinkedShader@CShaderCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V-$span@.c)
 *     ?AddLinkedShader@CShaderCache@@IEAAJULookupKey@ShaderLinkingConfig@@PEAVCLinkedShader@@@Z @ 0x1801B18D0 (-AddLinkedShader@CShaderCache@@IEAAJULookupKey@ShaderLinkingConfig@@PEAVCLinkedShader@@@Z.c)
 *     ??4?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@QEAAAEAV012@PEAVCLinkedShader@@@Z @ 0x1801B194C (--4-$ComPtr@VCLinkedShader@@@WRL@Microsoft@@QEAAAEAV012@PEAVCLinkedShader@@@Z.c)
 *     ??_GCShaderCache@@QEAAPEAXI@Z @ 0x1801B199C (--_GCShaderCache@@QEAAPEAXI@Z.c)
 *     ?CreateExpressionKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyframeAnimation@@IPEAPEAV1@@Z @ 0x1801EF3FC (-CreateExpressionKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyframeAn.c)
 *     ?CreateStartingValueKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyframeAnimation@@PEAPEAV1@@Z @ 0x1801EF484 (-CreateStartingValueKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyfram.c)
 *     ??1CCompositingShaderCache@@QEAA@XZ @ 0x180253304 (--1CCompositingShaderCache@@QEAA@XZ.c)
 *     ??1CCompiledEffectCache@@QEAA@XZ @ 0x18027E3C8 (--1CCompiledEffectCache@@QEAA@XZ.c)
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEBUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x1802A7E14 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEBUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 * Callees:
 *     ??1CReconstructableDrawListEntry@@UEAA@XZ @ 0x18014C070 (--1CReconstructableDrawListEntry@@UEAA@XZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCReconstructableDrawListEntry_UVx2@@V1@@@SAXPEAX@Z @ 0x18014C0DC (-Free@-$CThreadLocalObjectCache@VCReconstructableDrawListEntry_UVx2@@V1@@@SAXPEAX@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCDrawListEntry@@V1@@@SAXPEAX@Z @ 0x18014C1CC (-Free@-$CThreadLocalObjectCache@VCDrawListEntry@@V1@@@SAXPEAX@Z.c)
 *     ??1CDrawListEntry@@MEAA@XZ @ 0x18014C2BC (--1CDrawListEntry@@MEAA@XZ.c)
 *     ??1CDrawListCache@@EEAA@XZ @ 0x18014C318 (--1CDrawListCache@@EEAA@XZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCDrawListCache@@V1@@@SAXPEAX@Z @ 0x18014C350 (-Free@-$CThreadLocalObjectCache@VCDrawListCache@@V1@@@SAXPEAX@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180255010 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
          CThreadLocalObjectCache<CReconstructableDrawListEntry_UVx2,CReconstructableDrawListEntry_UVx2>::Free((LPVOID)v1);
        }
        else
        {
          if ( v3 == CDrawListEntry::`scalar deleting destructor' )
          {
            CDrawListEntry::~CDrawListEntry((CDrawListEntry *)v1);
            CThreadLocalObjectCache<CDrawListEntry,CDrawListEntry>::Free((LPVOID)v1);
            return 0LL;
          }
          if ( v3 == CDrawListCache::`scalar deleting destructor' )
          {
            CDrawListCache::~CDrawListCache((CDrawListCache *)v1);
            CThreadLocalObjectCache<CDrawListCache,CDrawListCache>::Free((LPVOID)v1);
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
