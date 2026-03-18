/*
 * XREFs of MiPreparePageAccessor @ 0x140210400
 * Callers:
 *     MiBackgroundZeroLocalPages @ 0x14020F1F0 (MiBackgroundZeroLocalPages.c)
 *     MiGetBackgroundHugePageToZero @ 0x14041C6E0 (MiGetBackgroundHugePageToZero.c)
 *     MiScrubLargePage @ 0x140682174 (MiScrubLargePage.c)
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
