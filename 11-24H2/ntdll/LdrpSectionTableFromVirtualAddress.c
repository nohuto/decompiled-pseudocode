/*
 * XREFs of LdrpSectionTableFromVirtualAddress @ 0x180097EA0
 * Callers:
 *     LdrpResSearchResourceInsideDirectory @ 0x1800969C0 (LdrpResSearchResourceInsideDirectory.c)
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
  __int64 result; // rax
  int i; // r9d
  unsigned int v10; // edx

  result = a4;
  if ( a3 )
  {
    if ( a4 || (result = a3 + *(unsigned __int16 *)(a3 + 20) + 24LL) != 0 )
    {
      for ( i = 0; i < *(unsigned __int16 *)(a3 + 6) && (a4 || !a6 || result + 40 <= a2 + (a1 & 0xFFFFFFFFFFFFFFFCuLL)); ++i )
      {
        v10 = *(_DWORD *)(result + 12);
        if ( a5 == v10 || a5 > v10 && a5 < *(_DWORD *)(result + 16) + v10 )
          return result;
        result += 40LL;
      }
    }
  }
  return 0LL;
}
