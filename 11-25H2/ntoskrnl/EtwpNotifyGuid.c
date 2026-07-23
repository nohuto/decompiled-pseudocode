/*
 * XREFs of EtwpNotifyGuid @ 0x140897964
 * Callers:
 *     NtTraceControl @ 0x140895400 (NtTraceControl.c)
 *     EtwpSendSessionNotification @ 0x1409914E0 (EtwpSendSessionNotification.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     PsGetCurrentThreadProcessId @ 0x140431FB0 (PsGetCurrentThreadProcessId.c)
 *     PsGetProcessId @ 0x140438AF0 (PsGetProcessId.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     EtwpValidateTraceControlFilterDescriptors @ 0x1407A4624 (EtwpValidateTraceControlFilterDescriptors.c)
 *     EtwpUnreferenceDataBlock @ 0x140896A38 (EtwpUnreferenceDataBlock.c)
 *     EtwpApplyTransientFilters @ 0x140897D84 (EtwpApplyTransientFilters.c)
 *     EtwpFreeFilterInfo @ 0x140897E14 (EtwpFreeFilterInfo.c)
 *     EtwpAccessCheck @ 0x140898E74 (EtwpAccessCheck.c)
 *     EtwpCheckGuidAccess @ 0x140898F2C (EtwpCheckGuidAccess.c)
 *     EtwpSendDataBlock @ 0x14089AEF8 (EtwpSendDataBlock.c)
 *     EtwpFindGuidEntryByGuid @ 0x14089B9B0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUnreferenceGuidEntry @ 0x14089E370 (EtwpUnreferenceGuidEntry.c)
 *     EtwpAllocDataBlock @ 0x1409FB358 (EtwpAllocDataBlock.c)
 *     EtwpCreateUmReplyObject @ 0x140A74164 (EtwpCreateUmReplyObject.c)
 *     EtwpDemuxPrivateTraceHandle @ 0x140AB0B54 (EtwpDemuxPrivateTraceHandle.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x140AB0CB8 (EtwpCheckCurrentUserProcessAccess.c)
 */

