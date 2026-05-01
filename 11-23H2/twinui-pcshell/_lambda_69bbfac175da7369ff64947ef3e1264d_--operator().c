/*
 * XREFs of _lambda_69bbfac175da7369ff64947ef3e1264d_::operator() @ 0x1801F38AC
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_69bbfac175da7369ff64947ef3e1264d___::Run @ 0x1801F3E80 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_69bbfac175da7369ff64947ef3e1264d___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180098014 (--1-$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800D4E4C (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_69bbfac175da7369ff64947ef3e1264d_::operator()(
        _QWORD **a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  _QWORD *v5; // rbx
  _QWORD *v6; // rsi
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 (__fastcall *v10)(__int64, _QWORD, __int64 *); // rdi
  int v11; // eax
  __int64 result; // rax
  int v13; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF
  __int64 v16; // [rsp+38h] [rbp+10h] BYREF

  v5 = (_QWORD *)(*a1)[46];
  v6 = (_QWORD *)(*a1)[47];
  try
  {
    while ( v5 != v6 )
    {
      if ( (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 296LL))(*v5) == *a1[1] )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 288LL))(*v5);
        v15 = 0LL;
        v8 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(*a1)[39] + 40LL))((*a1)[39], &v16);
        v9 = *(_QWORD *)v8;
        v10 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(**(_QWORD **)v8 + 56LL);
        wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset(&v15);
        v11 = v10(v9, v7, &v15);
        if ( v11 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x78E,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            (const char *)(unsigned int)v11,
            v13);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v16);
        wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>(&v15);
        break;
      }
      ++v5;
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x793,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           a4);
  }
  return result;
}
