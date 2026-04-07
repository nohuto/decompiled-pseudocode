/*
 * XREFs of ??1CImage@@EEAA@XZ @ 0x180054B3C
 * Callers:
 *     ??_GCImage@@EEAAPEAXI@Z @ 0x180054AE0 (--_GCImage@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CImage::~CImage(CImage *this)
{
  CBaseObject *v2; // rcx

  *(_QWORD *)this = &CImage::`vftable';
  v2 = (CBaseObject *)*((_QWORD *)this + 36);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 36) = 0LL;
  }
  CRenderDataVisual::~CRenderDataVisual((CBaseObject **)this);
}
