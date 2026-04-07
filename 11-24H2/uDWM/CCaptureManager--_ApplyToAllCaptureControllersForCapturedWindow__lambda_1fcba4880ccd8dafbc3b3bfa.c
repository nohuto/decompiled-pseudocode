/*
 * XREFs of CCaptureManager::_ApplyToAllCaptureControllersForCapturedWindow__lambda_1fcba4880ccd8dafbc3b3bfa9dcec5f3___ @ 0x1800ABB44
 * Callers:
 *     ?_UpdateCaptureControllerSize@CCaptureManager@@AEAAJPEAUHWND__@@@Z @ 0x1800B4F2C (-_UpdateCaptureControllerSize@CCaptureManager@@AEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_SendBoundsToCaptureControllerFromWindow@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAVCCaptureControllerProxy@@@Z @ 0x1800B4330 (-_SendBoundsToCaptureControllerFromWindow@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAVCCaptureContro.c)
 */

__int64 __fastcall CCaptureManager::_ApplyToAllCaptureControllersForCapturedWindow__lambda_1fcba4880ccd8dafbc3b3bfa9dcec5f3___(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        _BYTE *a4)
{
  CCaptureManager *v8; // rcx
  bool v9; // r8
  __int64 ***v10; // rdi
  __int64 **i; // rbx
  int v12; // eax
  unsigned int v13; // esi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+40h] [rbp+8h] BYREF

  v16 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  *a4 = 0;
  v10 = *(__int64 ****)(a1 + 16);
  for ( i = *v10; i != (__int64 **)v10; i = (__int64 **)*i )
  {
    if ( i[5] == a2 )
    {
      *a4 = 1;
      v12 = CCaptureManager::_SendBoundsToCaptureControllerFromWindow(
              v8,
              *(HWND *)(a3 + 8),
              v9,
              (struct CCaptureControllerProxy *)i[4]);
      v13 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x205,
          (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
          (const char *)(unsigned int)v12);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x530,
          (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
          (const char *)v13);
        goto LABEL_8;
      }
    }
  }
  v13 = 0;
LABEL_8:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v16);
  return v13;
}
