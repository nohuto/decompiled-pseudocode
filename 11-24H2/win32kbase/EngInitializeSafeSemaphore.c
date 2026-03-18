/*
 * XREFs of EngInitializeSafeSemaphore @ 0x1401C45F0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001F87C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001FCA8 (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     GreCreateSemaphoreInternal @ 0x14007B2F8 (GreCreateSemaphoreInternal.c)
 */

BOOL __stdcall EngInitializeSafeSemaphore(ENGSAFESEMAPHORE *pssem)
{
  BOOL v2; // ebx
  char *SemaphoreInternal; // rax
  HSEMAPHORE v5; // [rsp+30h] [rbp+8h] BYREF

  SEMOBJ<20>::SEMOBJ<20>(&v5);
  v2 = 0;
  if ( pssem->lCount
    || (SemaphoreInternal = GreCreateSemaphoreInternal(1), (pssem->hsem = (HSEMAPHORE)SemaphoreInternal) != 0LL) )
  {
    ++pssem->lCount;
    v2 = 1;
  }
  SEMOBJ<20>::vUnlock(&v5);
  return v2;
}
