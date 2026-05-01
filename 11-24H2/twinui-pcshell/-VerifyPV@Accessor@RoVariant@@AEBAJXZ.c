/*
 * XREFs of ?VerifyPV@Accessor@RoVariant@@AEBAJXZ @ 0x1801A4BAC
 * Callers:
 *     ?GetBoolean@Accessor@RoVariant@@QEBAJPEAE@Z @ 0x1801A4B14 (-GetBoolean@Accessor@RoVariant@@QEBAJPEAE@Z.c)
 *     ?GetSize@Accessor@RoVariant@@QEBAJPEAUSize@Foundation@Windows@@@Z @ 0x1801A4B58 (-GetSize@Accessor@RoVariant@@QEBAJPEAUSize@Foundation@Windows@@@Z.c)
 *     ?GetString@Accessor@RoVariant@@QEBAJPEAPEAUHSTRING__@@@Z @ 0x18038B1A0 (-GetString@Accessor@RoVariant@@QEBAJPEAPEAUHSTRING__@@@Z.c)
 *     ?EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180393DB8 (-EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?GetInt32@Accessor@RoVariant@@QEBAJPEAH@Z @ 0x1803949A0 (-GetInt32@Accessor@RoVariant@@QEBAJPEAH@Z.c)
 *     ?GetRectFromPropertySet@PeoplePaneViewManager@@AEAAJPEBGPEAUtagRECT@@@Z @ 0x180411298 (-GetRectFromPropertySet@PeoplePaneViewManager@@AEAAJPEBGPEAUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RoVariant::Accessor::VerifyPV(RoVariant::Accessor *this)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *((_DWORD *)this + 2);
  if ( v1 == 7 )
    return 0LL;
  result = 2147650720LL;
  if ( v1 < 0 )
    return (unsigned int)v1;
  return result;
}
