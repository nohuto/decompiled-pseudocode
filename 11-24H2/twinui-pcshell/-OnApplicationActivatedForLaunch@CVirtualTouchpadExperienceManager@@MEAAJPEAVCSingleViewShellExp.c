/*
 * XREFs of ?OnApplicationActivatedForLaunch@CVirtualTouchpadExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@J@Z @ 0x18039F180
 * Callers:
 *     <none>
 * Callees:
 *     ??1TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA@XZ @ 0x1802BD6E0 (--1TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?Stop@?$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1803A0584 (-Stop@-$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA.c)
 *     ?TransferToCurrentThread@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA?AV12@XZ @ 0x1803A08A8 (-TransferToCurrentThread@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA-AV1.c)
 */

__int64 __fastcall CVirtualTouchpadExperienceManager::OnApplicationActivatedForLaunch(
        CVirtualTouchpadExperienceManager *this,
        struct CSingleViewShellExperience *a2,
        int a3)
{
  _BYTE v5[336]; // [rsp+20h] [rbp-168h] BYREF

  if ( a3 < 0 )
  {
    *((_DWORD *)this + 180) = 0;
    TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::TransferToCurrentThread((char *)this + 320, v5);
    wil::ActivityBase<TouchpadControllerExperienceManagerLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Stop(
      v5,
      (unsigned int)a3);
    TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::~TouchpadLaunched((TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched *)v5);
  }
  return 0LL;
}
