/*
 * XREFs of ??_ECFilterEffectLayer@@UEAAPEAXI@Z @ 0x18022CAF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CExternalLayer@@UEAA@XZ @ 0x1800F8D84 (--1CExternalLayer@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 */

CFilterEffectLayer *__fastcall CFilterEffectLayer::`vector deleting destructor'(CFilterEffectLayer *this, char a2)
{
  *(_QWORD *)this = &CFilterEffectLayer::`vftable';
  CExternalLayer::~CExternalLayer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x90uLL);
  return this;
}
