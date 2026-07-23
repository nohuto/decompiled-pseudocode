/*
 * XREFs of LdrpSectionTableFromVirtualAddress @ 0x1409E2D94
 * Callers:
 *     LdrpResSearchResourceInsideDirectory @ 0x1409E1CE0 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrpResGetResourceDirectory @ 0x1409E29F8 (LdrpResGetResourceDirectory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrpSectionTableFromVirtualAddress(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        char a6)
{
  __int64 v7; // r10
  int i; // r9d
  unsigned int v9; // ecx

  if ( a3 )
  {
    v7 = a3 + *(unsigned __int16 *)(a3 + 20) + 24LL;
    if ( v7 )
    {
      for ( i = 0; i < *(unsigned __int16 *)(a3 + 6) && (!a6 || v7 + 40 <= a2 + (a1 & 0xFFFFFFFFFFFFFFFCuLL)); ++i )
      {
        v9 = *(_DWORD *)(v7 + 12);
        if ( a5 == v9 || a5 > v9 && a5 < *(_DWORD *)(v7 + 16) + v9 )
          return v7;
        v7 += 40LL;
      }
    }
  }
  return 0LL;
}
