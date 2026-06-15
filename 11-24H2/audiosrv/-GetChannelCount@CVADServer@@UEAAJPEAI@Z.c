/*
 * XREFs of ?GetChannelCount@CVADServer@@UEAAJPEAI@Z @ 0x180074150
 * Callers:
 *     AudioServerGetChannelCount @ 0x1800822C0 (AudioServerGetChannelCount.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 */

__int64 __fastcall CVADServer::GetChannelCount(struct _RTL_CRITICAL_SECTION *this, unsigned int *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  _DWORD *OwningThread; // rax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = this + 5;
  EnterCriticalSection(this + 5);
  OwningThread = this[4].OwningThread;
  v9 = v2;
  if ( OwningThread )
  {
    if ( LODWORD(this[4].DebugInfo) )
    {
      v6 = 0;
      *a2 = OwningThread[24];
    }
    else
    {
      v6 = -2004287487;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x848,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)0x88890001LL);
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v9);
  }
  else
  {
    v6 = -2004287487;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x847,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x88890001LL);
    if ( v2 )
      LeaveCriticalSection(v2);
  }
  return v6;
}
