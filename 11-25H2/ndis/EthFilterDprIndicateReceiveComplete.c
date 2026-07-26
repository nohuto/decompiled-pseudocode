/*
 * XREFs of EthFilterDprIndicateReceiveComplete @ 0x14006EC20
 * Callers:
 *     <none>
 * Callees:
 *     NdisAcquireRWLockRead @ 0x140042EE0 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x140043190 (NdisReleaseRWLock.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __fastcall EthFilterDprIndicateReceiveComplete(__int64 *a1)
{
  unsigned int Number; // ebp
  __int64 v3; // rcx
  __int64 *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 *v7; // rax
  __int64 v8; // rsi
  struct _LOCK_STATE_EX LockState; // [rsp+50h] [rbp+8h] BYREF

  Number = KeGetPcr()->Prcb.Number;
  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
  if ( a1 )
  {
    NdisAcquireRWLockRead((PNDIS_RW_LOCK_EX)a1[36], &LockState, 0);
    v3 = *a1;
    v4 = a1;
    if ( *a1 )
      goto LABEL_15;
    while ( 1 )
    {
      v7 = 0LL;
      if ( v4 != a1 + 1 )
        v7 = v4;
      v4 = v7;
      if ( v7 == a1 + 2 )
        v4 = a1 + 1;
      if ( v4 == a1 )
        v4 = a1 + 2;
      if ( !v4 )
        break;
      v3 = *v4;
      if ( !*v4 )
        break;
LABEL_15:
      v8 = Number << 12;
      do
      {
        v5 = *(_QWORD *)(v3 + 720);
        v6 = *(_QWORD *)(v3 + 424);
        if ( *(_BYTE *)(v5 + v8) )
        {
          *(_BYTE *)(v5 + v8) = 0;
          (*(void (__fastcall **)(_QWORD))(v3 + 136))(*(_QWORD *)(v3 + 32));
        }
        v3 = v6;
      }
      while ( v6 );
    }
    NdisReleaseRWLock((PNDIS_RW_LOCK_EX)a1[36], &LockState);
  }
}
