/*
 * XREFs of ?IsConstructed@DMMVIDPNTOPOLOGY@@UEBAEXZ @ 0x140041330
 * Callers:
 *     ?IsConstructed@DMMVIDPNTOPOLOGY@@WDI@EBAEXZ @ 0x14008F2C0 (-IsConstructed@DMMVIDPNTOPOLOGY@@WDI@EBAEXZ.c)
 * Callees:
 *     ?IsConstructed@?$Set@VDMMVIDPNTARGET@@@@UEBAEXZ @ 0x14001D060 (-IsConstructed@-$Set@VDMMVIDPNTARGET@@@@UEBAEXZ.c)
 */

bool __fastcall DMMVIDPNTOPOLOGY::IsConstructed(DMMVIDPNTOPOLOGY *this)
{
  char IsConstructed; // al
  char v3; // dl

  IsConstructed = Set<DMMVIDPNTARGET>::IsConstructed((__int64)this);
  v3 = 0;
  if ( IsConstructed )
    return *((_DWORD *)this + 18) == 2;
  return v3;
}
