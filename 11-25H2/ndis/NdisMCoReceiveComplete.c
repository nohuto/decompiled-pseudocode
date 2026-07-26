/*
 * XREFs of NdisMCoReceiveComplete @ 0x1400DB140
 * Callers:
 *     <none>
 * Callees:
 *     NdisAcquireRWLockRead @ 0x140042EE0 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x140043190 (NdisReleaseRWLock.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __stdcall NdisMCoReceiveComplete(NDIS_HANDLE MiniportAdapterHandle)
{
  __int64 v1; // rdi
  __int64 i; // rbx
  __int64 v4; // rcx
  struct _LOCK_STATE_EX LockState; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)MiniportAdapterHandle + 50);
  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
  NdisAcquireRWLockRead(*(PNDIS_RW_LOCK_EX *)(v1 + 288), &LockState, 0);
  for ( i = *((_QWORD *)MiniportAdapterHandle + 7); i; i = *(_QWORD *)(i + 392) )
  {
    v4 = *(_QWORD *)(i + 720);
    if ( *(_BYTE *)((KeGetPcr()->Prcb.Number << 12) + v4) )
    {
      *(_BYTE *)((KeGetPcr()->Prcb.Number << 12) + v4) = 0;
      (*(void (__fastcall **)(_QWORD))(i + 136))(*(_QWORD *)(i + 32));
    }
  }
  NdisReleaseRWLock(*(PNDIS_RW_LOCK_EX *)(v1 + 288), &LockState);
}
