/*
 * XREFs of ??1CBitmapSource@@MEAA@XZ @ 0x18002525C
 * Callers:
 *     ??_ECBitmapSource@@MEAAPEAXI@Z @ 0x180025210 (--_ECBitmapSource@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CBitmapSource::~CBitmapSource(CBitmapSource *this)
{
  __int64 v2; // rcx
  CBaseObject *v3; // rcx

  *(_QWORD *)this = &CBitmapSource::`vftable';
  v2 = *((_QWORD *)this + 12);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 12) = 0LL;
  }
  v3 = (CBaseObject *)*((_QWORD *)this + 2);
  if ( v3 )
    CBaseObject::Release(v3);
  CBaseObject::~CBaseObject(this);
}
