/*
 * XREFs of _CVirtualDesktopContainerElement::ItemRemoved_::_1_::dtor$7 @ 0x1805926C8
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B3438 (--1-$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall CVirtualDesktopContainerElement::ItemRemoved_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 248) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 248) &= ~1u;
    return Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)(a2 + 224));
  }
  return result;
}
