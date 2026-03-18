/*
 * XREFs of ??1CCompiledEffectCache@@QEAA@XZ @ 0x180273CB8
 * Callers:
 *     ??R?$default_delete@VCCompiledEffectCache@@@std@@QEBAXPEAVCCompiledEffectCache@@@Z @ 0x180273DC4 (--R-$default_delete@VCCompiledEffectCache@@@std@@QEBAXPEAVCCompiledEffectCache@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x18008E308 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@IEAAKXZ @ 0x18017F020 (-InternalRelease@-$ComPtr@VCLinkedShader@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CCompiledEffectCache::~CCompiledEffectCache(CCompiledEffectCache *this)
{
  int i; // edi
  void *v3; // rcx

  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)this + 4);
  if ( *(_QWORD *)this )
  {
    for ( i = 0; i < *((_DWORD *)this + 4); ++i )
      Microsoft::WRL::ComPtr<CLinkedShader>::InternalRelease((volatile signed __int32 **)(*((_QWORD *)this + 1) + 8LL * i));
    operator delete(*(void **)this);
    *(_QWORD *)this = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 1);
  if ( v3 )
  {
    operator delete(v3);
    *((_QWORD *)this + 1) = 0LL;
  }
  *((_DWORD *)this + 4) = 0;
}
