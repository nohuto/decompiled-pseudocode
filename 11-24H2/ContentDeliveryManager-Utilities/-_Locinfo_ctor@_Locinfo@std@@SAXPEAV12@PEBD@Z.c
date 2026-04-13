/*
 * XREFs of ?_Locinfo_ctor@_Locinfo@std@@SAXPEAV12@PEBD@Z @ 0x180005474
 * Callers:
 *     ??0_Locinfo@std@@QEAA@PEBD@Z @ 0x18004B294 (--0_Locinfo@std@@QEAA@PEBD@Z.c)
 * Callees:
 *     ??4?$_Yarn@D@std@@QEAAAEAV01@PEBD@Z @ 0x180067300 (--4-$_Yarn@D@std@@QEAAAEAV01@PEBD@Z.c)
 */

void __fastcall std::_Locinfo::_Locinfo_ctor(struct std::_Locinfo *a1, char *a2)
{
  char *v4; // rax

  v4 = setlocale(0, 0LL);
  if ( !v4 )
    v4 = (char *)&word_1800E78B8;
  std::_Yarn<char>::operator=((char *)a1 + 72, v4);
  if ( a2 )
    a2 = setlocale(0, a2);
  if ( !a2 )
    a2 = "*";
  std::_Yarn<char>::operator=((char *)a1 + 88, a2);
}
