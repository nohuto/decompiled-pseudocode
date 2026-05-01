/*
 * XREFs of ?OnNoContextInputScopeChanged@TabTipAdapter@KeyboardHosting@@UEAAJI@Z @ 0x1801D9FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18008317C (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1801DA0C0 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1802C4CCC (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnNoContextInputScopeChanged(RTL_SRWLOCK *this, unsigned int a2)
{
  int v4; // r8d
  int v5; // r9d
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  void *v10; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v11; // [rsp+70h] [rbp+18h] BYREF
  const char *v12; // [rsp+78h] [rbp+20h] BYREF

  if ( *(_DWORD *)TouchKeyboardExperienceTraceLogging::Provider() > 5u )
  {
    LOBYTE(v10) = std::_Atomic_storage<bool,1>::load((char *)&this[47].Ptr + 6);
    v11 = a2;
    v12 = "TabTipAdapter::OnNoContextInputScopeChanged";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
      v4,
      (unsigned int)&unk_180800D02,
      v4,
      v5,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v10);
  }
  if ( (unsigned __int8)std::_Atomic_storage<bool,1>::load((char *)&this[47].Ptr + 6)
    && (v6 = (*(__int64 (__fastcall **)(PVOID, _QWORD))(*(_QWORD *)this[3].Ptr + 656LL))(this[3].Ptr, a2),
        v7 = v6,
        v6 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x900,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
  else
  {
    AcquireSRWLockExclusive(this + 51);
    LODWORD(v10) = a2;
    BYTE4(v10) = 1;
    this[60].Ptr = v10;
    if ( this != (RTL_SRWLOCK *)-408LL )
      ReleaseSRWLockExclusive(this + 51);
    return 0LL;
  }
}
