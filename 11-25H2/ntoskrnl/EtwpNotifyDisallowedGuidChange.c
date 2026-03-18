/*
 * XREFs of EtwpNotifyDisallowedGuidChange @ 0x1409EED94
 * Callers:
 *     EtwpUpdateDisallowedGuids @ 0x1409EE97C (EtwpUpdateDisallowedGuids.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     PsGetCurrentThreadProcessId @ 0x140431FB0 (PsGetCurrentThreadProcessId.c)
 *     EtwpUnreferenceDataBlock @ 0x140896A38 (EtwpUnreferenceDataBlock.c)
 *     EtwpIsGuidAllowed @ 0x14089AB9C (EtwpIsGuidAllowed.c)
 *     EtwpSendDataBlock @ 0x14089AEF8 (EtwpSendDataBlock.c)
 *     EtwpCalculateUpdateNotification @ 0x14089B0D4 (EtwpCalculateUpdateNotification.c)
 *     EtwpFindGuidEntryByGuid @ 0x14089B9B0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUnreferenceGuidEntry @ 0x14089E370 (EtwpUnreferenceGuidEntry.c)
 *     EtwpUpdateRegEntryEnableMask @ 0x1409EF1BC (EtwpUpdateRegEntryEnableMask.c)
 *     EtwpBuildNotificationPacket @ 0x1409EF2A0 (EtwpBuildNotificationPacket.c)
 */

