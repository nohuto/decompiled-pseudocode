/*
 * XREFs of ?HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z @ 0x18019EEE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800169B4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetInitialTargetFromHitTestResult@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@W4InputType@@AEBUHitTestResult@@PEAUIInputTarget@@@Z @ 0x1800180F0 (-GetInitialTargetFromHitTestResult@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft.c)
 *     ?HitTestRequestWithRetry@HitTestHelper@@SA?AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@PEAVInputSiteManager@@PEAUIInputSiteHierarchyManager@@@Z @ 0x180019E50 (-HitTestRequestWithRetry@HitTestHelper@@SA-AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputPr.c)
 *     ?OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@PEAW4ContextualProcessorState@@@Z @ 0x18001A5B0 (-OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@.c)
 *     ?GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18001B7B0 (-GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV-$vector@V-$ComPtr@VInputSite@@@WRL.c)
 *     ??$_Insert_or_assign@KAEAV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@$$QEAKAEAV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@Z @ 0x180022A2C (--$_Insert_or_assign@KAEAV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@@-$unordered_map@KV-$ComPtr@UI.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180022D10 (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180025DEC (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?ProcessInputAttempt@InputAttemptedTargetManager@@QEBAXI@Z @ 0x180028FBC (-ProcessInputAttempt@InputAttemptedTargetManager@@QEBAXI@Z.c)
 *     ??1?$unique_ptr@UHitTestResult@@U?$default_delete@UHitTestResult@@@std@@@std@@QEAA@XZ @ 0x180049220 (--1-$unique_ptr@UHitTestResult@@U-$default_delete@UHitTestResult@@@std@@@std@@QEAA@XZ.c)
 *     ??$make_unique@UHitTestResult@@U1@$0A@@std@@YA?AV?$unique_ptr@UHitTestResult@@U?$default_delete@UHitTestResult@@@std@@@0@$$QEAUHitTestResult@@@Z @ 0x18004B170 (--$make_unique@UHitTestResult@@U1@$0A@@std@@YA-AV-$unique_ptr@UHitTestResult@@U-$default_delete@.c)
 *     ??1HitTestResult@@QEAA@XZ @ 0x18004B488 (--1HitTestResult@@QEAA@XZ.c)
 *     ??$?4U?$default_delete@UHitTestResult@@@std@@$0A@@?$unique_ptr@UHitTestResult@@U?$default_delete@UHitTestResult@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18005A678 (--$-4U-$default_delete@UHitTestResult@@@std@@$0A@@-$unique_ptr@UHitTestResult@@U-$default_delete.c)
 *     ?GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ @ 0x18005D664 (-GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ?BuildRequestForHitTestInfo@HitTestHelper@@SA?AUHitTestRequest@1@PEAUHitTestInfo@@@Z @ 0x18019DBC8 (-BuildRequestForHitTestInfo@HitTestHelper@@SA-AUHitTestRequest@1@PEAUHitTestInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMInputRouter::HitTest(
        DWMInputRouter *this,
        struct HitTestInfo *a2,
        struct InputContext *a3,
        struct IInputTarget *a4,
        struct IInputTarget **a5)
{
  __int64 *InputSiteHierarchyManager; // rbx
  __int64 *InputSiteManager; // rax
  __int64 v12; // rdx
  int ViewInstanceIdFromInputSiteList; // eax
  __int64 *v14; // rbx
  char *InitialTargetFromHitTestResult; // rax
  __int64 *v16; // rax
  __int64 v17; // rdx
  _QWORD *v18; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v19[24]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v20[18]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v21[16]; // [rsp+E0h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  if ( a5 )
  {
    HitTestHelper::BuildRequestForHitTestInfo(v20, (unsigned int *)a2);
    InputSiteHierarchyManager = (__int64 *)ISMStatics::GetInputSiteHierarchyManager();
    InputSiteManager = (__int64 *)ISMStatics::GetInputSiteManager();
    HitTestHelper::HitTestRequestWithRetry(
      v21,
      v20,
      *((__int64 **)this + 23),
      InputSiteManager,
      InputSiteHierarchyManager);
    if ( LOBYTE(v21[0]) )
    {
      if ( (*((_BYTE *)a2 + 32) & 4) != 0 )
      {
        ViewInstanceIdFromInputSiteList = InputSiteManager::GetViewInstanceIdFromInputSiteList((__int64 **)(v21[13] - 24LL));
        InputAttemptedTargetManager::ProcessInputAttempt(
          (InputAttemptedTargetManager *)(*((_QWORD *)this + 42) + 64LL),
          ViewInstanceIdFromInputSiteList);
      }
      if ( ((v21[1] + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      {
        InitialTargetFromHitTestResult = (char *)DWMInputRouter::GetInitialTargetFromHitTestResult(
                                                   (int)this,
                                                   &v18,
                                                   *(_DWORD *)a2,
                                                   (__int64)v21,
                                                   (__int64 *)a4);
        Microsoft::WRL::ComPtr<InputSite>::operator=((__int64 *)a3 + 2, InitialTargetFromHitTestResult);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
        v14 = (__int64 *)((char *)a3 + 16);
        if ( *(_DWORD *)a2 != 2 && *(_DWORD *)a2 != 32 )
        {
          LODWORD(v18) = *((_DWORD *)a2 + 10);
          std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>::_Insert_or_assign<unsigned long,Microsoft::WRL::ComPtr<IInputTarget> &>(
            (_QWORD *)a3 + 3,
            (__int64)v19,
            &v18,
            (_QWORD *)a3 + 2);
        }
      }
      else
      {
        v14 = (__int64 *)((char *)a3 + 16);
      }
      v16 = std::make_unique<HitTestResult,HitTestResult,0>(&v18, (__int64)v21);
      std::unique_ptr<HitTestResult>::operator=<std::default_delete<HitTestResult>,0>((_QWORD *)a3 + 22, v16);
      std::unique_ptr<HitTestResult>::~unique_ptr<HitTestResult>(&v18, v17);
      if ( (int)ContextualProcessorManager::OnHitTest(*((ContextualProcessorManager **)this + 32), a2, a3, 0LL, a5, 0LL) < 0 )
      {
        wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v14);
        *a5 = (struct IInputTarget *)*v14;
      }
    }
    HitTestResult::~HitTestResult((HitTestResult *)v21, v12);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4C0,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
