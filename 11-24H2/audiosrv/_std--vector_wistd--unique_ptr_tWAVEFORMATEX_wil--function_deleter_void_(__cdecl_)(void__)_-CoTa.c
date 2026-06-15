/*
 * XREFs of _std::vector_wistd::unique_ptr_tWAVEFORMATEX_wil::function_deleter_void_(__cdecl_)(void__)_&CoTaskMemFree____std::allocator_wistd::unique_ptr_tWAVEFORMATEX_wil::function_deleter_void_(__cdecl_)(void__)_&CoTaskMemFree_______::_Emplace_reallocate_wistd::unique_ptr_tWAVEFORMATEX_wil::function_deleter_void_(__cdecl_)(void__)_&CoTaskMemFree______::_1_::catch$0 @ 0x18016C5B1
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180018614 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@UtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@std@@@std@@YAXPEAV?$unique_ptr@UtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAV12@AEAV?$allocator@V?$unique_ptr@UtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@0@@Z @ 0x18009F4D0 (--$_Destroy_range@V-$allocator@V-$unique_ptr@UtWAVEFORMATEX@@U-$function_deleter@P6AXPEAX@Z$1-Co.c)
 *     _CxxThrowException_0 @ 0x180167F30 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_wistd::unique_ptr_tWAVEFORMATEX_wil::function_deleter_void____cdecl___void_____CoTaskMemFree____std::allocator_wistd::unique_ptr_tWAVEFORMATEX_wil::function_deleter_void____cdecl___void_____CoTaskMemFree_______::_Emplace_reallocate_wistd::unique_ptr_tWAVEFORMATEX_wil::function_deleter_void____cdecl___void_____CoTaskMemFree______::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<wistd::unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>>(
    *(void ***)(a2 + 112),
    *(void ***)(a2 + 136));
  std::_Deallocate<16,0>(*(char **)(a2 + 32), (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a2 + 120)));
  throw;
}
