/*
 * XREFs of PspSetPropertyHelper @ 0x14041F4B8
 * Callers:
 *     PsSetThreadProperty @ 0x14041F3F0 (PsSetThreadProperty.c)
 *     PsSetJobProperty @ 0x1405E29B0 (PsSetJobProperty.c)
 * Callees:
 *     PspInsertProperty @ 0x14041F4DC (PspInsertProperty.c)
 *     PspRemoveProperty @ 0x14041F5C0 (PspRemoveProperty.c)
 */

__int64 __fastcall PspSetPropertyHelper(__int64 a1, __int64 a2, __int64 a3)
{
  if ( a3 )
    return PspInsertProperty();
  else
    return PspRemoveProperty();
}
