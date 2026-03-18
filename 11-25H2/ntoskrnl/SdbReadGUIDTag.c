/*
 * XREFs of SdbReadGUIDTag @ 0x1407F6000
 * Callers:
 *     KsepDbGetShimInfo @ 0x140732594 (KsepDbGetShimInfo.c)
 *     KsepDbGetDriverShimsInternal @ 0x14082941C (KsepDbGetDriverShimsInternal.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140825A60 (AslLogCallPrintf.c)
 *     SdbReadBinaryTag @ 0x140A65D78 (SdbReadBinaryTag.c)
 */

_OWORD *__fastcall SdbReadGUIDTag(_OWORD *a1, __int64 a2, unsigned int a3, _OWORD *a4)
{
  *a1 = 0LL;
  if ( !(unsigned int)SdbReadBinaryTag(a2, a3, a1, 16LL) )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbReadGUIDTag", 196, (unsigned int)"Failed to read GUID");
    *a1 = *a4;
  }
  return a1;
}
