/*
 * XREFs of RtlStringCchLengthW @ 0x180092224
 * Callers:
 *     SdbpGetMergeRedirectPathInternal @ 0x180093640 (SdbpGetMergeRedirectPathInternal.c)
 *     SdbpSafeAllocAndConcatW @ 0x1800942C0 (SdbpSafeAllocAndConcatW.c)
 *     AslStringDuplicate @ 0x18009E508 (AslStringDuplicate.c)
 *     AslStringReplace @ 0x18009E7AC (AslStringReplace.c)
 *     AslPathCombine @ 0x1800A4198 (AslPathCombine.c)
 * Callees:
 *     RtlStringLengthWorkerW @ 0x1800922B0 (RtlStringLengthWorkerW.c)
 */

__int64 __fastcall RtlStringCchLengthW(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax

  if ( a1 )
  {
    result = RtlStringLengthWorkerW();
    if ( (int)result >= 0 )
      return result;
  }
  else
  {
    result = 3221225485LL;
  }
  if ( a3 )
    *a3 = 0LL;
  return result;
}
