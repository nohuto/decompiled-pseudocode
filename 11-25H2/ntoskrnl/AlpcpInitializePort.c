/*
 * XREFs of AlpcpInitializePort @ 0x1409E024C
 * Callers:
 *     AlpcpCreateClientPort @ 0x140916890 (AlpcpCreateClientPort.c)
 *     AlpcpCreateConnectionPort @ 0x1409DFF40 (AlpcpCreateConnectionPort.c)
 *     AlpcpAcceptConnectPort @ 0x1409F5B30 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1403746E0 (ExAllocateFromNPagedLookasideList.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     KeInitializeSemaphore @ 0x14045D6B0 (KeInitializeSemaphore.c)
 */

__int64 __fastcall AlpcpInitializePort(__int64 a1, char a2, unsigned __int8 a3)
{
  int v4; // eax
  struct _KSEMAPHORE *v5; // rax
  __int64 *v6; // rax
  signed __int8 v7; // cf
  __int64 *v8; // rdi
  __int64 *v9; // rax

  *(_QWORD *)(a1 + 352) = 0LL;
  *(_QWORD *)(a1 + 328) = 0LL;
  *(_QWORD *)(a1 + 344) = a1 + 336;
  *(_QWORD *)(a1 + 336) = a1 + 336;
  *(_QWORD *)(a1 + 152) = a1 + 144;
  *(_QWORD *)(a1 + 144) = a1 + 144;
  *(_QWORD *)(a1 + 192) = a1 + 184;
  *(_QWORD *)(a1 + 184) = a1 + 184;
  *(_QWORD *)(a1 + 168) = a1 + 160;
  *(_QWORD *)(a1 + 160) = a1 + 160;
  *(_QWORD *)(a1 + 392) = a1 + 384;
  *(_QWORD *)(a1 + 384) = a1 + 384;
  *(_QWORD *)(a1 + 216) = a1 + 208;
  *(_QWORD *)(a1 + 208) = a1 + 208;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 240) = a1 + 232;
  *(_QWORD *)(a1 + 232) = a1 + 232;
  v4 = *(_DWORD *)(a1 + 416);
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_DWORD *)(a1 + 416) = v4 ^ ((unsigned __int8)v4 ^ (unsigned __int8)(2 * a2)) & 6 ^ ((unsigned __int16)(v4 ^ ((unsigned __int8)v4 ^ (unsigned __int8)(2 * a2)) & 6) ^ (unsigned __int16)(a3 << 9)) & 0x200;
  if ( a3 )
  {
    *(_DWORD *)(a1 + 256) |= 0x40000u;
    v5 = (struct _KSEMAPHORE *)ExAllocateFromNPagedLookasideList(&AlpcpNPLookasides);
    *(_QWORD *)(a1 + 248) = v5;
    if ( !v5 )
      return 3221225626LL;
    KeInitializeSemaphore(v5, 0, 0x7FFFFFFF);
  }
  else
  {
    *(_QWORD *)(a1 + 248) = AlpcpDummyEvent;
  }
  *(_DWORD *)(a1 + 416) |= 1u;
  v6 = KeAbPreAcquire((__int64)&AlpcpPortListLock, 0LL);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&AlpcpPortListLock, 0LL);
  v8 = v6;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(&AlpcpPortListLock, v6, (__int64)&AlpcpPortListLock);
  if ( v8 )
    *((_BYTE *)v8 + 10) = 1;
  v9 = (__int64 *)qword_140F0EBD8;
  if ( *(PVOID **)qword_140F0EBD8 != &AlpcpPortList )
    __fastfail(3u);
  *(_QWORD *)(a1 + 8) = qword_140F0EBD8;
  *(_QWORD *)a1 = &AlpcpPortList;
  *v9 = a1;
  qword_140F0EBD8 = a1;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpPortListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpPortListLock);
  KeAbPostRelease((ULONG_PTR)&AlpcpPortListLock);
  return 0LL;
}
