/*
 * XREFs of KappxParsePackageFullNameFromToken @ 0x14022DF70
 * Callers:
 *     ?RegQueryControllerInstallKey@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEAGKPEAK@Z @ 0x14006D6F0 (-RegQueryControllerInstallKey@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEAGKPEAK@Z.c)
 * Callees:
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     KappxParseString @ 0x14022E094 (KappxParseString.c)
 *     KappxSafeSearch @ 0x14022E130 (KappxSafeSearch.c)
 */

__int64 __fastcall KappxParsePackageFullNameFromToken(const void **a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  char *Pool2; // rax
  char *v7; // r14
  unsigned __int16 v9; // si
  unsigned __int16 v10; // si
  char *v11; // r15
  unsigned int i; // ebp
  unsigned __int16 v13; // ax
  void *v14; // rcx
  __int64 v15; // rdi

  v5 = 0;
  Pool2 = (char *)ExAllocatePool2(256LL, *(unsigned __int16 *)a1, 1483763777LL, a4);
  v7 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  v9 = *(_WORD *)a1;
  memmove(Pool2, a1[1], *(unsigned __int16 *)a1);
  v10 = v9 >> 1;
  v11 = v7;
  for ( i = 0; ; ++i )
  {
    if ( i >= 5 )
      goto LABEL_16;
    v13 = KappxSafeSearch(v11, v10, 95LL);
    v15 = v13;
    if ( v13 == v10 && i != 4 )
    {
      v5 = -2147483643;
LABEL_16:
      ExFreePoolWithTag(v7, 0x58707041u);
      return (unsigned int)v5;
    }
    if ( i )
    {
      if ( i == 1 || i == 2 )
      {
        v5 = 0;
        goto LABEL_14;
      }
      if ( i - 3 > 1 )
        break;
    }
    v5 = KappxParseString(v14);
    if ( v5 < 0 )
      goto LABEL_16;
LABEL_14:
    v11 += 2 * v15 + 2;
    v10 += -1 - v15;
  }
  return 0xFFFFFFFFLL;
}
