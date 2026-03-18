/*
 * XREFs of RtlULongLongMult @ 0x1401E0D4C
 * Callers:
 *     ?Grow@?$CDynamicArray@PEAUtagWND@@$0HHHAHDFF@@@IEAAJI@Z @ 0x140264EFC (-Grow@-$CDynamicArray@PEAUtagWND@@$0HHHAHDFF@@@IEAAJI@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlULongLongMult(ULONGLONG ullMultiplicand, ULONGLONG ullMultiplier, ULONGLONG *pullResult)
{
  NTSTATUS v3; // r9d

  v3 = 0;
  if ( is_mul_ok(ullMultiplicand, 8uLL) )
  {
    *pullResult = 8 * ullMultiplicand;
  }
  else
  {
    *pullResult = -1LL;
    return -1073741675;
  }
  return v3;
}
