/*
 * XREFs of ?GetConstantBufferSize@CCustomKernelEffect@@UEBAII@Z @ 0x1800472B0
 * Callers:
 *     ??0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCShaderCache@@IW4Enum@CompiledEffectSubgraphFlags@234@_N@Z @ 0x1800471D0 (--0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCShaderCach.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCustomKernelEffect::GetConstantBufferSize(CCustomKernelEffect *this)
{
  unsigned __int64 v1; // rax

  v1 = (__int64)(*((_QWORD *)this + 2) - *((_QWORD *)this + 1)) >> 4;
  if ( v1 > 8 )
    LODWORD(v1) = 128;
  return (unsigned int)(16 * v1);
}
