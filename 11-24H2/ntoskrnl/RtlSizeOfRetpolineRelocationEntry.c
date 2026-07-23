/*
 * XREFs of RtlSizeOfRetpolineRelocationEntry @ 0x14043B6F0
 * Callers:
 *     RtlValidateDynamicFixupRelocation @ 0x14043A208 (RtlValidateDynamicFixupRelocation.c)
 *     RtlpCopyRetpolineRelocationBlockEntryArray @ 0x14043B284 (RtlpCopyRetpolineRelocationBlockEntryArray.c)
 *     RtlCreateRetpolineRelocationInformation @ 0x14043B354 (RtlCreateRetpolineRelocationInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSizeOfRetpolineRelocationEntry(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  v1 = a1 - 3;
  if ( !v1 )
    return 4LL;
  v3 = v1 - 1;
  if ( !v3 )
    return 2LL;
  v4 = v3 - 1;
  if ( !v4 )
    return 2LL;
  if ( v4 == 3 )
    return 4LL;
  return 0xFFFFFFFFLL;
}
