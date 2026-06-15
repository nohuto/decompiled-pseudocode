/*
 * XREFs of ?SetAudioStreamWindow@CVADServer@@QEAAJPEAUHWND__@@@Z @ 0x18010DFE4
 * Callers:
 *     AudioServerSetAudioStreamWindow @ 0x180111AD0 (AudioServerSetAudioStreamWindow.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVADServer::SetAudioStreamWindow(struct _RTL_CRITICAL_SECTION *this, HWND a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  _QWORD *OwningThread; // rax
  unsigned int v6; // ebx
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+30h] [rbp+8h] BYREF

  v4 = this + 5;
  EnterCriticalSection(this + 5);
  v10 = v4;
  OwningThread = this[4].OwningThread;
  v6 = 0;
  if ( OwningThread && LODWORD(this[4].DebugInfo) )
  {
    OwningThread[11] = a2;
    v7 = OwningThread[27];
    if ( v7 )
      (*(void (__fastcall **)(__int64, HWND))(*(_QWORD *)v7 + 40LL))(v7, a2);
  }
  else
  {
    v6 = -2004287487;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8BB,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x88890001LL);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v10);
  return v6;
}
