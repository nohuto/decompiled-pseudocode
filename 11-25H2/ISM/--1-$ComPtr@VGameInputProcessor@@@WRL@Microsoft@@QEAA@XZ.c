/*
 * XREFs of ??1?$ComPtr@VGameInputProcessor@@@WRL@Microsoft@@QEAA@XZ @ 0x18009C41C
 * Callers:
 *     _DWMInputRouter::Initialize_::_1_::dtor$36 @ 0x1801CA312 (_DWMInputRouter--Initialize_--_1_--dtor$36.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<GameInputProcessor>::~ComPtr<GameInputProcessor>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<GameInputProcessor>::InternalRelease(a1);
}
