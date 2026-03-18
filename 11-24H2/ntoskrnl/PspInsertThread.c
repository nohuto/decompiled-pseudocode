/*
 * XREFs of PspInsertThread @ 0x1408A59BC
 * Callers:
 *     PspCreateThread @ 0x1408A42C8 (PspCreateThread.c)
 *     PspCreatePicoThread @ 0x140A94DC0 (PspCreatePicoThread.c)
 *     NtCreateUserProcess @ 0x140ACBA80 (NtCreateUserProcess.c)
 * Callees:
 *     KeAddGroupAffinityEx @ 0x140257100 (KeAddGroupAffinityEx.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     KeReadyThread @ 0x140338E58 (KeReadyThread.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExAcquireResourceSharedLite @ 0x140341E80 (ExAcquireResourceSharedLite.c)
 *     KeStartThread @ 0x1403B3660 (KeStartThread.c)
 *     ObReferenceObjectExWithTag @ 0x14041F2E0 (ObReferenceObjectExWithTag.c)
 *     KeRequestTerminationThread @ 0x140479818 (KeRequestTerminationThread.c)
 *     KeForceResumeThread @ 0x140479A40 (KeForceResumeThread.c)
 *     KeQueryMaximumGroupCount @ 0x140480670 (KeQueryMaximumGroupCount.c)
 *     KeSuspendThread @ 0x140483128 (KeSuspendThread.c)
 *     KeRaiseUserException @ 0x1404CDA80 (KeRaiseUserException.c)
 *     KeEnableCoreIsolationMitigationPolicyThread @ 0x1405C2120 (KeEnableCoreIsolationMitigationPolicyThread.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     SeDeleteAccessState @ 0x140840F80 (SeDeleteAccessState.c)
 *     ObInsertObjectEx @ 0x140857620 (ObInsertObjectEx.c)
 *     ObCloseHandle @ 0x1408A2B10 (ObCloseHandle.c)
 *     PspRecheckThreadOptionalXStateFeatures @ 0x1408A644C (PspRecheckThreadOptionalXStateFeatures.c)
 *     SeCreateAccessStateEx @ 0x1408A64E0 (SeCreateAccessStateEx.c)
 *     PspCallThreadNotifyRoutines @ 0x1408A66B0 (PspCallThreadNotifyRoutines.c)
 *     PspRecheckThreadPasidMsrState @ 0x1408A6880 (PspRecheckThreadPasidMsrState.c)
 *     EtwTraceThread @ 0x1408A6918 (EtwTraceThread.c)
 *     PspDeleteUserStack @ 0x1408DB270 (PspDeleteUserStack.c)
 *     MmDeleteTeb @ 0x1408DB490 (MmDeleteTeb.c)
 *     PoEnergyContextStart @ 0x140907444 (PoEnergyContextStart.c)
 *     PspCallProcessNotifyRoutines @ 0x140938898 (PspCallProcessNotifyRoutines.c)
 *     EtwTraceProcess @ 0x14094CC44 (EtwTraceProcess.c)
 *     PspCreateObjectHandle @ 0x140A0C160 (PspCreateObjectHandle.c)
 *     PspAssignProcessToJobList @ 0x140A16F74 (PspAssignProcessToJobList.c)
 *     KeUninitThread @ 0x140A19A98 (KeUninitThread.c)
 *     PspCheckForJobAffinityViolation @ 0x140A61BBC (PspCheckForJobAffinityViolation.c)
 *     PspCreateSecureThread @ 0x140A72708 (PspCreateSecureThread.c)
 *     PspChangeProcessExecutionState @ 0x140AD16D4 (PspChangeProcessExecutionState.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspInsertThread(
        char *Object,
        ULONG_PTR a2,
        __int64 a3,
        _DWORD *a4,
        int a5,
        _BYTE *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        _QWORD *a10,
        _OWORD *a11)
{
  unsigned int v13; // edi
  struct _KAFFINITY_EX *Pool2; // r12
  _QWORD *v15; // rax
  __int64 v16; // rbx
  _DWORD *v17; // rdx
  int SecureThread; // ecx
  __int64 v19; // rdx
  __int64 result; // rax
  signed int inserted; // r12d
  int v22; // edx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  volatile signed __int64 *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // ebx
  __int64 v31; // rbx
  __int64 v32; // rdx
  int v33; // ecx
  signed __int8 v34; // cl
  _QWORD *v35; // rax
  _QWORD *v36; // rbx
  _QWORD *v37; // rcx
  _QWORD *v38; // rdx
  USHORT MaximumGroupCount; // ax
  KPROCESSOR_MODE v40; // dl
  __int64 v41; // rdx
  unsigned int v42; // [rsp+44h] [rbp-84h]
  char v43; // [rsp+44h] [rbp-84h]
  _QWORD *v44; // [rsp+48h] [rbp-80h]
  _QWORD *v45; // [rsp+50h] [rbp-78h]
  __int64 v46; // [rsp+58h] [rbp-70h]
  int *v47; // [rsp+60h] [rbp-68h]
  _KPROCESS *Process; // [rsp+68h] [rbp-60h]

  v13 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v46 = *((_QWORD *)Object + 30);
  v47 = 0LL;
  Pool2 = 0LL;
  if ( (*a4 & 0x20) == 0 )
  {
    v15 = KeAbPreAcquire(a2 + 456, 0LL);
    v44 = v15;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 456), 0LL) )
    {
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 456), (__int64)v15, a2 + 456);
      v15 = v44;
    }
    if ( v15 )
      *((_BYTE *)v15 + 10) = 1;
  }
  if ( a7 )
  {
    v45 = *(_QWORD **)(a7 + 32);
    if ( (*(_DWORD *)(a7 + 8) & 0x1000LL) != 0 )
    {
      KeQueryMaximumGroupCount();
      Pool2 = (struct _KAFFINITY_EX *)ExAllocatePool2(0x40uLL);
      if ( !Pool2 )
      {
        v42 = -1073741670;
        v16 = 0LL;
        goto LABEL_15;
      }
      MaximumGroupCount = KeQueryMaximumGroupCount();
      Pool2->Count = 1;
      Pool2->Size = MaximumGroupCount;
      Pool2->Reserved = 0;
      memset_0(&Pool2->8, 0, 8LL * MaximumGroupCount);
      KeAddGroupAffinityEx(&Pool2->Count, *(_WORD *)(a7 + 328), *(_QWORD *)(a7 + 320));
      if ( *(_WORD *)(a2 + 416) != *(_WORD *)(a7 + 328) )
        _interlockedbittestandset((volatile signed __int32 *)(a2 + 136), 0xCu);
    }
    v47 = (int *)((a7 + 20) & -(__int64)((*(_DWORD *)(a7 + 8) & 0x4000) != 0LL));
  }
  else
  {
    v45 = 0LL;
  }
  v16 = *(_QWORD *)(a2 + 672);
  if ( v16 )
  {
    if ( (*((_DWORD *)Object + 29) & 0x400) == 0 )
    {
      ExAcquireResourceSharedLite((PERESOURCE)(v16 + 56), 1u);
      v13 = 1;
      if ( Pool2 )
      {
        if ( (int)PspCheckForJobAffinityViolation(v16, Pool2) < 0 )
          v13 = 5;
      }
    }
  }
  if ( v13 < 4 && (*(_DWORD *)(a2 + 500) & 0x4000008) == 0x4000000 )
  {
    v17 = a4;
    if ( (*(_DWORD *)(a2 + 500) & 0x40000000) == 0 || (*((_DWORD *)Object + 29) & 0x400) != 0 || (*(_BYTE *)a4 & 2) != 0 )
    {
      SecureThread = 0;
      goto LABEL_14;
    }
  }
  else
  {
    v17 = a4;
  }
  SecureThread = -1073741823;
LABEL_14:
  v42 = SecureThread;
  if ( SecureThread >= 0 )
  {
    if ( (*(_BYTE *)(a2 + 368) & 1) != 0 && (*v17 & 0x400) != 0 )
    {
      SecureThread = PspCreateSecureThread(Object);
      v42 = SecureThread;
    }
    if ( SecureThread >= 0 )
    {
      KeStartThread((__int64)Object, Pool2, v47);
      if ( (v13 & 1) != 0 )
      {
        ExReleaseResourceLite((PERESOURCE)(v16 + 56));
        v13 &= ~1u;
      }
      if ( (*(_DWORD *)(a2 + 500) & 0x40000000) != 0 && (*a4 & 2) != 0 )
        *((_DWORD *)Object + 361) |= 0x40u;
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      v33 = *((_DWORD *)Object + 360) ^ ((unsigned __int16)*((_DWORD *)Object + 360) ^ (*(_DWORD *)(a2 + 500) >> 18)) & 0xE00;
      *((_DWORD *)Object + 360) = v33;
      *((_DWORD *)Object + 360) = v33 ^ (*(_DWORD *)(a2 + 496) ^ v33) & 0x7000;
      if ( ++*(_DWORD *)(a2 + 896) > *(_DWORD *)(a2 + 1496) )
        *(_DWORD *)(a2 + 1496) = *(_DWORD *)(a2 + 896);
      v34 = _interlockedbittestandset((volatile signed __int32 *)(a2 + 2012), 0);
      if ( *(_DWORD *)(a2 + 896) != 1 || v34 )
      {
        if ( *(_DWORD *)(a2 + 896) == 2 && (*(_DWORD *)(a2 + 496) & 0x8000) == 0 )
          _interlockedbittestandset((volatile signed __int32 *)(a2 + 496), 0xFu);
      }
      else
      {
        v13 |= 2u;
      }
      v35 = KeAbPreAcquire(a2 + 1504, 0LL);
      v36 = v35;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 1504), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 1504), (__int64)v35, a2 + 1504);
      if ( v36 )
        *((_BYTE *)v36 + 10) = 1;
      v37 = Object + 1400;
      v38 = *(_QWORD **)(a2 + 888);
      if ( *v38 != a2 + 880 )
        __fastfail(3u);
      *v37 = a2 + 880;
      *((_QWORD *)Object + 176) = v38;
      *v38 = v37;
      *(_QWORD *)(a2 + 888) = v37;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 1504), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 1504));
      KeAbPostRelease(a2 + 1504);
      if ( *(_QWORD *)(a2 + 360) )
        _interlockedbittestandset((volatile signed __int32 *)Object, 0x19u);
      if ( *(_QWORD *)(a2 + 1976) )
        _interlockedbittestandset((volatile signed __int32 *)Object, 0x1Du);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 456), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 456));
      KeAbPostRelease(a2 + 456);
      if ( (*a4 & 0x40) != 0 )
        PspChangeProcessExecutionState((PEPROCESS)a2);
      ObReferenceObjectExWithTag((ULONG_PTR)Object, 2);
      *((_DWORD *)Object + 379) = 1;
      if ( (*a4 & 1) != 0 )
      {
        KeSuspendThread((__int64)Object);
        if ( (*((_DWORD *)Object + 360) & 1) != 0 )
          KeForceResumeThread((__int64)Object);
      }
      if ( (*(_DWORD *)(a2 + 2008) & 1) != 0 )
        KeEnableCoreIsolationMitigationPolicyThread((struct _KTHREAD *)Object);
      inserted = PspRecheckThreadOptionalXStateFeatures(a2, Object);
      if ( inserted >= 0 )
        inserted = PspRecheckThreadPasidMsrState(a2, Object);
      v43 = 0;
      if ( !*(_BYTE *)(a9 + 388) || (*a4 & 0x10) != 0 )
      {
        v22 = a2;
        v43 = 1;
      }
      else
      {
        v22 = (int)Process;
      }
      if ( inserted < 0
        || (inserted = SeCreateAccessStateEx(0, v22, a9, (int)a9 + 160, a5, (__int64)PsThreadType + 76), inserted < 0) )
      {
        ObfDereferenceObject(Object);
      }
      else
      {
        inserted = ObInsertObjectEx((struct _FILE_OBJECT *)Object, (struct _ACCESS_STATE *)a9, a5, 0, v43, 0LL, 0LL);
        if ( inserted >= 0 )
        {
          ObfDereferenceObject(Object);
          if ( v45 )
            *v45 = v46;
          if ( a11 )
            *a11 = *(_OWORD *)(Object + 1288);
        }
        if ( inserted < 0 )
          SeDeleteAccessState(a9, v23, v24, v25);
      }
      v26 = (volatile signed __int64 *)(Object + 1424);
      if ( inserted < 0 )
      {
        if ( (_InterlockedExchangeAdd64(v26, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        {
          ExfTryToWakePushLock((volatile signed __int64 *)Object + 178);
          v26 = (volatile signed __int64 *)(Object + 1424);
        }
        KeAbPostRelease((ULONG_PTR)v26);
        if ( (*a4 & 1) != 0 )
          KeForceResumeThread((__int64)Object);
        if ( a6 && *a6 )
          PspDeleteUserStack(a2, v27, a3, a6);
      }
      else
      {
        _InterlockedOr((volatile signed __int32 *)Object + 360, 2u);
        if ( (_InterlockedExchangeAdd64(v26, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        {
          ExfTryToWakePushLock((volatile signed __int64 *)Object + 178);
          v26 = (volatile signed __int64 *)(Object + 1424);
        }
        KeAbPostRelease((ULONG_PTR)v26);
      }
      v30 = 0;
      if ( (v13 & 2) != 0 )
      {
        if ( (PerfGlobalGroupMask & 1) != 0 )
          EtwTraceProcess((PRKPROCESS)a2);
        if ( *(_QWORD *)(a2 + 1640) )
          PoEnergyContextStart(a2);
        if ( (*(_DWORD *)(a2 + 1532) & 1) == 0 || *(_QWORD *)(a2 + 1600) )
        {
          LOBYTE(v28) = 1;
          v30 = PspCallProcessNotifyRoutines(a2, a7, v28);
        }
      }
      if ( (PerfGlobalGroupMask & 2) != 0 )
      {
        LOBYTE(v28) = 1;
        EtwTraceThread(Object, a3, v28);
      }
      if ( (*(_DWORD *)(a2 + 1532) & 1) == 0 || *(_QWORD *)(a2 + 1600) )
      {
        LOBYTE(v27) = 1;
        PspCallThreadNotifyRoutines(Object, v27, 0LL);
      }
      if ( inserted < 0 )
        goto LABEL_75;
      if ( v30 < 0 )
      {
        inserted = v30;
        v31 = a9;
      }
      else
      {
        v31 = a9;
        inserted = PspCreateObjectHandle(Object, a9, PsThreadType);
      }
      SeDeleteAccessState(v31, v27, v28, v29);
      if ( inserted >= 0 )
      {
        if ( a7 )
        {
          v32 = *(_QWORD *)(a7 + 368);
          if ( v32 )
            inserted = PspAssignProcessToJobList(a2, v32, *(unsigned int *)(a7 + 380));
        }
        if ( inserted >= 0 )
        {
          *a10 = *(_QWORD *)(v31 + 392);
LABEL_75:
          KeReadyThread((ULONG_PTR)Object);
          return (unsigned int)inserted;
        }
        if ( (*(_DWORD *)(v31 + 384) & 0x200) != 0
          || (v40 = 1, (Process[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) != 0) )
        {
          v40 = 0;
        }
        ObCloseHandle(*(HANDLE *)(v31 + 392), v40);
        if ( a6 && (*a6 & 1) != 0 )
          KeRaiseUserException(inserted, v41);
      }
      if ( !_interlockedbittestandset((volatile signed __int32 *)Object + 360, 0) )
        v13 |= 8u;
      if ( (*((_DWORD *)Object + 29) & 0x400) != 0 )
      {
        if ( (*a4 & 1) != 0 )
          KeForceResumeThread((__int64)Object);
      }
      else
      {
        if ( v13 >= 8 )
          *((_DWORD *)Object + 374) = inserted;
        KeRequestTerminationThread((__int64)Object);
      }
      goto LABEL_75;
    }
  }
LABEL_15:
  if ( (v13 & 1) != 0 )
    ExReleaseResourceLite((PERESOURCE)(v16 + 56));
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 456), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 456));
  KeAbPostRelease(a2 + 456);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)Object + 178, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)Object + 178);
  KeAbPostRelease((ULONG_PTR)(Object + 1424));
  KeUninitThread(Object);
  if ( a6 )
  {
    if ( v46 )
      MmDeleteTeb(a2, v46);
    if ( *a6 )
      PspDeleteUserStack(a2, v19, a3, a6);
  }
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  result = v42;
  if ( (*(_DWORD *)(a2 + 500) & 0x40000008) != 0 )
    return 3221225738LL;
  return result;
}
