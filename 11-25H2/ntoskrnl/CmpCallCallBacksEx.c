/*
 * XREFs of CmpCallCallBacksEx @ 0x14084C050
 * Callers:
 *     NtRenameKey @ 0x1407C0DC0 (NtRenameKey.c)
 *     NtReplaceKey @ 0x1407C1280 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x1407C15D0 (NtRestoreKey.c)
 *     NtSaveMergedKeys @ 0x1407C1980 (NtSaveMergedKeys.c)
 *     NtEnumerateValueKey @ 0x140840320 (NtEnumerateValueKey.c)
 *     CmpDeleteKeyObject @ 0x14084B6B0 (CmpDeleteKeyObject.c)
 *     CmPostCallbackNotification @ 0x14084BE60 (CmPostCallbackNotification.c)
 *     CmpCallCallBacks @ 0x14084BF20 (CmpCallCallBacks.c)
 *     CmPostCallbackNotificationEx @ 0x14084BF60 (CmPostCallbackNotificationEx.c)
 *     NtQueryKey @ 0x14084D9C0 (NtQueryKey.c)
 *     CmpSecurityMethod @ 0x140856B80 (CmpSecurityMethod.c)
 *     CmpParseKey @ 0x14085EAA0 (CmpParseKey.c)
 *     NtSetInformationKey @ 0x140862E30 (NtSetInformationKey.c)
 *     CmUnloadKey @ 0x1408644F8 (CmUnloadKey.c)
 *     NtSetValueKey @ 0x140869680 (NtSetValueKey.c)
 *     NtDeleteValueKey @ 0x14086CE00 (NtDeleteValueKey.c)
 *     CmLoadDifferencingKey @ 0x140913148 (CmLoadDifferencingKey.c)
 *     NtQueryMultipleValueKey @ 0x140995DD0 (NtQueryMultipleValueKey.c)
 *     NtDeleteKey @ 0x140A0A070 (NtDeleteKey.c)
 *     NtSaveKeyEx @ 0x140A6BD80 (NtSaveKeyEx.c)
 *     NtFlushKey @ 0x140A73170 (NtFlushKey.c)
 *     NtEnumerateKey @ 0x140AD2D00 (NtEnumerateKey.c)
 *     NtQueryValueKey @ 0x140AD3580 (NtQueryValueKey.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     ExfUnblockPushLock @ 0x14036EA10 (ExfUnblockPushLock.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     CmpCallbackFatalFilter @ 0x1407C2194 (CmpCallbackFatalFilter.c)
 *     CmpCallbackFetchCallContext @ 0x14084C9E0 (CmpCallbackFetchCallContext.c)
 *     CmpCallbackFillObjectContext @ 0x14084CB10 (CmpCallbackFillObjectContext.c)
 *     VrpRegistryCallback @ 0x14084D490 (VrpRegistryCallback.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  __int64 v8; // r10
  __int64 v9; // r9
  unsigned int v10; // r8d
  __int128 *v11; // rdx
  struct _KTHREAD *CurrentThread; // rax
  _SLIST_ENTRY **p_SparePtr; // r15
  PVOID SparePtr; // rax
  __int64 *v15; // rdi
  struct _KTHREAD *v16; // rax
  __int64 *v17; // rbx
  _QWORD *v18; // r13
  volatile signed __int32 *v19; // r12
  signed __int64 v20; // rdx
  ULONG_PTR v21; // rtt
  struct _KPRCB *CurrentPrcb; // r14
  _GENERAL_LOOKASIDE *P; // rsi
  _SLIST_ENTRY *v24; // rbx
  _SLIST_ENTRY **v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rcx
  int v28; // eax
  struct _KTHREAD *v29; // rax
  __int64 *v30; // rbx
  _SLIST_ENTRY *Next; // rdx
  _SLIST_ENTRY **v32; // rcx
  struct _KPRCB *v33; // rdx
  _GENERAL_LOOKASIDE *v34; // rcx
  int v35; // ecx
  signed __int64 v36; // rdx
  ULONG_PTR v37; // rtt
  unsigned int v38; // esi
  __int64 v39; // rbx
  _QWORD *v40; // rax
  __int64 *v41; // rdi
  __int128 *v42; // r8
  __int64 v43; // rcx
  int v44; // eax
  PVOID *v45; // rax
  struct _KPRCB *v46; // rdx
  _GENERAL_LOOKASIDE *v47; // rcx
  _GENERAL_LOOKASIDE *L; // rsi
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
    v35 = v58;
    goto LABEL_58;
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
  v17 = KeAbPreAcquire((__int64)&CmpCallbackListLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpCallbackListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&CmpCallbackListLock, 0, v17, (unsigned __int64)&CmpCallbackListLock);
  if ( v17 )
    *((_BYTE *)v17 + 10) = 1;
  v18 = (_QWORD *)a7;
  while ( 1 )
  {
    do
    {
      v15 = (__int64 *)*v15;
      v60 = v15;
      if ( v15 == &CallbackListHead )
      {
        v35 = v58;
        goto LABEL_51;
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
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v56 = 0;
    if ( CmpAllocateCallbackMemoryFromPool )
      goto LABEL_127;
    if ( !CmpAllocateCallbackMemoryFromPerProcLookaside )
    {
      Pool2 = RtlpInterlockedPopEntrySList(&CmpCallbackContextSList);
      v24 = Pool2;
      if ( !Pool2 )
      {
LABEL_127:
        Pool2 = (PSLIST_ENTRY)ExAllocatePool2(0x100uLL);
        v24 = Pool2;
      }
      v62 = Pool2;
      goto LABEL_21;
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
        v24 = (_SLIST_ENTRY *)guard_dispatch_icall_no_overrides((unsigned int)L->Type);
      }
    }
    if ( v24 )
      LODWORD(v24->Next) = CurrentPrcb->Number;
    v62 = v24;
    v7 = a4;
LABEL_21:
    if ( !v24 )
      break;
    *((_QWORD *)&v24[1].Next + 1) = v15;
    v24[2].Next = 0LL;
    v24[1].Next = *p_SparePtr;
    *p_SparePtr = v24 + 1;
    v25 = *(_SLIST_ENTRY ***)(a7 + 8);
    if ( *v25 != (_SLIST_ENTRY *)a7 )
      goto LABEL_23;
    v24->Next = (_SLIST_ENTRY *)a7;
    v61 = (_SLIST_ENTRY ***)(&v24->Next + 1);
    *((_QWORD *)&v24->Next + 1) = v25;
    *v25 = v24;
    *(_QWORD *)(a7 + 8) = v24;
    CmpCallbackFillObjectContext(a1, a2, v15 + 3);
    if ( a3 && (*((_DWORD *)v15 + 5) & 1) != 0 )
      v26 = a3;
    else
      v26 = a2;
    v27 = v15[4];
    if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v15[5] == VrpRegistryCallback )
      v28 = VrpRegistryCallback(v27, (int)a1, v26);
    else
      v28 = guard_dispatch_icall_no_overrides(v27);
    v58 = v28;
    if ( a1 == 14 )
    {
      v58 = 0;
    }
    else if ( v28 < 0 )
    {
      Next = v24->Next;
      v32 = *v61;
      if ( *(&v24->Next->Next + 1) != v24 || *v32 != v24 )
LABEL_23:
        __fastfail(3u);
      *v32 = Next;
      *((_QWORD *)&Next->Next + 1) = v32;
      if ( *p_SparePtr )
        *p_SparePtr = (*p_SparePtr)->Next;
      if ( CmpAllocateCallbackMemoryFromPool )
        goto LABEL_124;
      if ( CmpAllocateCallbackMemoryFromPerProcLookaside )
      {
        v33 = KeGetCurrentPrcb();
        v34 = v33->PPLookasideList[10].P;
        ++v34->TotalFrees;
        if ( LOWORD(v34->ListHead.Alignment) < v34->Depth
          || (++v34->FreeMisses,
              v34 = v33->PPLookasideList[10].L,
              ++v34->TotalFrees,
              LOWORD(v34->ListHead.Alignment) < v34->Depth) )
        {
          RtlpInterlockedPushEntrySList(&v34->ListHead, v24);
        }
        else
        {
          ++v34->FreeMisses;
          if ( (void (__stdcall *)(PVOID))v34->FreeEx == ExFreePool )
            ExFreePool(v24);
          else
            guard_dispatch_icall_no_overrides(v24);
        }
        goto LABEL_47;
      }
      v53 = CmpCallBackCount * KeNumberProcessors_0;
      if ( (unsigned int)(CmpCallBackCount * KeNumberProcessors_0) > 0x40 )
        v53 = 64;
      if ( LOWORD(CmpCallbackContextSList.Alignment) >= v53 )
LABEL_124:
        ExFreePoolWithTag(v24, 0);
      else
        RtlpInterlockedPushEntrySList(&CmpCallbackContextSList, v24);
LABEL_47:
      if ( _InterlockedDecrement(v19) == 0x80000000 )
      {
        _InterlockedOr(v55, 0);
        if ( CallbackListDeleteEvent )
          ExfUnblockPushLock((__int64)&CallbackListDeleteEvent, 0LL);
      }
      v7 = 0;
      v57 = 1;
      v35 = v58;
      goto LABEL_51;
    }
    CmpCallbackFetchCallContext(a1, a2, v24);
    v56 = 1;
    v29 = KeGetCurrentThread();
    --v29->KernelApcDisable;
    v30 = KeAbPreAcquire((__int64)&CmpCallbackListLock, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpCallbackListLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&CmpCallbackListLock, 0, v30, (unsigned __int64)&CmpCallbackListLock);
    if ( v30 )
      *((_BYTE *)v30 + 10) = 1;
  }
  if ( _InterlockedDecrement(v19) == 0x80000000 )
  {
    _InterlockedOr(v55, 0);
    if ( CallbackListDeleteEvent )
      ExfUnblockPushLock((__int64)&CallbackListDeleteEvent, 0LL);
  }
  v35 = -1073741670;
  v58 = -1073741670;
  v57 = 1;
  v7 = 0;
LABEL_51:
  if ( v56 )
  {
    _m_prefetchw(&CmpCallbackListLock);
    v36 = CmpCallbackListLock - 16;
    if ( (CmpCallbackListLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v36 = 0LL;
    if ( (CmpCallbackListLock & 2) != 0
      || (v37 = CmpCallbackListLock,
          v37 != _InterlockedCompareExchange64(
                   (volatile signed __int64 *)&CmpCallbackListLock,
                   v36,
                   CmpCallbackListLock)) )
    {
      ExfReleasePushLock(&CmpCallbackListLock);
    }
    KeAbPostRelease((ULONG_PTR)&CmpCallbackListLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v35 = v58;
  }
  v8 = a3;
  v9 = a2;
  v11 = v59;
  v10 = a1;
LABEL_58:
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
      v38 = a5;
      if ( ((a5 - 27) & 0xFFFFFFFD) != 0 )
      {
        *(_QWORD *)&v64 = a6;
      }
      else
      {
        if ( v35 == -1073740541 )
          v50 = **(_QWORD **)(v9 + 72);
        else
          v50 = 0LL;
        *(_QWORD *)&v64 = v50;
        v11 = v59;
      }
      if ( v35 == -1073740541 )
      {
        v51 = 0;
        if ( ((v10 - 26) & 0xFFFFFFFD) == 0 )
          v51 = *(_DWORD *)(v8 + 12);
        DWORD2(v64) = v51;
      }
      else
      {
        v51 = v35;
        DWORD2(v64) = v35;
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
      v38 = v10;
    }
    while ( (_QWORD *)*v18 != v18 )
    {
      v39 = v18[1];
      v61 = (_SLIST_ENTRY ***)v39;
      v40 = *(_QWORD **)(v39 + 8);
      if ( *(_QWORD **)v39 != v18 || *v40 != v39 )
        goto LABEL_23;
      v18[1] = v40;
      *v40 = v18;
      v60 = *(__int64 **)(v39 + 24);
      v41 = v60;
      *((_QWORD *)v11 + 4) = *(_QWORD *)(v39 + 32);
      CmpCallbackFillObjectContext(v38, v11, v41 + 3);
      if ( !a3 || (v42 = v63, (*((_DWORD *)v41 + 5) & 1) == 0) )
        v42 = v59;
      v43 = v41[4];
      if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v41[5] == VrpRegistryCallback )
        v44 = VrpRegistryCallback(v43, (int)v38, v42);
      else
        v44 = guard_dispatch_icall_no_overrides(v43);
      v58 = v44;
      v45 = (PVOID *)v70[1].WaitBlock[0].SparePtr;
      if ( v45 )
        v70[1].WaitBlock[0].SparePtr = *v45;
      if ( CmpAllocateCallbackMemoryFromPool )
        goto LABEL_120;
      if ( CmpAllocateCallbackMemoryFromPerProcLookaside )
      {
        v46 = KeGetCurrentPrcb();
        v47 = v46->PPLookasideList[10].P;
        ++v47->TotalFrees;
        if ( LOWORD(v47->ListHead.Alignment) < v47->Depth
          || (++v47->FreeMisses,
              v47 = v46->PPLookasideList[10].L,
              ++v47->TotalFrees,
              LOWORD(v47->ListHead.Alignment) < v47->Depth) )
        {
          RtlpInterlockedPushEntrySList(&v47->ListHead, (PSLIST_ENTRY)v39);
        }
        else
        {
          ++v47->FreeMisses;
          if ( (void (__stdcall *)(PVOID))v47->FreeEx == ExFreePool )
            ExFreePool((PVOID)v39);
          else
            guard_dispatch_icall_no_overrides(v39);
        }
        goto LABEL_76;
      }
      v52 = CmpCallBackCount * KeNumberProcessors_0;
      if ( (unsigned int)(CmpCallBackCount * KeNumberProcessors_0) > 0x40 )
        v52 = 64;
      if ( LOWORD(CmpCallbackContextSList.Alignment) >= v52 )
LABEL_120:
        ExFreePoolWithTag((PVOID)v39, 0);
      else
        RtlpInterlockedPushEntrySList(&CmpCallbackContextSList, (PSLIST_ENTRY)v39);
LABEL_76:
      if ( _InterlockedDecrement((volatile signed __int32 *)v41 + 4) == 0x80000000 )
      {
        _InterlockedOr(v55, 0);
        if ( CallbackListDeleteEvent )
          ExfUnblockPushLock((__int64)&CallbackListDeleteEvent, 0LL);
      }
      v11 = v59;
      if ( v58 == -1073740541 )
        *((_DWORD *)v59 + 2) = *((_DWORD *)v59 + 6);
      v35 = 0;
      v58 = 0;
      continue;
    }
  }
  if ( v57 == 1 )
  {
    if ( v11 )
    {
      v35 = *((_DWORD *)v11 + 6);
      if ( v35 >= 0 )
        return (unsigned int)-1073740541;
    }
  }
  return (unsigned int)v35;
}
