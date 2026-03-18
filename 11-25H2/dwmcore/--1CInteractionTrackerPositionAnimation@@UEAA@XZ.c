/*
 * XREFs of ??1CInteractionTrackerPositionAnimation@@UEAA@XZ @ 0x1800F1194
 * Callers:
 *     ??_ECInteractionTrackerPositionAnimation@@UEAAPEAXI@Z @ 0x1802B5520 (--_ECInteractionTrackerPositionAnimation@@UEAAPEAXI@Z.c)
 *     ??_ECInteractionTrackerScaleAnimation@@UEAAPEAXI@Z @ 0x1802B5570 (--_ECInteractionTrackerScaleAnimation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CMotion@@QEAA@XZ @ 0x1800F14B8 (--1CMotion@@QEAA@XZ.c)
 */

void __fastcall CInteractionTrackerPositionAnimation::~CInteractionTrackerPositionAnimation(
        CInteractionTrackerPositionAnimation *this)
{
  CMotion::~CMotion((CInteractionTrackerPositionAnimation *)((char *)this + 440));
  CScrollAnimation::~CScrollAnimation(this);
}
