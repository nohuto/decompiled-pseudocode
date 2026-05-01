/*
 * XREFs of ??1CExperienceManagerAnimationHelper@@QEAA@XZ @ 0x1802CBD10
 * Callers:
 *     ??1CVirtualTouchpadExperienceManager@@UEAA@XZ @ 0x180213DEC (--1CVirtualTouchpadExperienceManager@@UEAA@XZ.c)
 *     ??1CJumpViewExperienceManager@@UEAA@XZ @ 0x1802167AC (--1CJumpViewExperienceManager@@UEAA@XZ.c)
 *     ??1CPeopleBarJumpViewExperienceManager@@UEAA@XZ @ 0x18038AA50 (--1CPeopleBarJumpViewExperienceManager@@UEAA@XZ.c)
 *     ??1CStartExperienceManager@@UEAA@XZ @ 0x18038ED34 (--1CStartExperienceManager@@UEAA@XZ.c)
 *     ??1CBaseTrayFlyoutExperienceManager@@UEAA@XZ @ 0x1803C7C18 (--1CBaseTrayFlyoutExperienceManager@@UEAA@XZ.c)
 *     ??1MeetNowExperienceManager@@UEAA@XZ @ 0x1803C7CC8 (--1MeetNowExperienceManager@@UEAA@XZ.c)
 *     ??1TouchKeyboardExperienceManager@@EEAA@XZ @ 0x18046CB28 (--1TouchKeyboardExperienceManager@@EEAA@XZ.c)
 *     _CVirtualTouchpadExperienceManager::CVirtualTouchpadExperienceManager_::_1_::dtor$7 @ 0x1806D3B7A (_CVirtualTouchpadExperienceManager--CVirtualTouchpadExperienceManager_--_1_--dtor$7.c)
 *     _CVirtualTouchpadExperienceManager::CVirtualTouchpadExperienceManager_::_1_::dtor$8 @ 0x1806D3B93 (_CVirtualTouchpadExperienceManager--CVirtualTouchpadExperienceManager_--_1_--dtor$8.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$20 @ 0x1806E54AE (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$20.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$21 @ 0x1806E54C7 (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$21.c)
 *     _MeetNowExperienceManager::MeetNowExperienceManager_::_1_::dtor$6 @ 0x1806E6D07 (_MeetNowExperienceManager--MeetNowExperienceManager_--_1_--dtor$6.c)
 *     _MeetNowExperienceManager::MeetNowExperienceManager_::_1_::dtor$7 @ 0x1806E6D1D (_MeetNowExperienceManager--MeetNowExperienceManager_--_1_--dtor$7.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$22 @ 0x1806ED3E8 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$22.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$23 @ 0x1806ED401 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$23.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$24 @ 0x1806ED41A (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$24.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$25 @ 0x1806ED433 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$25.c)
 * Callees:
 *     <none>
 */

void __fastcall CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper(
        CExperienceManagerAnimationHelper *this)
{
  volatile signed __int32 **v1; // rbx
  __int64 v2; // rcx

  v1 = (volatile signed __int32 **)((char *)this + 24);
  v2 = *((_QWORD *)this + 3);
  if ( v2 )
    DestroyWindow(*(HWND *)(v2 + 24));
  Microsoft::WRL::ComPtr<CExperienceManagerAnimationHelper::DummyWindow>::InternalRelease(v1);
}
