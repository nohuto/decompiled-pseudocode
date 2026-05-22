/*
 * XREFs of ?RequestViewHitTestHelper@DWMInputRouter@@IEAAXUViewHitTestInfo@@PEAI@Z @ 0x18019FBD4
 * Callers:
 *     ?RequestViewHitTest@DWMInputRouter@@UEAAJUViewHitTestInfo@@PEAUIRemoteViewHitTestRequestClient@@@Z @ 0x18019FB60 (-RequestViewHitTest@DWMInputRouter@@UEAAJUViewHitTestInfo@@PEAUIRemoteViewHitTestRequestClient@@.c)
 *     ?RequestViewHitTestSync@DWMInputRouter@@UEAAJUViewHitTestInfo@@PEAI@Z @ 0x18019FCD0 (-RequestViewHitTestSync@DWMInputRouter@@UEAAJUViewHitTestInfo@@PEAI@Z.c)
 * Callees:
 *     ?HitTestRequestWithRetry@HitTestHelper@@SA?AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@PEAVInputSiteManager@@PEAUIInputSiteHierarchyManager@@@Z @ 0x180019E50 (-HitTestRequestWithRetry@HitTestHelper@@SA-AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputPr.c)
 *     ?GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18001B7B0 (-GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV-$vector@V-$ComPtr@VInputSite@@@WRL.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180025DEC (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ??1HitTestResult@@QEAA@XZ @ 0x18004B488 (--1HitTestResult@@QEAA@XZ.c)
 *     ?GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ @ 0x18005D664 (-GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ?ConvertInputTypeToPointerType@HitTestHelper@@SA?BHW4InputType@@@Z @ 0x18019DC98 (-ConvertInputTypeToPointerType@HitTestHelper@@SA-BHW4InputType@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall DWMInputRouter::RequestViewHitTestHelper(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  unsigned int v5; // r14d
  int v6; // r15d
  int v7; // ecx
  int ViewInstanceIdFromInputSiteList; // edi
  unsigned int v9; // ebx
  __int64 *InputSiteHierarchyManager; // rbx
  __int64 *InputSiteManager; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // [rsp+30h] [rbp-148h] BYREF
  int v14; // [rsp+38h] [rbp-140h]
  _BYTE v15[132]; // [rsp+3Ch] [rbp-13Ch] BYREF
  _QWORD v16[16]; // [rsp+C0h] [rbp-B8h] BYREF

  v5 = a2[2];
  v6 = a2[3];
  v7 = a2[5];
  ViewInstanceIdFromInputSiteList = 0;
  if ( v7 )
    v9 = HitTestHelper::ConvertInputTypeToPointerType(v7);
  else
    v9 = 0;
  memset_0(v15, 0, 0x7CuLL);
  v14 = v6;
  v13 = __PAIR64__(v5, v9);
  InputSiteHierarchyManager = (__int64 *)ISMStatics::GetInputSiteHierarchyManager();
  InputSiteManager = (__int64 *)ISMStatics::GetInputSiteManager();
  HitTestHelper::HitTestRequestWithRetry(
    v16,
    (__int64 *)&v13,
    *(__int64 **)(a1 + 184),
    InputSiteManager,
    InputSiteHierarchyManager);
  if ( LOBYTE(v16[0]) )
    ViewInstanceIdFromInputSiteList = InputSiteManager::GetViewInstanceIdFromInputSiteList((__int64 **)(v16[13] - 24LL));
  *a3 = ViewInstanceIdFromInputSiteList;
  HitTestResult::~HitTestResult((HitTestResult *)v16, v12);
}
