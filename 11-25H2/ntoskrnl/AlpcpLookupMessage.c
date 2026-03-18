/*
 * XREFs of AlpcpLookupMessage @ 0x1408AAFC0
 * Callers:
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1407358B0 (NtAlpcImpersonateClientContainerOfPort.c)
 *     NtAlpcOpenSenderProcess @ 0x1408AB690 (NtAlpcOpenSenderProcess.c)
 *     AlpcpReceiveDirectMessagePort @ 0x1408ABB08 (AlpcpReceiveDirectMessagePort.c)
 *     NtAlpcQueryInformationMessage @ 0x1408ABDF0 (NtAlpcQueryInformationMessage.c)
 *     NtAlpcOpenSenderThread @ 0x1409CCE90 (NtAlpcOpenSenderThread.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1409F1EF0 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpAcceptConnectPort @ 0x1409F5B30 (AlpcpAcceptConnectPort.c)
 *     NtAlpcCancelMessage @ 0x140A29A50 (NtAlpcCancelMessage.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfUnblockPushLock @ 0x14036EA10 (ExfUnblockPushLock.c)
 *     ExGetHandlePointer @ 0x140431FD0 (ExGetHandlePointer.c)
 *     ExHandleLogBadReference @ 0x14043BEE0 (ExHandleLogBadReference.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     ExpLookupHandleTableEntry @ 0x140850180 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x140851898 (ExpBlockOnLockedHandleEntry.c)
 *     AlpcpUnlockMessage @ 0x1408AA9C0 (AlpcpUnlockMessage.c)
 *     AlpcReferenceBlobByHandle @ 0x1408AF5B0 (AlpcReferenceBlobByHandle.c)
 *     AlpcpDereferenceBlobEx @ 0x1408B27D0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1408B2940 (AlpcpLockForCachedReferenceBlob.c)
 *     ExUnlockHandleTableEntry @ 0x140972390 (ExUnlockHandleTableEntry.c)
 */

