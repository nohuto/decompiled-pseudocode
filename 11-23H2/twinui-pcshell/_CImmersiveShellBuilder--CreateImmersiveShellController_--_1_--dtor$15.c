/*
 * XREFs of _CImmersiveShellBuilder::CreateImmersiveShellController_::_1_::dtor$15 @ 0x1802C5413
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VCImmersiveShellCreationBehavior@@@WRL@Microsoft@@QEAA@XZ @ 0x180489FB0 (--1-$ComPtr@VCImmersiveShellCreationBehavior@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall CImmersiveShellBuilder::CreateImmersiveShellController_::_1_::dtor_15(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 8;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~8u;
    return Microsoft::WRL::ComPtr<CImmersiveShellCreationBehavior>::~ComPtr<CImmersiveShellCreationBehavior>(a2 + 56);
  }
  return result;
}
