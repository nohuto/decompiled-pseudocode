/*
 * XREFs of ?GetStreamLatency@CVADServer@@UEAAJ_KPEA_J@Z @ 0x180064960
 * Callers:
 *     AudioServerGetStreamLatency @ 0x1800647B0 (AudioServerGetStreamLatency.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?GetStreamLatency@CAudioStream@@QEAAJPEA_J@Z @ 0x180064AC0 (-GetStreamLatency@CAudioStream@@QEAAJPEA_J@Z.c)
 *     ?ValidateStreamHandle@CVADServer@@IEAAJ_K@Z @ 0x180064C38 (-ValidateStreamHandle@CVADServer@@IEAAJ_K@Z.c)
 */

__int64 __fastcall CVADServer::GetStreamLatency(CVADServer *this, unsigned __int64 a2, __int64 *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r9
  int v11; // eax
  unsigned int v12; // esi
  int StreamLatency; // eax
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+30h] [rbp+8h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 200);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 5);
  v16 = v3;
  if ( !a3 )
  {
    v7 = -2147467261;
    v14 = 2086LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v7);
    if ( v3 )
      LeaveCriticalSection(v3);
    return v7;
  }
  if ( !*((_DWORD *)this + 40) )
  {
    v7 = -2004287487;
    v14 = 2087LL;
    goto LABEL_14;
  }
  if ( !*((_QWORD *)this + 22) )
  {
    v7 = -2004287487;
    v8 = 2088LL;
    v9 = 2290679809LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v9);
LABEL_6:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v16);
    return v7;
  }
  v11 = CVADServer::ValidateStreamHandle(this, a2);
  v12 = v11;
  if ( v11 < 0 )
  {
    v7 = -2005139336;
    if ( v11 != -2005139336 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x829,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v11);
      v7 = v12;
    }
    goto LABEL_6;
  }
  StreamLatency = CAudioStream::GetStreamLatency(*((CAudioStream **)this + 22), a3);
  v7 = StreamLatency;
  if ( StreamLatency < 0 )
  {
    v9 = (unsigned int)StreamLatency;
    v8 = 2094LL;
    goto LABEL_5;
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  return 0LL;
}
