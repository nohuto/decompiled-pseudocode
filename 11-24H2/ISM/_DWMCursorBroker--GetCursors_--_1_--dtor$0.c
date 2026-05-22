/*
 * XREFs of _DWMCursorBroker::GetCursors_::_1_::dtor$0 @ 0x1801D2C50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180072B58 (--1-$vector@V-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIInputTarget@@@WRL@.c)
 */

void __fastcall DWMCursorBroker::GetCursors_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    std::vector<Microsoft::WRL::ComPtr<IInputTarget>>::~vector<Microsoft::WRL::ComPtr<IInputTarget>>(*(_QWORD *)(a2 + 72));
  }
}
