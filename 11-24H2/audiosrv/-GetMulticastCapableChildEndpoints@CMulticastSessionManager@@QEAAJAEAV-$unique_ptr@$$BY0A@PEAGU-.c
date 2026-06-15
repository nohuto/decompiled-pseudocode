/*
 * XREFs of ?GetMulticastCapableChildEndpoints@CMulticastSessionManager@@QEAAJAEAV?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@PEAI@Z @ 0x180100210
 * Callers:
 *     s_GetMulticastCapableChildEndpoints @ 0x180100E40 (s_GetMulticastCapableChildEndpoints.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180018614 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180021540 (--3@YAXPEAX@Z.c)
 *     ??4?$unique_ptr@$$BY0A@U_MulticastSessionConfiguration@@U?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800E4210 (--4-$unique_ptr@$$BY0A@U_MulticastSessionConfiguration@@U-$function_deleter@P6AXPEAX@Z$1-MIDL_us.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@$$BY0A@U_MulticastSessionConfiguration@@U?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@std@@@std@@YAXPEAV?$unique_ptr@$$BY0A@U_MulticastSessionConfiguration@@U?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@QEAV12@AEAV?$allocator@V?$unique_ptr@$$BY0A@U_MulticastSessionConfiguration@@U?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@0@@Z @ 0x1800FF504 (--$_Destroy_range@V-$allocator@V-$unique_ptr@$$BY0A@U_MulticastSessionConfiguration@@U-$function.c)
 *     ??$_Emplace_reallocate@V?$unique_ptr@$$BY0A@U_MulticastSessionConfiguration@@U?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@?$vector@V?$unique_ptr@$$BY0A@U_MulticastSessionConfiguration@@U?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@V?$allocator@V?$unique_ptr@$$BY0A@U_MulticastSessionConfiguration@@U?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@std@@@std@@AEAAPEAV?$unique_ptr@$$BY0A@U_MulticastSessionConfiguration@@U?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@QEAV23@$$QEAV23@@Z @ 0x1800FF648 (--$_Emplace_reallocate@V-$unique_ptr@$$BY0A@U_MulticastSessionConfiguration@@U-$function_deleter.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMulticastSessionManager::GetMulticastCapableChildEndpoints(
        __int64 a1,
        void **a2,
        _DWORD *a3,
        const char *a4)
{
  void **v6; // rdi
  __int64 **v7; // rbx
  void **v8; // rsi
  void *v9; // rax
  void *v10; // rcx
  void **v11; // rbx
  __int64 result; // rax
  __int128 v13; // [rsp+20h] [rbp-38h] BYREF
  void **v14; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v16; // [rsp+60h] [rbp+8h] BYREF
  void *v17; // [rsp+70h] [rbp+18h] BYREF

  *a3 = 0;
  v13 = 0LL;
  v6 = 0LL;
  v14 = 0LL;
  v7 = *(__int64 ***)(a1 + 24);
  v8 = (void **)_mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
  try
  {
    while ( v7 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*v7[1] + 24))(v7[1]) )
      {
        v16 = 0;
        v17 = 0LL;
        (*(void (__fastcall **)(__int64 *, void **, int *))(*v7[1] + 56))(v7[1], &v17, &v16);
        *a3 += v16;
        if ( v8 == v6 )
        {
          std::vector<wistd::unique_ptr<_MulticastSessionConfiguration [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>::_Emplace_reallocate<wistd::unique_ptr<_MulticastSessionConfiguration [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>(
            (__int64 *)&v13,
            (__int64)v8,
            &v17);
          v6 = v14;
          v8 = (void **)*((_QWORD *)&v13 + 1);
        }
        else
        {
          v9 = v17;
          v17 = 0LL;
          *v8++ = v9;
          *((_QWORD *)&v13 + 1) = v8;
        }
        v10 = v17;
        v17 = 0LL;
        if ( v10 )
          operator delete(v10);
      }
      v7 = (__int64 **)*v7;
    }
    v11 = (void **)v13;
    if ( !*a3 )
      goto LABEL_16;
    if ( (void **)((char *)v8 - v13) == (void **)8 )
    {
      wistd::unique_ptr<_MulticastSessionConfiguration [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>::operator=(
        a2,
        (void **)v13);
LABEL_16:
      if ( v11 )
      {
        std::_Destroy_range<std::allocator<wistd::unique_ptr<_MulticastSessionConfiguration [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>>(
          v11,
          v8);
        std::_Deallocate<16,0>((char *)v11, (const struct std::nothrow_t *)(8 * (v6 - v11)));
      }
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x149,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\multicastsessionmanager.cpp",
      (const char *)0x80004001LL);
    if ( v11 )
    {
      std::_Destroy_range<std::allocator<wistd::unique_ptr<_MulticastSessionConfiguration [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>>(
        v11,
        v8);
      std::_Deallocate<16,0>((char *)v11, (const struct std::nothrow_t *)(8 * (v6 - v11)));
    }
    result = 2147500033LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x14E,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\multicastsessionmanager.cpp",
                           a4);
  }
  return result;
}
