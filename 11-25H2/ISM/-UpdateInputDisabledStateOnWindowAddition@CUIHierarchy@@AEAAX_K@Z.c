/*
 * XREFs of ?UpdateInputDisabledStateOnWindowAddition@CUIHierarchy@@AEAAX_K@Z @ 0x1800AB7D8
 * Callers:
 *     ?OnUniversalPropertyChanged@CUIHierarchy@@AEAAXUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UUniversalPropertyChangedEventArgs@34567@@Z @ 0x1800AABE0 (-OnUniversalPropertyChanged@CUIHierarchy@@AEAAXUIUniversalAppModelWatcher@WindowManagement@Appli.c)
 *     ?OnWindowAdded@CUIHierarchy@@AEAAXUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@34567@@Z @ 0x1800AAF10 (-OnWindowAdded@CUIHierarchy@@AEAAXUWindowWatcher@WindowManagement@ApplicationModel@Internal@Wind.c)
 * Callees:
 *     ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x18001AE40 (-GetInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdN.c)
 *     ?_Tidy@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x180023320 (-_Tidy@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x18002582C (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?GetIdForNamespace@InputSite@@QEBA?AV?$optional@_K@std@@W4InputSiteIdNamespace@@@Z @ 0x18002D460 (-GetIdForNamespace@InputSite@@QEBA-AV-$optional@_K@std@@W4InputSiteIdNamespace@@@Z.c)
 *     ?GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ @ 0x18005D854 (-GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ.c)
 *     ?value@?$optional@_K@std@@QEGAAAEA_KXZ @ 0x180063AD0 (-value@-$optional@_K@std@@QEGAAAEA_KXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$GetAttachedObject@UICUIComponentInputObjectProxy@@VCUIComponentInputObjectProxy@@@InputSite@@QEAA?AV?$ComPtr@VCUIComponentInputObjectProxy@@@WRL@Microsoft@@XZ @ 0x1800A9910 (--$GetAttachedObject@UICUIComponentInputObjectProxy@@VCUIComponentInputObjectProxy@@@InputSite@@.c)
 *     ??$GetAttachedObject@UICUIHostInputObjectProxy@@VCUIHostInputObjectProxy@@@InputSite@@QEAA?AV?$ComPtr@VCUIHostInputObjectProxy@@@WRL@Microsoft@@XZ @ 0x1800A99A8 (--$GetAttachedObject@UICUIHostInputObjectProxy@@VCUIHostInputObjectProxy@@@InputSite@@QEAA-AV-$C.c)
 *     ?ModifyInputDisabledStateAndPropagate@CUIHierarchy@@AEAAX_KW4InputDisabledState@@_N@Z @ 0x1800AA800 (-ModifyInputDisabledStateAndPropagate@CUIHierarchy@@AEAAX_KW4InputDisabledState@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall CUIHierarchy::UpdateInputDisabledStateOnWindowAddition(CUIHierarchy *this, __int64 a2)
{
  struct InputSiteManager *InputSiteManager; // rax
  const char *v5; // r9
  __int64 v6; // rbx
  const char *v7; // r9
  __int64 v8; // rdi
  char v9; // al
  struct IInputSiteHierarchyManager *InputSiteHierarchyManager; // r14
  void (__fastcall *v11)(struct IInputSiteHierarchyManager *, __int64 **, _QWORD); // rsi
  _QWORD *v12; // rax
  __int64 *v13; // r14
  __int64 *v14; // rax
  __int64 v15; // rsi
  __int64 v16; // r15
  char v17; // al
  __int64 v18; // [rsp+20h] [rbp-40h] BYREF
  __int64 *v19; // [rsp+28h] [rbp-38h]
  _BYTE v20[16]; // [rsp+30h] [rbp-30h] BYREF
  __int64 *v21; // [rsp+40h] [rbp-20h] BYREF
  __int64 *v22; // [rsp+48h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  __int64 v24; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v25; // [rsp+B8h] [rbp+58h] BYREF

  InputSiteManager = ISMStatics::GetInputSiteManager();
  InputSiteManager::GetInputSiteFromId((__int64)InputSiteManager, (__int64)&v25, 1u, a2);
  v6 = v25;
  if ( !v25 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xDF,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\system\\componentui\\server\\cuihierarchy.cpp",
      v5);
  InputSite::GetAttachedObject<ICUIComponentInputObjectProxy,CUIComponentInputObjectProxy>(v25, &v18);
  v8 = v18;
  if ( !v18 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xE1,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\system\\componentui\\server\\cuihierarchy.cpp",
      v7);
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v18 + 8) + 56LL))(v18 + 8);
  CUIHierarchy::ModifyInputDisabledStateAndPropagate((__int64)this, a2, 2, v9);
  InputSite::GetIdForNamespace(v6, (__int64)v20, 0);
  InputSiteHierarchyManager = ISMStatics::GetInputSiteHierarchyManager();
  v11 = *(void (__fastcall **)(struct IInputSiteHierarchyManager *, __int64 **, _QWORD))(*(_QWORD *)InputSiteHierarchyManager
                                                                                       + 24LL);
  v12 = (_QWORD *)std::optional<unsigned __int64>::value((__int64)v20);
  v11(InputSiteHierarchyManager, &v21, *v12);
  v13 = v21;
  v14 = v22;
  v19 = v22;
  while ( v13 != v14 )
  {
    InputSite::GetAttachedObject<ICUIHostInputObjectProxy,CUIHostInputObjectProxy>(*v13, &v24);
    v15 = v24;
    if ( v24 )
    {
      v16 = v24 + 8;
      if ( a2 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v24 + 8) + 40LL))(v24 + 8) )
      {
        v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 48LL))(v15 + 8);
        CUIHierarchy::ModifyInputDisabledStateAndPropagate((__int64)this, a2, 1, v17);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
        break;
      }
    }
    if ( v15 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    }
    ++v13;
    v14 = v19;
  }
  std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy((__int64)&v21);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
}
