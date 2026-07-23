/*
 * XREFs of AlpcpDeletePort @ 0x14088E9A0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     AlpcpFreeCompletionPacketLookaside @ 0x14046A5C0 (AlpcpFreeCompletionPacketLookaside.c)
 *     AlpcpDestroyPort @ 0x14088EB0C (AlpcpDestroyPort.c)
 *     AlpcpSendCloseMessage @ 0x14088EBDC (AlpcpSendCloseMessage.c)
 *     SeDeleteClientSecurity @ 0x140890300 (SeDeleteClientSecurity.c)
 *     AlpcpUnlockBlobUncachedExclusive @ 0x14089E840 (AlpcpUnlockBlobUncachedExclusive.c)
 *     AlpcpLockBlobExclusive @ 0x14089EB0C (AlpcpLockBlobExclusive.c)
 *     AlpcpDereferenceBlobEx @ 0x14089EBC0 (AlpcpDereferenceBlobEx.c)
 */

void __fastcall AlpcpDeletePort(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx
  void *v6; // rcx
  int v7; // ecx
  void *v8; // rcx
  void *v9; // rcx
  ULONG_PTR v10; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
    AlpcpSendCloseMessage(a1);
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
  {
    AlpcpLockBlobExclusive(v3);
    v4 = *(_DWORD *)(a1 + 416) & 6;
    switch ( v4 )
    {
      case 2:
        **(_QWORD **)(a1 + 16) = 0LL;
        break;
      case 4:
        *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) = 0LL;
        v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL);
        goto LABEL_7;
      case 6:
        *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) = 0LL;
        v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL);
LABEL_7:
        if ( v5 )
        {
          *(_QWORD *)(v5 + 424) = 0LL;
          *(_QWORD *)(v5 + 432) = 0LL;
        }
        break;
    }
    AlpcpUnlockBlobUncachedExclusive(*(_QWORD *)(a1 + 16));
    AlpcpDereferenceBlobEx(*(_QWORD *)(a1 + 16));
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  v6 = *(void **)(a1 + 32);
  if ( v6 )
  {
    ObfDereferenceObject(v6);
    AlpcpFreeCompletionPacketLookaside(*(KSPIN_LOCK **)(a1 + 48));
  }
  v7 = *(_DWORD *)(a1 + 416);
  if ( (v7 & 6) == 4 && (v7 & 0x400) == 0 && *(_QWORD *)(a1 + 80) )
    SeDeleteClientSecurity(a1 + 64);
  v8 = 0LL;
  if ( (*(_QWORD *)(a1 + 24) & 1) == 0 )
    v8 = *(void **)(a1 + 24);
  if ( v8 )
    ObfDereferenceObjectWithTag(v8, 0x63706C41u);
  v9 = *(void **)(a1 + 368);
  if ( v9 )
    ObfDereferenceObject(v9);
  v10 = _InterlockedExchange64((volatile __int64 *)(a1 + 440), 0LL);
  if ( v10 )
    AlpcpDereferenceBlobEx(v10);
  AlpcpDestroyPort(a1);
  KeLeaveCriticalRegion();
}
