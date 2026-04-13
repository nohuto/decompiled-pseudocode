/*
 * XREFs of ??1?$_Yarn@D@std@@QEAA@XZ @ 0x18004C3B8
 * Callers:
 *     _std::locale::_Locimp::_Locimp_::_1_::dtor$1 @ 0x1800B6E95 (_std--locale--_Locimp--_Locimp_--_1_--dtor$1.c)
 *     _std::_Locinfo::_Locinfo_::_1_::dtor$1 @ 0x1800B873A (_std--_Locinfo--_Locinfo_--_1_--dtor$1.c)
 *     _std::_Locinfo::_Locinfo_::_1_::dtor$2 @ 0x1800B8750 (_std--_Locinfo--_Locinfo_--_1_--dtor$2.c)
 *     _std::_Locinfo::_Locinfo_::_1_::dtor$5 @ 0x1800B8792 (_std--_Locinfo--_Locinfo_--_1_--dtor$5.c)
 *     _std::_Locinfo::_Locinfo_::_1_::dtor$6 @ 0x1800B87A8 (_std--_Locinfo--_Locinfo_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 std::_Yarn<char>::~_Yarn<char>()
{
  return std::_Yarn<wchar_t>::_Tidy();
}
