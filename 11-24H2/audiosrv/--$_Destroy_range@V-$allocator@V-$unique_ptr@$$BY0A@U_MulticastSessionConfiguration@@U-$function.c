/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$unique_ptr@$$BY0A@U_MulticastSessionConfiguration@@U?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@std@@@std@@YAXPEAV?$unique_ptr@$$BY0A@U_MulticastSessionConfiguration@@U?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@QEAV12@AEAV?$allocator@V?$unique_ptr@$$BY0A@U_MulticastSessionConfiguration@@U?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@0@@Z @ 0x1800FF504
 * Callers:
 *     ??$_Uninitialized_move@PEAV?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@V?$allocator@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@std@@@std@@YAPEAV?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@QEAV12@0PEAV12@AEAV?$allocator@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@0@@Z @ 0x1800FF758 (--$_Uninitialized_move@PEAV-$unique_ptr@$$BY0A@PEAGU-$function_deleter@P6AXPEAX@Z$1-MIDL_user_fr.c)
 *     ??1?$vector@V?$unique_ptr@$$BY0A@U_MulticastSessionConfiguration@@U?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@V?$allocator@V?$unique_ptr@$$BY0A@U_MulticastSessionConfiguration@@U?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@std@@@std@@QEAA@XZ @ 0x1800FF8D8 (--1-$vector@V-$unique_ptr@$$BY0A@U_MulticastSessionConfiguration@@U-$function_deleter@P6AXPEAX@Z.c)
 *     ?GetMulticastCapableChildEndpoints@CMulticastSessionManager@@QEAAJAEAV?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@PEAI@Z @ 0x180100210 (-GetMulticastCapableChildEndpoints@CMulticastSessionManager@@QEAAJAEAV-$unique_ptr@$$BY0A@PEAGU-.c)
 *     ?GetMulticastSessions@CMulticastSessionManager@@QEAAJAEAV?$unique_ptr@$$BY0A@U_MulticastSessionConfiguration@@U?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@PEAI@Z @ 0x180100568 (-GetMulticastSessions@CMulticastSessionManager@@QEAAJAEAV-$unique_ptr@$$BY0A@U_MulticastSessionC.c)
 *     ?_Change_array@?$vector@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@V?$allocator@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@std@@@std@@AEAAXQEAV?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@_K1@Z @ 0x180100BC0 (-_Change_array@-$vector@V-$unique_ptr@$$BY0A@PEAGU-$function_deleter@P6AXPEAX@Z$1-MIDL_user_free.c)
 *     _std::vector_wistd::unique_ptr__MulticastSessionConfiguration_[0]_wil::function_deleter_void_(__cdecl_)(void__)_&MIDL_user_free____std::allocator_wistd::unique_ptr__MulticastSessionConfiguration_[0]_wil::function_deleter_void_(__cdecl_)(void__)_&MIDL_user_free_______::_Emplace_reallocate_wistd::unique_ptr__MulticastSessionConfiguration_[0]_wil::function_deleter_void_(__cdecl_)(void__)_&MIDL_user_free______::_1_::catch$0 @ 0x1801703C8 (_std--vector_wistd--unique_ptr__MulticastSessionConfiguration_[0]_wil--function_deleter_void_(__.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180021540 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::_Destroy_range<std::allocator<wistd::unique_ptr<_MulticastSessionConfiguration [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>>(
        void **a1,
        void **a2)
{
  void **v3; // rbx
  void *v4; // rcx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *v3;
      *v3 = 0LL;
      if ( v4 )
        operator delete(v4);
      ++v3;
    }
    while ( v3 != a2 );
  }
}
