/*
 * XREFs of ?MatchEffectToHomogeneousLayer@CBatchOptimizer@@CA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@AEBUSharedStateLayer@@PEAVCRenderingEffect@@@Z @ 0x1800D8400
 * Callers:
 *     ?AddRenderingCommand@CBatchOptimizer@@QEAA_N$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x180289FB8 (-AddRenderingCommand@CBatchOptimizer@@QEAA_N$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delete.c)
 * Callees:
 *     ?GetNextRunningEffect@CBrushRenderingEffect@@UEAA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@PEAVCRenderingEffect@@PEA_N@Z @ 0x1800D81C0 (-GetNextRunningEffect@CBrushRenderingEffect@@UEAA-AV-$com_ptr_t@VCRenderingEffect@@Uerr_returnco.c)
 *     ?GetNextRunningEffect@CCommonRenderingEffect@@UEAA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@PEAVCRenderingEffect@@PEA_N@Z @ 0x1800D95B0 (-GetNextRunningEffect@CCommonRenderingEffect@@UEAA-AV-$com_ptr_t@VCRenderingEffect@@Uerr_returnc.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180249CC0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

unsigned int (__fastcall ****__fastcall CBatchOptimizer::MatchEffectToHomogeneousLayer(
        unsigned int (__fastcall ****a1)(CMILRefCountImpl *__hidden this),
        __int64 a2,
        unsigned int (__fastcall ***a3)(CMILRefCountImpl *__hidden this)))(CMILRefCountImpl *__hidden this)
{
  unsigned int (__fastcall ***v4)(CMILRefCountImpl *__hidden); // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int (__fastcall **v7)(CMILRefCountImpl *__hidden); // rax
  unsigned int (__fastcall *v8)(CMILRefCountImpl *__hidden); // rax
  unsigned int (__fastcall ***v9)(CMILRefCountImpl *__hidden); // rcx
  unsigned int (__fastcall *v11)(CMILRefCountImpl *__hidden); // rax
  int v12; // et0
  int v13; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v15; // [rsp+48h] [rbp+10h] BYREF
  unsigned int (__fastcall ***v16)(CMILRefCountImpl *__hidden); // [rsp+58h] [rbp+20h] BYREF

  v4 = *(unsigned int (__fastcall ****)(CMILRefCountImpl *__hidden))(a2 + 32);
  if ( v4
    || *(_DWORD *)(a2 + 20) == 1
    && ((v5 = *(_QWORD *)(a2 + 8LL * (unsigned int)(*(_DWORD *)(a2 + 16) - 1) + 40),
         v6 = *(_QWORD *)(v5 + 8),
         *(_BYTE *)(v5 + 92))
      ? (v4 = *(unsigned int (__fastcall ****)(CMILRefCountImpl *__hidden))(v6 + 80))
      : (v4 = *(unsigned int (__fastcall ****)(CMILRefCountImpl *__hidden))(v6 + 24)),
        v4) )
  {
    v7 = *v4;
    v15 = 0;
    v8 = v7[9];
    if ( (char *)v8 == (char *)CCommonRenderingEffect::GetNextRunningEffect )
    {
      CCommonRenderingEffect::GetNextRunningEffect(v4, &v16, a3, &v15);
    }
    else if ( (char *)v8 == (char *)CBrushRenderingEffect::GetNextRunningEffect )
    {
      CBrushRenderingEffect::GetNextRunningEffect(v4, &v16, a3, &v15);
    }
    else
    {
      ((void (__fastcall *)(unsigned int (__fastcall ***)(CMILRefCountImpl *__hidden), unsigned int (__fastcall ****)(CMILRefCountImpl *__hidden), unsigned int (__fastcall ***)(CMILRefCountImpl *__hidden), char *))v8)(
        v4,
        &v16,
        a3,
        &v15);
    }
    if ( !v15 )
    {
      v9 = v16;
      v16 = 0LL;
      if ( v9 )
        (*v9)[1]((CMILRefCountImpl *)v9);
    }
    *a1 = v16;
    return a1;
  }
  *a1 = a3;
  if ( !a3 )
    return a1;
  v11 = **a3;
  if ( v11 != CMILRefCountImpl::AddReference )
  {
    v11((CMILRefCountImpl *)a3);
    return a1;
  }
  v12 = _InterlockedAdd((volatile signed __int32 *)a3, 1u);
  if ( !((v12 < 0) ^ __OFSUB__(v11, CMILRefCountImpl::AddReference) | (v12 == 0)) )
    return a1;
  wil::details::in1diag3::Log_Hr(
    retaddr,
    (void *)0x18,
    (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
    (const char *)0x8007029CLL,
    v13);
  return a1;
}
