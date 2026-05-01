/*
 * XREFs of _lambda_ae5fbfe6b98506ff9d3aa731fe5ca5b2_::_lambda_ae5fbfe6b98506ff9d3aa731fe5ca5b2_ @ 0x1805E2D60
 * Callers:
 *     _anonymous_namespace_::CreateTileInStoreIfNeeded @ 0x1805E5528 (_anonymous_namespace_--CreateTileInStoreIfNeeded.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800549EC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall lambda_ae5fbfe6b98506ff9d3aa731fe5ca5b2_::_lambda_ae5fbfe6b98506ff9d3aa731fe5ca5b2_(
        _OWORD *a1,
        __int64 a2,
        const struct winrt::hstring *a3)
{
  *a1 = *(_OWORD *)a2;
  a1[1] = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 7LL;
  *(_WORD *)a2 = 0;
  winrt::hstring::hstring((winrt::hstring *)(a1 + 2), a3);
  return a1;
}
