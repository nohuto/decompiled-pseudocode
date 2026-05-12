/*
 * XREFs of StorReleaseLockForAllGateways @ 0x1400A6ED4
 * Callers:
 *     RaidResumeAdapterQueue @ 0x14000FA30 (RaidResumeAdapterQueue.c)
 *     StorPortAdapterActiveCondition @ 0x140024390 (StorPortAdapterActiveCondition.c)
 *     StorResumeIoGateway @ 0x140028340 (StorResumeIoGateway.c)
 * Callees:
 *     <none>
 */

void __fastcall StorReleaseLockForAllGateways(__int64 a1)
{
  int v2; // ebx
  __int64 i; // rbx

  if ( *(_QWORD *)(a1 + 6072) )
  {
    v2 = *(_DWORD *)(a1 + 968);
    if ( v2 )
    {
      for ( i = (unsigned int)(v2 - 1); (_DWORD)i != -1; i = (unsigned int)(i - 1) )
        KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)(*(_QWORD *)(a1 + 6072) + 24 * i));
    }
  }
}
