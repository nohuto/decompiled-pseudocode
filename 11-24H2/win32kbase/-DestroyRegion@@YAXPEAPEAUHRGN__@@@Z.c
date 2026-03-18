/*
 * XREFs of ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x140144088
 * Callers:
 *     CleanupGDI @ 0x140165F88 (CleanupGDI.c)
 * Callees:
 *     GreDeleteObject @ 0x140010390 (GreDeleteObject.c)
 *     GreSetRegionOwner @ 0x14002DBC0 (GreSetRegionOwner.c)
 */

void __fastcall DestroyRegion(HRGN *a1)
{
  HRGN v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    GreSetRegionOwner((__int64)v2, 0x80000002);
    GreDeleteObject(*a1);
    *a1 = 0LL;
  }
}
