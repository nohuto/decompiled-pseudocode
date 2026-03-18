/*
 * XREFs of PspInsertThread @ 0x1408F1D7C
 * Callers:
 *     PspCreateThread @ 0x1408F1680 (PspCreateThread.c)
 *     NtCreateUserProcess @ 0x1409BC1D0 (NtCreateUserProcess.c)
 *     PspCreatePicoThread @ 0x140A90CA0 (PspCreatePicoThread.c)
 * Callees:
 *     KeAddGroupAffinityEx @ 0x140256130 (KeAddGroupAffinityEx.c)
 *     KeStartThread @ 0x14026AE04 (KeStartThread.c)
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeReadyThread @ 0x1402F1904 (KeReadyThread.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     ObReferenceObjectExWithTag @ 0x1404297C0 (ObReferenceObjectExWithTag.c)
 *     KeRequestTerminationThread @ 0x14047D128 (KeRequestTerminationThread.c)
 *     KeForceResumeThread @ 0x14047D350 (KeForceResumeThread.c)
 *     KeQueryMaximumGroupCount @ 0x14047F9E0 (KeQueryMaximumGroupCount.c)
 *     KeSuspendThread @ 0x1404875A0 (KeSuspendThread.c)
 *     KeRaiseUserException @ 0x1404CDCA0 (KeRaiseUserException.c)
 *     KeEnableCoreIsolationMitigationPolicyThread @ 0x1405BE118 (KeEnableCoreIsolationMitigationPolicyThread.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PoEnergyContextStart @ 0x14083B7A8 (PoEnergyContextStart.c)
 *     SeDeleteAccessState @ 0x140844A10 (SeDeleteAccessState.c)
 *     ObInsertObjectEx @ 0x1408A05E0 (ObInsertObjectEx.c)
 *     ObCloseHandle @ 0x1408EFEC0 (ObCloseHandle.c)
 *     PspRecheckThreadOptionalXStateFeatures @ 0x1408F3834 (PspRecheckThreadOptionalXStateFeatures.c)
 *     PspCallThreadNotifyRoutines @ 0x1408F38C0 (PspCallThreadNotifyRoutines.c)
 *     SeCreateAccessStateEx @ 0x1408F3A90 (SeCreateAccessStateEx.c)
 *     PspRecheckThreadPasidMsrState @ 0x1408F3C78 (PspRecheckThreadPasidMsrState.c)
 *     KeUninitThread @ 0x1408F42C0 (KeUninitThread.c)
 *     EtwTraceThread @ 0x1408F592C (EtwTraceThread.c)
 *     MmDeleteTeb @ 0x1408F6330 (MmDeleteTeb.c)
 *     PspCallProcessNotifyRoutines @ 0x14091F098 (PspCallProcessNotifyRoutines.c)
 *     EtwTraceProcess @ 0x140920FCC (EtwTraceProcess.c)
 *     PspCreateObjectHandle @ 0x1409BBD2C (PspCreateObjectHandle.c)
 *     PspAssignProcessToJobList @ 0x140A0E4FC (PspAssignProcessToJobList.c)
 *     PspDeleteUserStack @ 0x140A5F668 (PspDeleteUserStack.c)
 *     PspCheckForJobAffinityViolation @ 0x140A60460 (PspCheckForJobAffinityViolation.c)
 *     PspCreateSecureThread @ 0x140A6FD5C (PspCreateSecureThread.c)
 *     PspChangeProcessExecutionState @ 0x140AC7CBC (PspChangeProcessExecutionState.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspInsertThread(
        char *Object,
        ULONG_PTR BugCheckParameter1,
        __int64 a3,
        _DWORD *a4,
        int a5,
        _BYTE *a6,
        __int64 a7,
        __int64 a8,
        PACCESS_STATE AccessState,
        PVOID *a10,
        _OWORD *a11)
{
  unsigned int v13; // edi
  struct _KAFFINITY_EX *Pool2; // r12
  __int64 *v15; // rax
  __int64 v16; // rbx
  _DWORD *v17; // rdx
  int SecureThread; // ecx
  __int64 v19; // rdx
  __int64 result; // rax
  signed int inserted; // r12d
  int v22; // edx
  volatile signed __int64 *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  int v26; // ebx
  PACCESS_STATE v27; // rbx
  __int64 v28; // rdx
  int v29; // ecx
  signed __int8 v30; // cl
  __int64 *v31; // rax
  __int64 *v32; // rbx
  _QWORD *v33; // rcx
  _QWORD *v34; // rdx
  USHORT MaximumGroupCount; // ax
  KPROCESSOR_MODE v36; // dl
  __int64 v37; // rdx
  unsigned int v38; // [rsp+44h] [rbp-84h]
  char v39; // [rsp+44h] [rbp-84h]
  __int64 *v40; // [rsp+48h] [rbp-80h]
  _QWORD *v41; // [rsp+50h] [rbp-78h]
  __int64 v42; // [rsp+58h] [rbp-70h]
  unsigned int *v43; // [rsp+60h] [rbp-68h]
  _KPROCESS *Process; // [rsp+68h] [rbp-60h]

  v13 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v42 = *((_QWORD *)Object + 30);
  v43 = 0LL;
  Pool2 = 0LL;
  if ( (*a4 & 0x20) == 0 )
  {
    v15 = KeAbPreAcquire(BugCheckParameter1 + 456, 0LL);
    v40 = v15;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 456), 0LL) )
    {
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(BugCheckParameter1 + 456), v15, BugCheckParameter1 + 456);
      v15 = v40;
    }
    if ( v15 )
      *((_BYTE *)v15 + 10) = 1;
  }
  if ( a7 )
  {
    v41 = *(_QWORD **)(a7 + 32);
    if ( (*(_DWORD *)(a7 + 8) & 0x1000LL) != 0 )
    {
      KeQueryMaximumGroupCount();
      Pool2 = (struct _KAFFINITY_EX *)ExAllocatePool2(0x40uLL);
      if ( !Pool2 )
      {
        v38 = -1073741670;
        v16 = 0LL;
        goto LABEL_15;
      }
      MaximumGroupCount = KeQueryMaximumGroupCount();
      Pool2->Count = 1;
      Pool2->Size = MaximumGroupCount;
      Pool2->Reserved = 0;
      memset_0(&Pool2->8, 0, 8LL * MaximumGroupCount);
      KeAddGroupAffinityEx(&Pool2->Count, *(_WORD *)(a7 + 328), *(_QWORD *)(a7 + 320));
      if ( *(_WORD *)(BugCheckParameter1 + 416) != *(_WORD *)(a7 + 328) )
        _interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter1 + 136), 0xCu);
    }
    v43 = (unsigned int *)((a7 + 20) & -(__int64)((*(_DWORD *)(a7 + 8) & 0x4000) != 0LL));
  }
  else
  {
    v41 = 0LL;
  }
  v16 = *(_QWORD *)(BugCheckParameter1 + 672);
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
  if ( v13 < 4 && (*(_DWORD *)(BugCheckParameter1 + 500) & 0x4000008) == 0x4000000 )
  {
    v17 = a4;
    if ( (*(_DWORD *)(BugCheckParameter1 + 500) & 0x40000000) == 0
      || (*((_DWORD *)Object + 29) & 0x400) != 0
      || (*(_BYTE *)a4 & 2) != 0 )
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
  v38 = SecureThread;
  if ( SecureThread >= 0 )
  {
    if ( (*(_BYTE *)(BugCheckParameter1 + 368) & 1) != 0 && (*v17 & 0x400) != 0 )
    {
      SecureThread = PspCreateSecureThread(Object);
      v38 = SecureThread;
    }
    if ( SecureThread >= 0 )
    {
      KeStartThread((__int64)Object, Pool2, v43);
      if ( (v13 & 1) != 0 )
      {
        ExReleaseResourceLite((PERESOURCE)(v16 + 56));
        v13 &= ~1u;
      }
      if ( (*(_DWORD *)(BugCheckParameter1 + 500) & 0x40000000) != 0 && (*a4 & 2) != 0 )
        *((_DWORD *)Object + 361) |= 0x40u;
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      v29 = *((_DWORD *)Object + 360) ^ ((unsigned __int16)*((_DWORD *)Object + 360) ^ (*(_DWORD *)(BugCheckParameter1
                                                                                                  + 500) >> 18)) & 0xE00;
      *((_DWORD *)Object + 360) = v29;
      *((_DWORD *)Object + 360) = v29 ^ (*(_DWORD *)(BugCheckParameter1 + 496) ^ v29) & 0x7000;
      if ( ++*(_DWORD *)(BugCheckParameter1 + 896) > *(_DWORD *)(BugCheckParameter1 + 1496) )
        *(_DWORD *)(BugCheckParameter1 + 1496) = *(_DWORD *)(BugCheckParameter1 + 896);
      v30 = _interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter1 + 2012), 0);
      if ( *(_DWORD *)(BugCheckParameter1 + 896) != 1 || v30 )
      {
        if ( *(_DWORD *)(BugCheckParameter1 + 896) == 2 && (*(_DWORD *)(BugCheckParameter1 + 496) & 0x8000) == 0 )
          _interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter1 + 496), 0xFu);
      }
      else
      {
        v13 |= 2u;
      }
      v31 = KeAbPreAcquire(BugCheckParameter1 + 1504, 0LL);
      v32 = v31;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 1504), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(BugCheckParameter1 + 1504), v31, BugCheckParameter1 + 1504);
      if ( v32 )
        *((_BYTE *)v32 + 10) = 1;
      v33 = Object + 1400;
      v34 = *(_QWORD **)(BugCheckParameter1 + 888);
      if ( *v34 != BugCheckParameter1 + 880 )
        __fastfail(3u);
      *v33 = BugCheckParameter1 + 880;
      *((_QWORD *)Object + 176) = v34;
      *v34 = v33;
      *(_QWORD *)(BugCheckParameter1 + 888) = v33;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 1504), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter1 + 1504));
      KeAbPostRelease(BugCheckParameter1 + 1504);
      if ( *(_QWORD *)(BugCheckParameter1 + 360) )
        _interlockedbittestandset((volatile signed __int32 *)Object, 0x19u);
      if ( *(_QWORD *)(BugCheckParameter1 + 1976) )
        _interlockedbittestandset((volatile signed __int32 *)Object, 0x1Du);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 456), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter1 + 456));
      KeAbPostRelease(BugCheckParameter1 + 456);
      if ( (*a4 & 0x40) != 0 )
        PspChangeProcessExecutionState((PEPROCESS)BugCheckParameter1);
      ObReferenceObjectExWithTag((ULONG_PTR)Object, 2);
      *((_DWORD *)Object + 379) = 1;
      if ( (*a4 & 1) != 0 )
      {
        KeSuspendThread((__int64)Object);
        if ( (*((_DWORD *)Object + 360) & 1) != 0 )
          KeForceResumeThread((__int64)Object);
      }
      if ( (*(_DWORD *)(BugCheckParameter1 + 2008) & 1) != 0 )
        KeEnableCoreIsolationMitigationPolicyThread((struct _KTHREAD *)Object);
      inserted = PspRecheckThreadOptionalXStateFeatures(BugCheckParameter1, Object);
      if ( inserted >= 0 )
        inserted = PspRecheckThreadPasidMsrState(BugCheckParameter1, Object);
      v39 = 0;
      if ( !BYTE4(AccessState[2].SecurityDescriptor) || (*a4 & 0x10) != 0 )
      {
        v22 = BugCheckParameter1;
        v39 = 1;
      }
      else
      {
        v22 = (int)Process;
      }
      if ( inserted < 0
        || (inserted = SeCreateAccessStateEx(
                         0,
                         v22,
                         (_DWORD)AccessState,
                         (int)AccessState + 160,
                         a5,
                         (__int64)PsThreadType + 76),
            inserted < 0) )
      {
        ObfDereferenceObject(Object);
      }
      else
      {
        inserted = ObInsertObjectEx(Object, AccessState, a5, 0, v39, 0LL, 0LL);
        if ( inserted >= 0 )
        {
          ObfDereferenceObject(Object);
          if ( v41 )
            *v41 = v42;
          if ( a11 )
            *a11 = *(_OWORD *)(Object + 1288);
        }
        if ( inserted < 0 )
          SeDeleteAccessState((__int64)AccessState);
      }
      v23 = (volatile signed __int64 *)(Object + 1424);
      if ( inserted < 0 )
      {
        if ( (_InterlockedExchangeAdd64(v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        {
          ExfTryToWakePushLock((volatile signed __int64 *)Object + 178);
          v23 = (volatile signed __int64 *)(Object + 1424);
        }
        KeAbPostRelease((ULONG_PTR)v23);
        if ( (*a4 & 1) != 0 )
          KeForceResumeThread((__int64)Object);
        if ( a6 && *a6 )
          PspDeleteUserStack(BugCheckParameter1, v24, a3, a6);
      }
      else
      {
        _InterlockedOr((volatile signed __int32 *)Object + 360, 2u);
        if ( (_InterlockedExchangeAdd64(v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        {
          ExfTryToWakePushLock((volatile signed __int64 *)Object + 178);
          v23 = (volatile signed __int64 *)(Object + 1424);
        }
        KeAbPostRelease((ULONG_PTR)v23);
      }
      v26 = 0;
      if ( (v13 & 2) != 0 )
      {
        if ( (PerfGlobalGroupMask[0] & 1) != 0 )
          EtwTraceProcess(BugCheckParameter1);
        if ( *(_QWORD *)(BugCheckParameter1 + 1640) )
          PoEnergyContextStart(BugCheckParameter1);
        if ( (*(_DWORD *)(BugCheckParameter1 + 1532) & 1) == 0 || *(_QWORD *)(BugCheckParameter1 + 1600) )
        {
          LOBYTE(v25) = 1;
          v26 = PspCallProcessNotifyRoutines(BugCheckParameter1, a7, v25);
        }
      }
      if ( (PerfGlobalGroupMask[0] & 2) != 0 )
      {
        LOBYTE(v25) = 1;
        EtwTraceThread(Object, a3, v25);
      }
      if ( (*(_DWORD *)(BugCheckParameter1 + 1532) & 1) == 0 || *(_QWORD *)(BugCheckParameter1 + 1600) )
      {
        LOBYTE(v24) = 1;
        PspCallThreadNotifyRoutines(Object, v24, 0LL);
      }
      if ( inserted < 0 )
        goto LABEL_74;
      if ( v26 < 0 )
      {
        inserted = v26;
        v27 = AccessState;
      }
      else
      {
        v27 = AccessState;
        inserted = PspCreateObjectHandle(Object, AccessState, PsThreadType);
      }
      SeDeleteAccessState((__int64)v27);
      if ( inserted >= 0 )
      {
        if ( a7 )
        {
          v28 = *(_QWORD *)(a7 + 368);
          if ( v28 )
            inserted = PspAssignProcessToJobList(BugCheckParameter1, v28, *(unsigned int *)(a7 + 380));
        }
        if ( inserted >= 0 )
        {
          *a10 = v27[2].AuxData;
LABEL_74:
          KeReadyThread((ULONG_PTR)Object);
          return (unsigned int)inserted;
        }
        if ( ((__int64)v27[2].SecurityDescriptor & 0x200) != 0
          || (v36 = 1, (Process[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) != 0) )
        {
          v36 = 0;
        }
        ObCloseHandle(v27[2].AuxData, v36);
        if ( a6 && (*a6 & 1) != 0 )
          KeRaiseUserException(inserted, v37);
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
      goto LABEL_74;
    }
  }
LABEL_15:
  if ( (v13 & 1) != 0 )
    ExReleaseResourceLite((PERESOURCE)(v16 + 56));
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 456), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter1 + 456));
  KeAbPostRelease(BugCheckParameter1 + 456);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)Object + 178, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)Object + 178);
  KeAbPostRelease((ULONG_PTR)(Object + 1424));
  KeUninitThread(Object);
  if ( a6 )
  {
    if ( v42 )
      MmDeleteTeb(BugCheckParameter1, v42);
    if ( *a6 )
      PspDeleteUserStack(BugCheckParameter1, v19, a3, a6);
  }
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  result = v38;
  if ( (*(_DWORD *)(BugCheckParameter1 + 500) & 0x40000008) != 0 )
    return 3221225738LL;
  return result;
}
