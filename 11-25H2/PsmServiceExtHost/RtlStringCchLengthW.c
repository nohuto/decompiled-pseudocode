/*
 * XREFs of RtlStringCchLengthW @ 0x180091DC4
 * Callers:
 *     SdbpGetMergeRedirectPathInternal @ 0x1800931E0 (SdbpGetMergeRedirectPathInternal.c)
 *     SdbpSafeAllocAndConcatW @ 0x180093E60 (SdbpSafeAllocAndConcatW.c)
 *     AslStringDuplicate @ 0x18009E218 (AslStringDuplicate.c)
 *     AslStringReplace @ 0x18009E4BC (AslStringReplace.c)
 *     AslPathCombine @ 0x1800A3EA8 (AslPathCombine.c)
 * Callees:
 *     RtlStringLengthWorkerW @ 0x180091E50 (RtlStringLengthWorkerW.c)
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
