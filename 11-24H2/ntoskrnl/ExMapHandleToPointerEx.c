/*
 * XREFs of ExMapHandleToPointerEx @ 0x140896120
 * Callers:
 *     AlpcpFreeMessageFunction @ 0x140896B30 (AlpcpFreeMessageFunction.c)
 * Callees:
 *     ExHandleLogBadReference @ 0x14042D470 (ExHandleLogBadReference.c)
 *     ExpLookupHandleTableEntry @ 0x1408481F0 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x140849D30 (ExpBlockOnLockedHandleEntry.c)
 */

__int64 *__fastcall ExMapHandleToPointerEx(unsigned int *BugCheckParameter2, ULONG_PTR BugCheckParameter1, char a3)
{
  __int64 *v6; // rbx
  __int64 v7; // r8

  if ( (BugCheckParameter1 & 0x3FC) != 0
    && (v6 = (__int64 *)ExpLookupHandleTableEntry(BugCheckParameter2, BugCheckParameter1)) != 0LL )
  {
    do
    {
      while ( 1 )
      {
        _m_prefetchw(v6);
        v7 = *v6;
        if ( (*v6 & 1) != 0 )
          break;
        if ( !v7 )
          goto LABEL_8;
        ExpBlockOnLockedHandleEntry((__int64)BugCheckParameter2, v6, v7);
      }
    }
    while ( v7 != _InterlockedCompareExchange64(v6, v7 - 1, v7) );
    return v6;
  }
  else
  {
LABEL_8:
    ExHandleLogBadReference((ULONG_PTR)BugCheckParameter2, BugCheckParameter1, a3);
    return 0LL;
  }
}
