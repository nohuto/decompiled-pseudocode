/*
 * XREFs of MiPreparePageAccessor @ 0x140424F00
 * Callers:
 *     MiGetBackgroundHugePageToZero @ 0x1403310D0 (MiGetBackgroundHugePageToZero.c)
 *     MiScrubLargePage @ 0x14068EB34 (MiScrubLargePage.c)
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
