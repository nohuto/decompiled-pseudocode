/*
 * XREFs of BvgaIndicateProgress @ 0x140C1C430
 * Callers:
 *     <none>
 * Callees:
 *     BvgaUpdateProgressBar @ 0x14058DA50 (BvgaUpdateProgressBar.c)
 */

__int64 BvgaIndicateProgress()
{
  __int64 result; // rax

  ++BvgaProgressIndicator;
  result = 100 * BvgaProgressIndicator / (unsigned int)dword_141008184;
  if ( (unsigned int)result > 0x63 )
    result = 99LL;
  if ( (_DWORD)result != dword_141008188 )
  {
    dword_141008188 = result;
    return BvgaUpdateProgressBar(result);
  }
  return result;
}
