/*
 * XREFs of ??1CAtlasButton@@MEAA@XZ @ 0x18006F52C
 * Callers:
 *     ??_GCAtlasButton@@MEAAPEAXI@Z @ 0x18006F4E0 (--_GCAtlasButton@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CAtlasButton::~CAtlasButton(CAtlasButton *this)
{
  CBaseObject *v2; // rcx

  *(_QWORD *)this = &CAtlasButton::`vftable';
  v2 = (CBaseObject *)*((_QWORD *)this + 16);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 16) = 0LL;
  }
  CAtlasedImage::~CAtlasedImage(this);
}
