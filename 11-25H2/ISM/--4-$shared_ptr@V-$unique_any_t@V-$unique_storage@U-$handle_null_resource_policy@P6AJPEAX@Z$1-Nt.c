/*
 * XREFs of ??4?$shared_ptr@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180058550
 * Callers:
 *     ?ProcessGesture@GestureHandler@@QEAAJAEBUGestureAnimationProperties@@W4VirtualKeyModifiers@System@Windows@@W4GestureOperationState@@@Z @ 0x180058734 (-ProcessGesture@GestureHandler@@QEAAJAEBUGestureAnimationProperties@@W4VirtualKeyModifiers@Syste.c)
 *     ?reset@?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180095558 (-reset@-$shared_storage@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AJPEA.c)
 *     ??$_Move_unchecked@PEAV?$shared_ptr@ULegacyDeviceInfo@@@std@@PEAV12@@std@@YAPEAV?$shared_ptr@ULegacyDeviceInfo@@@0@PEAV10@00@Z @ 0x1800CC708 (--$_Move_unchecked@PEAV-$shared_ptr@ULegacyDeviceInfo@@@std@@PEAV12@@std@@YAPEAV-$shared_ptr@ULe.c)
 *     ?FlushQueuedDeviceChanges@MPCRawInputProvider@@AEAAXXZ @ 0x1800CCEA0 (-FlushQueuedDeviceChanges@MPCRawInputProvider@@AEAAXXZ.c)
 *     ?DestroyCursorShape@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@_K1@Z @ 0x1800F51D0 (-DestroyCursorShape@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@_K1@Z.c)
 *     ?CreateCursorVisual@SystemCursor2@@AEAAJXZ @ 0x1800F8030 (-CreateCursorVisual@SystemCursor2@@AEAAJXZ.c)
 *     ?ResetState@SystemCursor2@@QEAAJXZ @ 0x1800F8FB4 (-ResetState@SystemCursor2@@QEAAJXZ.c)
 *     std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_139f71076f5ab0ecef881a1ffc08c112___ @ 0x1801C2554 (std--remove_if_std--_List_iterator_std--_List_val_std--_List_simple_types_std--shared_ptr_HotKey.c)
 *     ??0HotKeyProcessor@@QEAA@XZ @ 0x1801C2634 (--0HotKeyProcessor@@QEAA@XZ.c)
 *     _lambda_139f71076f5ab0ecef881a1ffc08c112_::operator() @ 0x1801C2C64 (_lambda_139f71076f5ab0ecef881a1ffc08c112_--operator().c)
 *     _lambda_c0e0b7aaf59f49f216d7dff859f9f140_::operator() @ 0x1801C3004 (_lambda_c0e0b7aaf59f49f216d7dff859f9f140_--operator().c)
 *     ?FindRegisteredHotKey@HotKeyProcessor@@AEAAJIIIIU_GUID@@PEAV?$shared_ptr@UHotKeyInfo@@@std@@PEAPEAVHotkeyClientRegistration@@@Z @ 0x1801C4038 (-FindRegisteredHotKey@HotKeyProcessor@@AEAAJIIIIU_GUID@@PEAV-$shared_ptr@UHotKeyInfo@@@std@@PEAP.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180058AF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

_QWORD *__fastcall std::shared_ptr<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::operator=(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // r8
  std::_Ref_count_base *v5; // rcx

  v2 = *a2;
  *a2 = 0LL;
  v4 = a2[1];
  a2[1] = 0LL;
  *a1 = v2;
  v5 = (std::_Ref_count_base *)a1[1];
  a1[1] = v4;
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  return a1;
}
