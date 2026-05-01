/*
 * XREFs of ??$InitializeGlobals@PEAVCApplicationViewManager@@@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SAJPEAVCApplicationViewManager@@@Z @ 0x1802051D0
 * Callers:
 *     ?v_PublishServices@CApplicationViewManager@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180205190 (-v_PublishServices@CApplicationViewManager@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x18002B164 (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCGlobals@ApplicationViewManagement@@V12@AEAPEAVCApplicationViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCGlobals@ApplicationViewManagement@@AEAPEAVCApplicationViewManager@@@Z @ 0x180205270 (--$MakeAndInitialize@VCGlobals@ApplicationViewManagement@@V12@AEAPEAVCApplicationViewManager@@@D.c)
 */

__int64 __fastcall GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::InitializeGlobals<CApplicationViewManager *>(
        __int64 a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  volatile signed __int32 *v3; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  volatile signed __int32 *v7; // [rsp+38h] [rbp+10h] BYREF

  v6 = a1;
  v7 = 0LL;
  Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease(&v7);
  v1 = Microsoft::WRL::Details::MakeAndInitialize<ApplicationViewManagement::CGlobals,ApplicationViewManagement::CGlobals,CApplicationViewManager * &>(
         &v7,
         &v6);
  v2 = v1;
  if ( v1 >= 0 )
  {
    AcquireSRWLockExclusive(&GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_lock);
    v3 = v7;
    v7 = 0LL;
    GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals = (__int64)v3;
    ReleaseSRWLockExclusive(&GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_lock);
    v2 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x36,
      (int)"desktop\\internal\\shell\\inc\\private\\GlobalsUtil.h",
      (const char *)(unsigned int)v1);
  }
  Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease(&v7);
  return v2;
}
