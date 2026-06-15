/*
 * XREFs of ?StopStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z @ 0x180064650
 * Callers:
 *     AudioServerStopStream @ 0x180064480 (AudioServerStopStream.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?ValidateStreamHandle@CVADServer@@IEAAJ_K@Z @ 0x180064C38 (-ValidateStreamHandle@CVADServer@@IEAAJ_K@Z.c)
 *     ?StopStream_Internal@CVADServer@@IEAAJXZ @ 0x180108548 (-StopStream_Internal@CVADServer@@IEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVADServer::StopStream(__int64 a1, unsigned __int64 a2, int a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  bool v7; // zf
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r9
  int v11; // eax
  __int64 v12; // r8
  unsigned int v13; // esi
  __int64 v14; // rdx
  int v15; // eax
  int v16; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+30h] [rbp+8h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 200);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 200));
  v7 = *(_DWORD *)(a1 + 160) == 0;
  v19 = v3;
  if ( v7 )
  {
    v8 = -2004287487;
    v9 = 1879LL;
    v10 = 2290679809LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v10);
    goto LABEL_18;
  }
  if ( !*(_QWORD *)(a1 + 144) )
  {
    v8 = -2004287487;
    v9 = 1880LL;
    v10 = 2290679809LL;
    goto LABEL_16;
  }
  if ( !*(_QWORD *)(a1 + 176) )
  {
    v8 = -2004287487;
    v9 = 1881LL;
    v10 = 2290679809LL;
    goto LABEL_16;
  }
  v11 = CVADServer::ValidateStreamHandle((CVADServer *)a1, a2);
  v13 = v11;
  if ( v11 >= 0 )
  {
    LOBYTE(v12) = a3 == 1;
    v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 144) + 264LL))(
            *(_QWORD *)(a1 + 144),
            *(_QWORD *)(a1 + 176),
            v12);
    v13 = v15;
    if ( v15 >= 0 )
    {
      *(_DWORD *)(a1 + 164) = 0;
      v16 = CVADServer::StopStream_Internal((CVADServer *)a1);
      v8 = v16;
      if ( v16 >= 0 )
      {
        v8 = 0;
        goto LABEL_18;
      }
      v10 = (unsigned int)v16;
      v9 = 1889LL;
      goto LABEL_16;
    }
    v8 = -2004287484;
    if ( v15 != -2004287484 )
    {
      v14 = 1885LL;
      goto LABEL_10;
    }
  }
  else
  {
    v8 = -2005139336;
    if ( v11 != -2005139336 )
    {
      v14 = 1882LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)v13);
      v8 = v13;
    }
  }
LABEL_18:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v19);
  return v8;
}
