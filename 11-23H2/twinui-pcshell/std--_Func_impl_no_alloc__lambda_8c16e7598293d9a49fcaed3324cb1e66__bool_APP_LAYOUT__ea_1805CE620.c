/*
 * XREFs of std::_Func_impl_no_alloc__lambda_8c16e7598293d9a49fcaed3324cb1e66__bool_APP_LAYOUT_ENUM_ITEM_::_Copy @ 0x1805CE620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_8c16e7598293d9a49fcaed3324cb1e66__bool_APP_LAYOUT_ENUM_ITEM_::_Copy(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = off_1807EBA68;
  result = a2;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
  *(_OWORD *)(a2 + 24) = *(_OWORD *)(a1 + 24);
  return result;
}
