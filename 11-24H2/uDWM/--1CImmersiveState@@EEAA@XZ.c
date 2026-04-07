/*
 * XREFs of ??1CImmersiveState@@EEAA@XZ @ 0x18007B308
 * Callers:
 *     ??_GCImmersiveState@@EEAAPEAXI@Z @ 0x18007B2D0 (--_GCImmersiveState@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180026FE0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CImmersiveState::~CImmersiveState(void **this)
{
  *this = &CImmersiveState::`vftable';
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 2);
  CBaseObject::~CBaseObject((CBaseObject *)this);
}
