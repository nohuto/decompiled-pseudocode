/*
 * XREFs of ?GetWindowingEnvironmentConfigByType@WindowingEnvironmentManager@@UEAAJW4WindowingEnvironmentType@@PEAPEAUIWindowingEnvironmentConfig@@@Z @ 0x180120CD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180120A50 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WindowingEnvironmentManager::GetWindowingEnvironmentConfigByType(
        RTL_SRWLOCK *a1,
        int a2,
        _QWORD *a3)
{
  RTL_SRWLOCK *v6; // rdi
  _QWORD *Ptr; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rbx
  int v11; // eax
  const char *v12; // r9
  __int64 result; // rax
  int v14; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF
  RTL_SRWLOCK *v17; // [rsp+70h] [rbp+18h] BYREF

  *a3 = 0LL;
  v16 = 0LL;
  v6 = a1 + 3;
  AcquireSRWLockShared(a1 + 3);
  v17 = v6;
  Ptr = a1[4].Ptr;
  v8 = (_QWORD *)Ptr[1];
  v9 = Ptr;
  try
  {
    while ( !*((_BYTE *)v8 + 25) )
    {
      if ( *((_DWORD *)v8 + 8) < a2 )
      {
        v8 = (_QWORD *)v8[2];
      }
      else
      {
        v9 = v8;
        v8 = (_QWORD *)*v8;
      }
    }
    if ( *((_BYTE *)v9 + 25) || a2 < *((_DWORD *)v9 + 8) || v9 == Ptr )
    {
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v17);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v16);
      result = 2147943568LL;
    }
    else
    {
      v10 = v9[5];
      v16 = v10;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      if ( v6 )
        ReleaseSRWLockShared(v6);
      v11 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v10)(
              v10,
              &GUID_3c32be79_d44b_4c43_b19b_12f70e686f35,
              a3);
      if ( v11 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x1C60,
          (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/result_macros.h",
          (const char *)(unsigned int)v11,
          v14);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x86,
                           (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
                           v12);
  }
  return result;
}
