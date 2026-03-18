/*
 * XREFs of ?DirtyOnNewData@CVisual@@QEAAXXZ @ 0x1801A9098
 * Callers:
 *     ?DirtyActiveInk@CSuperWetInkManager@@QEAAXXZ @ 0x1801A8FE0 (-DirtyActiveInk@CSuperWetInkManager@@QEAAXXZ.c)
 * Callees:
 *     ?IsOfType@?$CSynchronousSuperWetInkGeneratedT@VCSynchronousSuperWetInk@@VCSuperWetSource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801A9110 (-IsOfType@-$CSynchronousSuperWetInkGeneratedT@VCSynchronousSuperWetInk@@VCSuperWetSource@@@@UEBA.c)
 *     ?HasNewData@CSynchronousSuperWetInk@@QEAA_NXZ @ 0x1801A9134 (-HasNewData@CSynchronousSuperWetInk@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::DirtyOnNewData(CVisual *this)
{
  __int64 v2; // rcx
  __int64 (__fastcall *v3)(__int64, __int64); // rax
  char v4; // al

  v2 = *((_QWORD *)this + 32);
  if ( v2 )
  {
    v3 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 64LL);
    if ( v3 == CSynchronousSuperWetInkGeneratedT<CSynchronousSuperWetInk,CSuperWetSource>::IsOfType )
      v4 = CSynchronousSuperWetInkGeneratedT<CSynchronousSuperWetInk,CSuperWetSource>::IsOfType(v2, 168LL);
    else
      v4 = v3(v2, 168LL);
    if ( v4 )
    {
      if ( CSynchronousSuperWetInk::HasNewData(*((CSynchronousSuperWetInk **)this + 32)) )
        CVisual::PropagateFlags((__int64)this, 5u);
    }
  }
}
