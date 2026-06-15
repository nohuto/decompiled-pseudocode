/*
 * XREFs of ?SerializeMulticastSessionsForRpc@DummyBroadcastProvider@@UEAAJAEAV?$unique_ptr@$$BY0A@U_MulticastSessionConfiguration@@U?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@PEAI@Z @ 0x1800F80C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     MIDL_user_allocate @ 0x180042530 (MIDL_user_allocate.c)
 *     memset_0 @ 0x1800A8BC4 (memset_0.c)
 *     ??4?$unique_ptr@$$BY0A@U_MulticastSessionConfiguration@@U?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800DF824 (--4-$unique_ptr@$$BY0A@U_MulticastSessionConfiguration@@U-$function_deleter@P6AXPEAX@Z$1-MIDL_us.c)
 *     _lambda_4f879b899b0f9b226fb95452eeb7fcf0_::operator() @ 0x1800E0438 (_lambda_4f879b899b0f9b226fb95452eeb7fcf0_--operator().c)
 */

__int64 __fastcall DummyBroadcastProvider::SerializeMulticastSessionsForRpc(__int64 a1, void **a2, _DWORD *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  void *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r13
  __int64 v10; // rdi
  _DWORD *v11; // r15
  __int64 v12; // r14
  __int64 v13; // rdi
  void *v14; // rax
  __int64 v15; // rcx
  void *v16; // rax
  _QWORD *v17; // rdi
  _QWORD *v18; // r12
  __int64 v19; // rsi
  __int64 v20; // rsi
  __int64 v21; // rcx
  void *v22; // rcx
  unsigned int v23; // ebx
  void *v25; // rcx
  __int64 v26; // rdx
  _QWORD v27[2]; // [rsp+20h] [rbp-28h] BYREF
  char v28; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+40h]
  void *v30; // [rsp+90h] [rbp+48h] BYREF
  void **v31; // [rsp+98h] [rbp+50h]
  _DWORD *v32; // [rsp+A0h] [rbp+58h] BYREF
  struct _RTL_CRITICAL_SECTION *v33; // [rsp+A8h] [rbp+60h] BYREF

  v32 = a3;
  v31 = a2;
  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  *a3 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  v5 = (__int64)(*(_QWORD *)(a1 + 72) - *(_QWORD *)(a1 + 64)) >> 4;
  v33 = v3;
  v6 = 0xAAAAAAAAAAAAAAABuLL * v5;
  if ( v6 )
  {
    v7 = MIDL_user_allocate(40 * v6);
    v30 = v7;
    if ( v7 )
    {
      memset_0(v7, 0, 0xAAAAAAAAAAAAAAB8uLL * ((__int64)(*(_QWORD *)(a1 + 72) - *(_QWORD *)(a1 + 64)) >> 4));
      v8 = *(_QWORD *)(a1 + 64);
      v9 = *(_QWORD *)(a1 + 72);
      v27[0] = &v32;
      v27[1] = &v30;
      v28 = 1;
      while ( 1 )
      {
        if ( v8 == v9 )
        {
          wistd::unique_ptr<_MulticastSessionConfiguration [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>::operator=(
            v31,
            &v30);
          v22 = v30;
          v30 = 0LL;
          if ( v22 )
            operator delete(v22);
          goto LABEL_20;
        }
        if ( *(_QWORD *)(v8 + 16) )
        {
          v10 = -1LL;
          v11 = v30;
          v12 = 5LL * (unsigned int)*v32;
          *(_OWORD *)((char *)v30 + 8 * v12) = *(_OWORD *)v8;
          v11[2 * v12 + 6] = 0;
          do
            ++v10;
          while ( *(_WORD *)(*(_QWORD *)(v8 + 16) + 2 * v10) );
          v13 = v10 + 1;
          v14 = MIDL_user_allocate(2 * v13);
          *(_QWORD *)&v11[2 * v12 + 4] = v14;
          if ( !v14 )
          {
            v26 = 455LL;
            goto LABEL_24;
          }
          _o_wcscpy_s(v14, v13, *(_QWORD *)(v8 + 16));
          v15 = (__int64)(*(_QWORD *)(v8 + 32) - *(_QWORD *)(v8 + 24)) >> 3;
          if ( v15 )
          {
            v16 = MIDL_user_allocate(8 * v15);
            *(_QWORD *)&v11[2 * v12 + 8] = v16;
            if ( !v16 )
            {
              v26 = 462LL;
LABEL_24:
              v23 = -2147024882;
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v26,
                (int)"avcore\\audiocore\\server\\audiosrv\\dll\\dummybroadcastprovider.cpp",
                (const char *)0x8007000ELL);
              v28 = 0;
              lambda_4f879b899b0f9b226fb95452eeb7fcf0_::operator()(v27);
              goto LABEL_27;
            }
            v17 = *(_QWORD **)(v8 + 24);
            v18 = *(_QWORD **)(v8 + 32);
            if ( v17 != v18 )
            {
              while ( 1 )
              {
                v19 = -1LL;
                do
                  ++v19;
                while ( *(_WORD *)(*v17 + 2 * v19) );
                v20 = v19 + 1;
                *(_QWORD *)(*(_QWORD *)&v11[2 * v12 + 8] + 8LL * (unsigned int)v11[2 * v12 + 6]) = MIDL_user_allocate(2 * v20);
                v21 = *(_QWORD *)(*(_QWORD *)&v11[2 * v12 + 8] + 8LL * (unsigned int)v11[2 * v12 + 6]);
                if ( !v21 )
                  break;
                _o_wcscpy_s(v21, v20, *v17);
                ++v11[2 * v12 + 6];
                if ( ++v17 == v18 )
                  goto LABEL_15;
              }
              v23 = -2147024882;
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x1D4,
                (int)"avcore\\audiocore\\server\\audiosrv\\dll\\dummybroadcastprovider.cpp",
                (const char *)0x8007000ELL);
              v28 = 0;
              lambda_4f879b899b0f9b226fb95452eeb7fcf0_::operator()(v27);
              v25 = v30;
              v30 = 0LL;
              goto LABEL_28;
            }
          }
LABEL_15:
          ++*v32;
        }
        v8 += 48LL;
      }
    }
    v23 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1AB,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\dummybroadcastprovider.cpp",
      (const char *)0x8007000ELL);
LABEL_27:
    v25 = v30;
    v30 = 0LL;
LABEL_28:
    if ( v25 )
      operator delete(v25);
  }
  else
  {
LABEL_20:
    v23 = 0;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v33);
  return v23;
}