__int64 __fastcall EtwpNotifyGuid(__int64 a1, __int64 a2, char a3)
{
  int v6; // r13d
  __int64 v7; // r8
  int v8; // ebx
  ACCESS_MASK v9; // ebx
  unsigned int v10; // esi
  __int64 GuidEntryByGuid; // rax
  unsigned __int64 *v12; // rsi
  int UmReplyObject; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v16; // rax
  __int64 *v17; // r14
  unsigned __int64 **v18; // r15
  int v19; // r14d
  unsigned __int64 *i; // rbx
  __int16 v21; // ax
  int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // rax
  signed __int64 v25; // rax
  signed __int64 v26; // rdx
  unsigned __int64 v27; // rtt
  bool v28; // zf
  unsigned int ProcessId; // eax
  unsigned __int64 v30; // rcx
  unsigned int v31; // eax
  unsigned int v32; // [rsp+20h] [rbp-79h]
  __int64 v33; // [rsp+40h] [rbp-59h]
  __int64 v34; // [rsp+48h] [rbp-51h] BYREF
  _BYTE v35[160]; // [rsp+50h] [rbp-49h] BYREF
  __int16 v36; // [rsp+108h] [rbp+6Fh] BYREF
  int v37; // [rsp+118h] [rbp+7Fh]

  v34 = 0LL;
  LOBYTE(v32) = 0;
  v6 = 0;
  v33 = 0LL;
  memset_0(v35, 0, 0x68uLL);
  v7 = *(unsigned int *)(a2 + 4);
  if ( (unsigned int)v7 > 0x10000 )
    return 3221225990LL;
  v8 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 == 11 )
  {
    if ( (unsigned int)v7 < 0x78 || (v30 = (*(_DWORD *)(a2 + 72) + 7) & 0xFFFFFFF8, v30 >= v7 - 76) )
    {
      UmReplyObject = -2147483643;
      goto LABEL_10;
    }
    v31 = *(_DWORD *)(v30 + a2 + 72);
    if ( v31 )
    {
      v33 = v30 + a2 + 76;
      if ( (unsigned int)EtwpValidateTraceControlFilterDescriptors(v31, v33, (int)v7 - ((int)v30 + 76), (__int64)v35) )
      {
        UmReplyObject = -1073741811;
        goto LABEL_10;
      }
    }
    *(_DWORD *)a2 = 4;
    v8 = 4;
  }
  *(_DWORD *)(a2 + 36) = PsGetCurrentThreadProcessId();
  if ( v8 == 4 )
  {
    if ( *(_DWORD *)(a2 + 4) < 0xF8u )
    {
      UmReplyObject = -1073741789;
      goto LABEL_10;
    }
    v9 = 128;
    v10 = 0;
    v32 = (unsigned int)EtwpCheckGuidAccess(&PrivateLoggerSecurityGuid, 128LL, 0LL) >> 31;
    *(GUID *)(a2 + 40) = PrivateLoggerNotificationGuid;
  }
  else
  {
    v9 = 4;
    v10 = 1;
  }
  v37 = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(a2 + 20) = 0;
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(a1, a2 + 40, v10);
  v12 = (unsigned __int64 *)GuidEntryByGuid;
  if ( !GuidEntryByGuid )
  {
    UmReplyObject = -1073741163;
    goto LABEL_10;
  }
  if ( a3 )
  {
    if ( *(_DWORD *)a2 != 4 )
    {
      UmReplyObject = EtwpAccessCheck(*(PSECURITY_DESCRIPTOR *)(GuidEntryByGuid + 72), v9);
      if ( UmReplyObject < 0 )
        goto LABEL_9;
    }
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v16 = KeAbPreAcquire((__int64)(v12 + 51), 0LL);
  v17 = v16;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v12 + 102, 0LL) )
    ExfAcquirePushLockExclusiveEx(v12 + 51, v16, (__int64)(v12 + 51));
  if ( v17 )
    *((_BYTE *)v17 + 10) = 1;
  v18 = (unsigned __int64 **)(v12 + 7);
  v12[52] = (unsigned __int64)KeGetCurrentThread();
  if ( *v18 == (unsigned __int64 *)v18 )
  {
    UmReplyObject = -1073741162;
    goto LABEL_35;
  }
  if ( *(_BYTE *)(a2 + 12) )
  {
    UmReplyObject = EtwpCreateUmReplyObject((ULONG_PTR)v12, (__int64)&v34);
    if ( UmReplyObject < 0 )
      goto LABEL_35;
    *(_QWORD *)(a2 + 24) = 0LL;
  }
  v19 = EtwpAllocDataBlock(*(unsigned int *)(a2 + 4), (void *)a2);
  if ( v19 < 0 )
  {
LABEL_43:
    UmReplyObject = -1073741801;
    goto LABEL_35;
  }
  for ( i = *v18; i != v12 + 7; i = (unsigned __int64 *)*i )
  {
    v21 = *((_WORD *)i + 49);
    if ( (v21 & 2) != 0 && (v21 & 0x20) == 0 && (!v33 || (unsigned __int8)EtwpApplyTransientFilters(i, v35)) )
    {
      if ( !v37 || (v23 = (unsigned int)PsGetProcessId((PEPROCESS)i[10]), v23 == v37) )
      {
        if ( !(_BYTE)v32 || (v19 = EtwpCheckCurrentUserProcessAccess(i[10]), v19 >= 0) )
        {
          if ( *(_DWORD *)a2 == 4 )
          {
            v28 = *(_DWORD *)(a2 + 76) == 1;
            v36 = 0;
            if ( !v28 )
            {
              ProcessId = (unsigned int)PsGetProcessId((PEPROCESS)i[10]);
              v19 = EtwpDemuxPrivateTraceHandle(ProcessId, *(_WORD *)(a2 + 80) & 0x7FFF, &v36);
              if ( v19 < 0 )
                continue;
              v19 = EtwpAllocDataBlock(*(unsigned int *)(a2 + 4), (void *)a2);
              if ( v19 < 0 )
                goto LABEL_43;
              MEMORY[0x50] = v36;
            }
          }
          v22 = EtwpSendDataBlock(i, 0LL);
          if ( v22 < 0 )
            v19 = v22;
          else
            ++v6;
        }
      }
    }
  }
  v24 = v34;
  UmReplyObject = 0;
  *(_DWORD *)(a2 + 20) = v6;
  if ( !v6 )
    UmReplyObject = v19;
  *(_QWORD *)(a2 + 24) = v24;
LABEL_35:
  v12[52] = 0LL;
  _m_prefetchw(v12 + 51);
  v25 = v12[51];
  v26 = v25 - 16;
  if ( (v25 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v26 = 0LL;
  if ( (v25 & 2) != 0
    || (v27 = v12[51], v27 != _InterlockedCompareExchange64((volatile signed __int64 *)v12 + 51, v26, v25)) )
  {
    ExfReleasePushLock(v12 + 51);
  }
  KeAbPostRelease((ULONG_PTR)(v12 + 51));
  KeLeaveCriticalRegion();
LABEL_9:
  EtwpUnreferenceGuidEntry(v12);
LABEL_10:
  EtwpFreeFilterInfo(v35);
  return (unsigned int)UmReplyObject;
}
