/*
 * XREFs of MiUpdatePageMoveInProgressInternal @ 0x14042CA30
 * Callers:
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x14049DD64 (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiPurgeZeroListHead @ 0x1404BFBD4 (MiPurgeZeroListHead.c)
 *     MiHugeRangeFreeToZero @ 0x1404EE690 (MiHugeRangeFreeToZero.c)
 *     MiHugePurgeZeroList @ 0x140671A64 (MiHugePurgeZeroList.c)
 *     MiScrubLargePage @ 0x14068EB34 (MiScrubLargePage.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall MiUpdatePageMoveInProgressInternal(__int64 a1, unsigned int a2, int a3, int a4)
{
  __int64 v5; // r9
  signed __int64 result; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  signed __int64 v9; // rtt

  if ( a4 )
  {
    v5 = 15208LL;
  }
  else
  {
    v5 = 15192LL;
    if ( a2 < 2 )
      v5 = 15200LL;
  }
  result = *(_QWORD *)(v5 + a1);
  do
  {
    if ( a3 )
    {
      v7 = result + 1;
      v8 = (result ^ (result + 1)) & 0xFFFFFFFFFFFF0000uLL;
LABEL_7:
      v8 ^= v7;
      goto LABEL_8;
    }
    v8 = (result - 1) ^ (result ^ (result - 1)) & 0xFFFFFFFFFFFF0000uLL;
    if ( (_WORD)result == 1 )
    {
      v7 = (v8 ^ (v8 + 0x10000)) & 0xFFFFFFFFFFFF0000uLL;
      goto LABEL_7;
    }
LABEL_8:
    v9 = result;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + a1), v8, result);
  }
  while ( v9 != result );
  return result;
}
