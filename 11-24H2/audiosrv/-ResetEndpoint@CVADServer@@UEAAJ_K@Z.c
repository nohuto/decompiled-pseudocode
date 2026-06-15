/*
 * XREFs of ?ResetEndpoint@CVADServer@@UEAAJ_K@Z @ 0x18010DA90
 * Callers:
 *     AudioServerResetEndpoint @ 0x180084F70 (AudioServerResetEndpoint.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateStreamHandle@CVADServer@@IEAAJ_K@Z @ 0x1800206B8 (-ValidateStreamHandle@CVADServer@@IEAAJ_K@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?ResetEndpoint@CAudioStream@@QEAAJXZ @ 0x1800727C4 (-ResetEndpoint@CAudioStream@@QEAAJXZ.c)
 */

__int64 __fastcall CVADServer::ResetEndpoint(CVADServer *this, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  bool v5; // zf
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r9
  int v9; // eax
  unsigned int v10; // esi
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 200);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 5);
  v5 = *((_DWORD *)this + 40) == 0;
  v14 = v2;
  if ( v5 )
  {
    v6 = -2004287487;
    v7 = 1881LL;
    v8 = 2290679809LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v8);
    goto LABEL_14;
  }
  if ( !*((_QWORD *)this + 22) )
  {
    v6 = -2004287487;
    v7 = 1882LL;
    v8 = 2290679809LL;
    goto LABEL_12;
  }
  if ( !*((_QWORD *)this + 18) )
  {
    v6 = -2004287487;
    v7 = 1883LL;
    v8 = 2290679809LL;
    goto LABEL_12;
  }
  v9 = CVADServer::ValidateStreamHandle(this, a2);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v11 = CAudioStream::ResetEndpoint(*((CAudioStream **)this + 22));
    v6 = v11;
    if ( v11 >= 0 )
    {
      v6 = 0;
      goto LABEL_14;
    }
    v8 = (unsigned int)v11;
    v7 = 1887LL;
    goto LABEL_12;
  }
  v6 = -2005139336;
  if ( v9 != -2005139336 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x75C,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v9);
    v6 = v10;
  }
LABEL_14:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v14);
  return v6;
}
