/*
 * XREFs of ?TransferForegroundToHost@CUIComponentInputObjectProxy@@MEAAJAEBUTransferForegroundInfo@@@Z @ 0x180130640
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x180023320 (-_Tidy@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 *     ?GetIdForNamespace@InputSite@@QEBA?AV?$optional@_K@std@@W4InputSiteIdNamespace@@@Z @ 0x18002D460 (-GetIdForNamespace@InputSite@@QEBA-AV-$optional@_K@std@@W4InputSiteIdNamespace@@@Z.c)
 *     ?GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ @ 0x18005D854 (-GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ.c)
 *     ?value@?$optional@_K@std@@QEGAAAEA_KXZ @ 0x180063AD0 (-value@-$optional@_K@std@@QEGAAAEA_KXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$GetAttachedObject@UICUIHostInputObjectProxy@@VCUIHostInputObjectProxy@@@InputSite@@QEAA?AV?$ComPtr@VCUIHostInputObjectProxy@@@WRL@Microsoft@@XZ @ 0x1800A99A8 (--$GetAttachedObject@UICUIHostInputObjectProxy@@VCUIHostInputObjectProxy@@@InputSite@@QEAA-AV-$C.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CUIComponentInputObjectProxy::TransferForegroundToHost(
        CUIComponentInputObjectProxy *this,
        const struct TransferForegroundInfo *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v6; // rcx
  struct IInputSiteHierarchyManager *InputSiteHierarchyManager; // rdi
  void (__fastcall *v8)(struct IInputSiteHierarchyManager *, _QWORD *, _QWORD); // rbx
  _QWORD *v9; // rax
  __int64 *v10; // rsi
  __int64 *v11; // r12
  __int64 v12; // rdi
  __int64 v13; // r14
  __int64 v14; // rbx
  _BYTE v16[16]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v17[4]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v19; // [rsp+80h] [rbp+8h] BYREF

  v6 = *((_QWORD *)this + 9);
  if ( !v6 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x48,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\system\\componentui\\server\\cui"
           "componentinputobjectproxy.cpp",
      a4);
  InputSite::GetIdForNamespace(v6, (__int64)v16, 0);
  InputSiteHierarchyManager = ISMStatics::GetInputSiteHierarchyManager();
  v8 = *(void (__fastcall **)(struct IInputSiteHierarchyManager *, _QWORD *, _QWORD))(*(_QWORD *)InputSiteHierarchyManager
                                                                                    + 24LL);
  v9 = (_QWORD *)std::optional<unsigned __int64>::value((__int64)v16);
  v8(InputSiteHierarchyManager, v17, *v9);
  v10 = (__int64 *)v17[0];
  v11 = (__int64 *)v17[1];
  while ( v10 != v11 )
  {
    InputSite::GetAttachedObject<ICUIHostInputObjectProxy,CUIHostInputObjectProxy>(*v10, &v19);
    v12 = v19;
    if ( v19 )
    {
      v13 = v19 + 8;
      v14 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 48LL))((char *)this + 8);
      if ( v14 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 40LL))(v12 + 8) )
      {
        (*(void (__fastcall **)(__int64, const struct TransferForegroundInfo *))(*(_QWORD *)v13 + 24LL))(v12 + 8, a2);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
        break;
      }
    }
    if ( v12 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    }
    ++v10;
  }
  std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy((__int64)v17);
  return 0LL;
}
