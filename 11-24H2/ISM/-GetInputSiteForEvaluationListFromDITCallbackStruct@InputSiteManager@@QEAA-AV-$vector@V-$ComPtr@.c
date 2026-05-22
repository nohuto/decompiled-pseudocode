/*
 * XREFs of ?GetInputSiteForEvaluationListFromDITCallbackStruct@InputSiteManager@@QEAA?AV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEBUtagDITCALLBACKSTRUCT@@@Z @ 0x18001B220
 * Callers:
 *     ?HitTestRequestWithRetry@HitTestHelper@@SA?AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@PEAVInputSiteManager@@PEAUIInputSiteHierarchyManager@@@Z @ 0x180019E50 (-HitTestRequestWithRetry@HitTestHelper@@SA-AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputPr.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800169B4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@VInputSite@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x180016D7C (--$_Emplace_reallocate@AEBV-$ComPtr@VInputSite@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VInputSite@@.c)
 *     ?GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAX@Z @ 0x180017914 (-GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@P.c)
 *     ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x18001B410 (-GetInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdN.c)
 *     ??$_Reallocate@$0A@@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXAEA_K@Z @ 0x18008A6B0 (--$_Reallocate@$0A@@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInput.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 *__fastcall InputSiteManager::GetInputSiteForEvaluationListFromDITCallbackStruct(
        __int64 a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 v6; // rsi
  __int64 *v7; // rbx
  __int64 *i; // rbp
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 *v12; // rdx
  __int64 v13; // rcx
  __int64 *v14; // rdx
  __int64 v15; // [rsp+80h] [rbp+18h] BYREF
  __int64 v16; // [rsp+88h] [rbp+20h]

  v6 = *(unsigned int *)(a3 + 128);
  v7 = *(__int64 **)(a3 + 120);
  if ( !v7 && *(_DWORD *)(a3 + 128) )
  {
    _o_terminate(a1);
    __debugbreak();
    std::_Xlength_error("vector too long");
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v15 = v6;
  if ( v6 )
    std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Reallocate<0>(a2, &v15);
  for ( i = &v7[v6]; v7 != i; ++v7 )
  {
    v16 = *v7;
    InputSiteManager::GetInputSiteFromId(a1, &v15, 0LL, v16);
    v9 = v15;
    if ( v15 )
    {
      v12 = (__int64 *)a2[1];
      if ( v12 == (__int64 *)a2[2] )
      {
        std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<InputSite> const &>(
          a2,
          v12,
          &v15);
        v9 = v15;
      }
      else
      {
        *v12 = v15;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
        a2[1] += 8LL;
      }
    }
    if ( v9 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  if ( *a2 == a2[1] )
  {
    v10 = *(_QWORD *)(a3 + 24);
    if ( v10 )
    {
      InputSiteManager::GetInputSiteFromInputSinkHandle(a1, (__int64)&v15, v10);
      v13 = v15;
      if ( v15 )
      {
        v14 = (__int64 *)a2[1];
        if ( v14 == (__int64 *)a2[2] )
        {
          std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<InputSite> const &>(
            a2,
            v14,
            &v15);
        }
        else
        {
          *v14 = v15;
          wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v14);
          a2[1] += 8LL;
        }
        v13 = v15;
      }
      if ( v13 )
      {
        v15 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
    }
  }
  return a2;
}
