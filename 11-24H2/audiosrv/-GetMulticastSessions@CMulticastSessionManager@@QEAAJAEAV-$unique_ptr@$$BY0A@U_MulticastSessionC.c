/*
 * XREFs of ?GetMulticastSessions@CMulticastSessionManager@@QEAAJAEAV?$unique_ptr@$$BY0A@U_MulticastSessionConfiguration@@U?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@PEAI@Z @ 0x180100568
 * Callers:
 *     s_GetMulticastSessions @ 0x180100F60 (s_GetMulticastSessions.c)
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
__int64 __fastcall CMulticastSessionManager::GetMulticastSessions(__int64 a1, void **a2, _DWORD *a3, const char *a4)
{
  void **v6; // rdi
  __int64 **v7; // rbx
  void **v8; // rsi
  int v9; // eax
  unsigned int v10; // r15d
  void *v11; // rcx
  char *v12; // rbx
  __int64 result; // rax
  void *v14; // rax
  void *v15; // rcx
  void **v16; // rbx
  int v17[4]; // [rsp+20h] [rbp-48h] BYREF
  void **v18; // [rsp+30h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v20; // [rsp+70h] [rbp+8h] BYREF
  void *v21; // [rsp+80h] [rbp+18h] BYREF

  *a3 = 0;
  *(_OWORD *)v17 = 0LL;
  v6 = 0LL;
  v18 = 0LL;
  v7 = *(__int64 ***)(a1 + 24);
  v8 = (void **)_mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
  try
  {
    while ( v7 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*v7[1] + 24))(v7[1]) )
      {
        v20 = 0;
        v21 = 0LL;
        v9 = (*(__int64 (__fastcall **)(__int64 *, void **, int *))(*v7[1] + 64))(v7[1], &v21, &v20);
        v10 = v9;
        if ( v9 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x15D,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\multicastsessionmanager.cpp",
            (const char *)(unsigned int)v9);
          v11 = v21;
          v21 = 0LL;
          if ( v11 )
            operator delete(v11);
          v12 = *(char **)v17;
          if ( *(_QWORD *)v17 )
          {
            std::_Destroy_range<std::allocator<wistd::unique_ptr<_MulticastSessionConfiguration [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>>(
              *(void ***)v17,
              v8);
            std::_Deallocate<16,0>(v12, (const struct std::nothrow_t *)(8 * (((char *)v6 - v12) >> 3)));
          }
          return v10;
        }
        *a3 += v20;
        if ( v8 == v6 )
        {
          std::vector<wistd::unique_ptr<_MulticastSessionConfiguration [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>::_Emplace_reallocate<wistd::unique_ptr<_MulticastSessionConfiguration [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>(
            (__int64 *)v17,
            (__int64)v8,
            &v21);
          v6 = v18;
          v8 = *(void ***)&v17[2];
        }
        else
        {
          v14 = v21;
          v21 = 0LL;
          *v8++ = v14;
          *(_QWORD *)&v17[2] = v8;
        }
        v15 = v21;
        v21 = 0LL;
        if ( v15 )
          operator delete(v15);
      }
      v7 = (__int64 **)*v7;
    }
    v16 = *(void ***)v17;
    if ( !*a3 )
      goto LABEL_22;
    if ( (void **)((char *)v8 - *(_QWORD *)v17) == (void **)8 )
    {
      wistd::unique_ptr<_MulticastSessionConfiguration [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>::operator=(
        a2,
        *(void ***)v17);
LABEL_22:
      if ( v16 )
      {
        std::_Destroy_range<std::allocator<wistd::unique_ptr<_MulticastSessionConfiguration [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>>(
          v16,
          v8);
        std::_Deallocate<16,0>((char *)v16, (const struct std::nothrow_t *)(8 * (v6 - v16)));
      }
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16C,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\multicastsessionmanager.cpp",
      (const char *)0x80004001LL);
    if ( v16 )
    {
      std::_Destroy_range<std::allocator<wistd::unique_ptr<_MulticastSessionConfiguration [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>>(
        v16,
        v8);
      std::_Deallocate<16,0>((char *)v16, (const struct std::nothrow_t *)(8 * (v6 - v16)));
    }
    result = 2147500033LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x171,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\multicastsessionmanager.cpp",
                           a4);
  }
  return result;
}
