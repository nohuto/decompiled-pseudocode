/*
 * XREFs of AlpcpAllocateMessage @ 0x140894000
 * Callers:
 *     AlpcpCreateClientPort @ 0x140868FD0 (AlpcpCreateClientPort.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x14089055C (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpFormatConnectionRequest @ 0x14089137C (AlpcpFormatConnectionRequest.c)
 *     AlpcpCreateReserve @ 0x140893C6C (AlpcpCreateReserve.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ExAllocateFromPagedLookasideList @ 0x1403EFFF0 (ExAllocateFromPagedLookasideList.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     AlpcpAllocateBuffer @ 0x140894500 (AlpcpAllocateBuffer.c)
 *     AlpcpAllocateMessageFunction @ 0x140894520 (AlpcpAllocateMessageFunction.c)
 */

__int64 __fastcall AlpcpAllocateMessage(ULONG_PTR *a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v4; // rdx
  __int64 Buffer; // rax
  char v6; // dl
  __int64 v7; // rcx
  ULONG_PTR v8; // rsi
  char v9; // al
  char *v10; // rax
  char *v11; // rdi
  signed __int64 BugCheckParameter4; // rax
  int v13; // ebx
  signed __int32 v14; // eax
  char *v15; // rax
  char *v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 result; // rax
  __int64 v20; // rax
  __int64 v21; // r8
  _QWORD *v22; // rdx
  _QWORD **v23; // rdx
  _QWORD *v24; // rax
  _QWORD *v25; // r8
  _QWORD *v26; // r8
  __int64 *v27; // rax
  char *v28; // rdx
  char *v29; // rax
  char **v30; // rcx

  if ( a2 )
  {
    if ( a2 < 0x28 )
      return 3221225485LL;
    v4 = a2 + 288;
  }
  else
  {
    v4 = 840LL;
  }
  if ( !a3 && v4 <= 0x348 )
  {
    Buffer = (__int64)ExAllocateFromPagedLookasideList(&AlpcpLookasides);
    v6 = 2;
    goto LABEL_6;
  }
  if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))AlpcpLookasides.L.AllocateEx == AlpcpAllocateBuffer )
  {
    Buffer = AlpcpAllocateBuffer(1LL, v4, 1934453825LL);
LABEL_31:
    v6 = 0;
    goto LABEL_6;
  }
  if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))AlpcpLookasides.L.AllocateEx != AlpcpAllocateMessageFunction )
  {
    Buffer = guard_dispatch_icall_no_overrides(1LL, v4);
    goto LABEL_31;
  }
  Buffer = AlpcpAllocateMessageFunction(1LL, v4, 1934453825LL);
  v6 = 0;
