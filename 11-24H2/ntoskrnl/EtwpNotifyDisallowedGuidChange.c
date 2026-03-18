/*
 * XREFs of EtwpNotifyDisallowedGuidChange @ 0x1409F6160
 * Callers:
 *     EtwpUpdateDisallowedGuids @ 0x1409F5D48 (EtwpUpdateDisallowedGuids.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     PsGetCurrentThreadProcessId @ 0x1404296F0 (PsGetCurrentThreadProcessId.c)
 *     EtwpUnreferenceDataBlock @ 0x140835FF0 (EtwpUnreferenceDataBlock.c)
 *     EtwpIsGuidAllowed @ 0x14083A0B4 (EtwpIsGuidAllowed.c)
 *     EtwpSendDataBlock @ 0x14083A3F4 (EtwpSendDataBlock.c)
 *     EtwpCalculateUpdateNotification @ 0x14083A5D0 (EtwpCalculateUpdateNotification.c)
 *     EtwpFindGuidEntryByGuid @ 0x14083AEE0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUnreferenceGuidEntry @ 0x14083D760 (EtwpUnreferenceGuidEntry.c)
 *     EtwpUpdateRegEntryEnableMask @ 0x14083EBF0 (EtwpUpdateRegEntryEnableMask.c)
 *     EtwpBuildNotificationPacket @ 0x1409F6588 (EtwpBuildNotificationPacket.c)
 */

_QWORD *__fastcall EtwpNotifyDisallowedGuidChange(_DWORD *a1, __int64 a2, unsigned int a3)
{
  _QWORD *result; // rax
  __int64 *v7; // rbp
  struct _KTHREAD *CurrentThread; // r9
  unsigned __int64 *v9; // rbx
  _QWORD *v10; // rax
  _QWORD *v11; // rdi
  int v12; // eax
  __int64 v13; // rsi
  __int64 *v14; // r14
  __int64 *v15; // rcx
  __int64 *v16; // r13
  __int64 *v17; // r15
  char v18; // bp
  __int64 *v19; // rax
  __int64 v20; // r13
  __int64 v21; // rcx
  __int16 *v22; // r12
  unsigned int i; // edx
  unsigned __int8 v25; // al
  unsigned __int16 v26; // bx
  unsigned __int16 v27; // di
  bool updated; // al
  __int64 v29; // r8
  bool v30; // bl
  signed __int64 v31; // rax
  signed __int64 v32; // rdx
  __int64 v33; // rtt
  struct _KTHREAD *v34; // rax
  _QWORD *v35; // rax
  _QWORD *v36; // rdi
  __int64 v37; // rax
  __int64 *v38; // rax
  signed __int64 v39; // rax
  signed __int64 v40; // rdx
  __int64 v41; // rtt
  volatile signed __int32 *v42; // [rsp+40h] [rbp-68h] BYREF
  __int64 *v43; // [rsp+48h] [rbp-60h]
  __int64 *v44; // [rsp+50h] [rbp-58h]
  __int64 *v45; // [rsp+58h] [rbp-50h]
  __int64 *v46; // [rsp+60h] [rbp-48h]
  char v49; // [rsp+C8h] [rbp+20h]
  volatile signed __int32 *v50; // [rsp+C8h] [rbp+20h]

  v42 = 0LL;
  result = EtwpFindGuidEntryByGuid(*(_QWORD *)(a2 + 1360), a1, 0);
  v46 = result;
  v7 = result;
  if ( result )
  {
    CurrentThread = KeGetCurrentThread();
    v9 = result + 83;
    --CurrentThread->KernelApcDisable;
    v10 = KeAbPreAcquire((__int64)(result + 83), 0LL);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      ExfAcquirePushLockExclusiveEx(v9, (__int64)v10, (__int64)v9);
    if ( v11 )
      *((_BYTE *)v11 + 10) = 1;
    v7[84] = (__int64)KeGetCurrentThread();
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
        if ( !v7[82] )
        {
          v15 = (__int64 *)v7[2];
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
          v17 = (__int64 *)v16[7];
          v43 = v16 + 7;
          if ( v17 != v16 + 7 )
          {
            v18 = v49;
            v19 = v16 + 7;
            do
            {
              v20 = (__int64)v17;
              v17 = (__int64 *)*v17;
              v21 = *(_QWORD *)(v20 + 40);
              if ( v21 )
              {
                if ( v18 )
                {
                  v21 = *(_QWORD *)(v21 + 656);
                  v22 = (__int16 *)(v20 + 106);
                }
                else
                {
                  v22 = (__int16 *)(v20 + 102);
                }
                if ( !(a3 ? *(_DWORD *)(v21 + 96) == 0 : *v22 == 0) )
                {
                  for ( i = 0; i < 0x10; ++i )
                  {
                    if ( *(unsigned __int16 *)(32LL * i + v21 + 134) == *(_DWORD *)a2
                      && *(_DWORD *)(32 * (i + 4LL) + v21) )
                    {
                      v25 = 1 << i;
                      if ( 1 << i && (a3 || (v25 & *(_BYTE *)v22) != 0) )
                      {
                        v26 = *v22;
                        v27 = v25;
                        EtwpUpdateRegEntryEnableMask(v20, a2, v25, 2, v18, a3);
                        v50 = (volatile signed __int32 *)v13;
                        updated = EtwpCalculateUpdateNotification(v20, v27, v26, *v22, 2, v18, a3, (__int64 *)&v42);
                        v13 = (__int64)v42;
                        v30 = updated;
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
                        if ( v30 )
                          EtwpSendDataBlock(v20, v13, v29);
                      }
                      break;
                    }
                  }
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
            v16[84] = 0LL;
            _m_prefetchw(v16 + 83);
            v39 = v16[83];
            v40 = v39 - 16;
            if ( (v39 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
              v40 = 0LL;
            if ( (v39 & 2) != 0 || (v41 = v16[83], v41 != _InterlockedCompareExchange64(v16 + 83, v40, v39)) )
              ExfReleasePushLock(v16 + 83);
            KeAbPostRelease((ULONG_PTR)(v16 + 83));
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
          v35 = KeAbPreAcquire((__int64)(v14 + 83), 0LL);
          v36 = v35;
          if ( _interlockedbittestandset64((volatile signed __int32 *)v14 + 166, 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v14 + 83, (__int64)v35, (__int64)(v14 + 83));
          if ( v36 )
            *((_BYTE *)v36 + 10) = 1;
          v13 = (__int64)v42;
          v14[84] = (__int64)KeGetCurrentThread();
          v37 = v14[2];
          v14 = 0LL;
          v38 = (__int64 *)(v37 - 16);
          if ( v38 != v7 )
            v14 = v38;
          v44 = v14;
        }
      }
    }
    if ( v13 )
      EtwpUnreferenceDataBlock((volatile signed __int32 *)v13);
    v7[84] = 0LL;
    _m_prefetchw(v7 + 83);
    v31 = v7[83];
    v32 = v31 - 16;
    if ( (v31 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v32 = 0LL;
    if ( (v31 & 2) != 0 || (v33 = v7[83], v33 != _InterlockedCompareExchange64(v7 + 83, v32, v31)) )
      ExfReleasePushLock(v7 + 83);
    KeAbPostRelease((ULONG_PTR)(v7 + 83));
    KeLeaveCriticalRegion();
    return (_QWORD *)EtwpUnreferenceGuidEntry(v7);
  }
  return result;
}
