/*
 * XREFs of ?SetStreamAmbRotation@CVADServer@@UEAAJ_KMMMM@Z @ 0x18010E8D0
 * Callers:
 *     AudioServerSetAmbRotation @ 0x180111870 (AudioServerSetAmbRotation.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateStreamHandle@CVADServer@@IEAAJ_K@Z @ 0x1800206B8 (-ValidateStreamHandle@CVADServer@@IEAAJ_K@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?SetAmbRotation@CAudioStream@@QEAAJMMMM@Z @ 0x1800C9A20 (-SetAmbRotation@CAudioStream@@QEAAJMMMM@Z.c)
 */

__int64 __fastcall CVADServer::SetStreamAmbRotation(CVADServer *this, __int64 a2, float a3, float a4, float a5)
{
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  bool v8; // zf
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r9
  int v12; // eax
  unsigned int v13; // edi
  int v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+60h] [rbp+8h] BYREF

  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 200);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 5);
  v8 = *((_DWORD *)this + 40) == 0;
  v17 = v5;
  if ( v8 )
  {
    v9 = -2004287487;
    v10 = 2060LL;
    v11 = 2290679809LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v11);
    goto LABEL_12;
  }
  if ( !*((_QWORD *)this + 22) )
  {
    v9 = -2004287487;
    v10 = 2061LL;
    v11 = 2290679809LL;
    goto LABEL_10;
  }
  v12 = CVADServer::ValidateStreamHandle(this, a2);
  v13 = v12;
  if ( v12 >= 0 )
  {
    v14 = CAudioStream::SetAmbRotation(*((CAudioStream **)this + 22), a3, a4, a5);
    v9 = v14;
    if ( v14 >= 0 )
    {
      v9 = 0;
      goto LABEL_12;
    }
    v11 = (unsigned int)v14;
    v10 = 2067LL;
    goto LABEL_10;
  }
  v9 = -2005139336;
  if ( v12 != -2005139336 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x80E,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v12);
    v9 = v13;
  }
LABEL_12:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v17);
  return v9;
}
