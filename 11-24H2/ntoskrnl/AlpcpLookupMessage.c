/*
 * XREFs of AlpcpLookupMessage @ 0x140892E20
 * Callers:
 *     NtAlpcImpersonateClientContainerOfPort @ 0x14073F800 (NtAlpcImpersonateClientContainerOfPort.c)
 *     NtAlpcCancelMessage @ 0x140891590 (NtAlpcCancelMessage.c)
 *     NtAlpcQueryInformationMessage @ 0x140892400 (NtAlpcQueryInformationMessage.c)
 *     AlpcpReceiveDirectMessagePort @ 0x1408926F8 (AlpcpReceiveDirectMessagePort.c)
 *     NtAlpcOpenSenderProcess @ 0x1408929D0 (NtAlpcOpenSenderProcess.c)
 *     NtAlpcOpenSenderThread @ 0x1409A9420 (NtAlpcOpenSenderThread.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1409E5CE0 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpAcceptConnectPort @ 0x140A1ED20 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     ExfUnblockPushLock @ 0x1402BC1A0 (ExfUnblockPushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExGetHandlePointer @ 0x14041B770 (ExGetHandlePointer.c)
 *     ExHandleLogBadReference @ 0x14042D470 (ExHandleLogBadReference.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ExpLookupHandleTableEntry @ 0x1408481F0 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x140849D30 (ExpBlockOnLockedHandleEntry.c)
 *     ExUnlockHandleTableEntry @ 0x140891F80 (ExUnlockHandleTableEntry.c)
 *     AlpcReferenceBlobByHandle @ 0x140896580 (AlpcReferenceBlobByHandle.c)
 *     AlpcpDereferenceBlobEx @ 0x14089EBC0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14089ED30 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockMessage @ 0x1408A1410 (AlpcpUnlockMessage.c)
 */

__int64 __fastcall AlpcpLookupMessage(__int64 a1, __int64 a2, int a3, __int64 a4, ULONG_PTR *a5)
{
  int v5; // esi
  __int64 v8; // r13
  ULONG_PTR v9; // rbx
  char PreviousMode; // bp
  __int64 *v11; // rdi
  __int64 v12; // r8
  unsigned __int64 HandlePointer; // rax
  ULONG_PTR v14; // rbx
  signed __int64 v15; // rax
  signed __int64 v16; // rdx
  char *v17; // rax
  char *v18; // rbp
  signed __int64 BugCheckParameter4; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  ULONG_PTR v24; // rbx
  ULONG_PTR v25; // rdi
  signed __int32 v26; // eax
  signed __int32 v27[8]; // [rsp+0h] [rbp-58h] BYREF

  v5 = a2;
  if ( (int)a2 >= 0 )
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
        if ( *(_DWORD *)(HandlePointer + 264) == v5 && (!a3 || *(_DWORD *)(HandlePointer + 272) == a3) )
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
                v17 = (char *)KeAbPreAcquire(v14 - 16, 0LL);
                v18 = v17;
                if ( _interlockedbittestandset64((volatile signed __int32 *)(v14 - 16), 0LL) )
                  ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v14 - 16), v17, v14 - 16);
                if ( v18 )
                  v18[10] = 1;
                *(_BYTE *)(v14 - 32) |= 1u;
                BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 - 24), 0x10000uLL)
                                   + 0x10000;
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
                  v21 = *(_QWORD *)(v14 + 16);
                  if ( v21 && *(_KPROCESS **)(v21 + 24) == KeGetCurrentThread()->ApcState.Process )
                    goto LABEL_30;
                }
                AlpcpUnlockMessage(v14);
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
        _InterlockedOr(v27, 0);
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
  v22 = *(_QWORD *)(a1 + 16);
  if ( !v22 )
    return 3221226224LL;
  a2 = (unsigned int)a2;
  LODWORD(a2) = a2 & 0x7FFFFFFF;
  v23 = AlpcReferenceBlobByHandle(v22 + 40, a2, AlpcReserveType);
  v24 = v23;
  if ( !v23 )
    return 3221226224LL;
  v25 = *(_QWORD *)(v23 + 24);
  AlpcpLockForCachedReferenceBlob(v25);
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v24 + 40), 1, 0) )
  {
    AlpcpUnlockMessage(v25);
    AlpcpDereferenceBlobEx(v24);
    return 3221227272LL;
  }
  else
  {
    *(_DWORD *)(v25 + 264) &= ~0x80000000;
    do
      v26 = _InterlockedIncrement(&AlpcpNextCallbackId);
    while ( !v26 );
    *(_DWORD *)(v25 + 272) = v26;
    *a5 = v25;
    return 0LL;
  }
}
