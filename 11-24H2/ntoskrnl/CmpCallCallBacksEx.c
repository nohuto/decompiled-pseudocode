/*
 * XREFs of CmpCallCallBacksEx @ 0x140843FD0
 * Callers:
 *     NtRenameKey @ 0x1407D09C0 (NtRenameKey.c)
 *     NtReplaceKey @ 0x1407D0E80 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x1407D11D0 (NtRestoreKey.c)
 *     NtSaveMergedKeys @ 0x1407D1580 (NtSaveMergedKeys.c)
 *     CmpDeleteKeyObject @ 0x140843620 (CmpDeleteKeyObject.c)
 *     CmPostCallbackNotification @ 0x140843DE0 (CmPostCallbackNotification.c)
 *     CmpCallCallBacks @ 0x140843EA0 (CmpCallCallBacks.c)
 *     CmPostCallbackNotificationEx @ 0x140843EE0 (CmPostCallbackNotificationEx.c)
 *     NtQueryKey @ 0x140845A20 (NtQueryKey.c)
 *     CmpSecurityMethod @ 0x14084F0D0 (CmpSecurityMethod.c)
 *     NtDeleteKey @ 0x14086DAE0 (NtDeleteKey.c)
 *     NtSetValueKey @ 0x14086EB40 (NtSetValueKey.c)
 *     CmpParseKey @ 0x1408A77F0 (CmpParseKey.c)
 *     NtEnumerateValueKey @ 0x1408E39F0 (NtEnumerateValueKey.c)
 *     CmUnloadKey @ 0x14092D238 (CmUnloadKey.c)
 *     CmLoadDifferencingKey @ 0x14092E890 (CmLoadDifferencingKey.c)
 *     NtSetInformationKey @ 0x140960DB0 (NtSetInformationKey.c)
 *     NtQueryMultipleValueKey @ 0x1409618D0 (NtQueryMultipleValueKey.c)
 *     NtDeleteValueKey @ 0x1409622A0 (NtDeleteValueKey.c)
 *     NtSaveKeyEx @ 0x140A67430 (NtSaveKeyEx.c)
 *     NtFlushKey @ 0x140A6F280 (NtFlushKey.c)
 *     NtEnumerateKey @ 0x140AE5580 (NtEnumerateKey.c)
 *     NtQueryValueKey @ 0x140AE5AA0 (NtQueryValueKey.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ExfUnblockPushLock @ 0x1402BC1A0 (ExfUnblockPushLock.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     CmpCallbackFatalFilter @ 0x1407D1DAC (CmpCallbackFatalFilter.c)
 *     CmpCallbackFetchCallContext @ 0x140844980 (CmpCallbackFetchCallContext.c)
 *     CmpCallbackFillObjectContext @ 0x140844AB0 (CmpCallbackFillObjectContext.c)
 *     VrpRegistryCallback @ 0x1408454F0 (VrpRegistryCallback.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpCallCallBacksEx(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        char a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7)
{
  char v7; // si
  __int64 v8; // r9
  __int64 v9; // r8
  unsigned int v10; // r14d
  __int128 *v11; // rdx
  struct _KTHREAD *CurrentThread; // rax
  _SLIST_ENTRY **p_SparePtr; // r15
  PVOID SparePtr; // rax
  __int64 *v15; // rdi
  struct _KTHREAD *v16; // rax
  char *v17; // rbx
  _QWORD *v18; // r13
  volatile signed __int32 *v19; // r12
  signed __int64 v20; // rdx
  ULONG_PTR v21; // rtt
  struct _KPRCB *CurrentPrcb; // r14
  _GENERAL_LOOKASIDE *P; // rsi
  _SLIST_ENTRY *v24; // rbx
  _GENERAL_LOOKASIDE *L; // rsi
  _SLIST_ENTRY **v26; // rcx
  int v27; // ecx
  struct _KPRCB *v28; // rdx
  _GENERAL_LOOKASIDE *v29; // rcx
  signed __int64 v30; // rdx
  ULONG_PTR v31; // rtt
  unsigned int v32; // esi
  __int64 v33; // rbx
  _QWORD *v34; // rax
  __int64 *v35; // rdi
  __int128 *v36; // r8
  __int64 v37; // rcx
  int v38; // eax
  PVOID *v39; // rax
  struct _KPRCB *v40; // rdx
  _GENERAL_LOOKASIDE *v41; // rcx
  __int64 v43; // r8
  __int64 v44; // rcx
  int v45; // eax
  struct _KTHREAD *v46; // rax
  char *v47; // rbx
  _SLIST_ENTRY *Next; // rcx
  _SLIST_ENTRY **v49; // rdx
  __int64 v50; // rdx
  int v51; // eax
  unsigned int v52; // ecx
  unsigned int v53; // ecx
  PSLIST_ENTRY Pool2; // rax
  signed __int32 v55[8]; // [rsp+0h] [rbp-108h] BYREF
  char v56; // [rsp+20h] [rbp-E8h]
  char v57; // [rsp+21h] [rbp-E7h]
  int v58; // [rsp+24h] [rbp-E4h]
  __int128 *v59; // [rsp+30h] [rbp-D8h]
  __int64 *v60; // [rsp+38h] [rbp-D0h]
  _SLIST_ENTRY ***v61; // [rsp+40h] [rbp-C8h]
  PSLIST_ENTRY v62; // [rsp+48h] [rbp-C0h]
  __int128 *v63; // [rsp+50h] [rbp-B8h]
  __int128 v64; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v65; // [rsp+68h] [rbp-A0h]
  __int128 v66; // [rsp+78h] [rbp-90h]
  __int64 v67; // [rsp+88h] [rbp-80h]
  __int64 *v68; // [rsp+90h] [rbp-78h]
  unsigned __int8 *v69; // [rsp+98h] [rbp-70h]
  struct _KTHREAD *v70; // [rsp+A0h] [rbp-68h]
  __int128 v71; // [rsp+A8h] [rbp-60h] BYREF

  v7 = a4;
  v8 = a3;
  v9 = a2;
  v10 = a1;
  v58 = 0;
  v64 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  v71 = 0LL;
  v11 = 0LL;
  v59 = 0LL;
  v63 = 0LL;
  v57 = 0;
  CurrentThread = KeGetCurrentThread();
  v70 = CurrentThread;
  if ( v7 != 1 )
  {
    v18 = (_QWORD *)a7;
    v27 = v58;
    goto LABEL_46;
  }
  p_SparePtr = (_SLIST_ENTRY **)&CurrentThread[1].WaitBlock[0].SparePtr;
  v69 = &CurrentThread[1].WaitBlockFill5[40];
  SparePtr = CurrentThread[1].WaitBlock[0].SparePtr;
  if ( SparePtr )
    v15 = (__int64 *)*((_QWORD *)SparePtr + 1);
  else
    v15 = &CallbackListHead;
  v56 = 1;
  v16 = KeGetCurrentThread();
  --v16->KernelApcDisable;
  v17 = (char *)KeAbPreAcquire((__int64)&CmpCallbackListLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpCallbackListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&CmpCallbackListLock, 0, v17, (__int64)&CmpCallbackListLock);
  if ( v17 )
    v17[10] = 1;
  v18 = (_QWORD *)a7;
  while ( 1 )
  {
    do
    {
      v15 = (__int64 *)*v15;
      v60 = v15;
      if ( v15 == &CallbackListHead )
      {
        v27 = v58;
        goto LABEL_39;
      }
      v19 = (volatile signed __int32 *)(v15 + 2);
      v68 = v15 + 2;
    }
    while ( *((int *)v15 + 4) < 0 );
    _InterlockedIncrement(v19);
    _m_prefetchw(&CmpCallbackListLock);
    v20 = CmpCallbackListLock - 16;
    if ( (CmpCallbackListLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v20 = 0LL;
    if ( (CmpCallbackListLock & 2) != 0
      || (v21 = CmpCallbackListLock,
          v21 != _InterlockedCompareExchange64(
                   (volatile signed __int64 *)&CmpCallbackListLock,
                   v20,
                   CmpCallbackListLock)) )
    {
      ExfReleasePushLock(&CmpCallbackListLock);
    }
    KeAbPostRelease((ULONG_PTR)&CmpCallbackListLock);
    KeLeaveCriticalRegionThread();
    v56 = 0;
    if ( CmpAllocateCallbackMemoryFromPool )
      goto LABEL_129;
    if ( !CmpAllocateCallbackMemoryFromPerProcLookaside )
    {
      Pool2 = RtlpInterlockedPopEntrySList(&CmpCallbackContextSList);
      v24 = Pool2;
      if ( !Pool2 )
      {
LABEL_129:
        Pool2 = (PSLIST_ENTRY)ExAllocatePool2(0x100uLL, 0x30uLL, 0x69634D43u);
        v24 = Pool2;
      }
      v62 = Pool2;
      goto LABEL_23;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[10].P;
    ++P->TotalAllocates;
    v24 = RtlpInterlockedPopEntrySList(&P->ListHead);
    if ( !v24 )
    {
      ++P->AllocateMisses;
      L = CurrentPrcb->PPLookasideList[10].L;
      ++L->TotalAllocates;
      v24 = RtlpInterlockedPopEntrySList(&L->ListHead);
      if ( !v24 )
      {
        ++L->AllocateMisses;
        v24 = (_SLIST_ENTRY *)guard_dispatch_icall_no_overrides((unsigned int)L->Type, L->Size);
      }
    }
    if ( v24 )
      LODWORD(v24->Next) = CurrentPrcb->Number;
    v62 = v24;
    v7 = a4;
    v10 = a1;
LABEL_23:
    if ( !v24 )
      break;
    *((_QWORD *)&v24[1].Next + 1) = v15;
    v24[2].Next = 0LL;
    v24[1].Next = *p_SparePtr;
    *p_SparePtr = v24 + 1;
    v26 = *(_SLIST_ENTRY ***)(a7 + 8);
    if ( *v26 != (_SLIST_ENTRY *)a7 )
      goto LABEL_25;
    v24->Next = (_SLIST_ENTRY *)a7;
    v61 = (_SLIST_ENTRY ***)(&v24->Next + 1);
    *((_QWORD *)&v24->Next + 1) = v26;
    *v26 = v24;
    *(_QWORD *)(a7 + 8) = v24;
    CmpCallbackFillObjectContext(v10, a2, v15 + 3);
    if ( a3 && (*((_DWORD *)v15 + 5) & 1) != 0 )
      v43 = a3;
    else
      v43 = a2;
    v44 = v15[4];
    if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v15[5] == VrpRegistryCallback )
      v45 = VrpRegistryCallback(v44, (int)v10, v43);
    else
      v45 = guard_dispatch_icall_no_overrides(v44, (int)v10);
    v58 = v45;
    if ( v10 == 14 )
    {
      v58 = 0;
    }
    else if ( v45 < 0 )
    {
      Next = v24->Next;
      v49 = *v61;
      if ( *(&v24->Next->Next + 1) != v24 || *v49 != v24 )
LABEL_25:
        __fastfail(3u);
      *v49 = Next;
      *((_QWORD *)&Next->Next + 1) = v49;
      if ( *p_SparePtr )
        *p_SparePtr = (*p_SparePtr)->Next;
      if ( CmpAllocateCallbackMemoryFromPool )
        goto LABEL_126;
      if ( CmpAllocateCallbackMemoryFromPerProcLookaside )
      {
        v28 = KeGetCurrentPrcb();
        v29 = v28->PPLookasideList[10].P;
        ++v29->TotalFrees;
        if ( LOWORD(v29->ListHead.Alignment) < v29->Depth
          || (++v29->FreeMisses,
              v29 = v28->PPLookasideList[10].L,
              ++v29->TotalFrees,
              LOWORD(v29->ListHead.Alignment) < v29->Depth) )
        {
          RtlpInterlockedPushEntrySList(&v29->ListHead, v24);
        }
        else
        {
          ++v29->FreeMisses;
          if ( (void (__stdcall *)(PVOID))v29->FreeEx == ExFreePool )
            ExFreePool(v24);
          else
            guard_dispatch_icall_no_overrides(v24, v28);
        }
        goto LABEL_35;
      }
      v53 = CmpCallBackCount * KeNumberProcessors_0;
      if ( (unsigned int)(CmpCallBackCount * KeNumberProcessors_0) > 0x40 )
        v53 = 64;
      if ( LOWORD(CmpCallbackContextSList.Alignment) >= v53 )
LABEL_126:
        ExFreePoolWithTag(v24, 0);
      else
        RtlpInterlockedPushEntrySList(&CmpCallbackContextSList, v24);
LABEL_35:
      if ( _InterlockedDecrement(v19) == 0x80000000 )
      {
        _InterlockedOr(v55, 0);
        if ( CallbackListDeleteEvent )
          ExfUnblockPushLock((__int64)&CallbackListDeleteEvent, 0LL);
      }
      v7 = 0;
      v57 = 1;
      v27 = v58;
      goto LABEL_39;
    }
    CmpCallbackFetchCallContext(v10, a2, v24);
    v56 = 1;
    v46 = KeGetCurrentThread();
    --v46->KernelApcDisable;
    v47 = (char *)KeAbPreAcquire((__int64)&CmpCallbackListLock, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpCallbackListLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&CmpCallbackListLock, 0, v47, (__int64)&CmpCallbackListLock);
    if ( v47 )
      v47[10] = 1;
  }
  if ( _InterlockedDecrement(v19) == 0x80000000 )
  {
    _InterlockedOr(v55, 0);
    if ( CallbackListDeleteEvent )
      ExfUnblockPushLock((__int64)&CallbackListDeleteEvent, 0LL);
  }
  v27 = -1073741670;
  v58 = -1073741670;
  v57 = 1;
  v7 = 0;
LABEL_39:
  if ( v56 )
  {
    _m_prefetchw(&CmpCallbackListLock);
    v30 = CmpCallbackListLock - 16;
    if ( (CmpCallbackListLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v30 = 0LL;
    if ( (CmpCallbackListLock & 2) != 0
      || (v31 = CmpCallbackListLock,
          v31 != _InterlockedCompareExchange64(
                   (volatile signed __int64 *)&CmpCallbackListLock,
                   v30,
                   CmpCallbackListLock)) )
    {
      ExfReleasePushLock(&CmpCallbackListLock);
    }
    KeAbPostRelease((ULONG_PTR)&CmpCallbackListLock);
    KeLeaveCriticalRegionThread();
    v27 = v58;
    v11 = 0LL;
  }
  else
  {
    v11 = v59;
  }
  v8 = a3;
  v9 = a2;
LABEL_46:
  if ( !v7 )
  {
    if ( v57 == 1 )
    {
      v64 = 0LL;
      v65 = 0LL;
      v66 = 0LL;
      v67 = 0LL;
      v11 = &v64;
      v59 = &v64;
      v32 = a5;
      if ( ((a5 - 27) & 0xFFFFFFFD) != 0 )
      {
        *(_QWORD *)&v64 = a6;
      }
      else
      {
        if ( v27 == -1073740541 )
          v50 = **(_QWORD **)(v9 + 72);
        else
          v50 = 0LL;
        *(_QWORD *)&v64 = v50;
        v11 = v59;
      }
      if ( v27 == -1073740541 )
      {
        v51 = 0;
        if ( ((v10 - 26) & 0xFFFFFFFD) == 0 )
          v51 = *(_DWORD *)(v8 + 12);
        DWORD2(v64) = v51;
      }
      else
      {
        v51 = v27;
        DWORD2(v64) = v27;
      }
      DWORD2(v65) = v51;
      *(_QWORD *)&v65 = v9;
      if ( v8 )
      {
        v63 = &v71;
        *(_QWORD *)&v71 = &v64;
        *((_QWORD *)&v71 + 1) = v8;
      }
    }
    else
    {
      v11 = (__int128 *)v9;
      v59 = (__int128 *)v9;
      v63 = (__int128 *)v8;
      v32 = v10;
    }
    while ( (_QWORD *)*v18 != v18 )
    {
      v33 = v18[1];
      v61 = (_SLIST_ENTRY ***)v33;
      v34 = *(_QWORD **)(v33 + 8);
      if ( *(_QWORD **)v33 != v18 || *v34 != v33 )
        goto LABEL_25;
      v18[1] = v34;
      *v34 = v18;
      v60 = *(__int64 **)(v33 + 24);
      v35 = v60;
      *((_QWORD *)v11 + 4) = *(_QWORD *)(v33 + 32);
      CmpCallbackFillObjectContext(v32, v11, v35 + 3);
      if ( !a3 || (v36 = v63, (*((_DWORD *)v35 + 5) & 1) == 0) )
        v36 = v59;
      v37 = v35[4];
      if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v35[5] == VrpRegistryCallback )
        v38 = VrpRegistryCallback(v37, (int)v32, v36);
      else
        v38 = guard_dispatch_icall_no_overrides(v37, (int)v32);
      v58 = v38;
      v39 = (PVOID *)v70[1].WaitBlock[0].SparePtr;
      if ( v39 )
        v70[1].WaitBlock[0].SparePtr = *v39;
      if ( CmpAllocateCallbackMemoryFromPool )
        goto LABEL_121;
      if ( CmpAllocateCallbackMemoryFromPerProcLookaside )
      {
        v40 = KeGetCurrentPrcb();
        v41 = v40->PPLookasideList[10].P;
        ++v41->TotalFrees;
        if ( LOWORD(v41->ListHead.Alignment) < v41->Depth
          || (++v41->FreeMisses,
              v41 = v40->PPLookasideList[10].L,
              ++v41->TotalFrees,
              LOWORD(v41->ListHead.Alignment) < v41->Depth) )
        {
          RtlpInterlockedPushEntrySList(&v41->ListHead, (PSLIST_ENTRY)v33);
        }
        else
        {
          ++v41->FreeMisses;
          if ( (void (__stdcall *)(PVOID))v41->FreeEx == ExFreePool )
            ExFreePool((PVOID)v33);
          else
            guard_dispatch_icall_no_overrides(v33, v40);
        }
        goto LABEL_64;
      }
      v52 = CmpCallBackCount * KeNumberProcessors_0;
      if ( (unsigned int)(CmpCallBackCount * KeNumberProcessors_0) > 0x40 )
        v52 = 64;
      if ( LOWORD(CmpCallbackContextSList.Alignment) >= v52 )
LABEL_121:
        ExFreePoolWithTag((PVOID)v33, 0);
      else
        RtlpInterlockedPushEntrySList(&CmpCallbackContextSList, (PSLIST_ENTRY)v33);
LABEL_64:
      if ( _InterlockedDecrement((volatile signed __int32 *)v35 + 4) == 0x80000000 )
      {
        _InterlockedOr(v55, 0);
        if ( CallbackListDeleteEvent )
          ExfUnblockPushLock((__int64)&CallbackListDeleteEvent, 0LL);
      }
      v11 = v59;
      if ( v58 == -1073740541 )
        *((_DWORD *)v59 + 2) = *((_DWORD *)v59 + 6);
      v27 = 0;
      v58 = 0;
      continue;
    }
  }
  if ( v57 == 1 )
  {
    if ( v11 )
    {
      v27 = *((_DWORD *)v11 + 6);
      if ( v27 >= 0 )
        return (unsigned int)-1073740541;
    }
  }
  return (unsigned int)v27;
}
