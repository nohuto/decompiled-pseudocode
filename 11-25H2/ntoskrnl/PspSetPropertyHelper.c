/*
 * XREFs of PspSetPropertyHelper @ 0x140436398
 * Callers:
 *     PsSetThreadProperty @ 0x1404362D0 (PsSetThreadProperty.c)
 *     PsSetJobProperty @ 0x1405D9490 (PsSetJobProperty.c)
 * Callees:
 *     PspInsertProperty @ 0x1404363BC (PspInsertProperty.c)
 *     PspRemoveProperty @ 0x1404364A0 (PspRemoveProperty.c)
 */

__int64 __fastcall PspSetPropertyHelper(__int64 a1, __int64 a2, __int64 a3)
{
  if ( a3 )
    return PspInsertProperty();
  else
    return PspRemoveProperty();
}
