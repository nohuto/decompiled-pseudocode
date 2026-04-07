/*
 * XREFs of ?UpdateCaptureControllerPropertiesFromDisplays@CProjectionBorderManager@@UEAAJXZ @ 0x180082F90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_UpdateDisplayCaptureControllerProperties@CProjectionBorderManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800CFF2C (-_UpdateDisplayCaptureControllerProperties@CProjectionBorderManager@@AEAAJPEAUCAPTURE_DISPLAY_MA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProjectionBorderManager::UpdateCaptureControllerPropertiesFromDisplays(
        struct _RTL_GENERIC_TABLE *this)
{
  struct CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY *v2; // rax
  CProjectionBorderManager *v3; // rcx
  int updated; // eax
  unsigned int v5; // ebx
  struct CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY *v6; // rax
  CProjectionBorderManager *v7; // rcx
  int v8; // eax
  int v10; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  PVOID RestartKey; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  RestartKey = 0LL;
  while ( 1 )
  {
    v2 = (struct CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY *)RtlEnumerateGenericTableWithoutSplaying(
                                                                         this + 7,
                                                                         &RestartKey);
    if ( !v2 )
      break;
    updated = CProjectionBorderManager::_UpdateDisplayCaptureControllerProperties(v3, v2);
    v5 = updated;
    if ( updated < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3D2,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
        (const char *)(unsigned int)updated,
        v10);
      goto LABEL_10;
    }
  }
  RestartKey = 0LL;
  while ( 1 )
  {
    v6 = (struct CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY *)RtlEnumerateGenericTableWithoutSplaying(
                                                                         this + 8,
                                                                         &RestartKey);
    if ( !v6 )
      break;
    v8 = CProjectionBorderManager::_UpdateDisplayCaptureControllerProperties(v7, v6);
    v5 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3DA,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
        (const char *)(unsigned int)v8,
        v10);
      CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
      return v5;
    }
  }
  v5 = 0;
LABEL_10:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v5;
}
