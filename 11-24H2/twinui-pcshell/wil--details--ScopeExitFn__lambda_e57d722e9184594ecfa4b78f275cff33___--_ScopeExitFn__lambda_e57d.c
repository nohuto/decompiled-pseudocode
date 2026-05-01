/*
 * XREFs of wil::details::ScopeExitFn__lambda_e57d722e9184594ecfa4b78f275cff33___::_ScopeExitFn__lambda_e57d722e9184594ecfa4b78f275cff33___ @ 0x1804DE5CC
 * Callers:
 *     _CVirtualDesktopContainerElement::ItemRemoved_::_1_::dtor$4 @ 0x1806F017A (_CVirtualDesktopContainerElement--ItemRemoved_--_1_--dtor$4.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::details::ScopeExitFn__lambda_e57d722e9184594ecfa4b78f275cff33___::_ScopeExitFn__lambda_e57d722e9184594ecfa4b78f275cff33___(
        _QWORD **a1)
{
  _QWORD *result; // rax

  if ( *((_BYTE *)a1 + 16) )
  {
    *((_BYTE *)a1 + 16) = 0;
    result = *a1;
    if ( **a1 )
    {
      result = a1[1];
      if ( *result )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*result + 72LL))(*result);
        return (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)**a1 + 392LL))(**a1, 0LL);
      }
    }
  }
  return result;
}
