/*
 * XREFs of KiAbDeferredProcessingWorker @ 0x140283660
 * Callers:
 *     <none>
 * Callees:
 *     PsBoostThreadOutstandingIoQoS @ 0x14022DE70 (PsBoostThreadOutstandingIoQoS.c)
 *     IoBoostThreadIoPriority @ 0x14022E320 (IoBoostThreadIoPriority.c)
 *     KiAbSetMinimumThreadPriority @ 0x14027EB30 (KiAbSetMinimumThreadPriority.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x140280660 (KiAbEntryGetLockedHeadEntry.c)
 *     EtwTraceAutoBoostProcessLockEntry @ 0x140280F20 (EtwTraceAutoBoostProcessLockEntry.c)
 *     KiAbProcessThreadLocks @ 0x140280FD0 (KiAbProcessThreadLocks.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x140282120 (KiAbOwnerComputeCpuPriorityKey.c)
 *     KiSendSoftwareInterruptAffinity @ 0x1402852DC (KiSendSoftwareInterruptAffinity.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14028EF60 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KiDeferredReadySingleThread @ 0x1402C78D0 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402C8860 (KiFlushSoftwareInterruptBatch.c)
 *     HalpInterruptSendIpi @ 0x1402C8970 (HalpInterruptSendIpi.c)
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 *     ObReferenceObjectSafeWithTag @ 0x14031DCB0 (ObReferenceObjectSafeWithTag.c)
 *     RtlRbInsertNodeEx @ 0x1403651C0 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x140365870 (RtlRbRemoveNode.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x1403665F0 (KiAbEntryUpdateOwnerTreePosition.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall KiAbDeferredProcessingWorker(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        _QWORD *SystemArgument1,
        PVOID SystemArgument2)
{
  _QWORD *v4; // rsi
  __int64 *v6; // r10
  __int64 v7; // rdi
  __int64 v8; // rax
  BOOL v9; // r9d
  unsigned __int64 v10; // r8
  unsigned int v11; // esi
  bool v12; // zf
  unsigned int v13; // ecx
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // r8
  unsigned int v17; // esi
  unsigned int v18; // ecx
  __int64 v19; // r15
  __int64 v20; // rax
  _QWORD *i; // rcx
  _QWORD **v22; // rbx
  char v23; // si
  unsigned __int8 *v24; // rdi
  unsigned __int8 v25; // al
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v27; // rdx
  char v28; // r8
  __int64 v29; // rax
  _QWORD *LockedHeadEntry; // rax
  _QWORD *v31; // r13
  unsigned int v32; // ebx
  char v33; // al
  __int64 v34; // rcx
  __int64 v35; // rdx
  int v36; // ecx
  BOOLEAN v37; // r8
  __int64 v38; // rax
  __int64 v39; // rax
  _QWORD *v40; // rax
  _QWORD *v41; // r13
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
  KSPIN_LOCK *v61; // r13
  KSPIN_LOCK *v62; // r13
  signed __int32 v63[8]; // [rsp+0h] [rbp-89h] BYREF
  int v64; // [rsp+30h] [rbp-59h] BYREF
  _QWORD *v65; // [rsp+38h] [rbp-51h] BYREF
  int v66; // [rsp+40h] [rbp-49h] BYREF
  unsigned __int64 v67; // [rsp+48h] [rbp-41h]
  int v68; // [rsp+50h] [rbp-39h] BYREF
  unsigned int v69; // [rsp+54h] [rbp-35h]
  unsigned __int64 v70; // [rsp+58h] [rbp-31h]
  __int64 v71; // [rsp+60h] [rbp-29h]
  __int64 v72; // [rsp+68h] [rbp-21h]
  __int64 v73; // [rsp+70h] [rbp-19h] BYREF
  int v74; // [rsp+78h] [rbp-11h]
  __int64 v75; // [rsp+7Ch] [rbp-Dh]
  __int128 v76; // [rsp+88h] [rbp-1h] BYREF
  __int64 v77; // [rsp+98h] [rbp+Fh]
  __int128 v78; // [rsp+A0h] [rbp+17h] BYREF
  __int64 v79; // [rsp+B0h] [rbp+27h]
  int v80; // [rsp+100h] [rbp+77h] BYREF

  v4 = SystemArgument1 + 4655;
  v65 = 0LL;
  v6 = SystemArgument1 + 4654;
  do
  {
    v7 = *v6;
    v71 = v7;
    if ( !v7 )
      goto LABEL_19;
    do
    {
      *v6 = *(_QWORD *)v7;
      *(_QWORD *)v7 = 1LL;
      _InterlockedOr(v63, 0);
      if ( *(_BYTE *)(v7 - 23) )
      {
        v8 = *(_QWORD *)(v7 + 328);
        v9 = !v8
          || (unsigned int)(1LL << *(_BYTE *)(v8 + 12)) - 1 == (*(unsigned __int16 *)(v8 + 8) | *(unsigned __int16 *)(v8 + 10));
        if ( (unsigned int)(1LL << *(_BYTE *)(*(_QWORD *)(v7 + 320) + 12LL)) - 1 != (*(unsigned __int16 *)(*(_QWORD *)(v7 + 320) + 8LL) | *(unsigned __int16 *)(*(_QWORD *)(v7 + 320) + 10LL))
          || !v9 )
        {
          v10 = *(_QWORD *)(v7 + 320);
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
                v7 = v71;
                v6 = SystemArgument1 + 4654;
                goto LABEL_11;
              }
            }
            v66 = 0;
            v77 = 0LL;
            v29 = *(_QWORD *)v14 & 0x7FFFFFFFFFFFFFFCLL;
            v67 = v29;
            v76 = 0LL;
            if ( v29 && *(char *)(v14 + 8) >= 0 )
              v67 = v29 | 0x8000000000000000uLL;
            LockedHeadEntry = KiAbEntryGetLockedHeadEntry(v14, 0LL, (__int64)&v76);
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
                if ( (_QWORD *)v14 != LockedHeadEntry )
                {
                  v33 = KiAbOwnerComputeCpuPriorityKey(v14);
                  if ( *(_BYTE *)(v14 + 40) != v33 )
                  {
                    *(_BYTE *)(v14 + 40) = v33;
                    RtlRbRemoveNode((PRTL_RB_TREE)(v31 + 5), (PRTL_BALANCED_NODE)(v14 + 16));
                    v34 = v31[6];
                    v35 = v31[5];
                    if ( (v34 & 1) == 0 )
                      goto LABEL_49;
                    if ( v35 )
                    {
                      v35 ^= (unsigned __int64)(v31 + 5);
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
                      (PRTL_RB_TREE)(v31 + 5),
                      (PRTL_BALANCED_NODE)v35,
                      v37,
                      (PRTL_BALANCED_NODE)(v14 + 16));
                  }
                  v32 = 144;
                }
                v50 = *((_DWORD *)v31 + 21);
                v80 = 0;
                if ( (_BYTE)v50 )
                  BYTE1(v80) = 2;
                if ( (v50 & 0x7F00) != 0 )
                  BYTE2(v80) = 1;
                v51 = v31[8];
                if ( v51 )
                {
                  v52 = *(_BYTE *)(v51 + 24);
                  LOBYTE(v80) = v52;
                }
                else
                {
                  v52 = v80;
                }
                if ( *((_BYTE *)v31 + 9) )
                {
                  v59 = *(_BYTE *)(v31[-11 * ((_BYTE)v31[1] & 0x3F) - 2] + 195LL);
                  if ( v59 > 30 )
                    v59 = 30;
                  if ( v59 > v52 )
                    LOBYTE(v80) = v59;
                }
                if ( !v80 )
                {
                  KxReleaseQueuedSpinLock(&v76);
                  v32 = v32 & 0xFFFFFFF8 | 1;
LABEL_92:
                  if ( (WORD2(xmmword_140FC6B50) & 0x1000) != 0 )
                    EtwTraceAutoBoostProcessLockEntry(
                      *(_QWORD *)(v14 - 88LL * (*(_BYTE *)(v14 + 8) & 0x3F) - 16),
                      v67,
                      v32);
                  v10 = v70;
                  goto LABEL_9;
                }
                if ( (unsigned int)KiAbSetMinimumThreadPriority(
                                     v14,
                                     (char *)&v80,
                                     (__int64)&v65,
                                     SystemArgument1 + 4655,
                                     0LL,
                                     &v66)
                  && (_QWORD *)v14 != v31 )
                {
                  KiAbEntryUpdateOwnerTreePosition(v14, v31);
                  v32 |= 0x20u;
                }
              }
              KxReleaseQueuedSpinLock(&v76);
              v53 = v66;
              if ( v66 )
              {
                v61 = *(KSPIN_LOCK **)(v14 - 88LL * (*(_BYTE *)(v14 + 8) & 0x3F) - 16);
                if ( (unsigned __int8)ObReferenceObjectSafeWithTag(v61, 1953261124LL) )
                {
                  if ( (v53 & 1) != 0 )
                    IoBoostThreadIoPriority(v61, 2, 0x80000000);
                  if ( (v53 & 2) != 0 )
                    PsBoostThreadOutstandingIoQoS((__int64)v61);
                  ObDereferenceObjectDeferDeleteWithTag(v61, 0x746C6644u);
                }
              }
              goto LABEL_92;
            }
            v32 = 128;
            goto LABEL_92;
          }
LABEL_11:
          v16 = *(_QWORD *)(v7 + 328);
          v72 = v16;
          if ( !v16 )
            goto LABEL_17;
          v17 = (*(unsigned __int16 *)(v16 + 8) | *(unsigned __int16 *)(v16 + 10)) ^ ((1LL << *(_BYTE *)(v16 + 12)) - 1);
          v12 = !_BitScanForward(&v18, v17);
          v69 = v18;
          if ( v12 )
            goto LABEL_17;
          while ( 1 )
          {
            v17 &= v17 - 1;
            v19 = 88LL * v18 + v16 + 16;
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
              v7 = v71;
              v6 = SystemArgument1 + 4654;
              goto LABEL_17;
            }
          }
          v68 = 0;
          v79 = 0LL;
          v39 = *(_QWORD *)v19 & 0x7FFFFFFFFFFFFFFCLL;
          v70 = v39;
          v78 = 0LL;
          if ( v39 && *(char *)(v19 + 8) >= 0 )
            v70 = v39 | 0x8000000000000000uLL;
          v40 = KiAbEntryGetLockedHeadEntry(v19, 0LL, (__int64)&v78);
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
              if ( (_QWORD *)v19 != v40 )
              {
                v43 = KiAbOwnerComputeCpuPriorityKey(v19);
                if ( *(_BYTE *)(v19 + 40) != v43 )
                {
                  *(_BYTE *)(v19 + 40) = v43;
                  RtlRbRemoveNode((PRTL_RB_TREE)(v41 + 5), (PRTL_BALANCED_NODE)(v19 + 16));
                  v44 = v41[6];
                  if ( (v44 & 1) == 0 )
                  {
                    v45 = v41[5];
                    goto LABEL_68;
                  }
                  v48 = v41[5];
                  if ( v48 )
                  {
                    v45 = v48 ^ (unsigned __int64)(v41 + 5);
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
                    (PRTL_RB_TREE)(v41 + 5),
                    (PRTL_BALANCED_NODE)v48,
                    v47,
                    (PRTL_BALANCED_NODE)(v19 + 16));
                }
                v42 = 144;
              }
              v54 = *((_DWORD *)v41 + 21);
              v64 = 0;
              if ( (_BYTE)v54 )
                BYTE1(v64) = 2;
              if ( (v54 & 0x7F00) != 0 )
                BYTE2(v64) = 1;
              v55 = v41[8];
              if ( v55 )
              {
                v56 = *(_BYTE *)(v55 + 24);
                LOBYTE(v64) = v56;
              }
              else
              {
                v56 = v64;
              }
              if ( *((_BYTE *)v41 + 9) )
              {
                v60 = *(_BYTE *)(v41[-11 * ((_BYTE)v41[1] & 0x3F) - 2] + 195LL);
                if ( v60 > 30 )
                  v60 = 30;
                if ( v60 > v56 )
                  LOBYTE(v64) = v60;
              }
              if ( !v64 )
              {
                KxReleaseQueuedSpinLock(&v78);
                v42 = v42 & 0xFFFFFFF8 | 1;
LABEL_111:
                if ( (WORD2(xmmword_140FC6B50) & 0x1000) != 0 )
                  EtwTraceAutoBoostProcessLockEntry(
                    *(_QWORD *)(v19 - 88LL * (*(_BYTE *)(v19 + 8) & 0x3F) - 16),
                    v70,
                    v42);
                v16 = v72;
                goto LABEL_14;
              }
              if ( (unsigned int)KiAbSetMinimumThreadPriority(
                                   v19,
                                   (char *)&v64,
                                   (__int64)&v65,
                                   SystemArgument1 + 4655,
                                   0LL,
                                   &v68)
                && (_QWORD *)v19 != v41 )
              {
                KiAbEntryUpdateOwnerTreePosition(v19, v41);
                v42 |= 0x20u;
              }
            }
            KxReleaseQueuedSpinLock(&v78);
            v57 = v68;
            if ( v68 )
            {
              v62 = *(KSPIN_LOCK **)(v19 - 88LL * (*(_BYTE *)(v19 + 8) & 0x3F) - 16);
              if ( (unsigned __int8)ObReferenceObjectSafeWithTag(v62, 1953261124LL) )
              {
                if ( (v57 & 1) != 0 )
                  IoBoostThreadIoPriority(v62, 2, 0x80000000);
                if ( (v57 & 2) != 0 )
                  PsBoostThreadOutstandingIoQoS((__int64)v62);
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
      _InterlockedDecrement16((volatile signed __int16 *)(v7 + 52));
      v7 = *v6;
      v71 = v7;
    }
    while ( v7 );
    v4 = SystemArgument1 + 4655;
LABEL_19:
    for ( i = (_QWORD *)*v4; *v4; i = (_QWORD *)*v4 )
    {
      v58 = (volatile signed __int16 *)(i - 101);
      *v4 = *i;
      *i = 1LL;
      _InterlockedOr(v63, 0);
      if ( *((_BYTE *)i - 16) )
      {
        KiAbProcessThreadLocks((__int64)(i - 101), 4, (__int64)&v65, v4, v6);
        v6 = SystemArgument1 + 4654;
      }
      _InterlockedDecrement16(v58 + 434);
    }
  }
  while ( *v6 );
  v22 = (_QWORD **)v65;
  v23 = 0;
  SystemArgument1[4660] = 0LL;
  if ( v22 )
  {
    v65 = *v22;
    do
    {
      KiDeferredReadySingleThread(SystemArgument1, v22 - 27, &v65, 0LL);
      v22 = (_QWORD **)v65;
      ++v23;
      if ( v65 )
        v65 = (_QWORD *)*v65;
      v24 = (unsigned __int8 *)(SystemArgument1 + 1723);
      if ( (v23 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch(SystemArgument1 + 1723);
    }
    while ( v22 );
  }
  else
  {
    v24 = (unsigned __int8 *)(SystemArgument1 + 1723);
  }
  v25 = v24[1];
  if ( v25 )
  {
    if ( v25 == 1 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v27 = 31LL;
      v28 = *v24;
      v74 = *((_DWORD *)v24 + 1);
      ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
      v73 = 6LL;
      v75 = 0LL;
      if ( v28 != 1 )
        v27 = 47LL;
      HalpInterruptSendIpi(&v73, v27);
    }
    else
    {
      KiSendSoftwareInterruptAffinity(v24 + 8, *v24);
    }
    if ( v24[1] == 2 )
    {
      *((_QWORD *)v24 + 1) = 2097153LL;
      memset_0(v24 + 16, 0, 0x100uLL);
    }
    v24[1] = 0;
    *((_DWORD *)v24 + 1) = 0xFFFF;
  }
}
