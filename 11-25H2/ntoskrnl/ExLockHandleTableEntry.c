/*
 * XREFs of ExLockHandleTableEntry @ 0x1404018A0
 * Callers:
 *     PsOpenProcess @ 0x1408572E0 (PsOpenProcess.c)
 *     ObpAuditObjectAccess @ 0x140971330 (ObpAuditObjectAccess.c)
 *     ExQueryProcessHandleInformation @ 0x140971498 (ExQueryProcessHandleInformation.c)
 *     ExDupHandleTable @ 0x140971B80 (ExDupHandleTable.c)
 *     ObSetHandleAttributes @ 0x1409FE7C0 (ObSetHandleAttributes.c)
 * Callees:
 *     ExpBlockOnLockedHandleEntry @ 0x140851898 (ExpBlockOnLockedHandleEntry.c)
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
