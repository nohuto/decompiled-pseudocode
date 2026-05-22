/*
 * XREFs of _DWMCursorBroker::GetCursors_::_1_::dtor$1 @ 0x1801C873C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DWMCursorBroker::GetCursors_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<IResizeAreaClientProxy>::~ComPtr<IResizeAreaClientProxy>((__int64 *)(a2 + 40));
}
