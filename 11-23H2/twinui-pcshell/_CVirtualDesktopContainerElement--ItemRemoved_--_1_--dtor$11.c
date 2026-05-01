/*
 * XREFs of _CVirtualDesktopContainerElement::ItemRemoved_::_1_::dtor$11 @ 0x18059271C
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B3438 (--1-$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall CVirtualDesktopContainerElement::ItemRemoved_::_1_::dtor_11(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 248) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 248) &= ~2u;
    return Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)(a2 + 80));
  }
  return result;
}
