/*
 * XREFs of ?HitTestForPoint@DWMInputRouter@@UEAA?AUHitTestResult@@UtagPOINT@@@Z @ 0x180197A70
 * Callers:
 *     <none>
 * Callees:
 *     ?HitTestRequestWithRetry@HitTestHelper@@SA?AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@PEAVInputSiteManager@@PEAUIInputSiteHierarchyManager@@@Z @ 0x180019880 (-HitTestRequestWithRetry@HitTestHelper@@SA-AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputPr.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x18002582C (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ @ 0x18005D854 (-GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 */

_QWORD *__fastcall DWMInputRouter::HitTestForPoint(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 *InputSiteHierarchyManager; // rbx
  __int64 *InputSiteManager; // rax
  int v9; // [rsp+40h] [rbp-98h] BYREF
  __int64 v10; // [rsp+44h] [rbp-94h]
  _BYTE v11[132]; // [rsp+4Ch] [rbp-8Ch] BYREF

  memset_0(v11, 0, 0x7CuLL);
  v9 = 0;
  v10 = a3;
  InputSiteHierarchyManager = (__int64 *)ISMStatics::GetInputSiteHierarchyManager();
  InputSiteManager = (__int64 *)ISMStatics::GetInputSiteManager();
  HitTestHelper::HitTestRequestWithRetry(
    a2,
    (__int64 *)&v9,
    *(__int64 **)(a1 + 176),
    InputSiteManager,
    InputSiteHierarchyManager);
  return a2;
}
