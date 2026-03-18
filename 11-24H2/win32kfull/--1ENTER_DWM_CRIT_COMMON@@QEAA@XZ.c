/*
 * XREFs of ??1ENTER_DWM_CRIT_COMMON@@QEAA@XZ @ 0x1401987B0
 * Callers:
 *     GreProtectSpriteContent @ 0x14022472C (GreProtectSpriteContent.c)
 *     GreSetLWContentOwner @ 0x14030FF18 (GreSetLWContentOwner.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHHPEBG@Z @ 0x14032066C (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 *     ?SpDdCreateFullscreenSprite@@YAJAEAVXDCOBJ@@KPEAPEAXPEAPEAUHDC__@@@Z @ 0x140320C58 (-SpDdCreateFullscreenSprite@@YAJAEAVXDCOBJ@@KPEAPEAXPEAPEAUHDC__@@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJAEAVXDCOBJ@@PEAX@Z @ 0x1403211FC (-SpDdDestroyFullscreenSprite@@YAJAEAVXDCOBJ@@PEAX@Z.c)
 *     GreDeleteSpriteDelayDelete @ 0x140321830 (GreDeleteSpriteDelayDelete.c)
 *     GreDwmGetRedirectionStyle @ 0x140321A04 (GreDwmGetRedirectionStyle.c)
 * Callees:
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x140062CF0 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??1?$SEMOBJEXORSHARED@$06@@QEAA@XZ @ 0x140062D4C (--1-$SEMOBJEXORSHARED@$06@@QEAA@XZ.c)
 */

void __fastcall ENTER_DWM_CRIT_COMMON::~ENTER_DWM_CRIT_COMMON(ENTER_DWM_CRIT_COMMON *this)
{
  SEMOBJEXORSHARED<7>::~SEMOBJEXORSHARED<7>((__int64)this + 16);
  DWMSPRITELOCK::~DWMSPRITELOCK((ENTER_DWM_CRIT_COMMON *)((char *)this + 8));
}
