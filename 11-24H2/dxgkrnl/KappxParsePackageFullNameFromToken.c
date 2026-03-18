/*
 * XREFs of KappxParsePackageFullNameFromToken @ 0x1402347D0
 * Callers:
 *     ?RegQueryControllerInstallKey@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEAGKPEAK@Z @ 0x14006D4F0 (-RegQueryControllerInstallKey@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEAGKPEAK@Z.c)
 * Callees:
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     KappxParseString @ 0x1402348F4 (KappxParseString.c)
 *     KappxSafeSearch @ 0x140234990 (KappxSafeSearch.c)
 */

__int64 __fastcall KappxParsePackageFullNameFromToken(const void **a1)
{
  int v2; // ebx
  char *Pool2; // rax
  char *v4; // r14
  unsigned __int16 v6; // si
  unsigned __int16 v7; // si
  char *v8; // r15
  unsigned int i; // ebp
  unsigned __int16 v10; // ax
  void *v11; // rcx
  __int64 v12; // rdi

  v2 = 0;
  Pool2 = (char *)ExAllocatePool2(256LL, *(unsigned __int16 *)a1, 1483763777LL);
  v4 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  v6 = *(_WORD *)a1;
  memmove(Pool2, a1[1], *(unsigned __int16 *)a1);
  v7 = v6 >> 1;
  v8 = v4;
  for ( i = 0; ; ++i )
  {
    if ( i >= 5 )
      goto LABEL_16;
    v10 = KappxSafeSearch(v8, v7, 95LL);
    v12 = v10;
    if ( v10 == v7 && i != 4 )
    {
      v2 = -2147483643;
LABEL_16:
      ExFreePoolWithTag(v4, 0x58707041u);
      return (unsigned int)v2;
    }
    if ( i )
    {
      if ( i == 1 || i == 2 )
      {
        v2 = 0;
        goto LABEL_14;
      }
      if ( i - 3 > 1 )
        break;
    }
    v2 = KappxParseString(v11);
    if ( v2 < 0 )
      goto LABEL_16;
LABEL_14:
    v8 += 2 * v12 + 2;
    v7 += -1 - v12;
  }
  return 0xFFFFFFFFLL;
}
