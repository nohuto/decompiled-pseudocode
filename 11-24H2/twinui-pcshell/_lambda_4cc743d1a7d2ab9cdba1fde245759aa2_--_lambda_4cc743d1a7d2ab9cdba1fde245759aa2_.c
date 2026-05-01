/*
 * XREFs of _lambda_4cc743d1a7d2ab9cdba1fde245759aa2_::_lambda_4cc743d1a7d2ab9cdba1fde245759aa2_ @ 0x18030F8CC
 * Callers:
 *     ?GetPosition@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18014CDD0 (-GetPosition@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_4cc743d1a7d2ab9cdba1fde245759aa2_::_lambda_4cc743d1a7d2ab9cdba1fde245759aa2_(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        _QWORD *a4)
{
  __int128 v4; // xmm0
  __int64 result; // rax

  v4 = *a3;
  *(_QWORD *)(a1 + 24) = *a4;
  result = a1;
  *(_QWORD *)a1 = a2;
  *(_OWORD *)(a1 + 8) = v4;
  return result;
}
