/*
 * XREFs of ??1?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@MEAA@XZ @ 0x18020FFD8
 * Callers:
 *     ??1CWindowNode@@MEAA@XZ @ 0x1800489BC (--1CWindowNode@@MEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180134248 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CWindowNodeGeneratedT<CWindowNode,CVisual>::~CWindowNodeGeneratedT<CWindowNode,CVisual>(
        struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[101]);
  this[101] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[102]);
  this[102] = 0LL;
  CVisual::~CVisual((CVisual *)this);
}
