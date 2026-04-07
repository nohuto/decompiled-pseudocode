/*
 * XREFs of CProjectionBorderManager::_ApplyToAllCaptureControllersForCapturedWindow__lambda_0a031fc84a3403955d1fdc9ab3d99773___ @ 0x1800CB270
 * Callers:
 *     ?_UpdateCaptureControllerCaptureState@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800CF8B8 (-_UpdateCaptureControllerCaptureState@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetCaptureState@CCaptureControllerProxy@@QEAAJ_N@Z @ 0x180097B54 (-SetCaptureState@CCaptureControllerProxy@@QEAAJ_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProjectionBorderManager::_ApplyToAllCaptureControllersForCapturedWindow__lambda_0a031fc84a3403955d1fdc9ab3d99773___(
        struct _RTL_GENERIC_TABLE *a1,
        CCaptureControllerProxy *a2,
        char a3)
{
  char v6; // si
  CCaptureControllerProxy **v7; // rax
  int v8; // eax
  unsigned int v9; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+40h] [rbp+8h] BYREF
  PVOID RestartKey; // [rsp+58h] [rbp+20h] BYREF

  v12 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  RestartKey = 0LL;
  v6 = 0;
  v7 = (CCaptureControllerProxy **)RtlEnumerateGenericTableWithoutSplaying(a1 + 6, &RestartKey);
  if ( v7 )
  {
    do
    {
      if ( v7[2] == a2 )
      {
        v6 = 1;
        v8 = CCaptureControllerProxy::SetCaptureState(v7[1], a3);
        v9 = v8;
        if ( v8 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x396,
            (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
            (const char *)(unsigned int)v8);
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x6CE,
            (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
            (const char *)v9);
          CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
          return v9;
        }
      }
      v7 = (CCaptureControllerProxy **)RtlEnumerateGenericTableWithoutSplaying(a1 + 6, &RestartKey);
    }
    while ( v7 );
    if ( !v6 )
      goto LABEL_8;
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
    return 0LL;
  }
  else
  {
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6D2,
      (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
      (const char *)0x80070057LL);
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
    return 2147942487LL;
  }
}
