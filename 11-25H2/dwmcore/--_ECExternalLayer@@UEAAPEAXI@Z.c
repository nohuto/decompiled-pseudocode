/*
 * XREFs of ??_ECExternalLayer@@UEAAPEAXI@Z @ 0x18022C5E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CExternalLayer@@UEAA@XZ @ 0x180080544 (--1CExternalLayer@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 */

CExternalLayer *__fastcall CExternalLayer::`vector deleting destructor'(CExternalLayer *this, char a2)
{
  CExternalLayer::~CExternalLayer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x78uLL);
  return this;
}
