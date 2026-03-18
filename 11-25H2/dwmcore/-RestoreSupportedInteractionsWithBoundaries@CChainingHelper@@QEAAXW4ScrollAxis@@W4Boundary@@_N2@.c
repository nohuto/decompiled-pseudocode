/*
 * XREFs of ?RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N2@Z @ 0x180211A70
 * Callers:
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x1800F3724 (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z.c)
 *     ?UpdateChainingConfigIfBoundaryStateChanges@CScrollKeyframeAnimation@@IEAAXW4ScrollAxis@@W4Boundary@@@Z @ 0x180234354 (-UpdateChainingConfigIfBoundaryStateChanges@CScrollKeyframeAnimation@@IEAAXW4ScrollAxis@@W4Bound.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CChainingHelper::RestoreSupportedInteractionsWithBoundaries(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5)
{
  __int64 result; // rax
  __int64 v7; // rcx

  if ( (_DWORD)a3 && (_BYTE)a4 )
  {
    LOBYTE(a4) = a5;
    return CChainingHelper::ChainToParent(a1, a2, a3, a4);
  }
  else
  {
    result = (int)a2;
    v7 = 3LL * (int)a2;
    *(_BYTE *)(a1 + 4 * v7) &= 0xFCu;
    *(_DWORD *)(a1 + 4 * v7 + 4) = 0;
    *(_BYTE *)(a1 + 36) |= 1u;
  }
  return result;
}
