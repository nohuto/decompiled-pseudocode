/*
 * XREFs of ExLockHandleTableEntry @ 0x140409050
 * Callers:
 *     PsOpenProcess @ 0x140854350 (PsOpenProcess.c)
 *     ExQueryProcessHandleInformation @ 0x14093BA20 (ExQueryProcessHandleInformation.c)
 *     ExDupHandleTable @ 0x14093D080 (ExDupHandleTable.c)
 *     ObpAuditObjectAccess @ 0x140989024 (ObpAuditObjectAccess.c)
 *     ObSetHandleAttributes @ 0x1409FBA40 (ObSetHandleAttributes.c)
 * Callees:
 *     ExpBlockOnLockedHandleEntry @ 0x14084DA70 (ExpBlockOnLockedHandleEntry.c)
 */

char __fastcall ExLockHandleTableEntry(__int64 a1, signed __int64 *a2)
{
  signed __int64 v4; // r8

  while ( 1 )
  {
    while ( 1 )
    {
      _m_prefetchw(a2);
      v4 = *a2;
      if ( (*a2 & 1) == 0 )
        break;
      if ( v4 == _InterlockedCompareExchange64(a2, v4 - 1, v4) )
        return 1;
    }
    if ( !v4 )
      break;
    ExpBlockOnLockedHandleEntry(a1, a2);
  }
  return 0;
}
