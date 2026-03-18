/*
 * XREFs of ??1CInkMarshaler@DirectComposition@@UEAA@XZ @ 0x140070B10
 * Callers:
 *     ??_ECInkMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x140224BD0 (--_ECInkMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CDCompDynamicArrayBase@DirectComposition@@IEAA@XZ @ 0x140070780 (--1CDCompDynamicArrayBase@DirectComposition@@IEAA@XZ.c)
 */

void __fastcall DirectComposition::CInkMarshaler::~CInkMarshaler(char **this)
{
  *this = (char *)&DirectComposition::CInkMarshaler::`vftable';
  DirectComposition::CDCompDynamicArrayBase::~CDCompDynamicArrayBase(this + 14);
}
