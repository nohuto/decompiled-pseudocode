/*
 * XREFs of BvgaReleaseResources @ 0x14058D800
 * Callers:
 *     <none>
 * Callees:
 *     InbvIsBootDriverInstalled @ 0x1404F7F30 (InbvIsBootDriverInstalled.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall BvgaReleaseResources(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  _DWORD *v3; // rsi
  PVOID *v4; // rdi

  v2 = 1LL;
  v3 = &ResourceSize;
  v4 = (PVOID *)ResourceList;
  do
  {
    if ( *v4 && (!InbvIsBootDriverInstalled(a1, a2) || v2 != 3 && v2 != 5) )
    {
      ExFreePoolWithTag(*v4, 0);
      *v4 = 0LL;
      *v3 = 0;
    }
    ++v2;
    ++v4;
    ++v3;
  }
  while ( v2 < 7 );
}
