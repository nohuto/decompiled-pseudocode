/*
 * XREFs of ?imbue@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MEAAXAEBVlocale@2@@Z @ 0x180616C70
 * Callers:
 *     <none>
 * Callees:
 *     ??$use_facet@V?$codecvt@DDU_Mbstatet@@@std@@@std@@YAAEBV?$codecvt@DDU_Mbstatet@@@0@AEBVlocale@0@@Z @ 0x180610944 (--$use_facet@V-$codecvt@DDU_Mbstatet@@@std@@@std@@YAAEBV-$codecvt@DDU_Mbstatet@@@0@AEBVlocale@0@.c)
 */

char __fastcall std::filebuf::imbue(__int64 a1, std::locale *a2)
{
  struct std::_Facet_base *v3; // rax

  v3 = std::use_facet<std::codecvt<char,char,_Mbstatet>>(a2);
  return std::filebuf::_Initcvt(a1, v3);
}
