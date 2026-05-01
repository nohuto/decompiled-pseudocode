/*
 * XREFs of ?RuntimeClassInitialize@?$EventRegistration@UIImmersiveShellHookService@@UIImmersiveShellHookNotification@@@details@AppViewEventHelpers@@QEAAJPEAUIImmersiveShellHookNotification@@@Z @ 0x1806C06F4
 * Callers:
 *     ??$MakeAndInitialize@VShellHookRegistration@details@AppViewEventHelpers@@V123@AEAPEAUIImmersiveShellHookNotification@@@Details@WRL@Microsoft@@YAJPEAPEAVShellHookRegistration@details@AppViewEventHelpers@@AEAPEAUIImmersiveShellHookNotification@@@Z @ 0x18016BC0C (--$MakeAndInitialize@VShellHookRegistration@details@AppViewEventHelpers@@V123@AEAPEAUIImmersiveS.c)
 *     ??$MakeAndInitialize@VApplicationViewEventRegistration@details@AppViewEventHelpers@@V123@AEAPEAUIApplicationViewChangeListener@@@Details@WRL@Microsoft@@YAJPEAPEAVApplicationViewEventRegistration@details@AppViewEventHelpers@@AEAPEAUIApplicationViewChangeListener@@@Z @ 0x18029AC70 (--$MakeAndInitialize@VApplicationViewEventRegistration@details@AppViewEventHelpers@@V123@AEAPEAU.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802C0C34 (--4-$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_polic.c)
 *     ??$com_weak_query@AEAPEAUIApplicationViewChangeListener@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@AEAPEAUIApplicationViewChangeListener@@@Z @ 0x1802C5190 (--$com_weak_query@AEAPEAUIApplicationViewChangeListener@@@wil@@YA-AV-$com_ptr_t@UIWeakReference@.c)
 */

__int64 __fastcall AppViewEventHelpers::details::EventRegistration<IImmersiveShellHookService,IImmersiveShellHookNotification>::RuntimeClassInitialize(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *))
{
  __int64 *v3; // rax
  const char *v4; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp+10h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v7 = a2;
  try
  {
    v3 = wil::com_weak_query<IApplicationViewChangeListener * &>(&v8, &v7);
    wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::ISnapSignalData,wil::err_exception_policy>::operator=(
      (__int64 *)(a1 + 64),
      v3);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v8);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x23,
                           (int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewEventHelpers.h",
                           v4);
  }
  return result;
}
