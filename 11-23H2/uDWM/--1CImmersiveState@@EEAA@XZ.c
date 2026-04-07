/*
 * XREFs of ??1CImmersiveState@@EEAA@XZ @ 0x180004264
 * Callers:
 *     ??_GCImmersiveState@@EEAAPEAXI@Z @ 0x180004140 (--_GCImmersiveState@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180050D7C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CImmersiveState::~CImmersiveState(CImmersiveState *this)
{
  *(_QWORD *)this = &CImmersiveState::`vftable';
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 16);
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
