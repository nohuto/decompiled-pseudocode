/*
 * XREFs of PspEnableProcessOptionalXStateFeatures @ 0x140774AC0
 * Callers:
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 * Callees:
 *     MmDeleteKernelStack @ 0x14021FA40 (MmDeleteKernelStack.c)
 *     MmCreateKernelStack @ 0x1402207C0 (MmCreateKernelStack.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeInsertQueueApc @ 0x1402DF360 (KeInsertQueueApc.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeFlushProcessWriteBuffers @ 0x14039E2AC (KeFlushProcessWriteBuffers.c)
 *     PspLockProcessThreadListShared @ 0x1403E2A50 (PspLockProcessThreadListShared.c)
 *     PspUnlockProcessThreadListShared @ 0x1403E2AC0 (PspUnlockProcessThreadListShared.c)
 *     KeInitializeApc @ 0x1404163D0 (KeInitializeApc.c)
 *     KeGetProcessorNodeNumberByIndex @ 0x14042D440 (KeGetProcessorNodeNumberByIndex.c)
 *     KeCopyXfdMaskToPeb @ 0x1404A2E20 (KeCopyXfdMaskToPeb.c)
 *     KeEnableOptionalXStateFeaturesApc @ 0x1405B5D80 (KeEnableOptionalXStateFeaturesApc.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspEnableProcessOptionalXStateFeatures(__int64 a1, int a2)
{
  unsigned __int64 *v2; // r13
  __int64 v4; // r15
  __int64 v5; // r12
  unsigned int v6; // r14d
  __int64 v7; // rsi
  char *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // r12
  _QWORD **v11; // r13
  _QWORD *v12; // rcx
  unsigned __int64 v13; // rax
  __int64 Pool2; // rax
  _DWORD *v15; // rdx
  _QWORD *v16; // rcx
  _DWORD *v17; // r13
  __int64 v18; // r9
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rax
  __int64 *v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned int v24; // edi
  unsigned int v25; // r15d
  __int64 v26; // r12
  struct _KTHREAD *v27; // rax
  __int64 v28; // rax
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-89h]
  PVOID P; // [rsp+48h] [rbp-81h]
  __int64 v32; // [rsp+58h] [rbp-71h]
  __int128 v33; // [rsp+60h] [rbp-69h] BYREF
  __int128 v34; // [rsp+70h] [rbp-59h]
  __int128 v35; // [rsp+80h] [rbp-49h]
  int v36[2]; // [rsp+90h] [rbp-39h] BYREF
  __int64 v37; // [rsp+98h] [rbp-31h]
  __int64 v38; // [rsp+A0h] [rbp-29h]
  __int64 v39; // [rsp+A8h] [rbp-21h]
  __int128 v40; // [rsp+B0h] [rbp-19h]
  int v41[2]; // [rsp+C0h] [rbp-9h] BYREF
  __int64 v42; // [rsp+C8h] [rbp-1h]
  __int64 v43; // [rsp+D0h] [rbp+7h]
  __int64 v44; // [rsp+D8h] [rbp+Fh]
  __int128 v45; // [rsp+E0h] [rbp+17h]
  char *v47; // [rsp+140h] [rbp+77h]
  _QWORD *v48; // [rsp+140h] [rbp+77h]
  int v49; // [rsp+140h] [rbp+77h]
  int KernelStack; // [rsp+148h] [rbp+7Fh]

  P = 0LL;
  v2 = (unsigned __int64 *)(a1 + 1960);
  v33 = 0LL;
  v4 = a1;
  v34 = 0LL;
  v5 = 0LL;
  v6 = 0;
  v35 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v32 = 0LL;
  LODWORD(v7) = 0;
  KernelStack = 0;
  --CurrentThread->KernelApcDisable;
  v8 = (char *)KeAbPreAcquire(a1 + 1960, 0LL);
  v47 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
  {
    ExfAcquirePushLockExclusiveEx(v2, v8, (__int64)v2);
    v8 = v47;
  }
  if ( v8 )
    v8[10] = 1;
  v9 = a2 & 0x40000;
  if ( (v9 & *(_QWORD *)(v4 + 408)) == 0 )
  {
    v10 = (__int64)CurrentThread;
    goto LABEL_52;
  }
  PspLockProcessThreadListShared(v4, (__int64)CurrentThread);
  v11 = (_QWORD **)(v4 + 880);
  v12 = *(_QWORD **)(v4 + 880);
  if ( v12 == (_QWORD *)(v4 + 880) )
    goto LABEL_35;
  do
  {
    if ( (v9 & *(v12 - 42)) != 0 && (v12[5] & 1) == 0 )
      LODWORD(v7) = v7 + 1;
    v12 = (_QWORD *)*v12;
  }
  while ( v12 != v11 );
  if ( !(_DWORD)v7 )
  {
LABEL_35:
    v15 = 0LL;
LABEL_36:
    *(_QWORD *)(v4 + 408) &= ~v9;
    if ( (_DWORD)v7 )
      *v15 = v7;
    v24 = -1;
    v49 = -1;
    if ( (_DWORD)v7 )
    {
      v25 = 0;
      v26 = v5 + 112;
      v27 = CurrentThread;
      do
      {
        if ( *(struct _KTHREAD **)v26 == v27 )
        {
          v24 = v25;
          v49 = v25;
        }
        else
        {
          KeInitializeApc(
            v32 + ((unsigned __int64)v25 << 7),
            *(_QWORD *)v26,
            0,
            (__int64)KeEnableOptionalXStateFeaturesApc,
            0LL,
            0LL,
            0,
            0LL);
          if ( !(unsigned __int8)KeInsertQueueApc(v32 + ((unsigned __int64)v25 << 7), 0LL, 0LL, 0) )
          {
            v28 = *(_QWORD *)(v26 - 16);
            if ( v28 )
            {
              v42 = 0LL;
              v44 = v28;
              v43 = *(_QWORD *)v26;
              v45 = 0LL;
              v41[0] = 8;
              v41[1] = 5;
              MmDeleteKernelStack(v41);
            }
            if ( _InterlockedExchangeAdd(*(volatile signed __int32 **)(v26 + 8), 0xFFFFFFFF) == 1 )
              ExFreePoolWithTag(P, 0);
          }
          v24 = v49;
          v27 = CurrentThread;
        }
        ++v25;
        v26 += 128LL;
      }
      while ( v25 < (unsigned int)v7 );
      v6 = KernelStack;
      v4 = a1;
    }
    v10 = (__int64)CurrentThread;
    PspUnlockProcessThreadListShared(v4);
    if ( v24 != -1 )
      KeEnableOptionalXStateFeaturesApc(v32 + ((unsigned __int64)v24 << 7));
    KeFlushProcessWriteBuffers(0LL);
    KeCopyXfdMaskToPeb((_QWORD *)v4);
    goto LABEL_52;
  }
  v13 = (unsigned __int64)(unsigned int)v7 << 7;
  if ( v13 > 0xFFFFFFFF || (int)v13 + 8 < (unsigned int)v13 )
  {
    v6 = -1073741675;
    goto LABEL_34;
  }
  KernelStack = 0;
  Pool2 = ExAllocatePool2(0x40uLL, (unsigned int)(v13 + 8), 0x58457350u);
  P = (PVOID)Pool2;
  v15 = (_DWORD *)Pool2;
  if ( !Pool2 )
  {
    v6 = -1073741801;
    goto LABEL_34;
  }
  v16 = *v11;
  v5 = Pool2 + 8;
  v7 = 0LL;
  v32 = Pool2 + 8;
  v48 = *v11;
  if ( *v11 == v11 )
    goto LABEL_36;
  KernelStack = 0;
  while ( 1 )
  {
    v17 = v16 - 175;
    if ( (v9 & *(v16 - 42)) == 0 || (v17[360] & 1) != 0 )
      goto LABEL_25;
    if ( (v17[29] & 0x800000) == 0 )
      break;
LABEL_24:
    v20 = (unsigned __int64)(unsigned int)v7 << 7;
    v7 = (unsigned int)(v7 + 1);
    *(_QWORD *)(v20 + v5 + 104) = v9;
    *(_QWORD *)(v20 + v5 + 112) = v17;
    *(_QWORD *)(v20 + v5 + 120) = v15;
LABEL_25:
    v16 = (_QWORD *)*v16;
    v48 = v16;
    if ( v16 == (_QWORD *)(v4 + 880) )
      goto LABEL_36;
  }
  DWORD2(v33) = (unsigned __int16)KeGetProcessorNodeNumberByIndex(v17[147]);
  *(_QWORD *)&v33 = 0x500000020LL;
  *(_QWORD *)&v34 = v17;
  KernelStack = MmCreateKernelStack((int *)&v33);
  v6 = KernelStack;
  if ( KernelStack >= 0 )
  {
    v18 = *((_QWORD *)&v34 + 1);
    v19 = (unsigned __int64)(unsigned int)v7 << 7;
    v16 = v48;
    *(_QWORD *)(v19 + v5 + 88) = *((_QWORD *)&v34 + 1) - (unsigned int)KeDecoupledStateSaveAreaLength;
    v15 = P;
    *(_QWORD *)(v19 + v5 + 96) = v18;
    goto LABEL_24;
  }
  if ( (_DWORD)v7 )
  {
    v21 = (__int64 *)(v5 + 112);
    do
    {
      v22 = *(v21 - 2);
      if ( v22 )
      {
        v23 = *v21;
        v37 = 0LL;
        v39 = v22;
        v40 = 0LL;
        v38 = v23;
        v36[0] = 8;
        v36[1] = 5;
        MmDeleteKernelStack(v36);
      }
      v21 += 16;
      --v7;
    }
    while ( v7 );
  }
  LODWORD(v7) = 0;
LABEL_34:
  v10 = (__int64)CurrentThread;
  PspUnlockProcessThreadListShared(v4);
LABEL_52:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 1960), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v4 + 1960));
  KeAbPostRelease(v4 + 1960);
  KiLeaveCriticalRegionUnsafe(v10);
  if ( P && !(_DWORD)v7 )
    ExFreePoolWithTag(P, 0);
  return v6;
}
