/*
 * XREFs of KsepDbGetSdbString @ 0x14073E580
 * Callers:
 *     KsepDbGetShimInfo @ 0x14073E5B4 (KsepDbGetShimInfo.c)
 *     KsepDbGetDriverShimsInternal @ 0x14095AE14 (KsepDbGetDriverShimsInternal.c)
 * Callees:
 *     KsepStringDuplicate @ 0x14095CB04 (KsepStringDuplicate.c)
 *     SdbGetStringTagPtr @ 0x14095FA98 (SdbGetStringTagPtr.c)
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
