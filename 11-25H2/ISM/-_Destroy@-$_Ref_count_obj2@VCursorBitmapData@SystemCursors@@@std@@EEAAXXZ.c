/*
 * XREFs of ?_Destroy@?$_Ref_count_obj2@VCursorBitmapData@SystemCursors@@@std@@EEAAXXZ @ 0x1800F9A80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall std::_Ref_count_obj2<SystemCursors::CursorBitmapData>::_Destroy(__int64 a1)
{
  std::vector<Windows::UI::Color>::_Tidy(a1 + 40);
}
