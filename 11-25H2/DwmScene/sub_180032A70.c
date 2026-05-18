/*
 * XREFs of sub_180032A70 @ 0x180032A70
 * Callers:
 *     sub_180061660 @ 0x180061660 (sub_180061660.c)
 * Callees:
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 */

__int64 __fastcall sub_180032A70(__int64 a1, _QWORD *a2, int a3)
{
  _QWORD *v3; // r9
  unsigned __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  v3 = a2;
  v4 = a3;
  v5 = *(_QWORD *)(a1 + 704);
  if ( (*(_QWORD *)(a1 + 712) - v5) >> 4 <= v4 )
  {
    std::_Xout_of_range("invalid vector subscript");
    __debugbreak();
  }
  unknown_libname_81(v3, (_QWORD *)(v5 + 16 * v4));
  return v6;
}
