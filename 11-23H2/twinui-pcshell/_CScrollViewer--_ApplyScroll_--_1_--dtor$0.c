/*
 * XREFs of _CScrollViewer::_ApplyScroll_::_1_::dtor$0 @ 0x18058D617
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B3438 (--1-$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall CScrollViewer::_ApplyScroll_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 52) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 52) &= ~1u;
    return Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)(a2 + 64));
  }
  return result;
}