_QWORD *__fastcall EtwpNotifyDisallowedGuidChange(_DWORD *a1, __int64 a2, int a3)
{
  _QWORD *result; // rax
  _QWORD *v7; // rsi
  struct _KTHREAD *CurrentThread; // r9
  unsigned __int64 *v9; // rbx
  __int64 *v10; // rax
  __int64 *v11; // rdi
  int v12; // eax
  __int64 v13; // rdi
  _QWORD *v14; // rbp
  _QWORD *v15; // rcx
  _QWORD *v16; // r14
  _QWORD *v17; // r15
  char v18; // si
  _QWORD *v19; // rax
  __int64 v20; // r13
  __int64 v21; // rcx
  char *v22; // r12
  unsigned int v24; // edx
  int v25; // r9d
  unsigned int v26; // r8d
  signed __int64 v27; // rax
  signed __int64 v28; // rdx
  __int64 v29; // rtt
  unsigned __int8 v30; // r14
  unsigned __int8 v31; // bl
  bool updated; // al
  bool v33; // bl
  struct _KTHREAD *v34; // rax
  __int64 *v35; // rax
  __int64 *v36; // rdi
  __int64 v37; // rax
  _QWORD *v38; // rax
  signed __int64 v39; // rax
  signed __int64 v40; // rdx
  __int64 v41; // rtt
  volatile signed __int32 *v42; // [rsp+40h] [rbp-68h] BYREF
  _QWORD *v43; // [rsp+48h] [rbp-60h]
  _QWORD *v44; // [rsp+50h] [rbp-58h]
  _QWORD *v45; // [rsp+58h] [rbp-50h]
  _QWORD *v46; // [rsp+60h] [rbp-48h]
  char v49; // [rsp+C8h] [rbp+20h]
  volatile signed __int32 *v50; // [rsp+C8h] [rbp+20h]

  v42 = 0LL;
  result = EtwpFindGuidEntryByGuid(*(_QWORD *)(a2 + 1360), a1, 0);
  v46 = result;
  v7 = result;
  if ( result )
  {
    CurrentThread = KeGetCurrentThread();
    v9 = result + 51;
    --CurrentThread->KernelApcDisable;
    v10 = KeAbPreAcquire((__int64)(result + 51), 0LL);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      ExfAcquirePushLockExclusiveEx(v9, v10, (__int64)v9);
    if ( v11 )
      *((_BYTE *)v11 + 10) = 1;
    v7[52] = KeGetCurrentThread();
    v12 = EtwpBuildNotificationPacket(v7, 0LL, 0LL, &v42);
    v13 = (__int64)v42;
    if ( !v12 )
    {
      *v42 = 3;
      *(_OWORD *)(v13 + 40) = *(_OWORD *)a1;
      *(_DWORD *)(v13 + 36) = PsGetCurrentThreadProcessId();
      if ( EtwpIsGuidAllowed(a2, a1) != (a3 == 0) )
      {
        v14 = 0LL;
        v44 = 0LL;
        if ( !v7[50] )
        {
          v15 = (_QWORD *)v7[2];
          if ( v15 != v7 + 2 )
          {
            v14 = v15 - 2;
            v44 = v15 - 2;
          }
        }
        v16 = v7;
        v45 = v7;
        v49 = 0;
        while ( 1 )
        {
          v17 = (_QWORD *)v16[7];
          v43 = v16 + 7;
          if ( v17 != v16 + 7 )
          {
            v18 = v49;
            v19 = v16 + 7;
            do
            {
              v20 = (__int64)v17;
              v17 = (_QWORD *)*v17;
              v21 = *(_QWORD *)(v20 + 40);
              if ( v21 )
              {
                if ( v18 )
                {
                  v21 = *(_QWORD *)(v21 + 400);
                  v22 = (char *)(v20 + 103);
                }
                else
                {
                  v22 = (char *)(v20 + 101);
                }
                if ( !(a3 ? *(_DWORD *)(v21 + 96) == 0 : *v22 == 0) )
                {
                  v24 = 0;
                  v25 = *(_DWORD *)a2;
                  while ( 1 )
                  {
                    if ( v24 >= 8 )
                      goto LABEL_24;
                    v26 = v24;
                    if ( *(unsigned __int16 *)(32LL * v24 + v21 + 134) == v25 )
                    {
                      if ( *(_DWORD *)(32 * (v24 + 4LL) + v21) )
                        break;
                    }
                    ++v24;
                  }
                  v30 = 1 << v24;
                  if ( !(1 << v24) || !a3 && (v30 & (unsigned __int8)*v22) == 0 )
                  {
LABEL_24:
                    v19 = v43;
                    continue;
                  }
                  v31 = *v22;
                  LOBYTE(v25) = 2;
                  LOBYTE(v26) = 1 << v24;
                  EtwpUpdateRegEntryEnableMask(v20, a2, v26, v25, v18, a3);
                  v50 = (volatile signed __int32 *)v13;
                  updated = EtwpCalculateUpdateNotification(v20, v30, v31, *v22, 2, v18, a3, (__int64 *)&v42);
                  v13 = (__int64)v42;
                  v33 = updated;
                  if ( v50 != v42 )
                  {
                    if ( v42 )
                    {
                      EtwpUnreferenceDataBlock(v50);
                    }
                    else
                    {
                      v13 = (__int64)v50;
                      v42 = v50;
                    }
                  }
                  if ( v33 )
                    EtwpSendDataBlock(v20, (_DWORD *)v13);
                  v19 = v43;
                }
              }
            }
            while ( v17 != v19 );
            v7 = v46;
            v14 = v44;
            v16 = v45;
          }
          if ( v16 != v7 )
          {
            v16[52] = 0LL;
            _m_prefetchw(v16 + 51);
            v39 = v16[51];
            v40 = v39 - 16;
            if ( (v39 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
              v40 = 0LL;
            if ( (v39 & 2) != 0 || (v41 = v16[51], v41 != _InterlockedCompareExchange64(v16 + 51, v40, v39)) )
              ExfReleasePushLock(v16 + 51);
            KeAbPostRelease((ULONG_PTR)(v16 + 51));
            KeLeaveCriticalRegion();
            v13 = (__int64)v42;
          }
          if ( !v14 )
            break;
          v34 = KeGetCurrentThread();
          v49 = 1;
          v45 = v14;
          v16 = v14;
          --v34->KernelApcDisable;
          v35 = KeAbPreAcquire((__int64)(v14 + 51), 0LL);
          v36 = v35;
          if ( _interlockedbittestandset64((volatile signed __int32 *)v14 + 102, 0LL) )
            ExfAcquirePushLockExclusiveEx(v14 + 51, v35, (__int64)(v14 + 51));
          if ( v36 )
            *((_BYTE *)v36 + 10) = 1;
          v13 = (__int64)v42;
          v14[52] = KeGetCurrentThread();
          v37 = v14[2];
          v14 = 0LL;
          v38 = (_QWORD *)(v37 - 16);
          if ( v38 != v7 )
            v14 = v38;
          v44 = v14;
        }
      }
    }
    if ( v13 )
      EtwpUnreferenceDataBlock((volatile signed __int32 *)v13);
    v7[52] = 0LL;
    _m_prefetchw(v7 + 51);
    v27 = v7[51];
    v28 = v27 - 16;
    if ( (v27 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v28 = 0LL;
    if ( (v27 & 2) != 0 || (v29 = v7[51], v29 != _InterlockedCompareExchange64(v7 + 51, v28, v27)) )
      ExfReleasePushLock(v7 + 51);
    KeAbPostRelease((ULONG_PTR)(v7 + 51));
    KeLeaveCriticalRegion();
    return (_QWORD *)EtwpUnreferenceGuidEntry(v7);
  }
  return result;
}
