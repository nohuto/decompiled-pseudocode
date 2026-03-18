/*
 * XREFs of SendCaptureStateNotificationsWorker @ 0x1407ADA30
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExSetTimer @ 0x1403C1FC0 (ExSetTimer.c)
 *     EtwpGetEnableInfoIndex @ 0x14044B8E8 (EtwpGetEnableInfoIndex.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     EtwpUnreferenceDataBlock @ 0x140835FF0 (EtwpUnreferenceDataBlock.c)
 *     EtwpSendDataBlock @ 0x14083A3F4 (EtwpSendDataBlock.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x14083A9D0 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpFindGuidEntryByGuid @ 0x14083AEE0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUnreferenceGuidEntry @ 0x14083D760 (EtwpUnreferenceGuidEntry.c)
 *     EtwpReleaseLoggerContext @ 0x14095D644 (EtwpReleaseLoggerContext.c)
 *     EtwpBuildNotificationPacket @ 0x1409F6588 (EtwpBuildNotificationPacket.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SendCaptureStateNotificationsWorker(__int16 *a1)
{
  __int64 v2; // r15
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  __int64 v5; // r12
  __int128 *Pool2; // rax
  __int128 *v7; // rdi
  __int64 v8; // rsi
  __int64 GuidEntryByGuid; // rax
  _QWORD *v10; // r13
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 *v12; // r12
  _QWORD *v13; // rax
  _QWORD *v14; // rsi
  signed __int64 v15; // r10
  __int64 *v16; // rsi
  bool v17; // zf
  int v18; // ecx
  unsigned __int8 v19; // cf
  int v20; // eax
  signed __int64 v21; // rax
  signed __int64 v22; // rdx
  __int64 v23; // rtt
  __int64 v24; // r15
  _QWORD *v25; // rax
  _QWORD *v26; // rsi
  char v28; // [rsp+28h] [rbp-99h]
  int v29; // [rsp+2Ch] [rbp-95h] BYREF
  __int64 v30; // [rsp+30h] [rbp-91h]
  __int64 v31; // [rsp+38h] [rbp-89h] BYREF
  __int64 v32; // [rsp+40h] [rbp-81h]
  __int64 v33; // [rsp+48h] [rbp-79h]
  __int128 v34; // [rsp+50h] [rbp-71h]
  _DWORD v35[2]; // [rsp+60h] [rbp-61h] BYREF
  _BYTE v36[32]; // [rsp+68h] [rbp-59h] BYREF
  __int128 v37; // [rsp+88h] [rbp-39h]
  int v38; // [rsp+A8h] [rbp-19h] BYREF
  __int16 v39; // [rsp+AEh] [rbp-13h]
  __int128 v40; // [rsp+D8h] [rbp+17h] BYREF

  v31 = 0LL;
  v40 = 0LL;
  memset_0(v36, 0, 0x70uLL);
  v2 = *((_QWORD *)a1 + 168);
  v33 = v2;
  v34 = 0LL;
  v3 = KeAbPreAcquire((__int64)(a1 + 344), 0LL);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1 + 172, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)a1 + 86, (__int64)v3, (__int64)(a1 + 344));
  if ( v4 )
    *((_BYTE *)v4 + 10) = 1;
  *(_DWORD *)(v2 + 64) = 0;
  v28 = 1;
  if ( *((_DWORD *)a1 + 80) && (v5 = *(unsigned __int16 *)(v2 + 16), (_WORD)v5) )
  {
    Pool2 = (__int128 *)ExAllocatePool2(0x100uLL);
    *((_QWORD *)&v34 + 1) = Pool2;
    v7 = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, *(const void **)(v2 + 24), 16LL * (unsigned int)v5);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 86, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)a1 + 86);
      KeAbPostRelease((ULONG_PTR)(a1 + 344));
      v35[0] = 3;
      v28 = 0;
      v35[1] = 120;
      v8 = v5;
      v32 = v5;
      while ( 1 )
      {
        GuidEntryByGuid = EtwpFindGuidEntryByGuid(*((_QWORD *)a1 + 170), v7, 0LL);
        v10 = (_QWORD *)GuidEntryByGuid;
        if ( !GuidEntryByGuid )
          goto LABEL_31;
        CurrentThread = KeGetCurrentThread();
        v12 = (unsigned __int64 *)(GuidEntryByGuid + 664);
        --CurrentThread->KernelApcDisable;
        v13 = KeAbPreAcquire(GuidEntryByGuid + 664, 0LL);
        v14 = v13;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
          ExfAcquirePushLockExclusiveEx(v12, (__int64)v13, (__int64)v12);
        v15 = 0LL;
        if ( v14 )
          *((_BYTE *)v14 + 10) = 1;
        v16 = (__int64 *)v10[7];
        v10[84] = KeGetCurrentThread();
        v37 = *v7;
        while ( v16 != v10 + 7 )
        {
          v17 = (*((_BYTE *)v16 + 98) & 1) == 0;
          v29 = v15;
          if ( v17
            && EtwpGetEnableInfoIndex((__int64)v10, *(_DWORD *)a1, &v29)
            && (v18 = *((unsigned __int16 *)v16 + 50),
                v19 = _bittest(&v18, (unsigned __int8)v29),
                LODWORD(v30) = v18,
                v19) )
          {
            EtwpComputeRegEntryEnableInfo(v16, &v38);
            v39 = *a1;
            v38 = 2;
            v20 = EtwpBuildNotificationPacket(v10, v35, (unsigned __int16)v30, &v31);
            v15 = 0LL;
            if ( v20 >= 0 )
            {
              EtwpSendDataBlock(v16, v31);
              EtwpUnreferenceDataBlock(v31);
              v15 = 0LL;
              goto LABEL_23;
            }
          }
          else
          {
LABEL_23:
            v16 = (__int64 *)*v16;
          }
        }
        v10[84] = v15;
        _m_prefetchw(v10 + 83);
        v21 = v10[83];
        v22 = v21 - 16;
        if ( (v21 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v22 = v15;
        if ( (v21 & 2) != 0 || (v23 = v10[83], v23 != _InterlockedCompareExchange64(v10 + 83, v22, v21)) )
          ExfReleasePushLock(v10 + 83);
        KeAbPostRelease((ULONG_PTR)(v10 + 83));
        KeLeaveCriticalRegion();
        EtwpUnreferenceGuidEntry((ULONG_PTR)v10);
        v8 = v32;
LABEL_31:
        ++v7;
        v32 = --v8;
        if ( !v8 )
        {
          v24 = v33;
          if ( *((_DWORD *)a1 + 80) )
          {
            *((_QWORD *)&v40 + 1) = -1LL;
            v25 = KeAbPreAcquire((__int64)(a1 + 344), 0LL);
            v26 = v25;
            if ( _interlockedbittestandset64((volatile signed __int32 *)a1 + 172, 0LL) )
              ExfAcquirePushLockExclusiveEx((unsigned __int64 *)a1 + 86, (__int64)v25, (__int64)(a1 + 344));
            if ( v26 )
              *((_BYTE *)v26 + 10) = 1;
            v28 = 1;
            if ( *(_WORD *)(v24 + 16) && !*(_DWORD *)(v24 + 64) )
            {
              ExSetTimer(*(_QWORD *)(v24 + 8), *(_QWORD *)v24, 0LL, (ULONG_PTR)&v40);
              *(_DWORD *)(v24 + 64) = 1;
            }
          }
          goto LABEL_41;
        }
      }
    }
  }
  else
  {
LABEL_41:
    v7 = (__int128 *)*((_QWORD *)&v34 + 1);
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v28 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 86, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)a1 + 86);
    KeAbPostRelease((ULONG_PTR)(a1 + 344));
  }
  return EtwpReleaseLoggerContext(a1, 0LL);
}
