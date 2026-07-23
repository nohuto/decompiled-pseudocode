/*
 * XREFs of IopInitializeActiveConnectBlock @ 0x1409C0E78
 * Callers:
 *     IoDisconnectInterrupt @ 0x1409C05D0 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x1409C0880 (IopConnectInterrupt.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     IopInsertActiveConnectListLocked @ 0x1409C1250 (IopInsertActiveConnectListLocked.c)
 */

void __fastcall IopInitializeActiveConnectBlock(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rax
  __int64 v7; // rcx

  memset_0(a2, 0, 0x50uLL);
  if ( !*(_DWORD *)(a1 + 8) )
  {
    a2[1] = a2;
    *a2 = a2;
    KeInitializeEvent((PRKEVENT)(a2 + 5), SynchronizationEvent, 1u);
    *((_DWORD *)a2 + 16) = 1;
    v4 = *(_DWORD *)(a1 + 64);
    *((_DWORD *)a2 + 4) = v4;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    KeWaitForSingleObject(&ActiveConnectListLock, Executive, 0, 0, 0LL);
    v6 = ActiveConnectList;
    v7 = 0LL;
    while ( (__int64 *)v6 != &ActiveConnectList )
    {
      if ( *(_DWORD *)(v6 + 16) == v4 )
      {
        v7 = v6;
        break;
      }
      if ( *(_DWORD *)(v6 + 16) > v4 )
        break;
      v6 = *(_QWORD *)v6;
    }
    if ( v7 )
    {
      a2[3] = *(_QWORD *)(v7 + 24);
      a2[4] = *(_QWORD *)(v7 + 32);
      _InterlockedIncrement(*(volatile signed __int32 **)(v7 + 32));
    }
    else
    {
      a2[3] = a2 + 5;
      a2[4] = a2 + 8;
    }
    IopInsertActiveConnectListLocked(a2);
    KeSetEvent(&ActiveConnectListLock, 0, 0);
    KeLeaveCriticalRegion();
  }
}
