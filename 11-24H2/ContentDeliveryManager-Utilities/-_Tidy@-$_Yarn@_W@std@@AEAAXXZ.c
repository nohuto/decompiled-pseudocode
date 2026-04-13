/*
 * XREFs of ?_Tidy@?$_Yarn@_W@std@@AEAAXXZ @ 0x18004C3C4
 * Callers:
 *     ??1?$_Yarn@D@std@@QEAA@XZ @ 0x18004C3B8 (--1-$_Yarn@D@std@@QEAA@XZ.c)
 *     ??1_Locinfo@std@@QEAA@XZ @ 0x18004C938 (--1_Locinfo@std@@QEAA@XZ.c)
 *     ??4?$_Yarn@D@std@@QEAAAEAV01@PEBD@Z @ 0x180067300 (--4-$_Yarn@D@std@@QEAAAEAV01@PEBD@Z.c)
 *     ??4?$_Yarn@_W@std@@QEAAAEAV01@PEB_W@Z @ 0x1800B30E0 (--4-$_Yarn@_W@std@@QEAAAEAV01@PEB_W@Z.c)
 *     _std::_Locinfo::_Locinfo_::_1_::dtor$3 @ 0x1800B8766 (_std--_Locinfo--_Locinfo_--_1_--dtor$3.c)
 *     _std::_Locinfo::_Locinfo_::_1_::dtor$4 @ 0x1800B877C (_std--_Locinfo--_Locinfo_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Yarn<wchar_t>::_Tidy(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
    free(v2);
  *a1 = 0LL;
}
