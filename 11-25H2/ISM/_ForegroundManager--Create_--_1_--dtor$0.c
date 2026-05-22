/*
 * XREFs of _ForegroundManager::Create_::_1_::dtor$0 @ 0x1801CD4DE
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VForegroundManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A88E0 (--1-$ComPtr@VForegroundManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall ForegroundManager::Create_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<ForegroundManager>::~ComPtr<ForegroundManager>(*(_QWORD *)(a2 + 64));
  }
  return result;
}
