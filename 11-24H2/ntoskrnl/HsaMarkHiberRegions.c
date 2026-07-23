/*
 * XREFs of HsaMarkHiberRegions @ 0x140B552C0
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuExtMarkHiberMemory @ 0x14054FB04 (HalpIommuExtMarkHiberMemory.c)
 */

void __fastcall HsaMarkHiberRegions(void *a1, __int64 a2)
{
  void **v2; // rdi
  void **i; // rbx
  void **v4; // rsi
  unsigned int j; // ebp

  if ( a1 )
  {
    HalpIommuExtMarkHiberMemory(a1, (void *)(a2 + 152), 8u);
  }
  else
  {
    v2 = (void **)(a2 + 240);
    for ( i = *(void ***)(a2 + 240); i != v2; i = (void **)*i )
    {
      HalpIommuExtMarkHiberMemory(0LL, i, 0x38u);
      HalpIommuExtMarkHiberMemory(0LL, i[6], 0x2000u);
      v4 = (void **)((char *)i[6] + 4096);
      for ( j = 0; j < 0x200; ++j )
      {
        if ( (*(_BYTE *)(v4 - 512) & 1) == 0 )
          break;
        HalpIommuExtMarkHiberMemory(0LL, *v4++, 0x1000u);
      }
    }
  }
}
