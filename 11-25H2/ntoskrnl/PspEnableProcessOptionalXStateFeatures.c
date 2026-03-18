/*
 * XREFs of PspEnableProcessOptionalXStateFeatures @ 0x140764ED0
 * Callers:
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 * Callees:
 *     KeFlushProcessWriteBuffers @ 0x14027118C (KeFlushProcessWriteBuffers.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeInsertQueueApc @ 0x1402EFFB0 (KeInsertQueueApc.c)
 *     MmCreateKernelStack @ 0x140345F40 (MmCreateKernelStack.c)
 *     MmDeleteKernelStack @ 0x140346FC0 (MmDeleteKernelStack.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     PspLockProcessThreadListShared @ 0x1403E6BB0 (PspLockProcessThreadListShared.c)
 *     PspUnlockProcessThreadListShared @ 0x1403E6C20 (PspUnlockProcessThreadListShared.c)
 *     KeInitializeApc @ 0x140429EA0 (KeInitializeApc.c)
 *     KeGetProcessorNodeNumberByIndex @ 0x14043BFB0 (KeGetProcessorNodeNumberByIndex.c)
 *     KeCopyXfdMaskToPeb @ 0x1404A7F00 (KeCopyXfdMaskToPeb.c)
 *     KeEnableOptionalXStateFeaturesApc @ 0x1405B4980 (KeEnableOptionalXStateFeaturesApc.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspEnableProcessOptionalXStateFeatures(__int64 a1, int a2)
{
  unsigned __int64 *v2; // r13
  __int64 v4; // r15
  __int64 v5; // r12
  unsigned int v6; // r14d
  __int64 v7; // rsi
  __int64 *v8; // rax
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
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-89h]
  PVOID P; // [rsp+48h] [rbp-81h]
  __int64 v35; // [rsp+58h] [rbp-71h]
  __int128 v36; // [rsp+60h] [rbp-69h] BYREF
  __int128 v37; // [rsp+70h] [rbp-59h]
  __int128 v38; // [rsp+80h] [rbp-49h]
  _DWORD v39[2]; // [rsp+90h] [rbp-39h] BYREF
  __int64 v40; // [rsp+98h] [rbp-31h]
  __int64 v41; // [rsp+A0h] [rbp-29h]
  __int64 v42; // [rsp+A8h] [rbp-21h]
  __int128 v43; // [rsp+B0h] [rbp-19h]
  _DWORD v44[2]; // [rsp+C0h] [rbp-9h] BYREF
  __int64 v45; // [rsp+C8h] [rbp-1h]
  __int64 v46; // [rsp+D0h] [rbp+7h]
  __int64 v47; // [rsp+D8h] [rbp+Fh]
  __int128 v48; // [rsp+E0h] [rbp+17h]
  __int64 *v50; // [rsp+140h] [rbp+77h]
  _QWORD *v51; // [rsp+140h] [rbp+77h]
  int v52; // [rsp+140h] [rbp+77h]
  int KernelStack; // [rsp+148h] [rbp+7Fh]

  P = 0LL;
  v2 = (unsigned __int64 *)(a1 + 1960);
  v36 = 0LL;
  v4 = a1;
  v37 = 0LL;
  v5 = 0LL;
  v6 = 0;
  v38 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v35 = 0LL;
  LODWORD(v7) = 0;
  KernelStack = 0;
  --CurrentThread->KernelApcDisable;
  v8 = KeAbPreAcquire(a1 + 1960, 0LL);
  v50 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
  {
    ExfAcquirePushLockExclusiveEx(v2, v8, (__int64)v2);
    v8 = v50;
  }
  if ( v8 )
    *((_BYTE *)v8 + 10) = 1;
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
    v52 = -1;
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
          v52 = v25;
        }
        else
        {
          KeInitializeApc(
            v35 + ((unsigned __int64)v25 << 7),
            *(_QWORD *)v26,
            0,
            (__int64)KeEnableOptionalXStateFeaturesApc,
            0LL,
            0LL,
            0,
            0LL);
          if ( !(unsigned __int8)KeInsertQueueApc(v35 + ((unsigned __int64)v25 << 7), 0LL, 0LL, 0) )
          {
            v28 = *(_QWORD *)(v26 - 16);
            if ( v28 )
            {
              v45 = 0LL;
              v47 = v28;
              v46 = *(_QWORD *)v26;
              v48 = 0LL;
              v44[0] = 8;
              v44[1] = 5;
              MmDeleteKernelStack((__int64)v44);
            }
            if ( _InterlockedExchangeAdd(*(volatile signed __int32 **)(v26 + 8), 0xFFFFFFFF) == 1 )
              ExFreePoolWithTag(P, 0);
          }
          v24 = v52;
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
    PspUnlockProcessThreadListShared(v4, (__int64)CurrentThread);
    if ( v24 != -1 )
      KeEnableOptionalXStateFeaturesApc(v35 + ((unsigned __int64)v24 << 7));
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
  Pool2 = ExAllocatePool2(0x40uLL);
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
  v35 = Pool2 + 8;
  v51 = *v11;
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
    v51 = v16;
    if ( v16 == (_QWORD *)(v4 + 880) )
      goto LABEL_36;
  }
  DWORD2(v36) = (unsigned __int16)KeGetProcessorNodeNumberByIndex(v17[147]);
  *(_QWORD *)&v36 = 0x500000020LL;
  *(_QWORD *)&v37 = v17;
  KernelStack = MmCreateKernelStack((int *)&v36);
  v6 = KernelStack;
  if ( KernelStack >= 0 )
  {
    v18 = *((_QWORD *)&v37 + 1);
    v19 = (unsigned __int64)(unsigned int)v7 << 7;
    v16 = v51;
    *(_QWORD *)(v19 + v5 + 88) = *((_QWORD *)&v37 + 1) - (unsigned int)KeDecoupledStateSaveAreaLength;
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
        v40 = 0LL;
        v42 = v22;
        v43 = 0LL;
        v41 = v23;
        v39[0] = 8;
        v39[1] = 5;
        MmDeleteKernelStack((__int64)v39);
      }
      v21 += 16;
      --v7;
    }
    while ( v7 );
  }
  LODWORD(v7) = 0;
LABEL_34:
  v10 = (__int64)CurrentThread;
  PspUnlockProcessThreadListShared(v4, (__int64)CurrentThread);
LABEL_52:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 1960), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v4 + 1960));
  KeAbPostRelease(v4 + 1960);
  KiLeaveCriticalRegionUnsafe(v10, v29, v30, v31);
  if ( P && !(_DWORD)v7 )
    ExFreePoolWithTag(P, 0);
  return v6;
}
