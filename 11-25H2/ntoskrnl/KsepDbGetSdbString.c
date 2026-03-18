/*
 * XREFs of KsepDbGetSdbString @ 0x140732560
 * Callers:
 *     KsepDbGetShimInfo @ 0x140732594 (KsepDbGetShimInfo.c)
 *     KsepDbGetDriverShimsInternal @ 0x14082941C (KsepDbGetDriverShimsInternal.c)
 * Callees:
 *     SdbGetStringTagPtr @ 0x140825328 (SdbGetStringTagPtr.c)
 *     KsepStringDuplicate @ 0x14082AB14 (KsepStringDuplicate.c)
 */

__int64 __fastcall KsepDbGetSdbString(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 StringTagPtr; // rax

  StringTagPtr = SdbGetStringTagPtr(a1, a2);
  if ( StringTagPtr )
    return KsepStringDuplicate(a3, StringTagPtr);
  else
    return 3221225485LL;
}
