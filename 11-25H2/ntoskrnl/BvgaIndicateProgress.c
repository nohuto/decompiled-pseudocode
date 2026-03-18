/*
 * XREFs of BvgaIndicateProgress @ 0x140C09350
 * Callers:
 *     <none>
 * Callees:
 *     BvgaUpdateProgressBar @ 0x14058D250 (BvgaUpdateProgressBar.c)
 */

__int64 BvgaIndicateProgress()
{
  __int64 result; // rax

  ++BvgaProgressIndicator;
  result = 100 * BvgaProgressIndicator / (unsigned int)dword_141007184;
  if ( (unsigned int)result > 0x63 )
    result = 99LL;
  if ( (_DWORD)result != dword_141007188 )
  {
    dword_141007188 = result;
    return BvgaUpdateProgressBar(result);
  }
  return result;
}
