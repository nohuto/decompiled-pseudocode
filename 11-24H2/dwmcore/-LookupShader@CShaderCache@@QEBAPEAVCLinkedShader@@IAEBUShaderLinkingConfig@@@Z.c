/*
 * XREFs of ?LookupShader@CShaderCache@@QEBAPEAVCLinkedShader@@IAEBUShaderLinkingConfig@@@Z @ 0x18010E9F0
 * Callers:
 *     ?CreateLinkedShader@CShaderCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x180042F34 (-CreateLinkedShader@CShaderCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V-$span@.c)
 *     ?SetStateOnDevice@CProjectedShadowRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1801B4E10 (-SetStateOnDevice@CProjectedShadowRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 * Callees:
 *     ?GetLookupKey@ShaderLinkingConfig@@QEBA?AULookupKey@1@I@Z @ 0x18010EC50 (-GetLookupKey@ShaderLinkingConfig@@QEBA-AULookupKey@1@I@Z.c)
 *     ??1CReconstructableDrawListEntry@@UEAA@XZ @ 0x180110430 (--1CReconstructableDrawListEntry@@UEAA@XZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCReconstructableDrawListEntry_UVx2@@V1@@@SAXPEAX@Z @ 0x18011049C (-Free@-$CThreadLocalObjectCache@VCReconstructableDrawListEntry_UVx2@@V1@@@SAXPEAX@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCDrawListEntry@@V1@@@SAXPEAX@Z @ 0x18011058C (-Free@-$CThreadLocalObjectCache@VCDrawListEntry@@V1@@@SAXPEAX@Z.c)
 *     ??1CDrawListEntry@@MEAA@XZ @ 0x18011067C (--1CDrawListEntry@@MEAA@XZ.c)
 *     ??1CDrawListCache@@EEAA@XZ @ 0x1801106D8 (--1CDrawListCache@@EEAA@XZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCDrawListCache@@V1@@@SAXPEAX@Z @ 0x180110710 (-Free@-$CThreadLocalObjectCache@VCDrawListCache@@V1@@@SAXPEAX@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180249CC0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct CLinkedShader *__fastcall CShaderCache::LookupShader(
        CShaderCache *this,
        unsigned int a2,
        const struct ShaderLinkingConfig *a3)
{
  int v4; // r10d
  __int64 v5; // rdx
  __int64 i; // r8
  volatile signed __int32 *v7; // rbx
  int v8; // esi
  int v9; // esi
  void *(__fastcall *v10)(CDrawListEntry *__hidden, unsigned int); // rax
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  int v13; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  ShaderLinkingConfig::GetLookupKey(a3, &v12, a2);
  v4 = 0;
  v5 = 0LL;
  for ( i = 0LL; ; i += 16LL )
  {
    if ( v5 >= *((int *)this + 4) )
      return 0LL;
    if ( *(_QWORD *)(i + *(_QWORD *)this) == v12 && *(_DWORD *)(i + *(_QWORD *)this + 8) == v13 )
      break;
    ++v4;
    ++v5;
  }
  if ( v4 == -1 )
    return 0LL;
  v7 = *(volatile signed __int32 **)(*((_QWORD *)this + 1) + 8LL * v4);
  if ( v7 )
  {
    if ( _InterlockedAdd(v7 + 2, 1u) <= 0 )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x18,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v12);
    v8 = _InterlockedDecrement(v7 + 2);
    if ( v8 < -1 )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x26,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v12);
    if ( !v8 )
    {
      if ( _InterlockedAdd(v7 + 2, 1u) <= 0 )
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x18,
          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          (const char *)0x8007029CLL,
          v12);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 24LL))(v7);
      v9 = _InterlockedDecrement(v7 + 2);
      if ( v9 < -1 )
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x26,
          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          (const char *)0x8007029CLL,
          v12);
      if ( !v9 )
      {
        if ( _InterlockedDecrement(v7 + 2) < -1 )
          wil::details::in1diag3::Log_Hr(
            retaddr,
            (void *)0x26,
            (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
            (const char *)0x8007029CLL,
            v12);
        v10 = *(void *(__fastcall **)(CDrawListEntry *__hidden, unsigned int))(*(_QWORD *)v7 + 16LL);
        if ( v10 == CReconstructableDrawListEntry_UVx2::`vector deleting destructor' )
        {
          CReconstructableDrawListEntry::~CReconstructableDrawListEntry((CReconstructableDrawListEntry *)v7);
          CThreadLocalObjectCache<CReconstructableDrawListEntry_UVx2,CReconstructableDrawListEntry_UVx2>::Free((LPVOID)v7);
        }
        else if ( v10 == CDrawListEntry::`scalar deleting destructor' )
        {
          CDrawListEntry::~CDrawListEntry((CDrawListEntry *)v7);
          CThreadLocalObjectCache<CDrawListEntry,CDrawListEntry>::Free((LPVOID)v7);
        }
        else if ( v10 == CDrawListCache::`scalar deleting destructor' )
        {
          CDrawListCache::~CDrawListCache((CDrawListCache *)v7);
          CThreadLocalObjectCache<CDrawListCache,CDrawListCache>::Free((LPVOID)v7);
        }
        else
        {
          v10((CDrawListEntry *)v7, 1u);
        }
      }
    }
  }
  return (struct CLinkedShader *)v7;
}
