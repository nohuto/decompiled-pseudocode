/*
 * XREFs of sub_1406AD6DB @ 0x1406AD6DB
 * Callers:
 *     sub_1406AD5C4 @ 0x1406AD5C4 (sub_1406AD5C4.c)
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
int __fastcall sub_1406AD6DB()
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
