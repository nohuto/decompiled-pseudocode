/*
 * XREFs of OutputDuplProcessTerminateForWddm @ 0x1402E5770
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1402DE70C (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400294B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?IterateOutputDuplMgrsForRender@@YAJPEAVDXGADAPTER@@P6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z2@Z @ 0x1402E58C8 (-IterateOutputDuplMgrsForRender@@YAJPEAVDXGADAPTER@@P6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z2@Z.c)
 */

void __fastcall OutputDuplProcessTerminateForWddm(PERESOURCE *a1, PERESOURCE *a2)
{
  _BYTE v4[144]; // [rsp+50h] [rbp-A8h] BYREF

  if ( DXGADAPTER::IsCoreResourceExclusiveOwner(a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3075;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"!pRenderAdapter->IsCoreResourceExclusiveOwner()",
      3075LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( a2 && DXGADAPTER::IsCoreResourceExclusiveOwner(a2) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3076;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"!pDisplayAdapter || !pDisplayAdapter->IsCoreResourceExclusiveOwner()",
      3076LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  COREADAPTERACCESS::COREADAPTERACCESS(
    (COREADAPTERACCESS *)v4,
    (struct DXGADAPTER *const)a1,
    (struct DXGADAPTER *const)a2);
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v4, 0LL) >= 0 )
  {
    if ( !a2 )
      a2 = a1;
    IterateOutputDuplMgrsForRender(
      (struct DXGADAPTER *)a2,
      (int (*)(struct OUTPUTDUPL_MGR *, void *))lambda_79eef42207348a29c4e9c7f357f04a2a_::_lambda_invoker_cdecl_,
      0LL);
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v4);
}
