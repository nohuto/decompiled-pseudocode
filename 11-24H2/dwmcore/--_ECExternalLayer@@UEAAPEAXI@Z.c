/*
 * XREFs of ??_ECExternalLayer@@UEAAPEAXI@Z @ 0x180221480
 * Callers:
 *     <none>
 * Callees:
 *     ??1CExternalLayer@@UEAA@XZ @ 0x1800F8D84 (--1CExternalLayer@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 */

CExternalLayer *__fastcall CExternalLayer::`vector deleting destructor'(CExternalLayer *this, char a2)
{
  CExternalLayer::~CExternalLayer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x78uLL);
  return this;
}
