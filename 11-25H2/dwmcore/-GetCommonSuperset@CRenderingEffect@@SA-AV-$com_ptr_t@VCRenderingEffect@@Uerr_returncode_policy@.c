/*
 * XREFs of ?GetCommonSuperset@CRenderingEffect@@SA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@PEAV1@0@Z @ 0x18010DDF0
 * Callers:
 *     ?ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z @ 0x1800D79B0 (-ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z.c)
 * Callees:
 *     ?GetNextRunningEffect@CBrushRenderingEffect@@UEAA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@PEAVCRenderingEffect@@PEA_N@Z @ 0x18010DA80 (-GetNextRunningEffect@CBrushRenderingEffect@@UEAA-AV-$com_ptr_t@VCRenderingEffect@@Uerr_returnco.c)
 *     ?GetNextRunningEffect@CCommonRenderingEffect@@UEAA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@PEAVCRenderingEffect@@PEA_N@Z @ 0x18010EE70 (-GetNextRunningEffect@CCommonRenderingEffect@@UEAA-AV-$com_ptr_t@VCRenderingEffect@@Uerr_returnc.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

unsigned int (__fastcall ****__fastcall CRenderingEffect::GetCommonSuperset(
        unsigned int (__fastcall ****a1)(CMILRefCountImpl *__hidden this),
        unsigned int (__fastcall ***a2)(CMILRefCountImpl *__hidden this),
        unsigned int (__fastcall ***a3)(CMILRefCountImpl *__hidden this)))(CMILRefCountImpl *__hidden this)
{
  unsigned int (__fastcall **v3)(CMILRefCountImpl *__hidden); // rax
  unsigned int (__fastcall *v5)(CMILRefCountImpl *__hidden); // rax
  unsigned int (__fastcall ***v6)(CMILRefCountImpl *__hidden); // rcx
  unsigned int (__fastcall ***v7)(CMILRefCountImpl *__hidden); // rax
  char v9; // [rsp+40h] [rbp+8h] BYREF
  unsigned int (__fastcall ***v10)(CMILRefCountImpl *__hidden); // [rsp+48h] [rbp+10h] BYREF

  v3 = *a2;
  v9 = 0;
  v5 = v3[9];
  if ( (char *)v5 == (char *)CCommonRenderingEffect::GetNextRunningEffect )
  {
    CCommonRenderingEffect::GetNextRunningEffect(a2, &v10, a3, &v9);
  }
  else if ( (char *)v5 == (char *)CBrushRenderingEffect::GetNextRunningEffect )
  {
    CBrushRenderingEffect::GetNextRunningEffect(a2, &v10, a3, &v9);
  }
  else
  {
    ((void (__fastcall *)(unsigned int (__fastcall ***)(CMILRefCountImpl *__hidden), unsigned int (__fastcall ****)(CMILRefCountImpl *__hidden), unsigned int (__fastcall ***)(CMILRefCountImpl *__hidden), char *))v5)(
      a2,
      &v10,
      a3,
      &v9);
  }
  if ( v9 )
    goto LABEL_6;
  v6 = v10;
  v7 = 0LL;
  v10 = 0LL;
  if ( v6 )
  {
    (*v6)[1]((CMILRefCountImpl *)v6);
LABEL_6:
    v7 = v10;
  }
  *a1 = v7;
  return a1;
}
