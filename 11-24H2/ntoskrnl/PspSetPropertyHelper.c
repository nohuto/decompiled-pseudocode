/*
 * XREFs of PspSetPropertyHelper @ 0x14042D138
 * Callers:
 *     PsSetThreadProperty @ 0x14042D070 (PsSetThreadProperty.c)
 *     PsSetJobProperty @ 0x1405E5470 (PsSetJobProperty.c)
 * Callees:
 *     PspInsertProperty @ 0x14042D15C (PspInsertProperty.c)
 *     PspRemoveProperty @ 0x14042D240 (PspRemoveProperty.c)
 */

__int64 __fastcall PspSetPropertyHelper(__int64 a1, __int64 a2, __int64 a3)
{
  if ( a3 )
    return PspInsertProperty();
  else
    return PspRemoveProperty();
}
