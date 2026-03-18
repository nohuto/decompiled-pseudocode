/*
 * XREFs of _lambda_e58e30cb45ac044955360754130b33ae_::_lambda_invoker_cdecl_ @ 0x1403067FC
 * Callers:
 *     ?IterateOutputDuplMgrsForRender@@YAJPEAVDXGDEVICE@@P6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z2@Z @ 0x1402CE84C (-IterateOutputDuplMgrsForRender@@YAJPEAVDXGDEVICE@@P6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z2@Z.c)
 *     OutputDuplCleanUpPendingList @ 0x140305E44 (OutputDuplCleanUpPendingList.c)
 *     ?IterateOutputDuplMgrsForRender@@YAJPEAVDXGADAPTER@@P6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z2@Z @ 0x14030650C (-IterateOutputDuplMgrsForRender@@YAJPEAVDXGADAPTER@@P6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z2@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall lambda_e58e30cb45ac044955360754130b33ae_::_lambda_invoker_cdecl_(__int64 a1, __int64 a2)
{
  if ( *(_QWORD *)a2 == *(_QWORD *)(a1 + 128) )
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(a2 + 8))((a1 + 24) & -(__int64)(a1 != 0), *(_QWORD *)(a2 + 16));
  else
    return 0LL;
}
