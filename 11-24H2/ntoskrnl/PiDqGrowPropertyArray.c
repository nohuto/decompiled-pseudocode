/*
 * XREFs of PiDqGrowPropertyArray @ 0x140A49E3C
 * Callers:
 *     PiDqActionDataGetAllPropertiesInBestLanguage @ 0x140908E70 (PiDqActionDataGetAllPropertiesInBestLanguage.c)
 *     PiDqActionDataGetAllPropertiesInAllLanguages @ 0x140994DB8 (PiDqActionDataGetAllPropertiesInAllLanguages.c)
 *     PiDqActionDataGetChangedProperties @ 0x140A499C4 (PiDqActionDataGetChangedProperties.c)
 * Callees:
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDqGrowPropertyArray(const void **a1, unsigned int a2)
{
  __int64 v3; // rbp
  unsigned int v4; // ebx
  void *Pool2; // rax
  const void *v6; // rsi

  v3 = a2;
  v4 = 0;
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  v6 = Pool2;
  if ( Pool2 )
  {
    if ( *a1 )
    {
      memmove(Pool2, *a1, 48 * v3);
      ExFreePoolWithTag((PVOID)*a1, 0x58706E50u);
    }
    *a1 = v6;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
