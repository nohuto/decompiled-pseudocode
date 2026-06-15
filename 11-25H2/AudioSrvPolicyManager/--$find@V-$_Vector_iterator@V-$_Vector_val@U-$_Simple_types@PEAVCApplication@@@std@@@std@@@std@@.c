/*
 * XREFs of ??$find@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCApplication@@@std@@@std@@@std@@PEAVCApplication@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCApplication@@@std@@@std@@@0@V10@V10@AEBQEAVCApplication@@@Z @ 0x18001AACC
 * Callers:
 *     ?TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x180041BE8 (-TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 *     ?TsSessionIsActiveMediaApplication@@YA_NPEAVCApplication@@@Z @ 0x18004290C (-TsSessionIsActiveMediaApplication@@YA_NPEAVCApplication@@@Z.c)
 * Callees:
 *     __std_find_trivial_8 @ 0x18001FC20 (__std_find_trivial_8.c)
 */

_QWORD *__fastcall std::find<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CApplication *>>>,CApplication *>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  *a1 = _std_find_trivial_8(a2, a3, *a4);
  return a1;
}
