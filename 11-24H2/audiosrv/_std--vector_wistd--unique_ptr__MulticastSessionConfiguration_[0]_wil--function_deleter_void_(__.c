/*
 * XREFs of _std::vector_wistd::unique_ptr__MulticastSessionConfiguration_[0]_wil::function_deleter_void_(__cdecl_)(void__)_&MIDL_user_free____std::allocator_wistd::unique_ptr__MulticastSessionConfiguration_[0]_wil::function_deleter_void_(__cdecl_)(void__)_&MIDL_user_free_______::_Emplace_reallocate_wistd::unique_ptr__MulticastSessionConfiguration_[0]_wil::function_deleter_void_(__cdecl_)(void__)_&MIDL_user_free______::_1_::catch$0 @ 0x1801703C8
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@V?$unique_ptr@U_ConnectorInfo@@U?$default_delete@U_ConnectorInfo@@@std@@@std@@@std@@QEAAXQEAV?$unique_ptr@U_ConnectorInfo@@U?$default_delete@U_ConnectorInfo@@@std@@@2@_K@Z @ 0x1800EFCA8 (-deallocate@-$allocator@V-$unique_ptr@U_ConnectorInfo@@U-$default_delete@U_ConnectorInfo@@@std@@.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@$$BY0A@U_MulticastSessionConfiguration@@U?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@std@@@std@@YAXPEAV?$unique_ptr@$$BY0A@U_MulticastSessionConfiguration@@U?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@QEAV12@AEAV?$allocator@V?$unique_ptr@$$BY0A@U_MulticastSessionConfiguration@@U?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@0@@Z @ 0x1800FF504 (--$_Destroy_range@V-$allocator@V-$unique_ptr@$$BY0A@U_MulticastSessionConfiguration@@U-$function.c)
 *     _CxxThrowException_0 @ 0x180167F30 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_wistd::unique_ptr__MulticastSessionConfiguration__0__wil::function_deleter_void____cdecl___void_____MIDL_user_free____std::allocator_wistd::unique_ptr__MulticastSessionConfiguration__0__wil::function_deleter_void____cdecl___void_____MIDL_user_free_______::_Emplace_reallocate_wistd::unique_ptr__MulticastSessionConfiguration__0__wil::function_deleter_void____cdecl___void_____MIDL_user_free______::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx

  std::_Destroy_range<std::allocator<wistd::unique_ptr<_MulticastSessionConfiguration [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>>(
    *(void ***)(a2 + 112),
    *(void ***)(a2 + 136));
  std::allocator<std::unique_ptr<_ConnectorInfo>>::deallocate(v3, *(char **)(a2 + 32), *(_QWORD *)(a2 + 120));
  throw;
}
