/*
 * XREFs of HalpIommuGetReservedRanges @ 0x1405517A4
 * Callers:
 *     HalpDmaGetReservedRegionsForTranslateDomain @ 0x14054E828 (HalpDmaGetReservedRegionsForTranslateDomain.c)
 * Callees:
 *     IidAreIdsStrictlyEqual @ 0x14069CFDC (IidAreIdsStrictlyEqual.c)
 */

__int64 __fastcall HalpIommuGetReservedRanges(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  ULONG_PTR *i; // r11
  unsigned int *v7; // rdi
  unsigned int v8; // ebp
  __int64 j; // rbx
  __int64 v10; // rsi

  *a2 = 0;
  *a3 = 0LL;
  for ( i = (ULONG_PTR *)HalpIommuList; i != &HalpIommuList; i = (ULONG_PTR *)*i )
  {
    v7 = (unsigned int *)i[67];
    if ( v7 )
    {
      v8 = *v7;
      for ( j = 0LL; (unsigned int)j < v8; j = (unsigned int)(j + 1) )
      {
        v10 = *(_QWORD *)&v7[2 * j + 2];
        if ( (unsigned __int8)IidAreIdsStrictlyEqual(*(_QWORD *)v10, a1) )
        {
          *a2 = *(_DWORD *)(v10 + 32);
          *a3 = v10 + 40;
          break;
        }
      }
    }
  }
  return 0LL;
}
