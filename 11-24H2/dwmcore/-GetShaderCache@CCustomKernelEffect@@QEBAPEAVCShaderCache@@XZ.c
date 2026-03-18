/*
 * XREFs of ?GetShaderCache@CCustomKernelEffect@@QEBAPEAVCShaderCache@@XZ @ 0x1800472D4
 * Callers:
 *     ?BuildOnePass@CBlurRenderingGraphBuilder@@AEAAJW4D3D_FEATURE_LEVEL@@AEBV?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@W4SeparableKernelPass@@@Z @ 0x180045700 (-BuildOnePass@CBlurRenderingGraphBuilder@@AEAAJW4D3D_FEATURE_LEVEL@@AEBV-$vector@UKernelTap@@V-$.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ?reset@?$unique_ptr@VCShaderCache@@U?$default_delete@VCShaderCache@@@std@@@std@@QEAAXPEAVCShaderCache@@@Z @ 0x180250370 (-reset@-$unique_ptr@VCShaderCache@@U-$default_delete@VCShaderCache@@@std@@@std@@QEAAXPEAVCShader.c)
 */

struct CShaderCache *__fastcall CCustomKernelEffect::GetShaderCache(CCustomKernelEffect *this)
{
  unsigned __int64 v1; // rax
  char *v2; // rbx
  _QWORD *v3; // rax

  v1 = (__int64)(*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) >> 4;
  if ( v1 > 8 )
    v1 = 0LL;
  v2 = (char *)&CCustomKernelEffect::s_rgspCache + 8 * v1;
  if ( !*(_QWORD *)v2 )
  {
    v3 = operator new(0x20uLL);
    if ( v3 )
    {
      *v3 = 0LL;
      v3[1] = 0LL;
      *((_DWORD *)v3 + 4) = 0;
      v3[3] = v3;
    }
    else
    {
      v3 = 0LL;
    }
    std::unique_ptr<CShaderCache>::reset(v2, v3);
  }
  return *(struct CShaderCache **)v2;
}
