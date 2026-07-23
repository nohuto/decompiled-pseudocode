/*
 * XREFs of XmStoreResult @ 0x140461F4C
 * Callers:
 *     XmShlOp @ 0x140460910 (XmShlOp.c)
 *     XmPopOp @ 0x140460AB0 (XmPopOp.c)
 *     XmBsfOp @ 0x140460B30 (XmBsfOp.c)
 *     XmSubOperands @ 0x140460C10 (XmSubOperands.c)
 *     XmMovOp @ 0x140460E60 (XmMovOp.c)
 *     XmStosOp @ 0x140460EA0 (XmStosOp.c)
 *     XmAddOperands @ 0x1404613F0 (XmAddOperands.c)
 *     XmPushStack @ 0x1404615D8 (XmPushStack.c)
 *     XmInOp @ 0x140461D40 (XmInOp.c)
 *     XmLoopOp @ 0x140461E40 (XmLoopOp.c)
 *     XmSetLogicalResult @ 0x140461EB0 (XmSetLogicalResult.c)
 *     XmNotOp @ 0x140572DB0 (XmNotOp.c)
 *     XmCmpxchgOp @ 0x140572E50 (XmCmpxchgOp.c)
 *     XmXaddOp @ 0x140572F10 (XmXaddOp.c)
 *     XmRclOp @ 0x1405731B0 (XmRclOp.c)
 *     XmRcrOp @ 0x140573280 (XmRcrOp.c)
 *     XmRolOp @ 0x140573320 (XmRolOp.c)
 *     XmRorOp @ 0x1405733D0 (XmRorOp.c)
 *     XmSarOp @ 0x140573460 (XmSarOp.c)
 *     XmShldOp @ 0x140573550 (XmShldOp.c)
 *     XmShrOp @ 0x1405736A0 (XmShrOp.c)
 *     XmShrdOp @ 0x140573780 (XmShrdOp.c)
 *     XmLahfOp @ 0x140573A10 (XmLahfOp.c)
 *     XmInsOp @ 0x140573A90 (XmInsOp.c)
 *     XmLodsOp @ 0x140574090 (XmLodsOp.c)
 *     XmMovsOp @ 0x140574110 (XmMovsOp.c)
 *     XmBsrOp @ 0x140574240 (XmBsrOp.c)
 *     XmBtcOp @ 0x1405742C0 (XmBtcOp.c)
 *     XmBtrOp @ 0x140574310 (XmBtrOp.c)
 *     XmBtsOp @ 0x140574360 (XmBtsOp.c)
 *     XmCbwOp @ 0x1405743B0 (XmCbwOp.c)
 *     XmCwdOp @ 0x1405743F0 (XmCwdOp.c)
 *     XmXchgOp @ 0x140574440 (XmXchgOp.c)
 *     XmBswapOp @ 0x140574530 (XmBswapOp.c)
 *     XmSmswOp @ 0x1405745A0 (XmSmswOp.c)
 *     XmImulOp @ 0x1405745C0 (XmImulOp.c)
 *     XmImulxOp @ 0x140574670 (XmImulxOp.c)
 *     XmMulOp @ 0x140574740 (XmMulOp.c)
 *     XmDivOp @ 0x140574840 (XmDivOp.c)
 *     XmIdivOp @ 0x140574910 (XmIdivOp.c)
 *     XmSxxOp @ 0x140574A20 (XmSxxOp.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall XmStoreResult(__int64 a1, int a2)
{
  int v2; // r8d
  _WORD *result; // rax

  v2 = *(_DWORD *)(a1 + 120);
  result = *(_WORD **)(a1 + 88);
  if ( v2 )
  {
    if ( v2 == 1 )
      *result = a2;
    else
      *(_DWORD *)result = a2;
  }
  else
  {
    *(_BYTE *)result = a2;
  }
  return result;
}
