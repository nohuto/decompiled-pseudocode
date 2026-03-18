/*
 * XREFs of ExMapHandleToPointer @ 0x14084ACF0
 * Callers:
 *     PspJobDelete @ 0x1404EE9D0 (PspJobDelete.c)
 *     PspClearProcessThreadCidRefs @ 0x1408A8FC8 (PspClearProcessThreadCidRefs.c)
 *     PspProcessDelete @ 0x1408A99B0 (PspProcessDelete.c)
 *     RtlpInsertStringAtom @ 0x140989E7C (RtlpInsertStringAtom.c)
 *     RtlpFreeHandleForAtom @ 0x140989F28 (RtlpFreeHandleForAtom.c)
 *     ObQueryObjectAuditingByHandle @ 0x140A16A80 (ObQueryObjectAuditingByHandle.c)
 *     PspThreadDelete @ 0x140AD1250 (PspThreadDelete.c)
 * Callees:
 *     ExpLookupHandleTableEntry @ 0x14084BF30 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x14084DA70 (ExpBlockOnLockedHandleEntry.c)
 */

signed __int64 *__fastcall ExMapHandleToPointer(__int64 a1, __int64 a2)
{
  signed __int64 *v3; // rbx
  signed __int64 v4; // r8

  if ( (a2 & 0x3FC) == 0 )
    return 0LL;
  v3 = (signed __int64 *)ExpLookupHandleTableEntry(a1, a2);
  if ( !v3 )
    return 0LL;
  do
  {
    while ( 1 )
    {
      _m_prefetchw(v3);
      v4 = *v3;
      if ( (*v3 & 1) != 0 )
        break;
      if ( !v4 )
        return 0LL;
      ExpBlockOnLockedHandleEntry(a1, v3);
    }
  }
  while ( v4 != _InterlockedCompareExchange64(v3, v4 - 1, v4) );
  return v3;
}
