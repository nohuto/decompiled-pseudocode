/*
 * XREFs of ?GetStreamAmbHeadTracking@CVADServer@@UEAAJ_KPEAH@Z @ 0x180106940
 * Callers:
 *     AudioServerGetAmbHeadTracking @ 0x180109010 (AudioServerGetAmbHeadTracking.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?ValidateStreamHandle@CVADServer@@IEAAJ_K@Z @ 0x180064C38 (-ValidateStreamHandle@CVADServer@@IEAAJ_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVADServer::GetStreamAmbHeadTracking(struct _RTL_CRITICAL_SECTION *this, __int64 a2, int *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  bool v7; // zf
  unsigned int v8; // ebx
  __int64 v9; // rdx
  int v10; // eax
  unsigned int v11; // esi
  __int64 v12; // rcx
  __int64 v13; // rdx
  int v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+30h] [rbp+8h] BYREF

  v3 = this + 5;
  EnterCriticalSection(this + 5);
  v7 = LODWORD(this[4].DebugInfo) == 0;
  v17 = v3;
  if ( v7 )
  {
    v8 = -2004287487;
    v9 = 2174LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v8);
    goto LABEL_17;
  }
  if ( !this[4].OwningThread )
  {
    v8 = -2004287487;
    v9 = 2175LL;
    goto LABEL_15;
  }
  v10 = CVADServer::ValidateStreamHandle((CVADServer *)this, a2);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v12 = *((_QWORD *)this[4].OwningThread + 28);
    if ( v12 )
    {
      v14 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v12 + 40LL))(v12, a3);
      v8 = v14;
      if ( v14 == -2005139384 )
      {
        v8 = -2147024809;
      }
      else if ( v14 >= 0 )
      {
        v8 = 0;
        goto LABEL_17;
      }
      v13 = 489LL;
    }
    else
    {
      v8 = -2147024809;
      v13 = 479LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)v8);
    v9 = 2181LL;
    goto LABEL_15;
  }
  v8 = -2005139336;
  if ( v10 != -2005139336 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x880,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v10);
    v8 = v11;
  }
LABEL_17:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v17);
  return v8;
}
