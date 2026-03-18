/*
 * XREFs of ??1CInteractionTrackerMarshaler@DirectComposition@@UEAA@XZ @ 0x140070088
 * Callers:
 *     ??_ECInteractionTrackerMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x140070050 (--_ECInteractionTrackerMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CDCompDynamicArrayBase@DirectComposition@@IEAA@XZ @ 0x140070780 (--1CDCompDynamicArrayBase@DirectComposition@@IEAA@XZ.c)
 */

void __fastcall DirectComposition::CInteractionTrackerMarshaler::~CInteractionTrackerMarshaler(
        DirectComposition::CInteractionTrackerMarshaler *this)
{
  *(_QWORD *)this = &DirectComposition::CInteractionTrackerMarshaler::`vftable';
  DirectComposition::CDCompDynamicArrayBase::~CDCompDynamicArrayBase((DirectComposition::CInteractionTrackerMarshaler *)((char *)this + 368));
}
