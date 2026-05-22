/*
 * XREFs of ?DownLevelSelectTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800BD940
 * Callers:
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800BD990 (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase@.c)
 * Callees:
 *     ?DownLevelPressTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800BD634 (-DownLevelPressTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 */

void __fastcall MPCGestureHandler::DownLevelSelectTo2D(
        MPCGestureHandler *this,
        struct LegacyInputInfo *a2,
        unsigned int a3,
        struct tagPOINT a4)
{
  MPCGestureHandler::DownLevelPressTo2D(this, a2, a3, a4);
  MPCGestureHandler::DownLevelReleaseTo2D(this, a2, a3, a4);
}
