/*
 * XREFs of KiAbDeferredProcessingWorker @ 0x1402E4D00
 * Callers:
 *     <none>
 * Callees:
 *     KiSendSoftwareInterruptAffinity @ 0x140253D64 (KiSendSoftwareInterruptAffinity.c)
 *     KiDeferredReadySingleThread @ 0x1402877C0 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140288530 (KiFlushSoftwareInterruptBatch.c)
 *     HalpInterruptSendIpi @ 0x140288640 (HalpInterruptSendIpi.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObReferenceObjectSafeWithTag @ 0x140299100 (ObReferenceObjectSafeWithTag.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402BC860 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     RtlRbInsertNodeEx @ 0x1402E2370 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x1402E2A20 (RtlRbRemoveNode.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x1402E3830 (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x1402E5690 (KiAbOwnerComputeCpuPriorityKey.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1402E83C0 (KiAbEntryGetLockedHeadEntry.c)
 *     EtwTraceAutoBoostProcessLockEntry @ 0x1402E8C88 (EtwTraceAutoBoostProcessLockEntry.c)
 *     KiAbProcessThreadLocks @ 0x1402E8D40 (KiAbProcessThreadLocks.c)
 *     KiAbSetMinimumThreadPriority @ 0x1402E9E70 (KiAbSetMinimumThreadPriority.c)
 *     PsBoostThreadOutstandingIoQoS @ 0x140325D24 (PsBoostThreadOutstandingIoQoS.c)
 *     IoBoostThreadIoPriority @ 0x140326240 (IoBoostThreadIoPriority.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void __fastcall KiAbDeferredProcessingWorker(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        struct _KPRCB *SystemArgument1,
        PVOID SystemArgument2)
{
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // rsi
  _SINGLE_LIST_ENTRY *p_AbSelfIoBoostsList; // r10
  struct _SINGLE_LIST_ENTRY *Next; // rdi
  struct _SINGLE_LIST_ENTRY *v8; // rax
  BOOL v9; // r9d
  unsigned __int64 v10; // r8
  unsigned int v11; // esi
  bool v12; // zf
  unsigned int v13; // ecx
  __int64 v14; // r15
  __int64 v15; // rax
  struct _SINGLE_LIST_ENTRY *v16; // r8
  unsigned int v17; // esi
  unsigned int v18; // ecx
  __int64 v19; // r15
  __int64 v20; // rax
  struct _SINGLE_LIST_ENTRY *i; // rcx
  struct _SINGLE_LIST_ENTRY *v22; // rbx
  char v23; // si
  _KSOFTWARE_INTERRUPT_BATCH *p_DeferredDispatchInterrupts; // rdi
  char TargetType; // al
  struct _KPRCB *CurrentPrcb; // rax
  unsigned int v27; // edx
  char Level; // r8
  __int64 v29; // rax
  __int64 LockedHeadEntry; // rax
  __int64 v31; // r13
  unsigned int v32; // ebx
  char v33; // al
  __int64 v34; // rcx
  __int64 v35; // rdx
  int v36; // ecx
  BOOLEAN v37; // r8
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // r13
  unsigned int v42; // ebx
  char v43; // al
  __int64 v44; // rcx
  __int64 v45; // rax
  int v46; // ecx
  BOOLEAN v47; // r8
  __int64 v48; // rdx
  __int64 v49; // rax
  int v50; // ecx
  __int64 v51; // rax
  char v52; // dl
  char v53; // r12
  int v54; // ecx
  __int64 v55; // rax
  char v56; // dl
  char v57; // r12
  volatile signed __int16 *v58; // rbx
  char v59; // al
  char v60; // al
  void *v61; // r13
  void *v62; // r13
  signed __int32 v63[8]; // [rsp+0h] [rbp-89h] BYREF
  int v64; // [rsp+30h] [rbp-59h] BYREF
  struct _SINGLE_LIST_ENTRY v65; // [rsp+38h] [rbp-51h] BYREF
  int v66; // [rsp+40h] [rbp-49h] BYREF
  unsigned __int64 v67; // [rsp+48h] [rbp-41h]
  int v68; // [rsp+50h] [rbp-39h] BYREF
  unsigned int v69; // [rsp+54h] [rbp-35h]
  unsigned __int64 v70; // [rsp+58h] [rbp-31h]
  struct _SINGLE_LIST_ENTRY *v71; // [rsp+60h] [rbp-29h]
  struct _SINGLE_LIST_ENTRY *v72; // [rsp+68h] [rbp-21h]
  __int64 v73; // [rsp+70h] [rbp-19h] BYREF
  unsigned int SingleTargetIndex; // [rsp+78h] [rbp-11h]
  __int64 v75; // [rsp+7Ch] [rbp-Dh]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+88h] [rbp-1h] BYREF
  struct _KLOCK_QUEUE_HANDLE v77; // [rsp+A0h] [rbp+17h] BYREF
  int v78; // [rsp+100h] [rbp+77h] BYREF

  p_AbPropagateBoostsList = &SystemArgument1->AbPropagateBoostsList;
  v65.Next = 0LL;
  p_AbSelfIoBoostsList = &SystemArgument1->AbSelfIoBoostsList;
  do
  {
    Next = p_AbSelfIoBoostsList->Next;
    v71 = Next;
    if ( !Next )
      goto LABEL_19;
    do
    {
      p_AbSelfIoBoostsList->Next = Next->Next;
      Next->Next = (struct _SINGLE_LIST_ENTRY *)1;
      _InterlockedOr(v63, 0);
      if ( BYTE1(Next[-3].Next) )
      {
        v8 = Next[41].Next;
        v9 = !v8 || (unsigned int)(1LL << BYTE4(v8[1].Next)) - 1 == (LOWORD(v8[1].Next) | WORD1(v8[1].Next));
        if ( (unsigned int)(1LL << BYTE4(Next[40].Next[1].Next)) - 1 != (LOWORD(Next[40].Next[1].Next) | WORD1(Next[40].Next[1].Next))
          || !v9 )
        {
          v10 = (unsigned __int64)Next[40].Next;
          v70 = v10;
          v11 = (*(unsigned __int16 *)(v10 + 8) | *(unsigned __int16 *)(v10 + 10)) ^ ((1LL << *(_BYTE *)(v10 + 12)) - 1);
          v12 = !_BitScanForward(&v13, v11);
          LODWORD(v67) = v13;
          if ( !v12 )
          {
            while ( 1 )
            {
              v11 &= v11 - 1;
              v14 = 88LL * v13 + v10 + 16;
              v15 = *(_QWORD *)v14;
              if ( *(_QWORD *)v14 )
              {
                if ( (v15 & 2) == 0 && v15 < 0 && !*(_BYTE *)(v14 + 9) )
                  break;
              }
LABEL_9:
              v12 = !_BitScanForward(&v13, v11);
              LODWORD(v67) = v13;
              if ( v12 )
              {
                Next = v71;
                p_AbSelfIoBoostsList = &SystemArgument1->AbSelfIoBoostsList;
                goto LABEL_11;
              }
            }
            v66 = 0;
            v29 = *(_QWORD *)v14 & 0x7FFFFFFFFFFFFFFCLL;
            v67 = v29;
            memset(&LockHandle, 0, sizeof(LockHandle));
            if ( v29 && *(char *)(v14 + 8) >= 0 )
              v67 = v29 | 0x8000000000000000uLL;
            LockedHeadEntry = KiAbEntryGetLockedHeadEntry(v14, 0LL, &LockHandle);
            v31 = LockedHeadEntry;
            if ( LockedHeadEntry )
            {
              if ( *(_BYTE *)(v14 + 9) )
              {
                v32 = 136;
              }
              else
              {
                v32 = 128;
                if ( v14 != LockedHeadEntry )
                {
                  v33 = KiAbOwnerComputeCpuPriorityKey(v14);
                  if ( *(_BYTE *)(v14 + 40) != v33 )
                  {
                    *(_BYTE *)(v14 + 40) = v33;
                    RtlRbRemoveNode((PRTL_RB_TREE)(v31 + 40), (PRTL_BALANCED_NODE)(v14 + 16));
                    v34 = *(_QWORD *)(v31 + 48);
                    v35 = *(_QWORD *)(v31 + 40);
                    if ( (v34 & 1) == 0 )
                      goto LABEL_49;
                    if ( v35 )
                    {
                      v35 ^= v31 + 40;
LABEL_49:
                      v36 = v34 & 1;
                      v37 = 0;
                      if ( !v35 )
                        goto LABEL_79;
                      while ( 1 )
                      {
                        if ( *(_BYTE *)(v35 + 24) <= *(_BYTE *)(v14 + 40) )
                        {
                          v38 = *(_QWORD *)(v35 + 8);
                          if ( v36 )
                          {
                            if ( !v38 )
                              goto LABEL_78;
                            v38 ^= v35;
                          }
                          if ( !v38 )
                          {
LABEL_78:
                            v37 = 1;
                            goto LABEL_79;
                          }
                        }
                        else
                        {
                          v38 = *(_QWORD *)v35;
                          if ( v36 )
                          {
                            if ( !v38 )
                              goto LABEL_79;
                            v38 ^= v35;
                          }
                          if ( !v38 )
                            goto LABEL_79;
                        }
                        v35 = v38;
                      }
                    }
                    v37 = 0;
LABEL_79:
                    RtlRbInsertNodeEx(
                      (PRTL_RB_TREE)(v31 + 40),
                      (PRTL_BALANCED_NODE)v35,
                      v37,
                      (PRTL_BALANCED_NODE)(v14 + 16));
                  }
                  v32 = 144;
                }
                v50 = *(_DWORD *)(v31 + 84);
                v78 = 0;
                if ( (_BYTE)v50 )
                  BYTE1(v78) = 2;
                if ( (v50 & 0x7F00) != 0 )
                  BYTE2(v78) = 1;
                v51 = *(_QWORD *)(v31 + 64);
                if ( v51 )
                {
                  v52 = *(_BYTE *)(v51 + 24);
                  LOBYTE(v78) = v52;
                }
                else
                {
                  v52 = v78;
                }
                if ( *(_BYTE *)(v31 + 9) )
                {
                  v59 = *(_BYTE *)(*(_QWORD *)(v31 - 88LL * (*(_BYTE *)(v31 + 8) & 0x3F) - 16) + 195LL);
                  if ( v59 > 30 )
                    v59 = 30;
                  if ( v59 > v52 )
                    LOBYTE(v78) = v59;
                }
                if ( !v78 )
                {
                  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                  v32 = v32 & 0xFFFFFFF8 | 1;
LABEL_92:
                  if ( (WORD2(xmmword_140FC5B10) & 0x1000) != 0 )
                    EtwTraceAutoBoostProcessLockEntry(
                      *(_QWORD *)(v14 - 88LL * (*(_BYTE *)(v14 + 8) & 0x3F) - 16),
                      v67,
                      v32);
                  v10 = v70;
                  goto LABEL_9;
                }
                if ( (unsigned int)KiAbSetMinimumThreadPriority(
                                     v14,
                                     (unsigned int)&v78,
                                     (unsigned int)&v65,
                                     (int)SystemArgument1 + 37240,
                                     0LL,
                                     (__int64)&v66)
                  && v14 != v31 )
                {
                  KiAbEntryUpdateOwnerTreePosition(v14, v31);
                  v32 |= 0x20u;
                }
              }
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
              v53 = v66;
              if ( v66 )
              {
                v61 = *(void **)(v14 - 88LL * (*(_BYTE *)(v14 + 8) & 0x3F) - 16);
                if ( ObReferenceObjectSafeWithTag((__int64)v61, 0x746C6644u) )
                {
                  if ( (v53 & 1) != 0 )
                    IoBoostThreadIoPriority(v61, 2LL, 0x80000000LL);
                  if ( (v53 & 2) != 0 )
                    PsBoostThreadOutstandingIoQoS(v61);
                  ObDereferenceObjectDeferDeleteWithTag(v61, 0x746C6644u);
                }
              }
              goto LABEL_92;
            }
            v32 = 128;
            goto LABEL_92;
          }
LABEL_11:
          v16 = Next[41].Next;
          v72 = v16;
          if ( !v16 )
            goto LABEL_17;
          v17 = (LOWORD(v16[1].Next) | WORD1(v16[1].Next)) ^ ((1LL << BYTE4(v16[1].Next)) - 1);
          v12 = !_BitScanForward(&v18, v17);
          v69 = v18;
          if ( v12 )
            goto LABEL_17;
          while ( 1 )
          {
            v17 &= v17 - 1;
            v19 = (__int64)&v16[11 * v18 + 2];
            v20 = *(_QWORD *)v19;
            if ( *(_QWORD *)v19 )
            {
              if ( (v20 & 2) == 0 && v20 < 0 && !*(_BYTE *)(v19 + 9) )
                break;
            }
LABEL_14:
            v12 = !_BitScanForward(&v18, v17);
            v69 = v18;
            if ( v12 )
            {
              Next = v71;
              p_AbSelfIoBoostsList = &SystemArgument1->AbSelfIoBoostsList;
              goto LABEL_17;
            }
          }
          v68 = 0;
          v39 = *(_QWORD *)v19 & 0x7FFFFFFFFFFFFFFCLL;
          v70 = v39;
          memset(&v77, 0, sizeof(v77));
          if ( v39 && *(char *)(v19 + 8) >= 0 )
            v70 = v39 | 0x8000000000000000uLL;
          v40 = KiAbEntryGetLockedHeadEntry(v19, 0LL, &v77);
          v41 = v40;
          if ( v40 )
          {
            if ( *(_BYTE *)(v19 + 9) )
            {
              v42 = 136;
            }
            else
            {
              v42 = 128;
              if ( v19 != v40 )
              {
                v43 = KiAbOwnerComputeCpuPriorityKey(v19);
                if ( *(_BYTE *)(v19 + 40) != v43 )
                {
                  *(_BYTE *)(v19 + 40) = v43;
                  RtlRbRemoveNode((PRTL_RB_TREE)(v41 + 40), (PRTL_BALANCED_NODE)(v19 + 16));
                  v44 = *(_QWORD *)(v41 + 48);
                  if ( (v44 & 1) == 0 )
                  {
                    v45 = *(_QWORD *)(v41 + 40);
                    goto LABEL_68;
                  }
                  v48 = *(_QWORD *)(v41 + 40);
                  if ( v48 )
                  {
                    v45 = v48 ^ (v41 + 40);
LABEL_68:
                    v46 = v44 & 1;
                    v47 = 0;
                    v48 = v45;
                    if ( !v45 )
                      goto LABEL_98;
                    while ( 1 )
                    {
                      if ( *(_BYTE *)(v48 + 24) <= *(_BYTE *)(v19 + 40) )
                      {
                        v49 = *(_QWORD *)(v48 + 8);
                        if ( v46 )
                        {
                          if ( !v49 )
                            goto LABEL_97;
                          v49 ^= v48;
                        }
                        if ( !v49 )
                        {
LABEL_97:
                          v47 = 1;
                          goto LABEL_98;
                        }
                      }
                      else
                      {
                        v49 = *(_QWORD *)v48;
                        if ( v46 )
                        {
                          if ( !v49 )
                            goto LABEL_98;
                          v49 ^= v48;
                        }
                        if ( !v49 )
                          goto LABEL_98;
                      }
                      v48 = v49;
                    }
                  }
                  v47 = 0;
LABEL_98:
                  RtlRbInsertNodeEx(
                    (PRTL_RB_TREE)(v41 + 40),
                    (PRTL_BALANCED_NODE)v48,
                    v47,
                    (PRTL_BALANCED_NODE)(v19 + 16));
                }
                v42 = 144;
              }
              v54 = *(_DWORD *)(v41 + 84);
              v64 = 0;
              if ( (_BYTE)v54 )
                BYTE1(v64) = 2;
              if ( (v54 & 0x7F00) != 0 )
                BYTE2(v64) = 1;
              v55 = *(_QWORD *)(v41 + 64);
              if ( v55 )
              {
                v56 = *(_BYTE *)(v55 + 24);
                LOBYTE(v64) = v56;
              }
              else
              {
                v56 = v64;
              }
              if ( *(_BYTE *)(v41 + 9) )
              {
                v60 = *(_BYTE *)(*(_QWORD *)(v41 - 88LL * (*(_BYTE *)(v41 + 8) & 0x3F) - 16) + 195LL);
                if ( v60 > 30 )
                  v60 = 30;
                if ( v60 > v56 )
                  LOBYTE(v64) = v60;
              }
              if ( !v64 )
              {
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&v77);
                v42 = v42 & 0xFFFFFFF8 | 1;
LABEL_111:
                if ( (WORD2(xmmword_140FC5B10) & 0x1000) != 0 )
                  EtwTraceAutoBoostProcessLockEntry(
                    *(_QWORD *)(v19 - 88LL * (*(_BYTE *)(v19 + 8) & 0x3F) - 16),
                    v70,
                    v42);
                v16 = v72;
                goto LABEL_14;
              }
              if ( (unsigned int)KiAbSetMinimumThreadPriority(
                                   v19,
                                   (unsigned int)&v64,
                                   (unsigned int)&v65,
                                   (int)SystemArgument1 + 37240,
                                   0LL,
                                   (__int64)&v68)
                && v19 != v41 )
              {
                KiAbEntryUpdateOwnerTreePosition(v19, v41);
                v42 |= 0x20u;
              }
            }
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v77);
            v57 = v68;
            if ( v68 )
            {
              v62 = *(void **)(v19 - 88LL * (*(_BYTE *)(v19 + 8) & 0x3F) - 16);
              if ( ObReferenceObjectSafeWithTag((__int64)v62, 0x746C6644u) )
              {
                if ( (v57 & 1) != 0 )
                  IoBoostThreadIoPriority(v62, 2LL, 0x80000000LL);
                if ( (v57 & 2) != 0 )
                  PsBoostThreadOutstandingIoQoS(v62);
                ObDereferenceObjectDeferDeleteWithTag(v62, 0x746C6644u);
              }
            }
            goto LABEL_111;
          }
          v42 = 128;
          goto LABEL_111;
        }
      }
LABEL_17:
      _InterlockedDecrement16((volatile signed __int16 *)&Next[6].Next + 2);
      Next = p_AbSelfIoBoostsList->Next;
      v71 = Next;
    }
    while ( Next );
    p_AbPropagateBoostsList = &SystemArgument1->AbPropagateBoostsList;
LABEL_19:
    for ( i = p_AbPropagateBoostsList->Next; p_AbPropagateBoostsList->Next; i = p_AbPropagateBoostsList->Next )
    {
      v58 = (volatile signed __int16 *)&i[-101];
      p_AbPropagateBoostsList->Next = i->Next;
      i->Next = (struct _SINGLE_LIST_ENTRY *)1;
      _InterlockedOr(v63, 0);
      if ( LOBYTE(i[-2].Next) )
      {
        KiAbProcessThreadLocks(
          (_DWORD)i - 808,
          4,
          (unsigned int)&v65,
          (_DWORD)p_AbPropagateBoostsList,
          (__int64)p_AbSelfIoBoostsList);
        p_AbSelfIoBoostsList = &SystemArgument1->AbSelfIoBoostsList;
      }
      _InterlockedDecrement16(v58 + 434);
    }
  }
  while ( p_AbSelfIoBoostsList->Next );
  v22 = v65.Next;
  v23 = 0;
  SystemArgument1->AbDpc.DeferredContext = 0LL;
  if ( v22 )
  {
    v65.Next = v22->Next;
    do
    {
      KiDeferredReadySingleThread(SystemArgument1, (ULONG_PTR)&v22[-27], &v65, 0LL);
      v22 = v65.Next;
      ++v23;
      if ( v65.Next )
        v65.Next = v65.Next->Next;
      p_DeferredDispatchInterrupts = &SystemArgument1->DeferredDispatchInterrupts;
      if ( (v23 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch((char *)&SystemArgument1->DeferredDispatchInterrupts);
    }
    while ( v22 );
  }
  else
  {
    p_DeferredDispatchInterrupts = &SystemArgument1->DeferredDispatchInterrupts;
  }
  TargetType = p_DeferredDispatchInterrupts->TargetType;
  if ( TargetType )
  {
    if ( TargetType == 1 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v27 = 31;
      Level = p_DeferredDispatchInterrupts->Level;
      SingleTargetIndex = p_DeferredDispatchInterrupts->SingleTargetIndex;
      ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
      v73 = 6LL;
      v75 = 0LL;
      if ( Level != 1 )
        v27 = 47;
      HalpInterruptSendIpi(&v73, v27);
    }
    else
    {
      KiSendSoftwareInterruptAffinity(
        &p_DeferredDispatchInterrupts->MultipleTargetAffinity.Count,
        p_DeferredDispatchInterrupts->Level);
    }
    if ( p_DeferredDispatchInterrupts->TargetType == 2 )
    {
      *(_QWORD *)&p_DeferredDispatchInterrupts->MultipleTargetAffinity.Count = 2097153LL;
      memset_0(
        &p_DeferredDispatchInterrupts->MultipleTargetAffinity.8,
        0,
        sizeof(p_DeferredDispatchInterrupts->MultipleTargetAffinity.8));
    }
    p_DeferredDispatchInterrupts->TargetType = 0;
    p_DeferredDispatchInterrupts->SingleTargetIndex = 0xFFFF;
  }
}
