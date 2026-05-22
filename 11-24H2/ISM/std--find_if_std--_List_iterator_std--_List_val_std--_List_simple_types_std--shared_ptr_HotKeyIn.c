/*
 * XREFs of std::find_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_1e0236e764b888af82930e6942f76e7d___ @ 0x1801C9B00
 * Callers:
 *     ?RegisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@III_N@Z @ 0x1801CC0E0 (-RegisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@III_N@Z.c)
 * Callees:
 *     ??0?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z @ 0x1800CF1C8 (--0-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z.c)
 *     _lambda_1e0236e764b888af82930e6942f76e7d_::operator() @ 0x1801CA600 (_lambda_1e0236e764b888af82930e6942f76e7d_--operator().c)
 */

_QWORD *__fastcall std::find_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_1e0236e764b888af82930e6942f76e7d___(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4)
{
  _QWORD *v8; // rax
  _QWORD *result; // rax
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  while ( a2 != a3 )
  {
    v8 = std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(v10, a2 + 2);
    if ( (unsigned __int8)lambda_1e0236e764b888af82930e6942f76e7d_::operator()(a4, v8) )
      break;
    a2 = (_QWORD *)*a2;
  }
  result = a1;
  *a1 = a2;
  return result;
}
