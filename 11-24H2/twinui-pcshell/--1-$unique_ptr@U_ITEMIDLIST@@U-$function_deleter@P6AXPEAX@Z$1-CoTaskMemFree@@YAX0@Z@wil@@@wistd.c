/*
 * XREFs of ??1?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x1802D020C
 * Callers:
 *     _GetPinnablePidl_::_1_::dtor$1 @ 0x1806D79CD (_GetPinnablePidl_--_1_--dtor$1.c)
 *     _GetUnpackagedAppPinnableItem_::_1_::dtor$2 @ 0x1806D7A6F (_GetUnpackagedAppPinnableItem_--_1_--dtor$2.c)
 *     _CreatePlaceholderPidl_::_1_::dtor$7 @ 0x1806FD015 (_CreatePlaceholderPidl_--_1_--dtor$7.c)
 *     _CTaskbandPin::v_IsAcceptableTarget_::_1_::dtor$6 @ 0x1807041C6 (_CTaskbandPin--v_IsAcceptableTarget_--_1_--dtor$6.c)
 *     _CTaskbandPin::v_IsAcceptableTarget_::_1_::dtor$7 @ 0x1807041D8 (_CTaskbandPin--v_IsAcceptableTarget_--_1_--dtor$7.c)
 *     _CBackupLocationManager::CreateTombstoneLnk_::_1_::dtor$0 @ 0x18070432C (_CBackupLocationManager--CreateTombstoneLnk_--_1_--dtor$0.c)
 *     _CreatePlaceholderPidl_::_1_::dtor$2 @ 0x180704374 (_CreatePlaceholderPidl_--_1_--dtor$2.c)
 *     _CreatePlaceholderPidl_::_1_::dtor$5 @ 0x180704386 (_CreatePlaceholderPidl_--_1_--dtor$5.c)
 *     _CBackupLocationManager::CreateTombstoneLnk_::_1_::dtor$2 @ 0x180704398 (_CBackupLocationManager--CreateTombstoneLnk_--_1_--dtor$2.c)
 *     _CBackupLocationManager::CreateTombstoneLnk_::_1_::dtor$4 @ 0x1807043AA (_CBackupLocationManager--CreateTombstoneLnk_--_1_--dtor$4.c)
 *     _CBackupLocationManager::GetTombstonePath_::_1_::dtor$0 @ 0x1807044FA (_CBackupLocationManager--GetTombstonePath_--_1_--dtor$0.c)
 *     _CPinnedList::InternalModify_::_1_::dtor$7 @ 0x180704578 (_CPinnedList--InternalModify_--_1_--dtor$7.c)
 *     _CPinnedList::IsEmpty_::_1_::dtor$1 @ 0x180704608 (_CPinnedList--IsEmpty_--_1_--dtor$1.c)
 *     _CPinList::_CreateTombstone_::_1_::dtor$1 @ 0x180704740 (_CPinList--_CreateTombstone_--_1_--dtor$1.c)
 *     _CPinList::_CreateTombstone_::_1_::dtor$3 @ 0x18070477F (_CPinList--_CreateTombstone_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

void __fastcall wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(
        void **a1)
{
  wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(a1, 0LL);
}
