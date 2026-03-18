/*
 * XREFs of AlpcpAllocateMessage @ 0x14093F9C0
 * Callers:
 *     AlpcpCreateClientPort @ 0x1408649C0 (AlpcpCreateClientPort.c)
 *     AlpcpFormatConnectionRequest @ 0x14088B56C (AlpcpFormatConnectionRequest.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x14088D3F8 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpCreateReserve @ 0x14093F62C (AlpcpCreateReserve.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExAllocateFromPagedLookasideList @ 0x1403FA0E0 (ExAllocateFromPagedLookasideList.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     AlpcpAllocateBuffer @ 0x14093FEC0 (AlpcpAllocateBuffer.c)
 *     AlpcpAllocateMessageFunction @ 0x14093FEE0 (AlpcpAllocateMessageFunction.c)
 */

__int64 __fastcall AlpcpAllocateMessage(ULONG_PTR *a1, unsigned __int64 a2, int a3, __int64 a4)
{
  unsigned __int64 v5; // rdx
  __int64 Buffer; // rax
  char v7; // dl
  __int64 v8; // rcx
  ULONG_PTR v9; // rsi
  char v10; // al
  _QWORD *v11; // rax
  _QWORD *v12; // rdi
  signed __int64 BugCheckParameter4; // rax
  int v14; // ebx
  signed __int32 v15; // eax
  _QWORD *v16; // rax
  _QWORD *v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 result; // rax
  __int64 v21; // rax
  __int64 v22; // r8
  _QWORD *v23; // rdx
  _QWORD **v24; // rdx
  _QWORD *v25; // rax
  _QWORD *v26; // r8
  _QWORD *v27; // r8
  __int64 *v28; // rax
  char *v29; // rdx
  char *v30; // rax
  char **v31; // rcx

  if ( a2 )
  {
    if ( a2 < 0x28 )
      return 3221225485LL;
    v5 = a2 + 288;
  }
  else
  {
    v5 = 840LL;
  }
  if ( !a3 && v5 <= 0x348 )
  {
    Buffer = (__int64)ExAllocateFromPagedLookasideList(&AlpcpLookasides);
    v7 = 2;
    goto LABEL_6;
  }
  if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))AlpcpLookasides.L.AllocateEx == AlpcpAllocateBuffer )
  {
    Buffer = AlpcpAllocateBuffer(1LL, v5, 1934453825LL);
LABEL_31:
    v7 = 0;
    goto LABEL_6;
  }
  if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))AlpcpLookasides.L.AllocateEx != AlpcpAllocateMessageFunction )
  {
    Buffer = guard_dispatch_icall_no_overrides(1LL, v5, 1934453825LL, a4);
    goto LABEL_31;
  }
  Buffer = AlpcpAllocateMessageFunction(1LL, v5, 1934453825LL);
  v7 = 0;
