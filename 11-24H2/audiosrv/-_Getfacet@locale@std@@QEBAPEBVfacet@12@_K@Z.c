/*
 * XREFs of ?_Getfacet@locale@std@@QEBAPEBVfacet@12@_K@Z @ 0x1801489C4
 * Callers:
 *     ??$use_facet@V?$collate@G@std@@@std@@YAAEBV?$collate@G@0@AEBVlocale@0@@Z @ 0x180143C6C (--$use_facet@V-$collate@G@std@@@std@@YAAEBV-$collate@G@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x180143D4C (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 * Callees:
 *     <none>
 */

const struct std::locale::facet *__fastcall std::locale::_Getfacet(std::locale *this, unsigned __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rbx
  const struct std::locale::facet *result; // rax
  __int64 v6; // rax

  v3 = *((_QWORD *)this + 1);
  v4 = 8 * a2;
  if ( a2 >= *(_QWORD *)(v3 + 24) )
  {
    result = 0LL;
  }
  else
  {
    result = *(const struct std::locale::facet **)(v4 + *(_QWORD *)(v3 + 16));
    if ( result )
      return result;
  }
  if ( *(_BYTE *)(v3 + 36) )
  {
    v6 = std::locale::_Getgloballocale();
    if ( a2 >= *(_QWORD *)(v6 + 24) )
      return 0LL;
    else
      return *(const struct std::locale::facet **)(v4 + *(_QWORD *)(v6 + 16));
  }
  return result;
}
