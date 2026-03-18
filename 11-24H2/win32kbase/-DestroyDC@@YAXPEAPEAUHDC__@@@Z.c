/*
 * XREFs of ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1401527A0
 * Callers:
 *     CleanupGDI @ 0x140165F88 (CleanupGDI.c)
 * Callees:
 *     GreSetDCOwnerEx @ 0x14000F100 (GreSetDCOwnerEx.c)
 *     GrepDeleteDC @ 0x140034C20 (GrepDeleteDC.c)
 */

void __fastcall DestroyDC(HDC *a1)
{
  HDC v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    GreSetDCOwnerEx((struct HOBJ__ *)v2, 0x80000002, 0, 0);
    GrepDeleteDC(*a1, 0x400000u);
    *a1 = 0LL;
  }
}
