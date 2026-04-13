/*
 * XREFs of ??0?$com_ptr_t@VActivityToastNotificationCallback@ToastNotification@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVActivityToastNotificationCallback@ToastNotification@@@Z @ 0x180066EC0
 * Callers:
 *     ??0_lambda_9381c80c14e95fe77b42b10959c65c30_@@QEAA@AEBV?$com_ptr_t@VActivityToastNotificationCallback@ToastNotification@@Uerr_exception_policy@wil@@@wil@@QEAVActivityToastNotificationCallback@ToastNotification@@AEBVActivityWrapper@MobilityExperience@@AEBV?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@2@@Z @ 0x180066C10 (--0_lambda_9381c80c14e95fe77b42b10959c65c30_@@QEAA@AEBV-$com_ptr_t@VActivityToastNotificationCal.c)
 *     ?PublishCompletedActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWrapper@MobilityExperience@@PEAVICDPActivityStore@@@Z @ 0x180069218 (-PublishCompletedActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWra.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003A904 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

_QWORD *__fastcall wil::com_ptr_t<ToastNotification::ActivityToastNotificationCallback,wil::err_exception_policy>::com_ptr_t<ToastNotification::ActivityToastNotificationCallback,wil::err_exception_policy>(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v2; // r10
  signed __int64 v3; // rax
  signed __int64 v4; // rtt

  *a1 = a2;
  v2 = a1;
  if ( a2 )
  {
    v3 = *(_QWORD *)(a2 + 72);
    while ( v3 >= 0 )
    {
      if ( (_DWORD)v3 != 0x7FFFFFFF )
      {
        v4 = v3;
        v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 72), v3 + 1, v3);
        if ( v4 != v3 )
          continue;
      }
      return v2;
    }
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v3 + 16), (volatile int *)a2);
  }
  return v2;
}
