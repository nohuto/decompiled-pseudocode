/*
 * XREFs of ?OnInputDelegationInputObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x180056B10
 * Callers:
 *     <none>
 * Callees:
 *     ??$RemoveObject@UIInputDelegationInputObjectProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy@@@Z @ 0x180056B88 (--$RemoveObject@UIInputDelegationInputObjectProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy@@@.c)
 *     ??$AttachObject@VBamoInputDelegationInputObjectProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy@@PEAVBamoInputDelegationInputObjectProxy@@@Z @ 0x180056CA8 (--$AttachObject@VBamoInputDelegationInputObjectProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall InputSiteElementProxy::OnInputDelegationInputObjectChanged(
        InputSiteElementProxy *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = *((_QWORD *)this + 42);
  if ( !v5 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x143,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\inputsitemanager\\server\\inputsiteelementproxy.cpp",
      a4);
  InputSite::RemoveObject<IInputDelegationInputObjectProxy>(v5, this);
  v6 = *((_QWORD *)this + 42);
  v7 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 184LL))((char *)this + 8);
  InputSite::AttachObject<BamoInputDelegationInputObjectProxy>(v6, this, v7);
  return 0LL;
}
