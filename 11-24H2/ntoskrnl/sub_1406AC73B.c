/*
 * XREFs of sub_1406AC73B @ 0x1406AC73B
 * Callers:
 *     sub_1406AC624 @ 0x1406AC624 (sub_1406AC624.c)
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
int __fastcall sub_1406AC73B()
{
  __int64 v0; // rbp
  int result; // eax

  _RAX = 56026LL;
  if ( (KeGetPcr()->Prcb.BpbFeatures.AllFlags & 8) != 0 )
  {
    LOBYTE(_RAX) = 32;
    __asm { incsspq rax }
  }
  _mm_lfence();
  result = KeGetPcr()->Prcb.BpbRetpolineState.AllFlags;
  *(_BYTE *)(v0 - 88) = result;
  __writegsbyte(0x85Eu, KeGetPcr()->Prcb.BpbRetpolineState.AllFlags | 2);
  return result;
}
