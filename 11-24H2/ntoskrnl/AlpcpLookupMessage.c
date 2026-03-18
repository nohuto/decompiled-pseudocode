/*
 * XREFs of AlpcpLookupMessage @ 0x14093E7E0
 * Callers:
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1407418D0 (NtAlpcImpersonateClientContainerOfPort.c)
 *     NtAlpcOpenSenderThread @ 0x14093C960 (NtAlpcOpenSenderThread.c)
 *     NtAlpcCancelMessage @ 0x14093CEA0 (NtAlpcCancelMessage.c)
 *     NtAlpcQueryInformationMessage @ 0x14093DDC0 (NtAlpcQueryInformationMessage.c)
 *     AlpcpReceiveDirectMessagePort @ 0x14093E0B8 (AlpcpReceiveDirectMessagePort.c)
 *     NtAlpcOpenSenderProcess @ 0x14093E390 (NtAlpcOpenSenderProcess.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1409EC9B0 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpAcceptConnectPort @ 0x1409F4F00 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     ExfUnblockPushLock @ 0x1402C7820 (ExfUnblockPushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExGetHandlePointer @ 0x1404275E0 (ExGetHandlePointer.c)
 *     ExHandleLogBadReference @ 0x14043AC30 (ExHandleLogBadReference.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     ExpLookupHandleTableEntry @ 0x14084BF30 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x14084DA70 (ExpBlockOnLockedHandleEntry.c)
 *     AlpcpDereferenceBlobEx @ 0x140890420 (AlpcpDereferenceBlobEx.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x140890590 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcReferenceBlobByHandle @ 0x1408938D0 (AlpcReferenceBlobByHandle.c)
 *     AlpcpUnlockMessage @ 0x140898D70 (AlpcpUnlockMessage.c)
 *     ExUnlockHandleTableEntry @ 0x14093D890 (ExUnlockHandleTableEntry.c)
 */

__int64 __fastcall AlpcpLookupMessage(__int64 a1, int a2, int a3, __int64 a4, ULONG_PTR *a5)
{
  ULONG_PTR v8; // r13
  ULONG_PTR v9; // rbx
  char PreviousMode; // bp
  __int64 *v11; // rdi
  __int64 v12; // r8
  unsigned __int64 HandlePointer; // rax
  ULONG_PTR v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rbp
  signed __int64 BugCheckParameter4; // rax
  __int64 v24; // rcx
  ULONG_PTR v25; // rax
  ULONG_PTR v26; // rbx
  ULONG_PTR v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  signed __int32 v31; // eax
  __int64 v32; // r8
  __int64 v33; // r9
  signed __int32 v34[8]; // [rsp+0h] [rbp-58h] BYREF

  if ( a2 >= 0 )
  {
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
    if ( v8 )
    {
      v9 = a2 & 0x3FFFFFF;
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      if ( (a2 & 0x3FC) != 0
        && (v11 = (__int64 *)ExpLookupHandleTableEntry((unsigned int *)v8, (unsigned int)v9)) != 0LL )
      {
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
        if ( *(_DWORD *)(HandlePointer + 264) == a2 && (!a3 || *(_DWORD *)(HandlePointer + 272) == a3) )
        {
          _m_prefetchw((const void *)(HandlePointer - 24));
          v15 = *(_QWORD *)(HandlePointer - 24);
          while ( v15 > 0 )
          {
            v16 = v15;
            v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 - 24), v15 + 1, v15);
            if ( v15 == v16 )
            {
              if ( v15 != -1 )
              {
                v17 = KeAbPreAcquire(v14 - 16, 0LL);
                v21 = v17;
                if ( _interlockedbittestandset64((volatile signed __int32 *)(v14 - 16), 0LL) )
                  ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v14 - 16), (__int64)v17, v14 - 16);
                if ( v21 )
                  *((_BYTE *)v21 + 10) = 1;
                *(_BYTE *)(v14 - 32) |= 1u;
                BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 - 24), 0x10000uLL)
                                   + 0x10000;
                if ( BugCheckParameter4 <= 0 )
                  KeBugCheckEx(0x18u, 0LL, v14, 0x26uLL, BugCheckParameter4);
                --*(_WORD *)(v14 - 30);
                _InterlockedIncrement64(v11);
                _InterlockedOr(v34, 0);
                if ( *(_QWORD *)(v8 + 48) )
                  ExfUnblockPushLock(v8 + 48, 0LL);
                if ( *(_DWORD *)(v14 + 264) != a2
                  || a3 && *(_DWORD *)(v14 + 272) != a3
                  || !*(_QWORD *)(v14 + 24) && !*(_QWORD *)(v14 + 16) )
                {
                  AlpcpUnlockMessage(v14, v18, v19, v20);
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
                  v18 = *(_QWORD *)(v14 + 16);
                  if ( v18 && *(_KPROCESS **)(v18 + 24) == KeGetCurrentThread()->ApcState.Process )
                    goto LABEL_30;
                }
                AlpcpUnlockMessage(v14, v18, v19, v20);
                return 3221225506LL;
              }
LABEL_47:
              ExUnlockHandleTableEntry(v8, v11);
              return 3221227266LL;
            }
          }
          if ( v15 )
            KeBugCheckEx(0x18u, 0LL, v14, 0x20uLL, v15);
          goto LABEL_47;
        }
        _InterlockedIncrement64(v11);
        _InterlockedOr(v34, 0);
        if ( *(_QWORD *)(v8 + 48) )
          ExfUnblockPushLock(v8 + 48, 0LL);
      }
      else
      {
LABEL_36:
        ExHandleLogBadReference(v8, v9, PreviousMode);
      }
    }
    return 3221227266LL;
  }
  if ( !a1 )
    return 3221227266LL;
  v24 = *(_QWORD *)(a1 + 16);
  if ( !v24 )
    return 3221226224LL;
  v25 = AlpcReferenceBlobByHandle((_QWORD *)(v24 + 40), a2 & 0x7FFFFFFF, AlpcReserveType);
  v26 = v25;
  if ( !v25 )
    return 3221226224LL;
  v27 = *(_QWORD *)(v25 + 24);
  AlpcpLockForCachedReferenceBlob(v27);
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v26 + 40), 1, 0) )
  {
    AlpcpUnlockMessage(v27, v28, v29, v30);
    AlpcpDereferenceBlobEx(v26, 1, v32, v33);
    return 3221227272LL;
  }
  else
  {
    *(_DWORD *)(v27 + 264) &= ~0x80000000;
    do
      v31 = _InterlockedIncrement(&AlpcpNextCallbackId);
    while ( !v31 );
    *(_DWORD *)(v27 + 272) = v31;
    *a5 = v27;
    return 0LL;
  }
}
