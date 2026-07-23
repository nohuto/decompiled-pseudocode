/*
 * XREFs of ExLockHandleTableEntry @ 0x140401530
 * Callers:
 *     PsOpenProcess @ 0x140850610 (PsOpenProcess.c)
 *     ObpAuditObjectAccess @ 0x140863834 (ObpAuditObjectAccess.c)
 *     ExDupHandleTable @ 0x140891770 (ExDupHandleTable.c)
 *     ExQueryProcessHandleInformation @ 0x1409C6748 (ExQueryProcessHandleInformation.c)
 *     ObSetHandleAttributes @ 0x1409F4780 (ObSetHandleAttributes.c)
 * Callees:
 *     ExpBlockOnLockedHandleEntry @ 0x140849D30 (ExpBlockOnLockedHandleEntry.c)
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
