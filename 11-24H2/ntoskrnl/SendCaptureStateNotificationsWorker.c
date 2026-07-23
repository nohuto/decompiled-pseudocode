/*
 * XREFs of SendCaptureStateNotificationsWorker @ 0x1407ADE80
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ExSetTimer @ 0x1403B0B80 (ExSetTimer.c)
 *     EtwpGetEnableInfoIndex @ 0x140442A28 (EtwpGetEnableInfoIndex.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     EtwpBuildNotificationPacket @ 0x1408321B8 (EtwpBuildNotificationPacket.c)
 *     EtwpSendDataBlock @ 0x140834A64 (EtwpSendDataBlock.c)
 *     EtwpUnreferenceDataBlock @ 0x140836678 (EtwpUnreferenceDataBlock.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x140837AF0 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpFindGuidEntryByGuid @ 0x140838880 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUnreferenceGuidEntry @ 0x140839DC0 (EtwpUnreferenceGuidEntry.c)
 *     EtwpReleaseLoggerContext @ 0x140945104 (EtwpReleaseLoggerContext.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SendCaptureStateNotificationsWorker(__int16 *a1)
{
  __int64 v2; // r15
  char *v3; // rax
  char *v4; // rbx
  __int64 v5; // r12
  __int128 *Pool2; // rax
  __int128 *v7; // rdi
  __int64 v8; // rsi
  __int64 GuidEntryByGuid; // rax
  _QWORD *v10; // r13
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 *v12; // r12
  char *v13; // rax
  char *v14; // rsi
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
  char *v25; // rax
  char *v26; // rsi
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
  v3 = (char *)KeAbPreAcquire((__int64)(a1 + 344), 0LL);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1 + 172, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)a1 + 86, v3, (__int64)(a1 + 344));
  if ( v4 )
    v4[10] = 1;
  *(_DWORD *)(v2 + 64) = 0;
  v28 = 1;
  if ( *((_DWORD *)a1 + 80) && (v5 = *(unsigned __int16 *)(v2 + 16), (_WORD)v5) )
  {
    Pool2 = (__int128 *)ExAllocatePool2(0x100uLL, 16LL * *(unsigned __int16 *)(v2 + 16), 0x74777445u);
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
        v13 = (char *)KeAbPreAcquire(GuidEntryByGuid + 664, 0LL);
        v14 = v13;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
          ExfAcquirePushLockExclusiveEx(v12, v13, (__int64)v12);
        v15 = 0LL;
        if ( v14 )
          v14[10] = 1;
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
            v25 = (char *)KeAbPreAcquire((__int64)(a1 + 344), 0LL);
            v26 = v25;
            if ( _interlockedbittestandset64((volatile signed __int32 *)a1 + 172, 0LL) )
              ExfAcquirePushLockExclusiveEx((unsigned __int64 *)a1 + 86, v25, (__int64)(a1 + 344));
            if ( v26 )
              v26[10] = 1;
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
