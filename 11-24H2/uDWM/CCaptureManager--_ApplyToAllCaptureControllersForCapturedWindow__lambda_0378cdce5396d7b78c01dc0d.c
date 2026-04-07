/*
 * XREFs of CCaptureManager::_ApplyToAllCaptureControllersForCapturedWindow__lambda_0378cdce5396d7b78c01dc0da7cd119d___ @ 0x1800AB9A4
 * Callers:
 *     ?_UpdateCaptureControllerTransform@CCaptureManager@@AEAAJPEAUHWND__@@@Z @ 0x1800B4FBC (-_UpdateCaptureControllerTransform@CCaptureManager@@AEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_UpdateCaptureControllerTransformFromWindow@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAVCCaptureControllerProxy@@@Z @ 0x1800B50E4 (-_UpdateCaptureControllerTransformFromWindow@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAVCCaptureCon.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCaptureManager::_ApplyToAllCaptureControllersForCapturedWindow__lambda_0378cdce5396d7b78c01dc0da7cd119d___(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        _BYTE *a4)
{
  CCaptureManager *v8; // rcx
  bool v9; // r8
  __int64 ***v10; // rdi
  __int64 **i; // rbx
  int updated; // eax
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
      updated = CCaptureManager::_UpdateCaptureControllerTransformFromWindow(
                  v8,
                  *(HWND *)(a3 + 8),
                  v9,
                  (struct CCaptureControllerProxy *)i[4]);
      v13 = updated;
      if ( updated < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x213,
          (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
          (const char *)(unsigned int)updated);
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
