/*
 * XREFs of XmStoreResult @ 0x14046959C
 * Callers:
 *     XmShlOp @ 0x140467F60 (XmShlOp.c)
 *     XmPopOp @ 0x140468100 (XmPopOp.c)
 *     XmBsfOp @ 0x140468180 (XmBsfOp.c)
 *     XmSubOperands @ 0x140468260 (XmSubOperands.c)
 *     XmMovOp @ 0x1404684B0 (XmMovOp.c)
 *     XmStosOp @ 0x1404684F0 (XmStosOp.c)
 *     XmAddOperands @ 0x140468A40 (XmAddOperands.c)
 *     XmPushStack @ 0x140468C28 (XmPushStack.c)
 *     XmInOp @ 0x140469390 (XmInOp.c)
 *     XmLoopOp @ 0x140469490 (XmLoopOp.c)
 *     XmSetLogicalResult @ 0x140469500 (XmSetLogicalResult.c)
 *     XmNotOp @ 0x140575920 (XmNotOp.c)
 *     XmCmpxchgOp @ 0x1405759C0 (XmCmpxchgOp.c)
 *     XmXaddOp @ 0x140575A80 (XmXaddOp.c)
 *     XmRclOp @ 0x140575D20 (XmRclOp.c)
 *     XmRcrOp @ 0x140575DF0 (XmRcrOp.c)
 *     XmRolOp @ 0x140575E90 (XmRolOp.c)
 *     XmRorOp @ 0x140575F40 (XmRorOp.c)
 *     XmSarOp @ 0x140575FD0 (XmSarOp.c)
 *     XmShldOp @ 0x1405760C0 (XmShldOp.c)
 *     XmShrOp @ 0x140576210 (XmShrOp.c)
 *     XmShrdOp @ 0x1405762F0 (XmShrdOp.c)
 *     XmLahfOp @ 0x140576580 (XmLahfOp.c)
 *     XmInsOp @ 0x140576600 (XmInsOp.c)
 *     XmLodsOp @ 0x140576C00 (XmLodsOp.c)
 *     XmMovsOp @ 0x140576C80 (XmMovsOp.c)
 *     XmBsrOp @ 0x140576DB0 (XmBsrOp.c)
 *     XmBtcOp @ 0x140576E30 (XmBtcOp.c)
 *     XmBtrOp @ 0x140576E80 (XmBtrOp.c)
 *     XmBtsOp @ 0x140576ED0 (XmBtsOp.c)
 *     XmCbwOp @ 0x140576F20 (XmCbwOp.c)
 *     XmCwdOp @ 0x140576F60 (XmCwdOp.c)
 *     XmXchgOp @ 0x140576FB0 (XmXchgOp.c)
 *     XmBswapOp @ 0x1405770A0 (XmBswapOp.c)
 *     XmSmswOp @ 0x140577110 (XmSmswOp.c)
 *     XmImulOp @ 0x140577130 (XmImulOp.c)
 *     XmImulxOp @ 0x1405771E0 (XmImulxOp.c)
 *     XmMulOp @ 0x1405772B0 (XmMulOp.c)
 *     XmDivOp @ 0x1405773B0 (XmDivOp.c)
 *     XmIdivOp @ 0x140577480 (XmIdivOp.c)
 *     XmSxxOp @ 0x140577590 (XmSxxOp.c)
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
