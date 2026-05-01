/*
 * XREFs of _TaskViewHost::CreateFrames_::_1_::dtor$2 @ 0x1802B3840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TaskViewHost::CreateFrames_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)(a2 + 32));
}
