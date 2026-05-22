/*
 * XREFs of ??1?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800530D8
 * Callers:
 *     _InputSiteHierarchyManager::GetInputSiteListToRoot_::_1_::dtor$1 @ 0x1801C8AC6 (_InputSiteHierarchyManager--GetInputSiteListToRoot_--_1_--dtor$1.c)
 *     _HitTestHelper::HitTestRequestWithRetry_::_1_::dtor$6 @ 0x1801C8CF0 (_HitTestHelper--HitTestRequestWithRetry_--_1_--dtor$6.c)
 *     _HitTestHelper::HitTestRequestWithRetry_::_1_::dtor$8 @ 0x1801C8D10 (_HitTestHelper--HitTestRequestWithRetry_--_1_--dtor$8.c)
 *     _InputSiteManager::GetInputSiteForEvaluationListFromDITCallbackStruct_::_1_::dtor$0 @ 0x1801C8E40 (_InputSiteManager--GetInputSiteForEvaluationListFromDITCallbackStruct_--_1_--dtor$0.c)
 *     _CUIHierarchy::UpdateInputDisabledStateOnWindowAddition_::_1_::dtor$2 @ 0x1801CD355 (_CUIHierarchy--UpdateInputDisabledStateOnWindowAddition_--_1_--dtor$2.c)
 *     _InputSiteHierarchyManager::GetAllInputSites_::_1_::dtor$0 @ 0x1801CF8BF (_InputSiteHierarchyManager--GetAllInputSites_--_1_--dtor$0.c)
 *     _ResizeProcessor::GetControllerForManualResize_::_1_::dtor$0 @ 0x1801CF988 (_ResizeProcessor--GetControllerForManualResize_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::vector<Microsoft::WRL::ComPtr<InputSite>>::~vector<Microsoft::WRL::ComPtr<InputSite>>(__int64 a1)
{
  char *v2; // rbx
  char *v3; // rsi
  __int64 v4; // rcx
  char *v5; // rcx
  const struct std::nothrow_t *v6; // rdx
  char *v7; // r8
  char *v8; // rcx

  v2 = *(char **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(char **)(a1 + 8);
    while ( v2 != v3 )
    {
      v4 = *(_QWORD *)v2;
      if ( *(_QWORD *)v2 )
      {
        *(_QWORD *)v2 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
      v2 += 8;
    }
    v5 = *(char **)a1;
    v6 = (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (unsigned __int64)v6 >= 0x1000 )
    {
      v6 = (const struct std::nothrow_t *)((char *)v6 + 39);
      v7 = (char *)*((_QWORD *)v5 - 1);
      v8 = (char *)(v5 - v7);
      if ( (unsigned __int64)(v8 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v8, v6);
        __debugbreak();
        JUMPOUT(0x18005317CLL);
      }
      v5 = v7;
    }
    operator delete(v5, v6);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
