/*
 * XREFs of ?pql@PFEOBJ@@QEAAPEAU_QUICKLOOKUP@@XZ @ 0x140152C04
 * Callers:
 *     ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x140152C44 (-bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z.c)
 * Callees:
 *     ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x140152C44 (-bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z.c)
 */

struct _QUICKLOOKUP *__fastcall PFEOBJ::pql(struct PFE **this)
{
  struct PFE *v2; // rcx
  int v3; // eax

  v2 = *this;
  v3 = *((_DWORD *)v2 + 3);
  if ( (v3 & 0x200) != 0 )
  {
    *((_DWORD *)v2 + 3) = v3 & 0xFFFFFDFF;
    bComputeQuickLookup(0LL, *this, 0);
  }
  return (struct PFE *)((char *)*this + 104);
}
