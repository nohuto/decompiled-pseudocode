/*
 * XREFs of WdipSemSqmLogTimeoutDataPoints @ 0x1407A385C
 * Callers:
 *     WdipSemLogTimeoutInformation @ 0x140A3DD3C (WdipSemLogTimeoutInformation.c)
 * Callees:
 *     WdipSemGetGuidKey @ 0x1407A3008 (WdipSemGetGuidKey.c)
 *     WdipSemSqmAddToStream @ 0x1407A35D4 (WdipSemSqmAddToStream.c)
 */

__int64 __fastcall WdipSemSqmLogTimeoutDataPoints(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  LODWORD(v4) = 0;
  if ( !a1 )
    return 3221225485LL;
  result = WdipSemGetGuidKey(a1, (unsigned int *)&v4);
  if ( (int)result >= 0 )
  {
    HIDWORD(v4) = a2;
    return WdipSemSqmAddToStream((_DWORD *)0x41E, 2u, &v4);
  }
  return result;
}
