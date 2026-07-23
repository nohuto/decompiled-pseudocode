/*
 * XREFs of EtwpNotifyGuid @ 0x140834644
 * Callers:
 *     EtwpSendSessionNotification @ 0x1409D4E48 (EtwpSendSessionNotification.c)
 *     NtTraceControl @ 0x140A82250 (NtTraceControl.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PsGetCurrentThreadProcessId @ 0x14041D840 (PsGetCurrentThreadProcessId.c)
 *     PsGetProcessId @ 0x140427BE0 (PsGetProcessId.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     EtwpValidateTraceControlFilterDescriptors @ 0x1407B3E44 (EtwpValidateTraceControlFilterDescriptors.c)
 *     EtwpAllocDataBlock @ 0x140832D04 (EtwpAllocDataBlock.c)
 *     EtwpDemuxPrivateTraceHandle @ 0x140832DA0 (EtwpDemuxPrivateTraceHandle.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x1408331C0 (EtwpCheckCurrentUserProcessAccess.c)
 *     EtwpSendDataBlock @ 0x140834A64 (EtwpSendDataBlock.c)
 *     EtwpApplyTransientFilters @ 0x140834EC8 (EtwpApplyTransientFilters.c)
 *     EtwpFreeFilterInfo @ 0x140834F58 (EtwpFreeFilterInfo.c)
 *     EtwpUnreferenceDataBlock @ 0x140836678 (EtwpUnreferenceDataBlock.c)
 *     EtwpAccessCheck @ 0x14083669C (EtwpAccessCheck.c)
 *     EtwpCheckGuidAccess @ 0x140836754 (EtwpCheckGuidAccess.c)
 *     EtwpFindGuidEntryByGuid @ 0x140838880 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUnreferenceGuidEntry @ 0x140839DC0 (EtwpUnreferenceGuidEntry.c)
 *     EtwpCreateUmReplyObject @ 0x140A703BC (EtwpCreateUmReplyObject.c)
 */

