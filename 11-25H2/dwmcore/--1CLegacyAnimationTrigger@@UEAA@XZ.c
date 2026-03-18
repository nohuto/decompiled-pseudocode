/*
 * XREFs of ??1CLegacyAnimationTrigger@@UEAA@XZ @ 0x18027F9D8
 * Callers:
 *     ??_GCLegacyAnimationTrigger@@UEAAPEAXI@Z @ 0x180280480 (--_GCLegacyAnimationTrigger@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800E54D0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CLegacyAnimationTrigger::~CLegacyAnimationTrigger(CLegacyAnimationTrigger *this)
{
  *(_QWORD *)this = &CLegacyAnimationTrigger::`vftable';
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 72);
  CResource::~CResource(this);
}