LABEL_6:
  v7 = Buffer;
  if ( Buffer )
  {
    *(_WORD *)(Buffer + 16) = 512;
    v8 = Buffer + 48;
    *(_DWORD *)(Buffer + 18) = 0;
    *(_WORD *)(Buffer + 22) = 0;
    *(_QWORD *)(Buffer + 40) = 0LL;
    *(_QWORD *)(Buffer + 32) = 0LL;
    *(_QWORD *)(Buffer + 8) = Buffer;
    *(_QWORD *)Buffer = Buffer;
    v9 = *(_BYTE *)(Buffer + 16);
    *(_QWORD *)(v7 + 24) = 1LL;
    *(_BYTE *)(v7 + 16) = v6 | v9 & 0xFD;
    if ( v7 != -48 )
    {
      v10 = (char *)KeAbPreAcquire(v7 + 32, 0LL);
      v11 = v10;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 - 16), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v8 - 16), v10, v8 - 16);
      if ( v11 )
        v11[10] = 1;
      *(_BYTE *)(v8 - 32) |= 1u;
      BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 - 24), 0x10000uLL) + 0x10000;
      if ( BugCheckParameter4 <= 0 )
        KeBugCheckEx(0x18u, 0LL, v8, 0x26uLL, BugCheckParameter4);
      v13 = *(_DWORD *)(v8 + 264);
      memset_0((void *)v8, 0, 0x118uLL);
      *(_WORD *)(v8 + 242) = 40;
      --*(_WORD *)(v8 - 30);
      *(_DWORD *)(v8 + 264) = v13 & 0x7FFFFFFF;
      do
        v14 = _InterlockedIncrement(&AlpcpNextCallbackId);
      while ( !v14 );
      *(_DWORD *)(v8 + 272) = v14;
      if ( !AlpcpMessageLogEnabled )
        goto LABEL_28;
      v15 = (char *)KeAbPreAcquire((__int64)&AlpcpMessageLogLock, 0LL);
      v16 = v15;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&AlpcpMessageLogLock, 0LL) )
        ExfAcquirePushLockExclusiveEx(&AlpcpMessageLogLock, v15, (__int64)&AlpcpMessageLogLock);
      if ( v16 )
        v16[10] = 1;
      v17 = AlpcpFreeMessageLogListHead;
      if ( (__int64 *)AlpcpFreeMessageLogListHead == &AlpcpFreeMessageLogListHead )
      {
        v17 = AlpcpMessageLogListHead;
        if ( (__int64 *)AlpcpMessageLogListHead == &AlpcpMessageLogListHead )
          goto LABEL_25;
        v20 = *(_QWORD *)AlpcpMessageLogListHead;
        if ( *(__int64 **)(AlpcpMessageLogListHead + 8) != &AlpcpMessageLogListHead )
          goto LABEL_36;
        if ( *(_QWORD *)(v20 + 8) != AlpcpMessageLogListHead )
          goto LABEL_36;
        AlpcpMessageLogListHead = *(_QWORD *)AlpcpMessageLogListHead;
        *(_QWORD *)(v20 + 8) = &AlpcpMessageLogListHead;
        *(_DWORD *)(v17 + 44) = 0;
        v21 = *(_QWORD *)(v17 + 16);
        if ( *(_QWORD *)(v21 + 8) != v17 + 16 )
          goto LABEL_36;
        v22 = *(_QWORD **)(v17 + 24);
        if ( *v22 != v17 + 16 )
          goto LABEL_36;
        *v22 = v21;
        *(_QWORD *)(v21 + 8) = v22;
        v23 = (_QWORD **)(v17 + 48);
        while ( 1 )
        {
          v24 = *v23;
          if ( *v23 == v23 )
            break;
          if ( (_QWORD **)v24[1] != v23 )
            goto LABEL_36;
          v25 = (_QWORD *)*v24;
          if ( *(_QWORD **)(*v24 + 8LL) != v24 )
            goto LABEL_36;
          *v23 = v25;
          v25[1] = v23;
          v26 = (_QWORD *)qword_140F0F558;
          if ( *(__int64 **)qword_140F0F558 != &AlpcpFreeMessageSnapshotListHead )
            goto LABEL_36;
          *v24 = &AlpcpFreeMessageSnapshotListHead;
          v24[1] = v26;
          *v26 = v24;
          qword_140F0F558 = (__int64)v24;
        }
      }
      else
      {
        v18 = *(_QWORD *)AlpcpFreeMessageLogListHead;
        if ( *(__int64 **)(AlpcpFreeMessageLogListHead + 8) != &AlpcpFreeMessageLogListHead
          || *(_QWORD *)(v18 + 8) != AlpcpFreeMessageLogListHead )
        {
          goto LABEL_36;
        }
        AlpcpFreeMessageLogListHead = *(_QWORD *)AlpcpFreeMessageLogListHead;
        *(_QWORD *)(v18 + 8) = &AlpcpFreeMessageLogListHead;
      }
      if ( !v17 )
      {
LABEL_25:
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpMessageLogLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpMessageLogLock);
        KeAbPostRelease((ULONG_PTR)&AlpcpMessageLogLock);
LABEL_28:
        result = 0LL;
        *(_WORD *)(v8 + 242) = 40;
        *a1 = v8;
        return result;
      }
      *(_QWORD *)(v17 + 32) = v8;
      *(_DWORD *)(v17 + 40) = *(_DWORD *)(v8 + 264);
      *(_DWORD *)(v17 + 44) = 1;
      v27 = (__int64 *)qword_140F0F588;
      if ( *(__int64 **)qword_140F0F588 == &AlpcpMessageLogListHead )
      {
        *(_QWORD *)(v17 + 8) = qword_140F0F588;
        v28 = (char *)(v17 + 16);
        *(_QWORD *)v17 = &AlpcpMessageLogListHead;
        *v27 = v17;
        qword_140F0F588 = v17;
        v29 = (char *)AlpcpMessageLogLookupTable + 16 * ((*(_DWORD *)(v17 + 40) >> 2) & 0x3FF);
        v30 = (char **)*((_QWORD *)v29 + 1);
        if ( *v30 == v29 )
        {
          *(_QWORD *)v28 = v29;
          *((_QWORD *)v28 + 1) = v30;
          *v30 = v28;
          *((_QWORD *)v29 + 1) = v28;
          goto LABEL_25;
        }
      }
LABEL_36:
      __fastfail(3u);
    }
  }
  return 3221225626LL;
}
