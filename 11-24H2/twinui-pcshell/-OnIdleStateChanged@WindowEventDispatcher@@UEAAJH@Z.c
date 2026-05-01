/*
 * XREFs of ?OnIdleStateChanged@WindowEventDispatcher@@UEAAJH@Z @ 0x1804208F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18007D438 (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WindowEventDispatcher::OnIdleStateChanged(RTL_SRWLOCK *this, int a2)
{
  __int64 *Ptr; // rdi
  __int64 *v5; // r14
  __int64 *v6; // rbx
  __int64 v7; // rax
  const char *v8; // r9
  __int64 result; // rax
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v11; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 *v13; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *v14; // [rsp+60h] [rbp+18h] BYREF

  wil::AcquireSRWLockExclusive(&v14, this + 34);
  Ptr = (__int64 *)this[21].Ptr;
  v5 = (__int64 *)this[22].Ptr;
  try
  {
    while ( Ptr != v5 )
    {
      wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
        (__int64 *)&v13,
        Ptr);
      v6 = v13;
      (*(void (__fastcall **)(__int64 *, __int64 *))(*v13 + 264))(v13, &v10);
      if ( (*(_BYTE *)(v10 + 16) & 2) == 0 )
      {
        v7 = *v6;
        if ( a2 )
          (*(void (__fastcall **)(__int64 *))(v7 + 376))(v6);
        else
          (*(void (__fastcall **)(__int64 *))(v7 + 384))(v6);
      }
      if ( v11 )
        std::_Ref_count_base::_Decref(v11);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v13);
      ++Ptr;
    }
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v14);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1B1,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v8);
  }
  return result;
}
