/*
 * XREFs of _Microsoft::WRL::Details::Make_CImmersiveShellCreationBehavior__::_1_::dtor$0 @ 0x1802C547F
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VCImmersiveShellCreationBehavior@@@WRL@Microsoft@@QEAA@XZ @ 0x180489FB0 (--1-$ComPtr@VCImmersiveShellCreationBehavior@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::Make_CImmersiveShellCreationBehavior__::_1_::dtor_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<CImmersiveShellCreationBehavior>::~ComPtr<CImmersiveShellCreationBehavior>(*(_QWORD *)(a2 + 80));
  }
  return result;
}
