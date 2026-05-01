/*
 * XREFs of _UwpWindowEventDispatcher::UwpWindowAdded_::_1_::dtor$50 @ 0x1806CABAD
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall UwpWindowEventDispatcher::UwpWindowAdded_::_1_::dtor_50(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 148) & 4) != 0 )
  {
    *(_DWORD *)(a2 + 148) &= ~4u;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 368));
  }
}
