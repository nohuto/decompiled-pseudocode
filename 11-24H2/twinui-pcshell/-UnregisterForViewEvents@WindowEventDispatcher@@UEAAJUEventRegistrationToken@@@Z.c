/*
 * XREFs of ?UnregisterForViewEvents@WindowEventDispatcher@@UEAAJUEventRegistrationToken@@@Z @ 0x180424AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?WindowEventDispatcher_UnregisteringForWindowEvents@ViewManagerInteropTraceLogging@@SAXXZ @ 0x18001EF44 (-WindowEventDispatcher_UnregisteringForWindowEvents@ViewManagerInteropTraceLogging@@SAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800479B8 (--4-$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?erase@?$vector@V?$shared_ptr@UViewEventRegistration@@@std@@V?$allocator@V?$shared_ptr@UViewEventRegistration@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UViewEventRegistration@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UViewEventRegistration@@@std@@@std@@@std@@@2@@Z @ 0x1801C5A54 (-erase@-$vector@V-$shared_ptr@UViewEventRegistration@@@std@@V-$allocator@V-$shared_ptr@UViewEven.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowEventDispatcher::UnregisterForViewEvents(RTL_SRWLOCK *this, struct EventRegistrationToken a2)
{
  RTL_SRWLOCK *v4; // r12
  __int64 v5; // rdi
  std::_Ref_count_base *v6; // r13
  _QWORD *v7; // rdx
  _QWORD *Ptr; // rsi
  _QWORD *v9; // rax
  __int64 v10; // r15
  PVOID v11; // r15
  unsigned int v12; // eax
  int v13; // eax
  const char *v14; // r9
  __int64 result; // rax
  __int64 v16; // [rsp+20h] [rbp-78h] BYREF
  std::_Ref_count_base *v17[2]; // [rsp+28h] [rbp-70h] BYREF
  char v18[8]; // [rsp+38h] [rbp-60h] BYREF
  std::_Ref_count_base *v19; // [rsp+40h] [rbp-58h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  __int64 (__fastcall *v21)(PVOID, _QWORD, _QWORD); // [rsp+A0h] [rbp+8h]
  _QWORD *v22; // [rsp+B0h] [rbp+18h]
  RTL_SRWLOCK *v23; // [rsp+B8h] [rbp+20h] BYREF

  ViewManagerInteropTraceLogging::WindowEventDispatcher_UnregisteringForWindowEvents();
  *(_OWORD *)v17 = 0LL;
  wil::AcquireSRWLockExclusive(&v23, this + 59);
  v4 = this + 53;
  v5 = ((char *)this[54].Ptr - (char *)this[53].Ptr) >> 4;
  v6 = 0LL;
  try
  {
    while ( v5 )
    {
      v7 = (char *)v4->Ptr + 16 * v5 - 16;
      if ( *(_QWORD *)(*v7 + 32LL) == a2.value )
      {
        std::shared_ptr<FlyoutView>::operator=(v17, v7);
        std::vector<std::shared_ptr<ViewEventRegistration>>::erase(
          (__int64)&this[53],
          &v16,
          (__int64)v4->Ptr + 16 * v5 - 16);
        v6 = v17[0];
        if ( (*((_BYTE *)v17[0] + 16) & 0x20) == 0 )
        {
          Ptr = this[46].Ptr;
          v9 = this[47].Ptr;
          v22 = v9;
          while ( Ptr != v9 )
          {
            v10 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*Ptr + 264LL))(
                                           *Ptr,
                                           v18)
                            + 32LL);
            if ( v19 )
              std::_Ref_count_base::_Decref(v19);
            if ( v10 == a2.value )
            {
              v11 = this[39].Ptr;
              v21 = *(__int64 (__fastcall **)(PVOID, _QWORD, _QWORD))(*(_QWORD *)v11 + 56LL);
              v12 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*Ptr + 288LL))(*Ptr);
              v13 = v21(v11, v12, 0LL);
              if ( v13 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x1E2,
                  (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                  (const char *)(unsigned int)v13);
            }
            ++Ptr;
            v9 = v22;
          }
        }
      }
      --v5;
    }
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v23);
    if ( v17[1] )
      std::_Ref_count_base::_Decref(v17[1]);
    result = v6 == 0LL ? 0x80070490 : 0;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1EA,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v14);
  }
  return result;
}
