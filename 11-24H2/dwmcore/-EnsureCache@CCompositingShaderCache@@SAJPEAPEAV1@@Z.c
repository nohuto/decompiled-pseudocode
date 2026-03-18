/*
 * XREFs of ?EnsureCache@CCompositingShaderCache@@SAJPEAPEAV1@@Z @ 0x180187BC4
 * Callers:
 *     ?Create@CSurfaceShaderComposer@@SAJPEAVCD3DDevice@@PEAPEAV1@@Z @ 0x180186F5C (-Create@CSurfaceShaderComposer@@SAJPEAVCD3DDevice@@PEAPEAV1@@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??R?$default_delete@VCCompositingShaderCache@@@std@@QEBAXPEAVCCompositingShaderCache@@@Z @ 0x1802DC1C4 (--R-$default_delete@VCCompositingShaderCache@@@std@@QEBAXPEAVCCompositingShaderCache@@@Z.c)
 */

__int64 __fastcall CCompositingShaderCache::EnsureCache(struct CCompositingShaderCache **a1)
{
  _DWORD *v1; // rax
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (_DWORD *)g_spCompositingShaderCache;
  if ( g_spCompositingShaderCache )
    goto LABEL_8;
  v1 = MIDL_user_allocate(0x20uLL);
  if ( v1 )
  {
    v1[5] = 0;
    *(_QWORD *)v1 = 0LL;
    *((_QWORD *)v1 + 1) = 0LL;
    v1[4] = 0;
    *((_QWORD *)v1 + 3) = v1;
  }
  v3 = g_spCompositingShaderCache;
  g_spCompositingShaderCache = (__int64)v1;
  if ( v3 )
  {
    std::default_delete<CCompositingShaderCache>::operator()();
    v1 = (_DWORD *)g_spCompositingShaderCache;
  }
  if ( v1 )
  {
LABEL_8:
    *a1 = (struct CCompositingShaderCache *)v1;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\compositingshadercache.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
