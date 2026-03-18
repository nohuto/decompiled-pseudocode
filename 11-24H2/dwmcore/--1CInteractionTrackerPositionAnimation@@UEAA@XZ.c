/*
 * XREFs of ??1CInteractionTrackerPositionAnimation@@UEAA@XZ @ 0x1801EB710
 * Callers:
 *     ??_ECInteractionTrackerPositionAnimation@@UEAAPEAXI@Z @ 0x1802AB930 (--_ECInteractionTrackerPositionAnimation@@UEAAPEAXI@Z.c)
 *     ??_ECInteractionTrackerScaleAnimation@@UEAAPEAXI@Z @ 0x1802AB980 (--_ECInteractionTrackerScaleAnimation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CMotion@@QEAA@XZ @ 0x1801EB8B4 (--1CMotion@@QEAA@XZ.c)
 */

void __fastcall CInteractionTrackerPositionAnimation::~CInteractionTrackerPositionAnimation(
        CInteractionTrackerPositionAnimation *this)
{
  CMotion::~CMotion((CInteractionTrackerPositionAnimation *)((char *)this + 440));
  CScrollAnimation::~CScrollAnimation(this);
}
