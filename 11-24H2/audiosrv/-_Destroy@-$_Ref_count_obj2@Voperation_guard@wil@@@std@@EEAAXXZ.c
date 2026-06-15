/*
 * XREFs of ?_Destroy@?$_Ref_count_obj2@Voperation_guard@wil@@@std@@EEAAXXZ @ 0x1800D8C50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall std::_Ref_count_obj2<wil::operation_guard>::_Destroy(__int64 a1)
{
  wil::operation_guard::~operation_guard((wil::operation_guard *)(a1 + 16));
}
