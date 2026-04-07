/*
 * XREFs of CCaptureManager::_ApplyToAllCaptureControllersForCapturedWindow__lambda_3b681005738073340410bc45254aa71c___ @ 0x1800ABC14
 * Callers:
 *     ?_UpdateCaptureControllerCaptureState@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800B4AF0 (-_UpdateCaptureControllerCaptureState@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetCaptureState@CCaptureControllerProxy@@QEAAJ_N@Z @ 0x180097B54 (-SetCaptureState@CCaptureControllerProxy@@QEAAJ_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCaptureManager::_ApplyToAllCaptureControllersForCapturedWindow__lambda_3b681005738073340410bc45254aa71c___(
        __int64 a1,
        __int64 a2,
        char a3,
        _BYTE *a4)
{
  __int64 **v8; // rdi
  __int64 *i; // rbx
  int v10; // eax
  unsigned int v11; // ebp
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+40h] [rbp+8h] BYREF

  v14 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  *a4 = 0;
  v8 = *(__int64 ***)(a1 + 16);
  for ( i = *v8; i != (__int64 *)v8; i = (__int64 *)*i )
  {
    if ( i[5] == a2 )
    {
      *a4 = 1;
      if ( *((_BYTE *)i + 57) )
      {
        v10 = CCaptureControllerProxy::SetCaptureState((CCaptureControllerProxy *)i[4], a3);
        v11 = v10;
        if ( v10 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x226,
            (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
            (const char *)(unsigned int)v10);
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x530,
            (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
            (const char *)v11);
          goto LABEL_9;
        }
      }
    }
  }
  v11 = 0;
LABEL_9:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v14);
  return v11;
}
