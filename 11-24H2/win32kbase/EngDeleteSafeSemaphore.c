/*
 * XREFs of EngDeleteSafeSemaphore @ 0x1401C4430
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001F87C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001FCA8 (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     GreDeleteSemaphore @ 0x14003E0B0 (GreDeleteSemaphore.c)
 */

void __stdcall EngDeleteSafeSemaphore(ENGSAFESEMAPHORE *pssem)
{
  __int64 v2; // rdx
  HSEMAPHORE v3; // [rsp+30h] [rbp+8h] BYREF

  SEMOBJ<20>::SEMOBJ<20>(&v3);
  if ( pssem->lCount == 1 )
  {
    GreDeleteSemaphore((PERESOURCE)pssem->hsem, v2);
    pssem->hsem = 0LL;
  }
  --pssem->lCount;
  SEMOBJ<20>::vUnlock(&v3);
}
