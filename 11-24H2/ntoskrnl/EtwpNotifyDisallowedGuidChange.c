/*
 * XREFs of EtwpNotifyDisallowedGuidChange @ 0x1408332EC
 * Callers:
 *     EtwpUpdateDisallowedGuids @ 0x140831C00 (EtwpUpdateDisallowedGuids.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PsGetCurrentThreadProcessId @ 0x14041D840 (PsGetCurrentThreadProcessId.c)
 *     EtwpBuildNotificationPacket @ 0x1408321B8 (EtwpBuildNotificationPacket.c)
 *     EtwpIsGuidAllowed @ 0x140833108 (EtwpIsGuidAllowed.c)
 *     EtwpSendDataBlock @ 0x140834A64 (EtwpSendDataBlock.c)
 *     EtwpUnreferenceDataBlock @ 0x140836678 (EtwpUnreferenceDataBlock.c)
 *     EtwpCalculateUpdateNotification @ 0x1408376F0 (EtwpCalculateUpdateNotification.c)
 *     EtwpUpdateRegEntryEnableMask @ 0x140838494 (EtwpUpdateRegEntryEnableMask.c)
 *     EtwpFindGuidEntryByGuid @ 0x140838880 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUnreferenceGuidEntry @ 0x140839DC0 (EtwpUnreferenceGuidEntry.c)
 */

__int64 __fastcall EtwpNotifyDisallowedGuidChange(_OWORD *a1, __int64 a2, int a3)
{
  __int64 result; // rax
  _QWORD *v7; // rbp
  struct _KTHREAD *CurrentThread; // r9
  unsigned __int64 *v9; // rbx
  char *v10; // rax
  char *v11; // rdi
  int v12; // eax
  _DWORD *v13; // rsi
  _QWORD *v14; // r14
  _QWORD *v15; // rcx
  _QWORD *v16; // r13
  _QWORD *v17; // r15
  char v18; // bp
  _QWORD *v19; // rax
  _QWORD *v20; // r13
  __int64 v21; // rcx
  unsigned __int16 *v22; // r12
  unsigned int v24; // edx
  int v25; // r9d
  unsigned __int8 v26; // al
  unsigned __int16 v27; // bx
  unsigned __int16 v28; // di
  char updated; // al
  char v30; // bl
  signed __int64 v31; // rax
  signed __int64 v32; // rdx
  __int64 v33; // rtt
  struct _KTHREAD *v34; // rax
  char *v35; // rax
  char *v36; // rdi
  __int64 v37; // rax
  _QWORD *v38; // rax
  signed __int64 v39; // rax
  signed __int64 v40; // rdx
  __int64 v41; // rtt
  _DWORD *v42; // [rsp+40h] [rbp-68h] BYREF
  _QWORD *v43; // [rsp+48h] [rbp-60h]
  _QWORD *v44; // [rsp+50h] [rbp-58h]
  _QWORD *v45; // [rsp+58h] [rbp-50h]
  _QWORD *v46; // [rsp+60h] [rbp-48h]
  char v49; // [rsp+C8h] [rbp+20h]
  _DWORD *v50; // [rsp+C8h] [rbp+20h]

  v42 = 0LL;
  result = EtwpFindGuidEntryByGuid(*(_QWORD *)(a2 + 1360), a1, 0LL);
  v46 = (_QWORD *)result;
  v7 = (_QWORD *)result;
  if ( result )
  {
    CurrentThread = KeGetCurrentThread();
    v9 = (unsigned __int64 *)(result + 664);
    --CurrentThread->KernelApcDisable;
    v10 = (char *)KeAbPreAcquire(result + 664, 0LL);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      ExfAcquirePushLockExclusiveEx(v9, v10, (__int64)v9);
    if ( v11 )
      v11[10] = 1;
    v7[84] = KeGetCurrentThread();
    v12 = EtwpBuildNotificationPacket((__int64)v7, 0LL, 0, (__int64 *)&v42);
    v13 = v42;
    if ( !v12 )
    {
      *v42 = 3;
      *(_OWORD *)(v13 + 10) = *a1;
      v13[9] = PsGetCurrentThreadProcessId();
      if ( EtwpIsGuidAllowed(a2, a1) != (a3 == 0) )
      {
        v14 = 0LL;
        v44 = 0LL;
        if ( !v7[82] )
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
              v20 = v17;
              v17 = (_QWORD *)*v17;
              v21 = v20[5];
              if ( v21 )
              {
                if ( v18 )
                {
                  v21 = *(_QWORD *)(v21 + 656);
                  v22 = (unsigned __int16 *)v20 + 53;
                }
                else
                {
                  v22 = (unsigned __int16 *)v20 + 51;
                }
                if ( !(a3 ? *(_DWORD *)(v21 + 96) == 0 : *v22 == 0) )
                {
                  v24 = 0;
                  v25 = *(_DWORD *)a2;
                  while ( v24 < 0x10 )
                  {
                    if ( *(unsigned __int16 *)(32LL * v24 + v21 + 134) == v25 && *(_DWORD *)(32 * (v24 + 4LL) + v21) )
                    {
                      v26 = 1 << v24;
                      if ( 1 << v24 && (a3 || (v26 & *(_BYTE *)v22) != 0) )
                      {
                        v27 = *v22;
                        LOBYTE(v25) = 2;
                        v28 = v26;
                        EtwpUpdateRegEntryEnableMask((_DWORD)v20, a2, v26, v25, v18, a3);
                        v50 = v13;
                        updated = EtwpCalculateUpdateNotification(
                                    (_DWORD)v20,
                                    v28,
                                    v27,
                                    *v22,
                                    2,
                                    v18,
                                    a3,
                                    (__int64)&v42);
                        v13 = v42;
                        v30 = updated;
                        if ( v50 != v42 )
                        {
                          if ( v42 )
                          {
                            EtwpUnreferenceDataBlock(v50);
                          }
                          else
                          {
                            v13 = v50;
                            v42 = v50;
                          }
                        }
                        if ( v30 )
                          EtwpSendDataBlock(v20, v13);
                      }
                      break;
                    }
                    ++v24;
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
            v13 = v42;
          }
          if ( !v14 )
            break;
          v34 = KeGetCurrentThread();
          v49 = 1;
          v45 = v14;
          v16 = v14;
          --v34->KernelApcDisable;
          v35 = (char *)KeAbPreAcquire((__int64)(v14 + 83), 0LL);
          v36 = v35;
          if ( _interlockedbittestandset64((volatile signed __int32 *)v14 + 166, 0LL) )
            ExfAcquirePushLockExclusiveEx(v14 + 83, v35, (__int64)(v14 + 83));
          if ( v36 )
            v36[10] = 1;
          v13 = v42;
          v14[84] = KeGetCurrentThread();
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
      EtwpUnreferenceDataBlock(v13);
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
    return EtwpUnreferenceGuidEntry((ULONG_PTR)v7);
  }
  return result;
}
