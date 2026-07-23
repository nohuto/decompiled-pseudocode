/*
 * XREFs of ObpRegisterObject @ 0x140AB162C
 * Callers:
 *     EtwpRegisterUMProvider @ 0x140838D50 (EtwpRegisterUMProvider.c)
 *     NtCreateSemaphore @ 0x14083A3C0 (NtCreateSemaphore.c)
 *     CmpCreateKeyBody @ 0x14083A700 (CmpCreateKeyBody.c)
 *     NtCreateMutant @ 0x14083AEC0 (NtCreateMutant.c)
 *     NtCreateWaitCompletionPacket @ 0x14083B1F0 (NtCreateWaitCompletionPacket.c)
 *     NtCreateEvent @ 0x1408532A0 (NtCreateEvent.c)
 *     IopAllocRealFileObject @ 0x1408A3050 (IopAllocRealFileObject.c)
 *     ObCreateObjectEx @ 0x1408A4B90 (ObCreateObjectEx.c)
 *     ObCreateObject @ 0x140973930 (ObCreateObject.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x140362BA0 (KeLeaveGuardedRegion.c)
 *     RtlStringCbCopyA @ 0x14044E2F8 (RtlStringCbCopyA.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObpGetObjectRefInfo @ 0x140743070 (ObpGetObjectRefInfo.c)
 *     ObpIsObjectPoolTagTraced @ 0x1407434B0 (ObpIsObjectPoolTagTraced.c)
 *     EtwTraceObject @ 0x1407A9A04 (EtwTraceObject.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

void __fastcall ObpRegisterObject(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char *v3; // rax
  signed __int8 v4; // cf
  char *v5; // rsi
  unsigned __int16 *v6; // r8
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  _WORD *v9; // r10
  char v10; // al
  char v11; // cl
  unsigned __int16 *Pool2; // [rsp+48h] [rbp+10h] BYREF

  if ( (xmmword_140FC6B50 & 0x80u) != 0LL )
    EtwTraceObject(4400, a1);
  if ( (ObpTraceFlags & 0x73) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    Pool2 = 0LL;
    --CurrentThread->SpecialApcDisable;
    v3 = (char *)KeAbPreAcquire((__int64)&ObpStackTraceLock, 0LL);
    v4 = _interlockedbittestandset64((volatile signed __int32 *)&ObpStackTraceLock, 0LL);
    v5 = v3;
    if ( v4 )
      ExfAcquirePushLockExclusiveEx(&ObpStackTraceLock, v3, (__int64)&ObpStackTraceLock);
    if ( v5 )
      v5[10] = 1;
    if ( (ObpTraceFlags & 0x73) == 0
      || (ObpTraceFlags & 0x20) != 0 && (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x200) == 0
      || !ObpIsObjectPoolTagTraced(a1)
      || (int)ObpGetObjectRefInfo(a1, &Pool2) < 0 )
    {
      goto LABEL_18;
    }
    v6 = Pool2;
    if ( !Pool2 )
    {
      Pool2 = (unsigned __int16 *)ExAllocatePool2(0x40uLL, 0x17F8uLL, 0x7452624Fu);
      v6 = Pool2;
      if ( !Pool2 )
      {
LABEL_18:
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
        KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
        KeLeaveGuardedRegion();
        return;
      }
      v7 = (((unsigned int)(a1 + 48) >> 4) & 0xFFFFF) % 0x191;
      v8 = ObpObjectTable;
      *((_QWORD *)Pool2 + 1) = *((_QWORD *)ObpObjectTable + v7);
      v8[v7] = v6;
      v6[17] = 508;
    }
    ++ObpNumTracedObjects;
    *(_QWORD *)v6 = a1;
    RtlStringCbCopyA(
      (NTSTRSAFE_PSTR)Pool2 + 16,
      0x10uLL,
      (NTSTRSAFE_PCSTR)&KeGetCurrentThread()->ApcState.Process[1].SecureState);
    v9[16] = 0;
    memset_0(v9 + 18, 0, 12LL * (unsigned __int16)v9[17]);
    v10 = ObpTraceFlags;
    v11 = *(_BYTE *)(a1 + 25) | 1;
    *(_BYTE *)(a1 + 25) = v11;
    if ( (v10 & 0x40) != 0 )
      *(_BYTE *)(a1 + 25) = v11 | 2;
    goto LABEL_18;
  }
}
