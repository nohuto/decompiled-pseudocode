/*
 * XREFs of AlpcpAllocateMessage @ 0x1408B07D0
 * Callers:
 *     AlpcpCreateReserve @ 0x1408AEE08 (AlpcpCreateReserve.c)
 *     AlpcpCreateClientPort @ 0x140916890 (AlpcpCreateClientPort.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x14098D31C (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpFormatConnectionRequest @ 0x14098E160 (AlpcpFormatConnectionRequest.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExAllocateFromPagedLookasideList @ 0x1403F2CC0 (ExAllocateFromPagedLookasideList.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     AlpcpAllocateMessageFunction @ 0x1408AE3F0 (AlpcpAllocateMessageFunction.c)
 *     AlpcpAllocateBuffer @ 0x1408AE890 (AlpcpAllocateBuffer.c)
 *     AlpcpEnterAllocationEventMessageLog @ 0x1408B09DC (AlpcpEnterAllocationEventMessageLog.c)
 */

__int64 __fastcall AlpcpAllocateMessage(ULONG_PTR *a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v4; // rdx
  __int64 Buffer; // rax
  char v6; // dl
  __int64 v7; // rcx
  ULONG_PTR v8; // rsi
  char v9; // al
  __int64 *v10; // rax
  __int64 *v11; // rdi
  signed __int64 BugCheckParameter4; // rax
  int v13; // ebx
  signed __int32 v14; // eax
  __int64 result; // rax

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
  if ( a3 || v4 > 0x348 )
  {
    if ( (__int64 (*)())AlpcpLookasides.L.AllocateEx == AlpcpAllocateBuffer )
    {
      Buffer = AlpcpAllocateBuffer();
    }
    else
    {
      if ( (void *(*)())AlpcpLookasides.L.AllocateEx == AlpcpAllocateMessageFunction )
      {
        Buffer = (__int64)AlpcpAllocateMessageFunction();
        v6 = 0;
        goto LABEL_6;
      }
      Buffer = guard_dispatch_icall_no_overrides(1LL);
    }
    v6 = 0;
  }
  else
  {
    Buffer = (__int64)ExAllocateFromPagedLookasideList(&AlpcpLookasides);
    v6 = 2;
  }
LABEL_6:
  v7 = Buffer;
  if ( !Buffer )
    return 3221225626LL;
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
  if ( v7 == -48 )
    return 3221225626LL;
  v10 = KeAbPreAcquire(v7 + 32, 0LL);
  v11 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 - 16), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v8 - 16), v10, v8 - 16);
  if ( v11 )
    *((_BYTE *)v11 + 10) = 1;
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
  if ( AlpcpMessageLogEnabled )
    AlpcpEnterAllocationEventMessageLog(v8);
  result = 0LL;
  *(_WORD *)(v8 + 242) = 40;
  *a1 = v8;
  return result;
}