__int64 __fastcall EtwpNotifyGuid(__int64 a1, __int64 a2, char a3)
{
  int v6; // r13d
  __int64 v7; // r8
  int v8; // ebx
  ACCESS_MASK v9; // ebx
  unsigned int v10; // esi
  __int64 GuidEntryByGuid; // rax
  ULONG_PTR v12; // rsi
  int UmReplyObject; // ebx
  struct _KTHREAD *CurrentThread; // rax
  char *v16; // rax
  char *v17; // r14
  _QWORD *v18; // r15
  int v19; // r14d
  _QWORD *v20; // rbx
  __int64 v21; // r15
  __int16 v22; // ax
  __int64 v23; // r12
  int v24; // eax
  unsigned int v25; // eax
  __int64 v26; // rax
  signed __int64 v27; // rax
  signed __int64 v28; // rdx
  __int64 v29; // rtt
  bool v30; // zf
  unsigned int ProcessId; // eax
  unsigned __int64 v32; // rcx
  unsigned int v33; // eax
  unsigned int v34; // [rsp+20h] [rbp-79h]
  __int64 v35; // [rsp+28h] [rbp-71h] BYREF
  __int64 v36; // [rsp+30h] [rbp-69h] BYREF
  PVOID Object; // [rsp+38h] [rbp-61h]
  __int64 v38; // [rsp+40h] [rbp-59h]
  __int64 v39; // [rsp+48h] [rbp-51h] BYREF
  _BYTE v40[160]; // [rsp+50h] [rbp-49h] BYREF
  unsigned __int16 v41; // [rsp+108h] [rbp+6Fh] BYREF
  int v42; // [rsp+118h] [rbp+7Fh]

  v39 = 0LL;
  Object = 0LL;
  v36 = 0LL;
  v35 = 0LL;
  LOBYTE(v34) = 0;
  v6 = 0;
  v38 = 0LL;
  memset_0(v40, 0, 0x68uLL);
  v7 = *(unsigned int *)(a2 + 4);
  if ( (unsigned int)v7 > 0x10000 )
    return 3221225990LL;
  v8 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 == 11 )
  {
    if ( (unsigned int)v7 < 0x78 || (v32 = (*(_DWORD *)(a2 + 72) + 7) & 0xFFFFFFF8, v32 >= v7 - 76) )
    {
      UmReplyObject = -2147483643;
      goto LABEL_10;
    }
    v33 = *(_DWORD *)(v32 + a2 + 72);
    if ( v33 )
    {
      v38 = v32 + a2 + 76;
      if ( (unsigned int)EtwpValidateTraceControlFilterDescriptors(v33, v38, (int)v7 - ((int)v32 + 76), (__int64)v40) )
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
    v34 = (unsigned int)EtwpCheckGuidAccess(&PrivateLoggerSecurityGuid, 128LL, 0LL) >> 31;
    *(GUID *)(a2 + 40) = PrivateLoggerNotificationGuid;
  }
  else
  {
    v9 = 4;
    v10 = 1;
  }
  v42 = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(a2 + 20) = 0;
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(a1, a2 + 40, v10);
  v12 = GuidEntryByGuid;
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
  v16 = (char *)KeAbPreAcquire(v12 + 664, 0LL);
  v17 = v16;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 664), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v12 + 664), v16, v12 + 664);
  if ( v17 )
    v17[10] = 1;
  v18 = (_QWORD *)(v12 + 56);
  *(_QWORD *)(v12 + 672) = KeGetCurrentThread();
  if ( (_QWORD *)*v18 == v18 )
  {
    UmReplyObject = -1073741162;
    goto LABEL_35;
  }
  if ( *(_BYTE *)(a2 + 12) )
  {
    UmReplyObject = EtwpCreateUmReplyObject(v12, (__int64)&v39);
    if ( UmReplyObject < 0 )
      goto LABEL_35;
    *(_QWORD *)(a2 + 24) = Object;
  }
  v19 = EtwpAllocDataBlock(*(unsigned int *)(a2 + 4), (void *)a2, &v36);
  if ( v19 < 0 )
  {
LABEL_48:
    UmReplyObject = -1073741801;
    goto LABEL_35;
  }
  v20 = (_QWORD *)*v18;
  v21 = v35;
  while ( v20 != (_QWORD *)(v12 + 56) )
  {
    v22 = *((_WORD *)v20 + 49);
    v23 = v36;
    if ( (v22 & 2) != 0 && (v22 & 0x20) == 0 && (!v38 || (unsigned __int8)EtwpApplyTransientFilters(v20, v40)) )
    {
      if ( !v42 || (v25 = (unsigned int)PsGetProcessId((PEPROCESS)v20[10]), v25 == v42) )
      {
        if ( !(_BYTE)v34 || (v19 = EtwpCheckCurrentUserProcessAccess(v20[10]), v19 >= 0) )
        {
          if ( *(_DWORD *)a2 == 4 )
          {
            v30 = *(_DWORD *)(a2 + 76) == 1;
            v41 = 0;
            if ( !v30 )
            {
              ProcessId = (unsigned int)PsGetProcessId((PEPROCESS)v20[10]);
              v19 = EtwpDemuxPrivateTraceHandle(ProcessId, *(_WORD *)(a2 + 80) & 0x7FFF, &v41);
              if ( v19 < 0 )
                goto LABEL_29;
              if ( v21 )
              {
                EtwpUnreferenceDataBlock(v21);
                v35 = 0LL;
              }
              v19 = EtwpAllocDataBlock(*(unsigned int *)(a2 + 4), (void *)a2, &v35);
              if ( v19 < 0 )
                goto LABEL_48;
              v21 = v35;
              v23 = v35;
              *(_WORD *)(v35 + 80) = v41;
            }
          }
          v24 = EtwpSendDataBlock(v20, v23);
          if ( v24 < 0 )
            v19 = v24;
          else
            ++v6;
        }
      }
    }
LABEL_29:
    v20 = (_QWORD *)*v20;
  }
  v26 = v39;
  UmReplyObject = 0;
  *(_DWORD *)(a2 + 20) = v6;
  if ( !v6 )
    UmReplyObject = v19;
  *(_QWORD *)(a2 + 24) = v26;
LABEL_35:
  *(_QWORD *)(v12 + 672) = 0LL;
  _m_prefetchw((const void *)(v12 + 664));
  v27 = *(_QWORD *)(v12 + 664);
  v28 = v27 - 16;
  if ( (v27 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v28 = 0LL;
  if ( (v27 & 2) != 0
    || (v29 = *(_QWORD *)(v12 + 664),
        v29 != _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 664), v28, v27)) )
  {
    ExfReleasePushLock((_QWORD *)(v12 + 664));
  }
  KeAbPostRelease(v12 + 664);
  KeLeaveCriticalRegion();
  if ( v36 )
    EtwpUnreferenceDataBlock(v36);
  if ( v35 )
    EtwpUnreferenceDataBlock(v35);
  if ( Object )
    ObfDereferenceObject(Object);
LABEL_9:
  EtwpUnreferenceGuidEntry(v12);
LABEL_10:
  EtwpFreeFilterInfo(v40);
  return (unsigned int)UmReplyObject;
}
