/*
 * XREFs of _CxxThrowException_0 @ 0x180002E20
 * Callers:
 *     ?__scrt_throw_std_bad_alloc@@YAXXZ @ 0x180002C68 (-__scrt_throw_std_bad_alloc@@YAXXZ.c)
 *     ?RecognizeCaughtExceptionFromCallback@details@wil@@YAJPEAG_K@Z @ 0x1800074D4 (-RecognizeCaughtExceptionFromCallback@details@wil@@YAJPEAG_K@Z.c)
 *     ?ResultFromCaughtExceptionInternal@details@wil@@YA?AUResultStatus@12@PEAG_KPEA_N@Z @ 0x1800089D0 (-ResultFromCaughtExceptionInternal@details@wil@@YA-AUResultStatus@12@PEAG_KPEA_N@Z.c)
 *     ?Rethrow@details@wil@@YAXXZ @ 0x180008AD0 (-Rethrow@details@wil@@YAXXZ.c)
 *     ?ThrowResultExceptionInternal@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180009D00 (-ThrowResultExceptionInternal@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ?__scrt_throw_std_bad_array_new_length@@YAXXZ @ 0x180010E90 (-__scrt_throw_std_bad_array_new_length@@YAXXZ.c)
 *     _std::vector_Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer__std::allocator_Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer__const_&__::_1_::catch$0 @ 0x1800434A4 (_std--vector_Microsoft--WRL--ComPtr_Windows--Gaming--Preview--GamesEnumeration--GameListEntrySer.c)
 *     _std::vector__GUID_std::allocator__GUID___::_Reallocate_0__::_1_::catch$0 @ 0x180043727 (_std--vector__GUID_std--allocator__GUID___--_Reallocate_0__--_1_--catch$0.c)
 *     _std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize_reallocate_std::_Value_init_tag__::_1_::catch$0 @ 0x180043754 (_std--vector_unsigned_char_std--allocator_unsigned_char___--_Resize_reallocate_std--_Value_init_.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall __noreturn CxxThrowException_0(void *pExceptionObject, _ThrowInfo *pThrowInfo)
{
  _CxxThrowException(pExceptionObject, pThrowInfo);
}
