/*
 * XREFs of ?NotifyWindowOfInputDisabledStateChange@CUIHierarchy@@AEAAX_KW4InputDisabledState@@1@Z @ 0x1800A95EC
 * Callers:
 *     ?ModifyInputDisabledStateAndPropagate@CUIHierarchy@@AEAAX_KW4InputDisabledState@@_N@Z @ 0x1800A9300 (-ModifyInputDisabledStateAndPropagate@CUIHierarchy@@AEAAX_KW4InputDisabledState@@_N@Z.c)
 * Callees:
 *     ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x18001B410 (-GetInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdN.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180025DEC (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$GetAttachedObject@UICUIComponentInputObjectProxy@@VCUIComponentInputObjectProxy@@@InputSite@@QEAA?AV?$ComPtr@VCUIComponentInputObjectProxy@@@WRL@Microsoft@@XZ @ 0x1800A8410 (--$GetAttachedObject@UICUIComponentInputObjectProxy@@VCUIComponentInputObjectProxy@@@InputSite@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall CUIHierarchy::NotifyWindowOfInputDisabledStateChange(__int64 a1, __int64 a2, int a3, int a4)
{
  char v5; // si
  char result; // al
  struct InputSiteManager *InputSiteManager; // rax
  const char *v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rdx
  const char *v11; // r9
  __int64 v12; // rdi
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v15 = a1;
  v5 = (a4 & 0xFFFFFFFD) == 0;
  result = (a3 & 0xFFFFFFFD) == 0;
  if ( v5 != result )
  {
    InputSiteManager = ISMStatics::GetInputSiteManager();
    InputSiteManager::GetInputSiteFromId((__int64)InputSiteManager, (__int64)&v15, 1u, a2);
    v9 = v15;
    if ( !v15 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x135,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\system\\componentui\\server\\cuihierarchy.cpp",
        v8);
    InputSite::GetAttachedObject<ICUIComponentInputObjectProxy,CUIComponentInputObjectProxy>(v15, v13);
    v12 = v13[0];
    if ( !v13[0] )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x137,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\system\\componentui\\server\\cuihierarchy.cpp",
        v11);
    LOBYTE(v10) = v5;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v13[0] + 8LL) + 32LL))(v13[0] + 8LL, v10);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return result;
}
