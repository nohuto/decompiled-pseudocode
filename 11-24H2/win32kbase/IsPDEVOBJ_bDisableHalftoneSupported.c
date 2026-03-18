/*
 * XREFs of IsPDEVOBJ_bDisableHalftoneSupported @ 0x140155C34
 * Callers:
 *     vUnreferencePdevWorker @ 0x14003D4F0 (vUnreferencePdevWorker.c)
 *     bDynamicProcessAllDriverRealizations @ 0x140085BF0 (bDynamicProcessAllDriverRealizations.c)
 *     _PDEVOBJ::PDEVOBJ_::_2_::_lambda_1_::operator() @ 0x14019AF2C (_PDEVOBJ--PDEVOBJ_--_2_--_lambda_1_--operator().c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IsPDEVOBJ_bDisableHalftoneSupported(__int64 a1, __int64 a2)
{
  __int64 (*v2)(void); // rax

  v2 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 24) + 1576LL);
  if ( v2 )
    return v2();
  else
    return 3221225659LL;
}
