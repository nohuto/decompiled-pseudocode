/*
 * XREFs of ?Initialize@?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@QEAA_NXZ @ 0x140119298
 * Callers:
 *     ?Create@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0MAAA@$0MA@@2@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NOAAA@$0NOA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@@gdi@@SA_NPEAPEAE@Z @ 0x140199DE4 (-Create@-$TypeIsolationFactory@V-$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V-$C.c)
 * Callees:
 *     ?Initialize@?$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAA_NXZ @ 0x140119718 (-Initialize@-$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAA_NXZ.c)
 */

bool __fastcall NSInstrumentation::CLookAsideTypeIsolation<180224,704>::Initialize(__int64 a1)
{
  ExInitializeLookasideListEx(
    (PLOOKASIDE_LIST_EX)(a1 + 48),
    `NSInstrumentation::CLookAsideTypeIsolation<180224,704>::Initialize'::`2'::_lambda_1_::_lambda_invoker_cdecl_<enum _POOL_TYPE,unsigned __int64,unsigned long,_LOOKASIDE_LIST_EX *>,
    (PFREE_FUNCTION_EX)`NSInstrumentation::CLookAsideTypeIsolation<180224,704>::Initialize'::`2'::_lambda_2_::_lambda_invoker_cdecl_<void *,_LOOKASIDE_LIST_EX *>,
    (POOL_TYPE)512,
    2u,
    0x2C0uLL,
    0x616C6947u,
    0x100u);
  return (unsigned __int8)NSInstrumentation::CTypeIsolation<180224,704>::Initialize(a1) != 0;
}
