/*
 * XREFs of ?QueueActionAfterUnlock@UnlockActionHelper@@QEAAJXZ @ 0x18008EA00
 * Callers:
 *     ?QueueActionAfterUnlock@ContentManagementService@ContentManagement@@UEAAJPEAUIInspectable@@@Z @ 0x180055E50 (-QueueActionAfterUnlock@ContentManagementService@ContentManagement@@UEAAJPEAUIInspectable@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002A31C (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DA6C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18006ACF0 (-reset@-$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetLockAppHost@@YAJPEAPEAUILockAppHost@@@Z @ 0x18008DD8C (-GetLockAppHost@@YAJPEAPEAUILockAppHost@@@Z.c)
 *     ?GetSharedExtendedExecutionSession@UniqueExtendedExecutionSession@@SAJPEAPEAUIInspectable@@@Z @ 0x18008E048 (-GetSharedExtendedExecutionSession@UniqueExtendedExecutionSession@@SAJPEAPEAUIInspectable@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall UnlockActionHelper::QueueActionAfterUnlock(
        UnlockActionHelper *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int LockAppHost; // eax
  unsigned int v6; // ebx
  __int64 (__fastcall **v7)(struct ILockAppHost *, GUID *, __int64 *); // rax
  int v8; // eax
  __int64 v9; // rdx
  int SharedExtendedExecutionSession; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v13; // [rsp+38h] [rbp+10h] BYREF
  struct ILockAppHost *v14; // [rsp+40h] [rbp+18h] BYREF

  v14 = 0LL;
  LockAppHost = GetLockAppHost(&v14, a2, a3, a4);
  v6 = LockAppHost;
  if ( LockAppHost >= 0 )
  {
    v13 = 0LL;
    v7 = *(__int64 (__fastcall ***)(struct ILockAppHost *, GUID *, __int64 *))v14;
    v13 = 0LL;
    v8 = (*v7)(v14, &GUID_f2f2e6cf_4806_4728_954a_ef83a6301791, &v13);
    v6 = v8;
    if ( v8 >= 0 )
    {
      wil::com_ptr_t<IInspectable,wil::err_exception_policy>::reset((__int64 *)this + 5);
      SharedExtendedExecutionSession = UniqueExtendedExecutionSession::GetSharedExtendedExecutionSession((struct IInspectable **)this + 5);
      if ( SharedExtendedExecutionSession < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x34,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
          (const char *)(unsigned int)SharedExtendedExecutionSession);
      v8 = (*(__int64 (__fastcall **)(__int64, UnlockActionHelper *))(*(_QWORD *)v13 + 32LL))(v13, this);
      v6 = v8;
      if ( v8 >= 0 )
      {
        wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v13);
        v6 = 0;
        goto LABEL_11;
      }
      v9 = 54LL;
    }
    else
    {
      v9 = 47LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
      (const char *)(unsigned int)v8);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v13);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
      (const char *)(unsigned int)LockAppHost);
  }
LABEL_11:
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v14);
  return v6;
}
