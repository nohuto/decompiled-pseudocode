/*
 * XREFs of ?SerializeCompatibleChildEndpointsForRpc@BluetoothBroadcastProvider@@UEAAJAEAV?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@PEAI@Z @ 0x1800E7330
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??3@YAXPEAX@Z @ 0x180021540 (--3@YAXPEAX@Z.c)
 *     MIDL_user_allocate @ 0x18003F650 (MIDL_user_allocate.c)
 *     ??4?$unique_ptr@$$BY0A@U_MulticastSessionConfiguration@@U?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800E4210 (--4-$unique_ptr@$$BY0A@U_MulticastSessionConfiguration@@U-$function_deleter@P6AXPEAX@Z$1-MIDL_us.c)
 */

__int64 __fastcall BluetoothBroadcastProvider::SerializeCompatibleChildEndpointsForRpc(
        __int64 a1,
        void **a2,
        unsigned int *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  __int64 v7; // rcx
  _QWORD *v8; // rbx
  _QWORD *v9; // r14
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rcx
  void *v13; // rcx
  unsigned int v14; // ebx
  unsigned int i; // edi
  void *v17; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  void *v19; // [rsp+50h] [rbp+30h] BYREF
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+68h] [rbp+48h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  *a3 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  v7 = (__int64)(*(_QWORD *)(a1 + 96) - *(_QWORD *)(a1 + 88)) >> 3;
  v20 = v3;
  if ( v7 )
  {
    v19 = MIDL_user_allocate(8 * v7);
    if ( v19 )
    {
      v8 = *(_QWORD **)(a1 + 88);
      v9 = *(_QWORD **)(a1 + 96);
      while ( 1 )
      {
        if ( v8 == v9 )
        {
          wistd::unique_ptr<_MulticastSessionConfiguration [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>::operator=(
            a2,
            &v19);
          v13 = v19;
          v19 = 0LL;
          if ( v13 )
            operator delete(v13);
          goto LABEL_11;
        }
        v10 = -1LL;
        do
          ++v10;
        while ( *(_WORD *)(*v8 + 2 * v10) );
        v11 = v10 + 1;
        *((_QWORD *)v19 + *a3) = MIDL_user_allocate(2 * v11);
        v12 = *((_QWORD *)v19 + *a3);
        if ( !v12 )
          break;
        _o_wcscpy_s(v12, v11, *v8);
        ++*a3;
        ++v8;
      }
      v14 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1A2,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
        (const char *)0x8007000ELL);
      for ( i = 0; i < *a3; ++i )
        operator delete(*((void **)v19 + i));
    }
    else
    {
      v14 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x194,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
        (const char *)0x8007000ELL);
    }
    v17 = v19;
    v19 = 0LL;
    if ( v17 )
      operator delete(v17);
  }
  else
  {
LABEL_11:
    v14 = 0;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v20);
  return v14;
}
