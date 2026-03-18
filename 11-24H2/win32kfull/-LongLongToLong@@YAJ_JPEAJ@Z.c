/*
 * XREFs of ?LongLongToLong@@YAJ_JPEAJ@Z @ 0x14016E6A4
 * Callers:
 *     GreAlphaBlend @ 0x140010F88 (GreAlphaBlend.c)
 *     ?bOffsetSubtract@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x140175528 (-bOffsetSubtract@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LongLongToLong(__int64 a1, int *a2)
{
  __int64 result; // rax

  if ( (unsigned __int64)(a1 + 0x80000000LL) <= 0xFFFFFFFF )
  {
    result = 0LL;
  }
  else
  {
    result = 2147942934LL;
    LODWORD(a1) = -1;
  }
  *a2 = a1;
  return result;
}
