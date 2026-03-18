/*
 * XREFs of KiAbDeferredProcessingWorker @ 0x140253050
 * Callers:
 *     <none>
 * Callees:
 *     KiAbSetMinimumThreadPriority @ 0x14024E520 (KiAbSetMinimumThreadPriority.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x140250050 (KiAbEntryGetLockedHeadEntry.c)
 *     EtwTraceAutoBoostProcessLockEntry @ 0x140250910 (EtwTraceAutoBoostProcessLockEntry.c)
 *     KiAbProcessThreadLocks @ 0x1402509C0 (KiAbProcessThreadLocks.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x140251B10 (KiAbOwnerComputeCpuPriorityKey.c)
 *     KiSendSoftwareInterruptAffinity @ 0x140254CCC (KiSendSoftwareInterruptAffinity.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14025E950 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     PsBoostThreadOutstandingIoQoS @ 0x1402788E0 (PsBoostThreadOutstandingIoQoS.c)
 *     IoBoostThreadIoPriority @ 0x140278D90 (IoBoostThreadIoPriority.c)
 *     RtlRbInsertNodeEx @ 0x1402BDA80 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x1402BE130 (RtlRbRemoveNode.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x1402BEEB0 (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiDeferredReadySingleThread @ 0x14031ED40 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x14031FCD0 (KiFlushSoftwareInterruptBatch.c)
 *     HalpInterruptSendIpi @ 0x14031FDE0 (HalpInterruptSendIpi.c)
 *     KxReleaseQueuedSpinLock @ 0x140321BB0 (KxReleaseQueuedSpinLock.c)
 *     ObReferenceObjectSafeWithTag @ 0x14033E7D0 (ObReferenceObjectSafeWithTag.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
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
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // rdx
  int v37; // ecx
  __int64 v38; // rax
  __int64 v39; // rax
  _QWORD *v40; // rax
  _QWORD *v41; // r13
  unsigned int v42; // ebx
  char v43; // al
  __int64 v44; // r8
  __int64 v45; // rcx
  __int64 v46; // rax
  int v47; // ecx
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
  __int64 v64; // [rsp+20h] [rbp-69h]
  __int64 v65; // [rsp+28h] [rbp-61h]
  __int64 v66; // [rsp+30h] [rbp-59h] BYREF
  _QWORD *v67; // [rsp+38h] [rbp-51h] BYREF
  int v68; // [rsp+40h] [rbp-49h] BYREF
  unsigned __int64 v69; // [rsp+48h] [rbp-41h]
  int v70; // [rsp+50h] [rbp-39h] BYREF
  unsigned int v71; // [rsp+54h] [rbp-35h]
  unsigned __int64 v72; // [rsp+58h] [rbp-31h]
  __int64 v73; // [rsp+60h] [rbp-29h]
  __int64 v74; // [rsp+68h] [rbp-21h]
  __int64 v75; // [rsp+70h] [rbp-19h] BYREF
  int v76; // [rsp+78h] [rbp-11h]
  __int64 v77; // [rsp+7Ch] [rbp-Dh]
  __int128 v78; // [rsp+88h] [rbp-1h] BYREF
  __int64 v79; // [rsp+98h] [rbp+Fh]
  __int128 v80; // [rsp+A0h] [rbp+17h] BYREF
  __int64 v81; // [rsp+B0h] [rbp+27h]
  int v82; // [rsp+100h] [rbp+77h] BYREF

  v4 = SystemArgument1 + 4655;
  v67 = 0LL;
  v6 = SystemArgument1 + 4654;
  do
  {
    v7 = *v6;
    v73 = v7;
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
          v72 = v10;
          v11 = (*(unsigned __int16 *)(v10 + 8) | *(unsigned __int16 *)(v10 + 10)) ^ ((1LL << *(_BYTE *)(v10 + 12)) - 1);
          v12 = !_BitScanForward(&v13, v11);
          LODWORD(v69) = v13;
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
              LODWORD(v69) = v13;
              if ( v12 )
              {
                v7 = v73;
                v6 = SystemArgument1 + 4654;
                goto LABEL_11;
              }
            }
            v68 = 0;
            v79 = 0LL;
            v29 = *(_QWORD *)v14 & 0x7FFFFFFFFFFFFFFCLL;
            v69 = v29;
            v78 = 0LL;
            if ( v29 && *(char *)(v14 + 8) >= 0 )
              v69 = v29 | 0x8000000000000000uLL;
            LockedHeadEntry = KiAbEntryGetLockedHeadEntry(v14, 0LL, (__int64)&v78);
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
                    RtlRbRemoveNode(v31 + 5, v14 + 16);
                    v35 = v31[6];
                    v36 = v31[5];
                    if ( (v35 & 1) == 0 )
                      goto LABEL_49;
                    if ( v36 )
                    {
                      v36 ^= (unsigned __int64)(v31 + 5);
LABEL_49:
                      v37 = v35 & 1;
                      LOBYTE(v34) = 0;
                      if ( !v36 )
                        goto LABEL_79;
                      while ( 1 )
                      {
                        if ( *(_BYTE *)(v36 + 24) <= *(_BYTE *)(v14 + 40) )
                        {
                          v38 = *(_QWORD *)(v36 + 8);
                          if ( v37 )
                          {
                            if ( !v38 )
                              goto LABEL_78;
                            v38 ^= v36;
                          }
                          if ( !v38 )
                          {
LABEL_78:
                            LOBYTE(v34) = 1;
                            goto LABEL_79;
                          }
                        }
                        else
                        {
                          v38 = *(_QWORD *)v36;
                          if ( v37 )
                          {
                            if ( !v38 )
                              goto LABEL_79;
                            v38 ^= v36;
                          }
                          if ( !v38 )
                            goto LABEL_79;
                        }
                        v36 = v38;
                      }
                    }
                    LOBYTE(v34) = 0;
LABEL_79:
                    RtlRbInsertNodeEx(v31 + 5, v36, v34, v14 + 16, v64, v65, v66);
                  }
                  v32 = 144;
                }
                v50 = *((_DWORD *)v31 + 21);
                v82 = 0;
                if ( (_BYTE)v50 )
                  BYTE1(v82) = 2;
                if ( (v50 & 0x7F00) != 0 )
                  BYTE2(v82) = 1;
                v51 = v31[8];
                if ( v51 )
                {
                  v52 = *(_BYTE *)(v51 + 24);
                  LOBYTE(v82) = v52;
                }
                else
                {
                  v52 = v82;
                }
                if ( *((_BYTE *)v31 + 9) )
                {
                  v59 = *(_BYTE *)(v31[-11 * ((_BYTE)v31[1] & 0x3F) - 2] + 195LL);
                  if ( v59 > 30 )
                    v59 = 30;
                  if ( v59 > v52 )
                    LOBYTE(v82) = v59;
                }
                if ( !v82 )
                {
                  KxReleaseQueuedSpinLock(&v78);
                  v32 = v32 & 0xFFFFFFF8 | 1;
LABEL_92:
                  if ( (WORD2(xmmword_140FC5B10) & 0x1000) != 0 )
                    EtwTraceAutoBoostProcessLockEntry(
                      *(_QWORD *)(v14 - 88LL * (*(_BYTE *)(v14 + 8) & 0x3F) - 16),
                      v69,
                      v32);
                  v10 = v72;
                  goto LABEL_9;
                }
                if ( (unsigned int)KiAbSetMinimumThreadPriority(
                                     v14,
                                     (char *)&v82,
                                     (__int64)&v67,
                                     SystemArgument1 + 4655,
                                     0LL,
                                     &v68)
                  && (_QWORD *)v14 != v31 )
                {
                  KiAbEntryUpdateOwnerTreePosition(v14, v31);
                  v32 |= 0x20u;
                }
              }
              KxReleaseQueuedSpinLock(&v78);
              v53 = v68;
              if ( v68 )
              {
                v61 = *(void **)(v14 - 88LL * (*(_BYTE *)(v14 + 8) & 0x3F) - 16);
                if ( (unsigned __int8)ObReferenceObjectSafeWithTag(v61, 1953261124LL) )
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
          v16 = *(_QWORD *)(v7 + 328);
          v74 = v16;
          if ( !v16 )
            goto LABEL_17;
          v17 = (*(unsigned __int16 *)(v16 + 8) | *(unsigned __int16 *)(v16 + 10)) ^ ((1LL << *(_BYTE *)(v16 + 12)) - 1);
          v12 = !_BitScanForward(&v18, v17);
          v71 = v18;
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
            v71 = v18;
            if ( v12 )
            {
              v7 = v73;
              v6 = SystemArgument1 + 4654;
              goto LABEL_17;
            }
          }
          v70 = 0;
          v81 = 0LL;
          v39 = *(_QWORD *)v19 & 0x7FFFFFFFFFFFFFFCLL;
          v72 = v39;
          v80 = 0LL;
          if ( v39 && *(char *)(v19 + 8) >= 0 )
            v72 = v39 | 0x8000000000000000uLL;
          v40 = KiAbEntryGetLockedHeadEntry(v19, 0LL, (__int64)&v80);
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
                  RtlRbRemoveNode(v41 + 5, v19 + 16);
                  v45 = v41[6];
                  if ( (v45 & 1) == 0 )
                  {
                    v46 = v41[5];
                    goto LABEL_68;
                  }
                  v48 = v41[5];
                  if ( v48 )
                  {
                    v46 = v48 ^ (unsigned __int64)(v41 + 5);
LABEL_68:
                    v47 = v45 & 1;
                    LOBYTE(v44) = 0;
                    v48 = v46;
                    if ( !v46 )
                      goto LABEL_98;
                    while ( 1 )
                    {
                      if ( *(_BYTE *)(v48 + 24) <= *(_BYTE *)(v19 + 40) )
                      {
                        v49 = *(_QWORD *)(v48 + 8);
                        if ( v47 )
                        {
                          if ( !v49 )
                            goto LABEL_97;
                          v49 ^= v48;
                        }
                        if ( !v49 )
                        {
LABEL_97:
                          LOBYTE(v44) = 1;
                          goto LABEL_98;
                        }
                      }
                      else
                      {
                        v49 = *(_QWORD *)v48;
                        if ( v47 )
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
                  LOBYTE(v44) = 0;
LABEL_98:
                  RtlRbInsertNodeEx(v41 + 5, v48, v44, v19 + 16, v64, v65, v66);
                }
                v42 = 144;
              }
              v54 = *((_DWORD *)v41 + 21);
              LODWORD(v66) = 0;
              if ( (_BYTE)v54 )
                BYTE1(v66) = 2;
              if ( (v54 & 0x7F00) != 0 )
                BYTE2(v66) = 1;
              v55 = v41[8];
              if ( v55 )
              {
                v56 = *(_BYTE *)(v55 + 24);
                LOBYTE(v66) = v56;
              }
              else
              {
                v56 = v66;
              }
              if ( *((_BYTE *)v41 + 9) )
              {
                v60 = *(_BYTE *)(v41[-11 * ((_BYTE)v41[1] & 0x3F) - 2] + 195LL);
                if ( v60 > 30 )
                  v60 = 30;
                if ( v60 > v56 )
                  LOBYTE(v66) = v60;
              }
              if ( !(_DWORD)v66 )
              {
                KxReleaseQueuedSpinLock(&v80);
                v42 = v42 & 0xFFFFFFF8 | 1;
LABEL_111:
                if ( (WORD2(xmmword_140FC5B10) & 0x1000) != 0 )
                  EtwTraceAutoBoostProcessLockEntry(
                    *(_QWORD *)(v19 - 88LL * (*(_BYTE *)(v19 + 8) & 0x3F) - 16),
                    v72,
                    v42);
                v16 = v74;
                goto LABEL_14;
              }
              if ( (unsigned int)KiAbSetMinimumThreadPriority(
                                   v19,
                                   (char *)&v66,
                                   (__int64)&v67,
                                   SystemArgument1 + 4655,
                                   0LL,
                                   &v70)
                && (_QWORD *)v19 != v41 )
              {
                KiAbEntryUpdateOwnerTreePosition(v19, v41);
                v42 |= 0x20u;
              }
            }
            KxReleaseQueuedSpinLock(&v80);
            v57 = v70;
            if ( v70 )
            {
              v62 = *(void **)(v19 - 88LL * (*(_BYTE *)(v19 + 8) & 0x3F) - 16);
              if ( (unsigned __int8)ObReferenceObjectSafeWithTag(v62, 1953261124LL) )
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
      _InterlockedDecrement16((volatile signed __int16 *)(v7 + 52));
      v7 = *v6;
      v73 = v7;
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
        KiAbProcessThreadLocks((__int64)(i - 101), 4, (__int64)&v67, v4, v6);
        v6 = SystemArgument1 + 4654;
      }
      _InterlockedDecrement16(v58 + 434);
    }
  }
  while ( *v6 );
  v22 = (_QWORD **)v67;
  v23 = 0;
  SystemArgument1[4660] = 0LL;
  if ( v22 )
  {
    v67 = *v22;
    do
    {
      KiDeferredReadySingleThread(SystemArgument1, v22 - 27, &v67, 0LL);
      v22 = (_QWORD **)v67;
      ++v23;
      if ( v67 )
        v67 = (_QWORD *)*v67;
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
      v76 = *((_DWORD *)v24 + 1);
      ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
      v75 = 6LL;
      v77 = 0LL;
      if ( v28 != 1 )
        v27 = 47LL;
      HalpInterruptSendIpi(&v75, v27);
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
