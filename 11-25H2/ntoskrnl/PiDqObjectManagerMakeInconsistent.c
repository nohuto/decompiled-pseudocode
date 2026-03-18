/*
 * XREFs of PiDqObjectManagerMakeInconsistent @ 0x14071C6B8
 * Callers:
 *     PiPnpRtlObjectEventWorker @ 0x140836F20 (PiPnpRtlObjectEventWorker.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 */

void __fastcall PiDqObjectManagerMakeInconsistent(__int64 a1)
{
  char v2; // di
  int v3; // r8d

  v2 = 0;
  ExAcquireFastMutex((PKGUARDED_MUTEX)(a1 + 104));
  v3 = *(_DWORD *)(a1 + 228);
  if ( (v3 & 2) == 0 && *(_QWORD *)(a1 + 192) != a1 + 192 )
  {
    *(_DWORD *)(a1 + 228) = v3 | 2;
    if ( (v3 & 1) == 0 )
    {
      v2 = 1;
      *(_DWORD *)(a1 + 228) = v3 | 3;
    }
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 104));
  if ( v2 )
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 160), NormalWorkQueue);
}
