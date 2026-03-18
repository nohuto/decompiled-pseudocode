/*
 * XREFs of ??1CGenericInkMarshaler@DirectComposition@@UEAA@XZ @ 0x140070018
 * Callers:
 *     ??_GCGenericInkMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x14006FFE0 (--_GCGenericInkMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CDCompDynamicArrayBase@DirectComposition@@IEAA@XZ @ 0x140070780 (--1CDCompDynamicArrayBase@DirectComposition@@IEAA@XZ.c)
 */

void __fastcall DirectComposition::CGenericInkMarshaler::~CGenericInkMarshaler(
        DirectComposition::CGenericInkMarshaler *this)
{
  *(_QWORD *)this = &DirectComposition::CGenericInkMarshaler::`vftable';
  DirectComposition::CDCompDynamicArrayBase::~CDCompDynamicArrayBase((DirectComposition::CGenericInkMarshaler *)((char *)this + 96));
  DirectComposition::CDCompDynamicArrayBase::~CDCompDynamicArrayBase((DirectComposition::CGenericInkMarshaler *)((char *)this + 56));
}
