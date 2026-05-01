/*
 * XREFs of ?StartMouseHoverHook@CJumpViewExperienceManager@@AEAAXXZ @ 0x180395F78
 * Callers:
 *     ?OnViewPropertiesChanging@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180395420 (-OnViewPropertiesChanging@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x180395A50 (-Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CJumpViewExperienceManager::StartMouseHoverHook(CJumpViewExperienceManager *this)
{
  if ( !*((_QWORD *)this + 64) )
    *((_QWORD *)this + 64) = SetWindowsHookExW(
                               14,
                               (HOOKPROC)CJumpViewExperienceManager::LowLevelMouseHookProc,
                               &_ImageBase,
                               0);
}
