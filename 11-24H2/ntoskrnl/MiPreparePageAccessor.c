/*
 * XREFs of MiPreparePageAccessor @ 0x140432670
 * Callers:
 *     MiGetBackgroundHugePageToZero @ 0x140209AF0 (MiGetBackgroundHugePageToZero.c)
 *     MiScrubLargePage @ 0x14068DA04 (MiScrubLargePage.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiPreparePageAccessor(__int64 a1)
{
  _QWORD *result; // rax
  __int64 v2; // rdx

  result = (_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 288) = 0LL;
  v2 = 32LL;
  do
  {
    *result++ = 0LL;
    --v2;
  }
  while ( v2 );
  *(_DWORD *)(a1 + 280) = 0;
  return result;
}
