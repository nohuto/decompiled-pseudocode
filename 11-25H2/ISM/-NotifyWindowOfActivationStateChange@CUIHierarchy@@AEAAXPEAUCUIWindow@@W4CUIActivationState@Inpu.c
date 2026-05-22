/*
 * XREFs of ?NotifyWindowOfActivationStateChange@CUIHierarchy@@AEAAXPEAUCUIWindow@@W4CUIActivationState@Input@Internal@UI@Windows@@_K@Z @ 0x1800AA900
 * Callers:
 *     ?PropagateActivationState@CUIHierarchy@@AEAA_NPEAUCUIWindow@@0_N@Z @ 0x1800AB1C0 (-PropagateActivationState@CUIHierarchy@@AEAA_NPEAUCUIWindow@@0_N@Z.c)
 * Callees:
 *     ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x18001AE40 (-GetInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdN.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x18002582C (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x180025F94 (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z @ 0x180025FD8 (-GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z.c)
 *     ?_Tidy@?$vector@PEAVInputSite@@V?$allocator@PEAVInputSite@@@std@@@std@@AEAAXXZ @ 0x1800661C0 (-_Tidy@-$vector@PEAVInputSite@@V-$allocator@PEAVInputSite@@@std@@@std@@AEAAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$GetAttachedObject@UICUIComponentInputObjectProxy@@VCUIComponentInputObjectProxy@@@InputSite@@QEAA?AV?$ComPtr@VCUIComponentInputObjectProxy@@@WRL@Microsoft@@XZ @ 0x1800A9910 (--$GetAttachedObject@UICUIComponentInputObjectProxy@@VCUIComponentInputObjectProxy@@@InputSite@@.c)
 *     ??$GetAttachedObject@UICUIHostInputObjectProxy@@VCUIHostInputObjectProxy@@@InputSite@@QEAA?AV?$ComPtr@VCUIHostInputObjectProxy@@@WRL@Microsoft@@XZ @ 0x1800A99A8 (--$GetAttachedObject@UICUIHostInputObjectProxy@@VCUIHostInputObjectProxy@@@InputSite@@QEAA-AV-$C.c)
 *     ??0?$vector@PEAVInputSite@@V?$allocator@PEAVInputSite@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800AA018 (--0-$vector@PEAVInputSite@@V-$allocator@PEAVInputSite@@@std@@@std@@QEAA@AEBV01@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall CUIHierarchy::NotifyWindowOfActivationStateChange(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  struct InputSiteManager *InputSiteManager; // rax
  const char *v8; // r9
  __int64 v9; // rbx
  const char *v10; // r9
  __int64 v11; // rdi
  __int64 v12; // rbp
  void (__fastcall *v13)(__int64, _QWORD, _QWORD); // rsi
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  unsigned int ViewIdFromWindowId; // eax
  char v16; // bp
  struct InputSiteManager *v17; // rax
  __int64 *v18; // rdi
  __int64 *v19; // r14
  __int64 v20; // rbx
  __int64 v21; // rsi
  __int64 v22; // rdx
  _QWORD v23[11]; // [rsp+20h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v25; // [rsp+80h] [rbp+8h] BYREF
  __int64 v26; // [rsp+88h] [rbp+10h] BYREF

  v25 = a1;
  if ( a3 != *(_DWORD *)(a2 + 36) || a4 != *(_QWORD *)(a2 + 40) )
  {
    InputSiteManager = ISMStatics::GetInputSiteManager();
    InputSiteManager::GetInputSiteFromId((__int64)InputSiteManager, (__int64)&v25, 1u, *(_QWORD *)(a2 + 16));
    v9 = v25;
    if ( !v25 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xA9,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\system\\componentui\\server\\cuihierarchy.cpp",
        v8);
    InputSite::GetAttachedObject<ICUIComponentInputObjectProxy,CUIComponentInputObjectProxy>(v25, &v26);
    v11 = v26;
    if ( !v26 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xAC,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\system\\componentui\\server\\cuihierarchy.cpp",
        v10);
    v12 = a4 & -(__int64)((a3 & 2) != 0);
    v13 = *(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(v26 + 8) + 40LL);
    ViewHierarchy = ISMStatics::GetViewHierarchy();
    ViewIdFromWindowId = ViewHelper::GetViewIdFromWindowId(ViewHierarchy, v12);
    v13(v11 + 8, a3, ViewIdFromWindowId);
    *(_DWORD *)(a2 + 36) = a3;
    *(_QWORD *)(a2 + 40) = v12;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v16 = (a3 & 3) != 0;
  if ( v16 != *(_BYTE *)(a2 + 49) )
  {
    *(_BYTE *)(a2 + 49) = v16;
    v17 = ISMStatics::GetInputSiteManager();
    std::vector<InputSite *>::vector<InputSite *>(v23, (__int64)v17 + 56);
    v18 = (__int64 *)v23[0];
    v19 = (__int64 *)v23[1];
    while ( v18 != v19 )
    {
      InputSite::GetAttachedObject<ICUIHostInputObjectProxy,CUIHostInputObjectProxy>(*v18, &v25);
      v20 = v25;
      if ( v25 )
      {
        v21 = v25 + 8;
        if ( *(_QWORD *)(a2 + 16) == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v25 + 8) + 40LL))(v25 + 8) )
        {
          LOBYTE(v22) = (a3 & 3) != 0;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 32LL))(v20 + 8, v22);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
          break;
        }
      }
      if ( v20 )
      {
        v25 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
      }
      ++v18;
    }
    std::vector<InputSite *>::_Tidy((__int64)v23);
  }
}
