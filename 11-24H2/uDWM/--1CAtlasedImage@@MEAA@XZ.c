/*
 * XREFs of ??1CAtlasedImage@@MEAA@XZ @ 0x180067A1C
 * Callers:
 *     ??_ECAtlasedImage@@MEAAPEAXI@Z @ 0x1800679D0 (--_ECAtlasedImage@@MEAAPEAXI@Z.c)
 *     ??1CAtlasButton@@MEAA@XZ @ 0x18006F52C (--1CAtlasButton@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CAtlasedImage::~CAtlasedImage(CAtlasedImage *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx

  *(_QWORD *)this = &CAtlasedImage::`vftable';
  v2 = (CBaseObject *)*((_QWORD *)this + 9);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 9) = 0LL;
  }
  v3 = (CBaseObject *)*((_QWORD *)this + 11);
  if ( v3 )
  {
    CBaseObject::Release(v3);
    *((_QWORD *)this + 11) = 0LL;
  }
  CBaseObject::~CBaseObject(this);
}
