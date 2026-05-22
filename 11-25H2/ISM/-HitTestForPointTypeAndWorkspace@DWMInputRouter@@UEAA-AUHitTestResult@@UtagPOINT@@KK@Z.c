/*
 * XREFs of ?HitTestForPointTypeAndWorkspace@DWMInputRouter@@UEAA?AUHitTestResult@@UtagPOINT@@KK@Z @ 0x180197B80
 * Callers:
 *     <none>
 * Callees:
 *     ?HitTestRequestWithRetry@HitTestHelper@@SA?AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@PEAVInputSiteManager@@PEAUIInputSiteHierarchyManager@@@Z @ 0x180019880 (-HitTestRequestWithRetry@HitTestHelper@@SA-AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputPr.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x18002582C (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ @ 0x18005D854 (-GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 */

_QWORD *__fastcall DWMInputRouter::HitTestForPointTypeAndWorkspace(__int64 a1, _QWORD *a2, __int64 a3, int a4, int a5)
{
  __int64 *InputSiteHierarchyManager; // rbx
  __int64 *InputSiteManager; // rax
  int v12; // [rsp+40h] [rbp-98h] BYREF
  __int64 v13; // [rsp+44h] [rbp-94h]
  int v14; // [rsp+ACh] [rbp-2Ch]

  memset_0(&v12, 0, 0x88uLL);
  v14 = a5;
  v13 = a3;
  v12 = a4;
  InputSiteHierarchyManager = (__int64 *)ISMStatics::GetInputSiteHierarchyManager();
  InputSiteManager = (__int64 *)ISMStatics::GetInputSiteManager();
  HitTestHelper::HitTestRequestWithRetry(
    a2,
    (__int64 *)&v12,
    *(__int64 **)(a1 + 176),
    InputSiteManager,
    InputSiteHierarchyManager);
  return a2;
}
