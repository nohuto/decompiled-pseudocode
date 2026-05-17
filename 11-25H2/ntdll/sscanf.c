/*
 * XREFs of sscanf @ 0x180128040
 * Callers:
 *     <none>
 * Callees:
 *     GetTInputFnL @ 0x180128028 (GetTInputFnL.c)
 *     vscan_fn @ 0x180128080 (vscan_fn.c)
 */

int sscanf(const char *const Buffer, const char *const Format, ...)
{
  unsigned int TInputFnL; // eax
  int v3; // edx
  int v4; // r8d
  __int64 v5; // r9

  TInputFnL = (unsigned int)GetTInputFnL();
  return vscan_fn(TInputFnL, v3, v4, 0, v5);
}
