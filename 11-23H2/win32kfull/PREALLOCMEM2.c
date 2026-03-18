/*
 * XREFs of PREALLOCMEM2 @ 0x1C009999C
 * Callers:
 *     ??$AllocAndCopyRegistryEntries@U_FONTSUB@@$0GCHDGGEH@@@YAJPEAKPEAPEAU_FONTSUB@@0PEBU0@@Z @ 0x1C008063C (--$AllocAndCopyRegistryEntries@U_FONTSUB@@$0GCHDGGEH@@@YAJPEAKPEAPEAU_FONTSUB@@0PEBU0@@Z.c)
 *     ??$AllocAndCopyRegistryEntries@U_FONTMAPPERFAMILYFALLBACK@@$0EGEGENEH@@@YAJPEAKPEAPEAU_FONTMAPPERFAMILYFALLBACK@@0PEBU0@@Z @ 0x1C02A61DC (--$AllocAndCopyRegistryEntries@U_FONTMAPPERFAMILYFALLBACK@@$0EGEGENEH@@@YAJPEAKPEAPEAU_FONTMAPPE.c)
 *     vInitFontSubTable @ 0x1C03B4F60 (vInitFontSubTable.c)
 *     vInitFontMapperFamilyFallbackTable @ 0x1C03B5120 (vInitFontMapperFamilyFallbackTable.c)
 * Callees:
 *     memmove @ 0x1C0140A40 (memmove.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 */

char *__fastcall PREALLOCMEM2(void *Src, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  __int64 v5; // rbx
  char *v7; // rax
  char *v8; // rdi

  v4 = a3;
  v5 = a2;
  if ( !(_DWORD)a3 )
    return 0LL;
  v7 = (char *)Win32AllocPool((unsigned int)a3, (unsigned int)a4, a3, a4);
  v8 = v7;
  if ( v7 )
  {
    if ( (unsigned int)v5 >= v4 )
      v5 = v4;
    memmove(v7, Src, (unsigned int)v5);
    Win32FreePool(Src);
    memset_0(&v8[v5], 0, v4 - (unsigned int)v5);
  }
  return v8;
}
