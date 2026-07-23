/*
 * XREFs of PspInsertThread @ 0x1408FBFD4
 * Callers:
 *     PspCreateThread @ 0x1408FA8F0 (PspCreateThread.c)
 *     PspCreatePicoThread @ 0x140A91570 (PspCreatePicoThread.c)
 *     NtCreateUserProcess @ 0x140AC9930 (NtCreateUserProcess.c)
 * Callees:
 *     KeAddGroupAffinityEx @ 0x140287710 (KeAddGroupAffinityEx.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     KeReadyThread @ 0x1402DDFE8 (KeReadyThread.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeStartThread @ 0x1403A1E70 (KeStartThread.c)
 *     ObReferenceObjectExWithTag @ 0x140415020 (ObReferenceObjectExWithTag.c)
 *     KeRequestTerminationThread @ 0x1404750A8 (KeRequestTerminationThread.c)
 *     KeForceResumeThread @ 0x1404752D0 (KeForceResumeThread.c)
 *     KeQueryMaximumGroupCount @ 0x14047B1D0 (KeQueryMaximumGroupCount.c)
 *     KeSuspendThread @ 0x14047E25C (KeSuspendThread.c)
 *     KeRaiseUserException @ 0x1404C6E50 (KeRaiseUserException.c)
 *     KeEnableCoreIsolationMitigationPolicyThread @ 0x1405BF6F0 (KeEnableCoreIsolationMitigationPolicyThread.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SeDeleteAccessState @ 0x14083D240 (SeDeleteAccessState.c)
 *     ObInsertObjectEx @ 0x140853900 (ObInsertObjectEx.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     MmDeleteTeb @ 0x1408D96BC (MmDeleteTeb.c)
 *     PoEnergyContextStart @ 0x1408DEB60 (PoEnergyContextStart.c)
 *     EtwTraceProcess @ 0x1408F11B4 (EtwTraceProcess.c)
 *     PspCallProcessNotifyRoutines @ 0x1408F2F68 (PspCallProcessNotifyRoutines.c)
 *     PspRecheckThreadOptionalXStateFeatures @ 0x1408FCA64 (PspRecheckThreadOptionalXStateFeatures.c)
 *     SeCreateAccessStateEx @ 0x1408FCAF0 (SeCreateAccessStateEx.c)
 *     PspCallThreadNotifyRoutines @ 0x1408FCCC0 (PspCallThreadNotifyRoutines.c)
 *     PspRecheckThreadPasidMsrState @ 0x1408FCE90 (PspRecheckThreadPasidMsrState.c)
 *     EtwTraceThread @ 0x1408FCF28 (EtwTraceThread.c)
 *     PspCreateObjectHandle @ 0x140A0B3A0 (PspCreateObjectHandle.c)
 *     PspAssignProcessToJobList @ 0x140A10154 (PspAssignProcessToJobList.c)
 *     KeUninitThread @ 0x140A12C08 (KeUninitThread.c)
 *     PspDeleteUserStack @ 0x140A59AF8 (PspDeleteUserStack.c)
 *     PspCheckForJobAffinityViolation @ 0x140A5A4B0 (PspCheckForJobAffinityViolation.c)
 *     PspCreateSecureThread @ 0x140A6BAE8 (PspCreateSecureThread.c)
 *     PspChangeProcessExecutionState @ 0x140ACFA40 (PspChangeProcessExecutionState.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
        __int64 a9,
        _QWORD *a10,
        _OWORD *a11)
{
  unsigned int v13; // edi
  struct _KAFFINITY_EX *Pool2; // r12
  char *v15; // rax
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
  __int64 v27; // rbx
  __int64 v28; // rdx
  int v29; // ecx
  signed __int8 v30; // cl
  char *v31; // rax
  char *v32; // rbx
  _QWORD *v33; // rcx
  _QWORD *v34; // rdx
  USHORT MaximumGroupCount; // ax
  USHORT v36; // ax
  KPROCESSOR_MODE v37; // dl
  __int64 v38; // rdx
  unsigned int v39; // [rsp+44h] [rbp-84h]
  char v40; // [rsp+44h] [rbp-84h]
  char *v41; // [rsp+48h] [rbp-80h]
  unsigned __int64 *v42; // [rsp+50h] [rbp-78h]
  unsigned __int64 v43; // [rsp+58h] [rbp-70h]
  int *v44; // [rsp+60h] [rbp-68h]
  _KPROCESS *Process; // [rsp+68h] [rbp-60h]

  v13 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v43 = *((_QWORD *)Object + 30);
  v44 = 0LL;
  Pool2 = 0LL;
  if ( (*a4 & 0x20) == 0 )
  {
    v15 = (char *)KeAbPreAcquire(BugCheckParameter1 + 456, 0LL);
    v41 = v15;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 456), 0LL) )
    {
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(BugCheckParameter1 + 456), v15, BugCheckParameter1 + 456);
      v15 = v41;
    }
    if ( v15 )
      v15[10] = 1;
  }
  if ( a7 )
  {
    v42 = *(unsigned __int64 **)(a7 + 32);
    if ( (*(_DWORD *)(a7 + 8) & 0x1000LL) != 0 )
    {
      MaximumGroupCount = KeQueryMaximumGroupCount();
      Pool2 = (struct _KAFFINITY_EX *)ExAllocatePool2(0x40uLL, 8LL * MaximumGroupCount + 8, 0x20207350u);
      if ( !Pool2 )
      {
        v39 = -1073741670;
        v16 = 0LL;
        goto LABEL_15;
      }
      v36 = KeQueryMaximumGroupCount();
      Pool2->Count = 1;
      Pool2->Size = v36;
      Pool2->Reserved = 0;
      memset_0(&Pool2->8, 0, 8LL * v36);
      KeAddGroupAffinityEx(&Pool2->Count, *(_WORD *)(a7 + 328), *(_QWORD *)(a7 + 320));
      if ( *(_WORD *)(BugCheckParameter1 + 416) != *(_WORD *)(a7 + 328) )
        _interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter1 + 136), 0xCu);
    }
    v44 = (int *)((a7 + 20) & -(__int64)((*(_DWORD *)(a7 + 8) & 0x4000) != 0LL));
  }
  else
  {
    v42 = 0LL;
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
  v39 = SecureThread;
  if ( SecureThread >= 0 )
  {
    if ( (*(_BYTE *)(BugCheckParameter1 + 368) & 1) != 0 && (*v17 & 0x400) != 0 )
    {
      SecureThread = PspCreateSecureThread(Object);
      v39 = SecureThread;
    }
    if ( SecureThread >= 0 )
    {
      KeStartThread((__int64)Object, Pool2, v44);
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
      v31 = (char *)KeAbPreAcquire(BugCheckParameter1 + 1504, 0LL);
      v32 = v31;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 1504), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(BugCheckParameter1 + 1504), v31, BugCheckParameter1 + 1504);
      if ( v32 )
        v32[10] = 1;
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
      v40 = 0;
      if ( !*(_BYTE *)(a9 + 388) || (*a4 & 0x10) != 0 )
      {
        v22 = BugCheckParameter1;
        v40 = 1;
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
        inserted = ObInsertObjectEx((struct _FILE_OBJECT *)Object, (struct _ACCESS_STATE *)a9, a5, 0, v40, 0LL, 0LL);
        if ( inserted >= 0 )
        {
          ObfDereferenceObject(Object);
          if ( v42 )
            *v42 = v43;
          if ( a11 )
            *a11 = *(_OWORD *)(Object + 1288);
        }
        if ( inserted < 0 )
          SeDeleteAccessState(a9);
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
          EtwTraceProcess((PRKPROCESS)BugCheckParameter1, 769);
        if ( *(_QWORD *)(BugCheckParameter1 + 1640) )
          PoEnergyContextStart(BugCheckParameter1);
        if ( (*(_DWORD *)(BugCheckParameter1 + 1532) & 1) == 0 || *(_QWORD *)(BugCheckParameter1 + 1600) )
          v26 = PspCallProcessNotifyRoutines((_QWORD *)BugCheckParameter1, a7, 1);
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
        goto LABEL_75;
      if ( v26 < 0 )
      {
        inserted = v26;
        v27 = a9;
      }
      else
      {
        v27 = a9;
        inserted = PspCreateObjectHandle(Object, a9, PsThreadType);
      }
      SeDeleteAccessState(v27);
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
          *a10 = *(_QWORD *)(v27 + 392);
LABEL_75:
          KeReadyThread((ULONG_PTR)Object);
          return (unsigned int)inserted;
        }
        if ( (*(_DWORD *)(v27 + 384) & 0x200) != 0
          || (v37 = 1, (Process[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) != 0) )
        {
          v37 = 0;
        }
        ObCloseHandle(*(HANDLE *)(v27 + 392), v37);
        if ( a6 && (*a6 & 1) != 0 )
          KeRaiseUserException(inserted, v38);
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
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 456), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter1 + 456));
  KeAbPostRelease(BugCheckParameter1 + 456);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)Object + 178, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)Object + 178);
  KeAbPostRelease((ULONG_PTR)(Object + 1424));
  KeUninitThread(Object);
  if ( a6 )
  {
    if ( v43 )
      MmDeleteTeb((struct _KPROCESS *)BugCheckParameter1, v43);
    if ( *a6 )
      PspDeleteUserStack(BugCheckParameter1, v19, a3, a6);
  }
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  result = v39;
  if ( (*(_DWORD *)(BugCheckParameter1 + 500) & 0x40000008) != 0 )
    return 3221225738LL;
  return result;
}
