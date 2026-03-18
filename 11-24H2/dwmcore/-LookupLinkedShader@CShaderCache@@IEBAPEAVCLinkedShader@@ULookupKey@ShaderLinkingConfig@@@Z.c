/*
 * XREFs of ?LookupLinkedShader@CShaderCache@@IEBAPEAVCLinkedShader@@ULookupKey@ShaderLinkingConfig@@@Z @ 0x18010F980
 * Callers:
 *     ?GetCompositingPixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D11PixelShader@@@Z @ 0x180065F60 (-GetCompositingPixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4D3D_FEATURE_LEVEL@@V-$span@$$CBUP.c)
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

volatile signed __int32 *__fastcall CShaderCache::LookupLinkedShader(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // r8
  __int64 i; // r9
  volatile signed __int32 *v5; // rbx
  int v6; // esi
  int v7; // esi
  void *(__fastcall *v8)(CReconstructableDrawListEntry_UVx2 *__hidden, unsigned int); // rax
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 0;
  v3 = 0LL;
  for ( i = 0LL; ; i += 16LL )
  {
    if ( v3 >= *(int *)(a1 + 16) )
      return 0LL;
    if ( *(_QWORD *)(i + *(_QWORD *)a1) == *(_QWORD *)a2 && *(_DWORD *)(i + *(_QWORD *)a1 + 8) == *(_DWORD *)(a2 + 8) )
      break;
    ++v2;
    ++v3;
  }
  if ( v2 == -1 )
    return 0LL;
  v5 = *(volatile signed __int32 **)(*(_QWORD *)(a1 + 8) + 8LL * v2);
  if ( !v5 )
    return v5;
  if ( _InterlockedAdd(v5 + 2, 1u) <= 0 )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x18,
      (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
      (const char *)0x8007029CLL,
      v10);
  v6 = _InterlockedDecrement(v5 + 2);
  if ( v6 < -1 )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x26,
      (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
      (const char *)0x8007029CLL,
      v10);
  if ( v6 )
    return v5;
  if ( _InterlockedAdd(v5 + 2, 1u) <= 0 )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x18,
      (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
      (const char *)0x8007029CLL,
      v10);
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 24LL))(v5);
  v7 = _InterlockedDecrement(v5 + 2);
  if ( v7 < -1 )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x26,
      (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
      (const char *)0x8007029CLL,
      v10);
  if ( v7 )
    return v5;
  if ( _InterlockedDecrement(v5 + 2) < -1 )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x26,
      (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
      (const char *)0x8007029CLL,
      v10);
  v8 = *(void *(__fastcall **)(CReconstructableDrawListEntry_UVx2 *__hidden, unsigned int))(*(_QWORD *)v5 + 16LL);
  if ( v8 == CReconstructableDrawListEntry_UVx2::`vector deleting destructor' )
  {
    CReconstructableDrawListEntry::~CReconstructableDrawListEntry((CReconstructableDrawListEntry *)v5);
    CThreadLocalObjectCache<CReconstructableDrawListEntry_UVx2,CReconstructableDrawListEntry_UVx2>::Free((LPVOID)v5);
    return v5;
  }
  if ( v8 == CDrawListEntry::`scalar deleting destructor' )
  {
    CDrawListEntry::~CDrawListEntry((CDrawListEntry *)v5);
    CThreadLocalObjectCache<CDrawListEntry,CDrawListEntry>::Free((LPVOID)v5);
    return v5;
  }
  else
  {
    if ( v8 == CDrawListCache::`scalar deleting destructor' )
    {
      CDrawListCache::~CDrawListCache((CDrawListCache *)v5);
      CThreadLocalObjectCache<CDrawListCache,CDrawListCache>::Free((LPVOID)v5);
    }
    else
    {
      v8((CReconstructableDrawListEntry_UVx2 *)v5, 1u);
    }
    return v5;
  }
}
