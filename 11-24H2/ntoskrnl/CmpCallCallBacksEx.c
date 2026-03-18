/*
 * XREFs of CmpCallCallBacksEx @ 0x140847D10
 * Callers:
 *     NtRenameKey @ 0x1407D04D0 (NtRenameKey.c)
 *     NtReplaceKey @ 0x1407D0990 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x1407D0CE0 (NtRestoreKey.c)
 *     NtSaveMergedKeys @ 0x1407D1090 (NtSaveMergedKeys.c)
 *     CmpDeleteKeyObject @ 0x140847360 (CmpDeleteKeyObject.c)
 *     CmPostCallbackNotification @ 0x140847B20 (CmPostCallbackNotification.c)
 *     CmpCallCallBacks @ 0x140847BE0 (CmpCallCallBacks.c)
 *     CmPostCallbackNotificationEx @ 0x140847C20 (CmPostCallbackNotificationEx.c)
 *     NtQueryKey @ 0x140849760 (NtQueryKey.c)
 *     CmpSecurityMethod @ 0x140852E10 (CmpSecurityMethod.c)
 *     NtDeleteKey @ 0x1408697B0 (NtDeleteKey.c)
 *     NtSetValueKey @ 0x14086A810 (NtSetValueKey.c)
 *     CmpParseKey @ 0x14089F150 (CmpParseKey.c)
 *     NtEnumerateValueKey @ 0x14090C2D0 (NtEnumerateValueKey.c)
 *     CmUnloadKey @ 0x14092B0F8 (CmUnloadKey.c)
 *     CmLoadDifferencingKey @ 0x14092C750 (CmLoadDifferencingKey.c)
 *     NtSetInformationKey @ 0x1409785A0 (NtSetInformationKey.c)
 *     NtQueryMultipleValueKey @ 0x1409790C0 (NtQueryMultipleValueKey.c)
 *     NtDeleteValueKey @ 0x140979A90 (NtDeleteValueKey.c)
 *     NtSaveKeyEx @ 0x140A6DF30 (NtSaveKeyEx.c)
 *     NtFlushKey @ 0x140A74F60 (NtFlushKey.c)
 *     NtEnumerateKey @ 0x140AE3CA0 (NtEnumerateKey.c)
 *     NtQueryValueKey @ 0x140AE41C0 (NtQueryValueKey.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfUnblockPushLock @ 0x1402C7820 (ExfUnblockPushLock.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B3890 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     CmpCallbackFatalFilter @ 0x1407D18BC (CmpCallbackFatalFilter.c)
 *     CmpCallbackFetchCallContext @ 0x1408486C0 (CmpCallbackFetchCallContext.c)
 *     CmpCallbackFillObjectContext @ 0x1408487F0 (CmpCallbackFillObjectContext.c)
 *     VrpRegistryCallback @ 0x140849230 (VrpRegistryCallback.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B72CB0 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  _QWORD *v17; // rbx
  _QWORD *v18; // r13
  volatile signed __int32 *v19; // r12
  signed __int64 v20; // rdx
  ULONG_PTR v21; // rtt
  struct _KPRCB *CurrentPrcb; // r14
  _GENERAL_LOOKASIDE *P; // rsi
  struct _SLIST_ENTRY *v24; // rbx
  _GENERAL_LOOKASIDE *L; // rsi
  __int64 v26; // r9
  struct _SLIST_ENTRY **v27; // rcx
  int v28; // ecx
  struct _KPRCB *v29; // rdx
  _GENERAL_LOOKASIDE *v30; // rcx
  signed __int64 v31; // rdx
  ULONG_PTR v32; // rtt
  unsigned int v33; // esi
  __int64 v34; // rbx
  _QWORD *v35; // rax
  __int64 *v36; // rdi
  __int128 *v37; // r8
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // r8
  __int64 v41; // r9
  PVOID *v42; // rax
  struct _KPRCB *v43; // rdx
  _GENERAL_LOOKASIDE *v44; // rcx
  __int64 v46; // r8
  __int64 v47; // rcx
  int v48; // eax
  __int64 v49; // r8
  __int64 v50; // r9
  struct _KTHREAD *v51; // rax
  _QWORD *v52; // rbx
  _SLIST_ENTRY *Next; // rcx
  struct _SLIST_ENTRY **v54; // rdx
  __int64 v55; // rdx
  int v56; // eax
  unsigned int v57; // ecx
  unsigned int v58; // ecx
  PSLIST_ENTRY Pool2; // rax
  signed __int32 v60[8]; // [rsp+0h] [rbp-108h] BYREF
  char v61; // [rsp+20h] [rbp-E8h]
  char v62; // [rsp+21h] [rbp-E7h]
  int v63; // [rsp+24h] [rbp-E4h]
  __int128 *v64; // [rsp+30h] [rbp-D8h]
  __int64 *v65; // [rsp+38h] [rbp-D0h]
  struct _SLIST_ENTRY ***v66; // [rsp+40h] [rbp-C8h]
  PSLIST_ENTRY v67; // [rsp+48h] [rbp-C0h]
  __int128 *v68; // [rsp+50h] [rbp-B8h]
  __int128 v69; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v70; // [rsp+68h] [rbp-A0h]
  __int128 v71; // [rsp+78h] [rbp-90h]
  __int64 v72; // [rsp+88h] [rbp-80h]
  __int64 *v73; // [rsp+90h] [rbp-78h]
  unsigned __int8 *v74; // [rsp+98h] [rbp-70h]
  struct _KTHREAD *v75; // [rsp+A0h] [rbp-68h]
  __int128 v76; // [rsp+A8h] [rbp-60h] BYREF

  v7 = a4;
  v8 = a3;
  v9 = a2;
  v10 = a1;
  v63 = 0;
  v69 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v76 = 0LL;
  v11 = 0LL;
  v64 = 0LL;
  v68 = 0LL;
  v62 = 0;
  CurrentThread = KeGetCurrentThread();
  v75 = CurrentThread;
  if ( v7 != 1 )
  {
    v18 = (_QWORD *)a7;
    v28 = v63;
    goto LABEL_46;
  }
  p_SparePtr = (_SLIST_ENTRY **)&CurrentThread[1].WaitBlock[0].SparePtr;
  v74 = &CurrentThread[1].WaitBlockFill5[40];
  SparePtr = CurrentThread[1].WaitBlock[0].SparePtr;
  if ( SparePtr )
    v15 = (__int64 *)*((_QWORD *)SparePtr + 1);
  else
    v15 = &CallbackListHead;
  v61 = 1;
  v16 = KeGetCurrentThread();
  --v16->KernelApcDisable;
  v17 = KeAbPreAcquire((__int64)&CmpCallbackListLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpCallbackListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&CmpCallbackListLock, 0, v17, (__int64)&CmpCallbackListLock);
  if ( v17 )
    *((_BYTE *)v17 + 10) = 1;
  v18 = (_QWORD *)a7;
  while ( 1 )
  {
    do
    {
      v15 = (__int64 *)*v15;
      v65 = v15;
      if ( v15 == &CallbackListHead )
      {
        v28 = v63;
        goto LABEL_39;
      }
      v19 = (volatile signed __int32 *)(v15 + 2);
      v73 = v15 + 2;
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
    v61 = 0;
    if ( CmpAllocateCallbackMemoryFromPool )
      goto LABEL_129;
    if ( !CmpAllocateCallbackMemoryFromPerProcLookaside )
    {
      Pool2 = RtlpInterlockedPopEntrySList(&CmpCallbackContextSList);
      v24 = Pool2;
      if ( !Pool2 )
      {
LABEL_129:
        Pool2 = (PSLIST_ENTRY)ExAllocatePool2(0x100uLL);
        v24 = Pool2;
      }
      v67 = Pool2;
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
        v24 = (struct _SLIST_ENTRY *)guard_dispatch_icall_no_overrides((unsigned int)L->Type, L->Size, L->Tag, v26);
      }
    }
    if ( v24 )
      LODWORD(v24->Next) = CurrentPrcb->Number;
    v67 = v24;
    v7 = a4;
    v10 = a1;
LABEL_23:
    if ( !v24 )
      break;
    *((_QWORD *)&v24[1].Next + 1) = v15;
    v24[2].Next = 0LL;
    v24[1].Next = *p_SparePtr;
    *p_SparePtr = v24 + 1;
    v27 = *(struct _SLIST_ENTRY ***)(a7 + 8);
    if ( *v27 != (struct _SLIST_ENTRY *)a7 )
      goto LABEL_25;
    v24->Next = (_SLIST_ENTRY *)a7;
    v66 = (struct _SLIST_ENTRY ***)(&v24->Next + 1);
    *((_QWORD *)&v24->Next + 1) = v27;
    *v27 = v24;
    *(_QWORD *)(a7 + 8) = v24;
    CmpCallbackFillObjectContext(v10, a2, v15 + 3);
    if ( a3 && (*((_DWORD *)v15 + 5) & 1) != 0 )
      v46 = a3;
    else
      v46 = a2;
    v47 = v15[4];
    if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v15[5] == VrpRegistryCallback )
      v48 = VrpRegistryCallback(v47, (int)v10, v46);
    else
      v48 = guard_dispatch_icall_no_overrides(v47, (int)v10, v46, VrpRegistryCallback);
    v63 = v48;
    if ( v10 == 14 )
    {
      v63 = 0;
    }
    else if ( v48 < 0 )
    {
      Next = v24->Next;
      v54 = *v66;
      if ( *(&v24->Next->Next + 1) != v24 || *v54 != v24 )
LABEL_25:
        __fastfail(3u);
      *v54 = Next;
      *((_QWORD *)&Next->Next + 1) = v54;
      if ( *p_SparePtr )
        *p_SparePtr = (*p_SparePtr)->Next;
      if ( CmpAllocateCallbackMemoryFromPool )
        goto LABEL_126;
      if ( CmpAllocateCallbackMemoryFromPerProcLookaside )
      {
        v29 = KeGetCurrentPrcb();
        v30 = v29->PPLookasideList[10].P;
        ++v30->TotalFrees;
        if ( LOWORD(v30->ListHead.Alignment) < v30->Depth
          || (++v30->FreeMisses,
              v30 = v29->PPLookasideList[10].L,
              ++v30->TotalFrees,
              LOWORD(v30->ListHead.Alignment) < v30->Depth) )
        {
          RtlpInterlockedPushEntrySList(&v30->ListHead, v24);
        }
        else
        {
          ++v30->FreeMisses;
          if ( (void (__stdcall *)(PVOID))v30->FreeEx == ExFreePool )
            ExFreePool(v24);
          else
            guard_dispatch_icall_no_overrides(v24, v29, v49, v50);
        }
        goto LABEL_35;
      }
      v58 = CmpCallBackCount * KeNumberProcessors_0;
      if ( (unsigned int)(CmpCallBackCount * KeNumberProcessors_0) > 0x40 )
        v58 = 64;
      if ( LOWORD(CmpCallbackContextSList.Alignment) >= v58 )
LABEL_126:
        ExFreePoolWithTag(v24, 0);
      else
        RtlpInterlockedPushEntrySList(&CmpCallbackContextSList, v24);
LABEL_35:
      if ( _InterlockedDecrement(v19) == 0x80000000 )
      {
        _InterlockedOr(v60, 0);
        if ( CallbackListDeleteEvent )
          ExfUnblockPushLock((__int64)&CallbackListDeleteEvent, 0LL);
      }
      v7 = 0;
      v62 = 1;
      v28 = v63;
      goto LABEL_39;
    }
    CmpCallbackFetchCallContext(v10, a2, v24);
    v61 = 1;
    v51 = KeGetCurrentThread();
    --v51->KernelApcDisable;
    v52 = KeAbPreAcquire((__int64)&CmpCallbackListLock, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpCallbackListLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&CmpCallbackListLock, 0, v52, (__int64)&CmpCallbackListLock);
    if ( v52 )
      *((_BYTE *)v52 + 10) = 1;
  }
  if ( _InterlockedDecrement(v19) == 0x80000000 )
  {
    _InterlockedOr(v60, 0);
    if ( CallbackListDeleteEvent )
      ExfUnblockPushLock((__int64)&CallbackListDeleteEvent, 0LL);
  }
  v28 = -1073741670;
  v63 = -1073741670;
  v62 = 1;
  v7 = 0;
LABEL_39:
  if ( v61 )
  {
    _m_prefetchw(&CmpCallbackListLock);
    v31 = CmpCallbackListLock - 16;
    if ( (CmpCallbackListLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v31 = 0LL;
    if ( (CmpCallbackListLock & 2) != 0
      || (v32 = CmpCallbackListLock,
          v32 != _InterlockedCompareExchange64(
                   (volatile signed __int64 *)&CmpCallbackListLock,
                   v31,
                   CmpCallbackListLock)) )
    {
      ExfReleasePushLock(&CmpCallbackListLock);
    }
    KeAbPostRelease((ULONG_PTR)&CmpCallbackListLock);
    KeLeaveCriticalRegionThread();
    v28 = v63;
    v11 = 0LL;
  }
  else
  {
    v11 = v64;
  }
  v8 = a3;
  v9 = a2;
LABEL_46:
  if ( !v7 )
  {
    if ( v62 == 1 )
    {
      v69 = 0LL;
      v70 = 0LL;
      v71 = 0LL;
      v72 = 0LL;
      v11 = &v69;
      v64 = &v69;
      v33 = a5;
      if ( ((a5 - 27) & 0xFFFFFFFD) != 0 )
      {
        *(_QWORD *)&v69 = a6;
      }
      else
      {
        if ( v28 == -1073740541 )
          v55 = **(_QWORD **)(v9 + 72);
        else
          v55 = 0LL;
        *(_QWORD *)&v69 = v55;
        v11 = v64;
      }
      if ( v28 == -1073740541 )
      {
        v56 = 0;
        if ( ((v10 - 26) & 0xFFFFFFFD) == 0 )
          v56 = *(_DWORD *)(v8 + 12);
        DWORD2(v69) = v56;
      }
      else
      {
        v56 = v28;
        DWORD2(v69) = v28;
      }
      DWORD2(v70) = v56;
      *(_QWORD *)&v70 = v9;
      if ( v8 )
      {
        v68 = &v76;
        *(_QWORD *)&v76 = &v69;
        *((_QWORD *)&v76 + 1) = v8;
      }
    }
    else
    {
      v11 = (__int128 *)v9;
      v64 = (__int128 *)v9;
      v68 = (__int128 *)v8;
      v33 = v10;
    }
    while ( (_QWORD *)*v18 != v18 )
    {
      v34 = v18[1];
      v66 = (struct _SLIST_ENTRY ***)v34;
      v35 = *(_QWORD **)(v34 + 8);
      if ( *(_QWORD **)v34 != v18 || *v35 != v34 )
        goto LABEL_25;
      v18[1] = v35;
      *v35 = v18;
      v65 = *(__int64 **)(v34 + 24);
      v36 = v65;
      *((_QWORD *)v11 + 4) = *(_QWORD *)(v34 + 32);
      CmpCallbackFillObjectContext(v33, v11, v36 + 3);
      if ( !a3 || (v37 = v68, (*((_DWORD *)v36 + 5) & 1) == 0) )
        v37 = v64;
      v38 = v36[4];
      if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v36[5] == VrpRegistryCallback )
        v39 = VrpRegistryCallback(v38, (int)v33, v37);
      else
        v39 = guard_dispatch_icall_no_overrides(v38, (int)v33, v37, VrpRegistryCallback);
      v63 = v39;
      v42 = (PVOID *)v75[1].WaitBlock[0].SparePtr;
      if ( v42 )
        v75[1].WaitBlock[0].SparePtr = *v42;
      if ( CmpAllocateCallbackMemoryFromPool )
        goto LABEL_121;
      if ( CmpAllocateCallbackMemoryFromPerProcLookaside )
      {
        v43 = KeGetCurrentPrcb();
        v44 = v43->PPLookasideList[10].P;
        ++v44->TotalFrees;
        if ( LOWORD(v44->ListHead.Alignment) < v44->Depth
          || (++v44->FreeMisses,
              v44 = v43->PPLookasideList[10].L,
              ++v44->TotalFrees,
              LOWORD(v44->ListHead.Alignment) < v44->Depth) )
        {
          RtlpInterlockedPushEntrySList(&v44->ListHead, (PSLIST_ENTRY)v34);
        }
        else
        {
          ++v44->FreeMisses;
          if ( (void (__stdcall *)(PVOID))v44->FreeEx == ExFreePool )
            ExFreePool((PVOID)v34);
          else
            guard_dispatch_icall_no_overrides(v34, v43, v40, v41);
        }
        goto LABEL_64;
      }
      v57 = CmpCallBackCount * KeNumberProcessors_0;
      if ( (unsigned int)(CmpCallBackCount * KeNumberProcessors_0) > 0x40 )
        v57 = 64;
      if ( LOWORD(CmpCallbackContextSList.Alignment) >= v57 )
LABEL_121:
        ExFreePoolWithTag((PVOID)v34, 0);
      else
        RtlpInterlockedPushEntrySList(&CmpCallbackContextSList, (PSLIST_ENTRY)v34);
LABEL_64:
      if ( _InterlockedDecrement((volatile signed __int32 *)v36 + 4) == 0x80000000 )
      {
        _InterlockedOr(v60, 0);
        if ( CallbackListDeleteEvent )
          ExfUnblockPushLock((__int64)&CallbackListDeleteEvent, 0LL);
      }
      v11 = v64;
      if ( v63 == -1073740541 )
        *((_DWORD *)v64 + 2) = *((_DWORD *)v64 + 6);
      v28 = 0;
      v63 = 0;
      continue;
    }
  }
  if ( v62 == 1 )
  {
    if ( v11 )
    {
      v28 = *((_DWORD *)v11 + 6);
      if ( v28 >= 0 )
        return (unsigned int)-1073740541;
    }
  }
  return (unsigned int)v28;
}