__int64 __fastcall AlpcpLookupMessage(__int64 a1, __int64 a2, int a3, __int64 a4, ULONG_PTR *a5)
{
  int v5; // esi
  ULONG_PTR v8; // r15
  ULONG_PTR v9; // rbx
  char PreviousMode; // r14
  __int64 *v11; // rdi
  __int64 v12; // r8
  unsigned __int64 HandlePointer; // rax
  ULONG_PTR v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 *v17; // rax
  __int64 *v18; // r13
  signed __int64 BugCheckParameter4; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  ULONG_PTR v23; // rbx
  ULONG_PTR v24; // rdi
  signed __int32 v25; // eax
  __int64 v26; // rdx
  signed __int32 v27[8]; // [rsp+0h] [rbp-58h] BYREF

  v5 = a2;
  if ( (int)a2 < 0 )
  {
    if ( a1 )
    {
      v21 = *(_QWORD *)(a1 + 16);
      if ( !v21 )
        return 3221226224LL;
      a2 = (unsigned int)a2;
      LODWORD(a2) = a2 & 0x7FFFFFFF;
      v22 = AlpcReferenceBlobByHandle(v21 + 40, a2, AlpcReserveType);
      v23 = v22;
      if ( !v22 )
        return 3221226224LL;
      v24 = *(_QWORD *)(v22 + 24);
      AlpcpLockForCachedReferenceBlob(v24);
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v23 + 40), 1, 0) )
      {
        AlpcpUnlockMessage(v24);
        AlpcpDereferenceBlobEx(v23);
        return 3221227272LL;
      }
      else
      {
        *(_DWORD *)(v24 + 264) &= ~0x80000000;
        do
          v25 = _InterlockedIncrement(&AlpcpNextCallbackId);
        while ( !v25 );
        *(_DWORD *)(v24 + 272) = v25;
        *a5 = v24;
        return 0LL;
      }
    }
    return 3221227266LL;
  }
  if ( (a2 & 0xFC000000) != 0 )
  {
    if ( !AlpcpSecondaryMessageTables )
      return 3221227266LL;
    v8 = *(_QWORD *)(AlpcpSecondaryMessageTables + 8 * ((unsigned __int64)(unsigned int)a2 >> 26));
  }
  else
  {
    v8 = AlpcMessageTable;
  }
  if ( !v8 )
    return 3221227266LL;
  v9 = a2 & 0x3FFFFFF;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (a2 & 0x3FC) == 0 || (v11 = (__int64 *)ExpLookupHandleTableEntry((unsigned int *)v8, (unsigned int)v9)) == 0LL )
  {
LABEL_36:
    ExHandleLogBadReference(v8, v9, PreviousMode);
    return 3221227266LL;
  }
  do
  {
    while ( 1 )
    {
      _m_prefetchw(v11);
      v12 = *v11;
      if ( (*v11 & 1) != 0 )
        break;
      if ( !v12 )
        goto LABEL_36;
      ExpBlockOnLockedHandleEntry(v8, v11, v12);
    }
  }
  while ( v12 != _InterlockedCompareExchange64(v11, v12 - 1, v12) );
  HandlePointer = ExGetHandlePointer(v11);
  v14 = HandlePointer;
  if ( *(_DWORD *)(HandlePointer + 264) != v5 || a3 && *(_DWORD *)(HandlePointer + 272) != a3 )
  {
    _InterlockedIncrement64(v11);
    _InterlockedOr(v27, 0);
    if ( *(_QWORD *)(v8 + 48) )
      ExfUnblockPushLock(v8 + 48, 0LL);
    return 3221227266LL;
  }
  _m_prefetchw((const void *)(HandlePointer - 24));
  v15 = *(_QWORD *)(HandlePointer - 24);
  do
  {
    if ( v15 <= 0 )
    {
      if ( v15 )
        KeBugCheckEx(0x18u, 0LL, v14, 0x20uLL, v15);
      goto LABEL_54;
    }
    v16 = v15;
    v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 - 24), v15 + 1, v15);
  }
  while ( v15 != v16 );
  if ( v15 != -1 )
  {
    v17 = KeAbPreAcquire(v14 - 16, 0LL);
    v18 = v17;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v14 - 16), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v14 - 16), v17, v14 - 16);
    if ( v18 )
      *((_BYTE *)v18 + 10) = 1;
    *(_BYTE *)(v14 - 32) |= 1u;
    BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 - 24), 0x10000uLL) + 0x10000;
    if ( BugCheckParameter4 <= 0 )
      KeBugCheckEx(0x18u, 0LL, v14, 0x26uLL, BugCheckParameter4);
    --*(_WORD *)(v14 - 30);
    _InterlockedIncrement64(v11);
    _InterlockedOr(v27, 0);
    if ( *(_QWORD *)(v8 + 48) )
      ExfUnblockPushLock(v8 + 48, 0LL);
    if ( *(_DWORD *)(v14 + 264) != v5
      || a3 && *(_DWORD *)(v14 + 272) != a3
      || !*(_QWORD *)(v14 + 24) && !*(_QWORD *)(v14 + 16) )
    {
      AlpcpUnlockMessage(v14);
      return 3221227266LL;
    }
    if ( a1 )
    {
      if ( *(_QWORD *)(v14 + 184) == *(_QWORD *)(a1 + 16) || *(_QWORD *)(v14 + 192) == a1 )
      {
LABEL_30:
        *a5 = v14;
        return 0LL;
      }
    }
    else
    {
      v26 = *(_QWORD *)(v14 + 16);
      if ( v26 && *(_KPROCESS **)(v26 + 24) == KeGetCurrentThread()->ApcState.Process )
        goto LABEL_30;
    }
    AlpcpUnlockMessage(v14);
    return 3221225506LL;
  }
LABEL_54:
  ExUnlockHandleTableEntry(v8, v11);
  return 3221227266LL;
}
