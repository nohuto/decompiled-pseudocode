/*
 * XREFs of SendCaptureStateNotificationsWorker @ 0x14079E660
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     ExSetTimer @ 0x140370E10 (ExSetTimer.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     EtwpGetEnableInfoIndex @ 0x14044C328 (EtwpGetEnableInfoIndex.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     EtwpUnreferenceDataBlock @ 0x140896A38 (EtwpUnreferenceDataBlock.c)
 *     EtwpSendDataBlock @ 0x14089AEF8 (EtwpSendDataBlock.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x14089B4A0 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpFindGuidEntryByGuid @ 0x14089B9B0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUnreferenceGuidEntry @ 0x14089E370 (EtwpUnreferenceGuidEntry.c)
 *     EtwpBuildNotificationPacket @ 0x1409EF2A0 (EtwpBuildNotificationPacket.c)
 *     EtwpReleaseLoggerContext @ 0x1409FF024 (EtwpReleaseLoggerContext.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SendCaptureStateNotificationsWorker(__int16 *a1)
{
  __int64 v2; // r15
  __int64 *v3; // rax
  __int64 *v4; // rbx
  __int64 v5; // r12
  __int128 *Pool2; // rax
  __int128 *v7; // rdi
  __int64 v8; // rsi
  __int64 GuidEntryByGuid; // rax
  _QWORD *v10; // r13
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 *v12; // r12
  __int64 *v13; // rax
  __int64 *v14; // rsi
  signed __int64 v15; // r10
  __int64 *v16; // rsi
  bool v17; // zf
  __int64 v18; // r8
  int v19; // eax
  signed __int64 v20; // rax
  signed __int64 v21; // rdx
  __int64 v22; // rtt
  __int64 v23; // r15
  __int64 *v24; // rax
  __int64 *v25; // rsi
  char v27; // [rsp+28h] [rbp-89h]
  unsigned __int8 v28; // [rsp+29h] [rbp-88h]
  int v29; // [rsp+2Ch] [rbp-85h] BYREF
  __int64 v30; // [rsp+30h] [rbp-81h] BYREF
  __int64 v31; // [rsp+38h] [rbp-79h]
  __int64 v32; // [rsp+40h] [rbp-71h]
  __int128 v33; // [rsp+48h] [rbp-69h]
  _DWORD v34[2]; // [rsp+58h] [rbp-59h] BYREF
  _BYTE v35[32]; // [rsp+60h] [rbp-51h] BYREF
  __int128 v36; // [rsp+80h] [rbp-31h]
  int v37; // [rsp+A0h] [rbp-11h] BYREF
  __int16 v38; // [rsp+A6h] [rbp-Bh]
  __int128 v39; // [rsp+D0h] [rbp+1Fh] BYREF

  v30 = 0LL;
  v39 = 0LL;
  memset_0(v35, 0, 0x70uLL);
  v2 = *((_QWORD *)a1 + 168);
  v32 = v2;
  v33 = 0LL;
  v3 = KeAbPreAcquire((__int64)(a1 + 344), 0LL);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1 + 172, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)a1 + 86, v3, (__int64)(a1 + 344));
  if ( v4 )
    *((_BYTE *)v4 + 10) = 1;
  *(_DWORD *)(v2 + 64) = 0;
  v27 = 1;
  if ( *((_DWORD *)a1 + 80) && (v5 = *(unsigned __int16 *)(v2 + 16), (_WORD)v5) )
  {
    Pool2 = (__int128 *)ExAllocatePool2(0x100uLL);
    *((_QWORD *)&v33 + 1) = Pool2;
    v7 = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, *(const void **)(v2 + 24), 16LL * (unsigned int)v5);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 86, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)a1 + 86);
      KeAbPostRelease((ULONG_PTR)(a1 + 344));
      v34[0] = 3;
      v27 = 0;
      v34[1] = 120;
      v8 = v5;
      v31 = v5;
      while ( 1 )
      {
        GuidEntryByGuid = EtwpFindGuidEntryByGuid(*((_QWORD *)a1 + 170), v7, 0LL);
        v10 = (_QWORD *)GuidEntryByGuid;
        if ( !GuidEntryByGuid )
          goto LABEL_31;
        CurrentThread = KeGetCurrentThread();
        v12 = (unsigned __int64 *)(GuidEntryByGuid + 408);
        --CurrentThread->KernelApcDisable;
        v13 = KeAbPreAcquire(GuidEntryByGuid + 408, 0LL);
        v14 = v13;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
          ExfAcquirePushLockExclusiveEx(v12, v13, (__int64)v12);
        v15 = 0LL;
        if ( v14 )
          *((_BYTE *)v14 + 10) = 1;
        v16 = (__int64 *)v10[7];
        v10[52] = KeGetCurrentThread();
        v36 = *v7;
        while ( v16 != v10 + 7 )
        {
          v17 = (*((_BYTE *)v16 + 98) & 1) == 0;
          v29 = v15;
          if ( v17
            && EtwpGetEnableInfoIndex((__int64)v10, *(_DWORD *)a1, &v29)
            && (v28 = *((_BYTE *)v16 + 100), ((unsigned __int8)(1 << v29) & v28) != 0) )
          {
            EtwpComputeRegEntryEnableInfo(v16, &v37);
            LOBYTE(v18) = v28;
            v38 = *a1;
            v37 = 2;
            v19 = EtwpBuildNotificationPacket(v10, v34, v18, &v30);
            v15 = 0LL;
            if ( v19 >= 0 )
            {
              EtwpSendDataBlock(v16, v30);
              EtwpUnreferenceDataBlock(v30);
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
        v10[52] = v15;
        _m_prefetchw(v10 + 51);
        v20 = v10[51];
        v21 = v20 - 16;
        if ( (v20 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v21 = v15;
        if ( (v20 & 2) != 0 || (v22 = v10[51], v22 != _InterlockedCompareExchange64(v10 + 51, v21, v20)) )
          ExfReleasePushLock(v10 + 51);
        KeAbPostRelease((ULONG_PTR)(v10 + 51));
        KeLeaveCriticalRegion();
        EtwpUnreferenceGuidEntry(v10);
        v8 = v31;
LABEL_31:
        ++v7;
        v31 = --v8;
        if ( !v8 )
        {
          v23 = v32;
          if ( *((_DWORD *)a1 + 80) )
          {
            *((_QWORD *)&v39 + 1) = -1LL;
            v24 = KeAbPreAcquire((__int64)(a1 + 344), 0LL);
            v25 = v24;
            if ( _interlockedbittestandset64((volatile signed __int32 *)a1 + 172, 0LL) )
              ExfAcquirePushLockExclusiveEx((unsigned __int64 *)a1 + 86, v24, (__int64)(a1 + 344));
            if ( v25 )
              *((_BYTE *)v25 + 10) = 1;
            v27 = 1;
            if ( *(_WORD *)(v23 + 16) && !*(_DWORD *)(v23 + 64) )
            {
              ExSetTimer(*(_QWORD *)(v23 + 8), *(_QWORD *)v23, 0LL, (ULONG_PTR)&v39);
              *(_DWORD *)(v23 + 64) = 1;
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
    v7 = (__int128 *)*((_QWORD *)&v33 + 1);
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v27 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 86, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)a1 + 86);
    KeAbPostRelease((ULONG_PTR)(a1 + 344));
  }
  return EtwpReleaseLoggerContext(a1, 0LL);
}
