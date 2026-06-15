/*
 * XREFs of ??$find@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@K@std@@@std@@@std@@K@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@K@std@@@std@@@0@V10@V10@AEBK@Z @ 0x180018C6C
 * Callers:
 *     ?RuntimeClassInitialize@CProcess@@QEAAJPEAXKKPEBG1_K1H1HHHHHHHH_NHH@Z @ 0x180013F3C (-RuntimeClassInitialize@CProcess@@QEAAJPEAXKKPEBG1_K1H1HHHHHHHH_NHH@Z.c)
 *     ?IsPidInParentList@CProcess@@UEAA_NK@Z @ 0x180032B10 (-IsPidInParentList@CProcess@@UEAA_NK@Z.c)
 *     ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x18003FE78 (-TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z.c)
 * Callees:
 *     __std_find_trivial_4 @ 0x18001FC10 (__std_find_trivial_4.c)
 */

_QWORD *__fastcall std::find<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned long>>>,unsigned long>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4)
{
  *a1 = _std_find_trivial_4(a2, a3, *a4);
  return a1;
}
