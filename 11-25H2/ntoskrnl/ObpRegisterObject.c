/*
 * XREFs of ObpRegisterObject @ 0x140AB24BC
 * Callers:
 *     ObCreateObject @ 0x140858920 (ObCreateObject.c)
 *     IopAllocRealFileObject @ 0x14085A290 (IopAllocRealFileObject.c)
 *     ObCreateObjectEx @ 0x14085BE20 (ObCreateObjectEx.c)
 *     EtwpRegisterUMProvider @ 0x14089D2F0 (EtwpRegisterUMProvider.c)
 *     CmpCreateKeyBody @ 0x14089EB50 (CmpCreateKeyBody.c)
 *     NtCreateSemaphore @ 0x14089F4E0 (NtCreateSemaphore.c)
 *     NtCreateEvent @ 0x14089FF70 (NtCreateEvent.c)
 *     SepDuplicateToken @ 0x1408A2910 (SepDuplicateToken.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x140320910 (KeLeaveGuardedRegion.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     RtlStringCbCopyA @ 0x140458D18 (RtlStringCbCopyA.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ObpGetObjectRefInfo @ 0x140738D60 (ObpGetObjectRefInfo.c)
 *     ObpIsObjectPoolTagTraced @ 0x1407391A0 (ObpIsObjectPoolTagTraced.c)
 *     EtwTraceObject @ 0x14079A4F4 (EtwTraceObject.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

void __fastcall ObpRegisterObject(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v3; // rax
  signed __int8 v4; // cf
  __int64 *v5; // rsi
  unsigned __int16 *v6; // r8
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  _WORD *v9; // r10
  char v10; // al
  char v11; // cl
  unsigned __int16 *Pool2; // [rsp+48h] [rbp+10h] BYREF

  if ( (xmmword_140FC5B10 & 0x80u) != 0LL )
    EtwTraceObject(0x1130u, a1);
  if ( (ObpTraceFlags & 0x73) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    Pool2 = 0LL;
    --CurrentThread->SpecialApcDisable;
    v3 = KeAbPreAcquire((__int64)&ObpStackTraceLock, 0LL);
    v4 = _interlockedbittestandset64((volatile signed __int32 *)&ObpStackTraceLock, 0LL);
    v5 = v3;
    if ( v4 )
      ExfAcquirePushLockExclusiveEx(&ObpStackTraceLock, v3, (__int64)&ObpStackTraceLock);
    if ( v5 )
      *((_BYTE *)v5 + 10) = 1;
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
      Pool2 = (unsigned __int16 *)ExAllocatePool2(0x40uLL);
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