LABEL_6:
  v8 = Buffer;
  if ( Buffer )
  {
    *(_WORD *)(Buffer + 16) = 512;
    v9 = Buffer + 48;
    *(_DWORD *)(Buffer + 18) = 0;
    *(_WORD *)(Buffer + 22) = 0;
    *(_QWORD *)(Buffer + 40) = 0LL;
    *(_QWORD *)(Buffer + 32) = 0LL;
    *(_QWORD *)(Buffer + 8) = Buffer;
    *(_QWORD *)Buffer = Buffer;
    v10 = *(_BYTE *)(Buffer + 16);
    *(_QWORD *)(v8 + 24) = 1LL;
    *(_BYTE *)(v8 + 16) = v7 | v10 & 0xFD;
    if ( v8 != -48 )
    {
      v11 = KeAbPreAcquire(v8 + 32, 0LL);
      v12 = v11;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 - 16), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v9 - 16), (__int64)v11, v9 - 16);
      if ( v12 )
        *((_BYTE *)v12 + 10) = 1;
      *(_BYTE *)(v9 - 32) |= 1u;
      BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 - 24), 0x10000uLL) + 0x10000;
      if ( BugCheckParameter4 <= 0 )
        KeBugCheckEx(0x18u, 0LL, v9, 0x26uLL, BugCheckParameter4);
      v14 = *(_DWORD *)(v9 + 264);
      memset_0((void *)v9, 0, 0x118uLL);
      *(_WORD *)(v9 + 242) = 40;
      --*(_WORD *)(v9 - 30);
      *(_DWORD *)(v9 + 264) = v14 & 0x7FFFFFFF;
      do
        v15 = _InterlockedIncrement(&AlpcpNextCallbackId);
      while ( !v15 );
      *(_DWORD *)(v9 + 272) = v15;
      if ( !AlpcpMessageLogEnabled )
        goto LABEL_28;
      v16 = KeAbPreAcquire((__int64)&AlpcpMessageLogLock, 0LL);
      v17 = v16;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&AlpcpMessageLogLock, 0LL) )
        ExfAcquirePushLockExclusiveEx(&AlpcpMessageLogLock, (__int64)v16, (__int64)&AlpcpMessageLogLock);
      if ( v17 )
        *((_BYTE *)v17 + 10) = 1;
      v18 = AlpcpFreeMessageLogListHead;
      if ( (__int64 *)AlpcpFreeMessageLogListHead == &AlpcpFreeMessageLogListHead )
      {
        v18 = AlpcpMessageLogListHead;
        if ( (__int64 *)AlpcpMessageLogListHead == &AlpcpMessageLogListHead )
          goto LABEL_25;
        v21 = *(_QWORD *)AlpcpMessageLogListHead;
        if ( *(__int64 **)(AlpcpMessageLogListHead + 8) != &AlpcpMessageLogListHead )
          goto LABEL_36;
        if ( *(_QWORD *)(v21 + 8) != AlpcpMessageLogListHead )
          goto LABEL_36;
        AlpcpMessageLogListHead = *(_QWORD *)AlpcpMessageLogListHead;
        *(_QWORD *)(v21 + 8) = &AlpcpMessageLogListHead;
        *(_DWORD *)(v18 + 44) = 0;
        v22 = *(_QWORD *)(v18 + 16);
        if ( *(_QWORD *)(v22 + 8) != v18 + 16 )
          goto LABEL_36;
        v23 = *(_QWORD **)(v18 + 24);
        if ( *v23 != v18 + 16 )
          goto LABEL_36;
        *v23 = v22;
        *(_QWORD *)(v22 + 8) = v23;
        v24 = (_QWORD **)(v18 + 48);
        while ( 1 )
        {
          v25 = *v24;
          if ( *v24 == v24 )
            break;
          if ( (_QWORD **)v25[1] != v24 )
            goto LABEL_36;
          v26 = (_QWORD *)*v25;
          if ( *(_QWORD **)(*v25 + 8LL) != v25 )
            goto LABEL_36;
          *v24 = v26;
          v26[1] = v24;
          v27 = (_QWORD *)qword_140F0F258;
          if ( *(__int64 **)qword_140F0F258 != &AlpcpFreeMessageSnapshotListHead )
            goto LABEL_36;
          *v25 = &AlpcpFreeMessageSnapshotListHead;
          v25[1] = v27;
          *v27 = v25;
          qword_140F0F258 = (__int64)v25;
        }
      }
      else
      {
        v19 = *(_QWORD *)AlpcpFreeMessageLogListHead;
        if ( *(__int64 **)(AlpcpFreeMessageLogListHead + 8) != &AlpcpFreeMessageLogListHead
          || *(_QWORD *)(v19 + 8) != AlpcpFreeMessageLogListHead )
        {
          goto LABEL_36;
        }
        AlpcpFreeMessageLogListHead = *(_QWORD *)AlpcpFreeMessageLogListHead;
        *(_QWORD *)(v19 + 8) = &AlpcpFreeMessageLogListHead;
      }
      if ( !v18 )
      {
LABEL_25:
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpMessageLogLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpMessageLogLock);
        KeAbPostRelease((ULONG_PTR)&AlpcpMessageLogLock);
LABEL_28:
        result = 0LL;
        *(_WORD *)(v9 + 242) = 40;
        *a1 = v9;
        return result;
      }
      *(_QWORD *)(v18 + 32) = v9;
      *(_DWORD *)(v18 + 40) = *(_DWORD *)(v9 + 264);
      *(_DWORD *)(v18 + 44) = 1;
      v28 = (__int64 *)qword_140F0F278;
      if ( *(__int64 **)qword_140F0F278 == &AlpcpMessageLogListHead )
      {
        *(_QWORD *)(v18 + 8) = qword_140F0F278;
        v29 = (char *)(v18 + 16);
        *(_QWORD *)v18 = &AlpcpMessageLogListHead;
        *v28 = v18;
        qword_140F0F278 = v18;
        v30 = (char *)AlpcpMessageLogLookupTable + 16 * ((*(_DWORD *)(v18 + 40) >> 2) & 0x3FF);
        v31 = (char **)*((_QWORD *)v30 + 1);
        if ( *v31 == v30 )
        {
          *(_QWORD *)v29 = v30;
          *((_QWORD *)v29 + 1) = v31;
          *v31 = v29;
          *((_QWORD *)v30 + 1) = v29;
          goto LABEL_25;
        }
      }
LABEL_36:
      __fastfail(3u);
    }
  }
  return 3221225626LL;
}
