/*
 * XREFs of ?Destroy@CSlideOut@@UEAAXXZ @ 0x1800D1C90
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CSlideOut::Destroy(CSlideOut *this)
{
  CBaseObject *v2; // rcx

  v2 = (CBaseObject *)*((_QWORD *)this + 17);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 17) = 0LL;
  }
  CStoryboard::Destroy(this);
}
