/*
 * XREFs of std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_139f71076f5ab0ecef881a1ffc08c112___ @ 0x1801C2554
 * Callers:
 *     ?CleanupClientHotKeys@HotKeyProcessor@@AEAAXPEAVHotkeyClientRegistration@@AEAV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@AEAH@Z @ 0x1801C32C4 (-CleanupClientHotKeys@HotKeyProcessor@@AEAAXPEAVHotkeyClientRegistration@@AEAV-$list@V-$shared_p.c)
 * Callees:
 *     ??4?$shared_ptr@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180058550 (--4-$shared_ptr@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-Nt.c)
 *     ??0?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z @ 0x1800CC834 (--0-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z.c)
 *     _lambda_139f71076f5ab0ecef881a1ffc08c112_::operator() @ 0x1801C2C64 (_lambda_139f71076f5ab0ecef881a1ffc08c112_--operator().c)
 */

_QWORD *__fastcall std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_139f71076f5ab0ecef881a1ffc08c112___(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4)
{
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  _QWORD *v10; // rax
  _QWORD *result; // rax
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  while ( 1 )
  {
    if ( a2 == a3 )
    {
      v9 = a2;
      goto LABEL_9;
    }
    v8 = std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(v12, a2 + 2);
    if ( (unsigned __int8)lambda_139f71076f5ab0ecef881a1ffc08c112_::operator()(a4, v8) )
      break;
    a2 = (_QWORD *)*a2;
  }
  v9 = a2;
  while ( 1 )
  {
    a2 = (_QWORD *)*a2;
    if ( a2 == a3 )
      break;
    v10 = std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(v12, a2 + 2);
    if ( !(unsigned __int8)lambda_139f71076f5ab0ecef881a1ffc08c112_::operator()(a4, v10) )
    {
      std::shared_ptr<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::operator=(
        v9 + 2,
        a2 + 2);
      v9 = (_QWORD *)*v9;
    }
  }
LABEL_9:
  result = a1;
  *a1 = v9;
  return result;
}
