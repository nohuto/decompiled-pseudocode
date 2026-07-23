/*
 * XREFs of CmpPerformCompleteKcbCacheLookup @ 0x140840AF0
 * Callers:
 *     CmpDoParseKey @ 0x140872AE0 (CmpDoParseKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x14087ABD0 (CmpGetSymbolicLinkTarget.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     CmpDrainDelayDerefContext @ 0x14040AEB0 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140418320 (CmpInitializeDelayDerefContext.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     RtlUpcaseUnicodeChar @ 0x1408404B0 (RtlUpcaseUnicodeChar.c)
 *     CmpDereferenceHive @ 0x140840680 (CmpDereferenceHive.c)
 *     CmpAddToDelayedClose @ 0x140840810 (CmpAddToDelayedClose.c)
 *     CmpReferenceHive @ 0x140840940 (CmpReferenceHive.c)
 *     CmpDeleteHive @ 0x140840A1C (CmpDeleteHive.c)
 *     CmpReferenceKeyControlBlock @ 0x140841D90 (CmpReferenceKeyControlBlock.c)
 *     CmpRecordParseFailure @ 0x140841F00 (CmpRecordParseFailure.c)
 *     CmLockHive @ 0x140841F34 (CmLockHive.c)
 *     CmUnlockHive @ 0x140842A00 (CmUnlockHive.c)
 *     CmpLockKcbExclusive @ 0x1408747A0 (CmpLockKcbExclusive.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x140874810 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpDecommisssionKcb @ 0x140875040 (CmpDecommisssionKcb.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1408824E8 (CmpDoQueueLateUnloadWorker.c)
 *     CmpGetComponentNameAtIndex @ 0x140989B40 (CmpGetComponentNameAtIndex.c)
 *     CmpLockHashEntrySharedByKcb @ 0x1409E4D38 (CmpLockHashEntrySharedByKcb.c)
 *     CmpWaitForHiveMount @ 0x140AAE520 (CmpWaitForHiveMount.c)
 *     CmpUnlockKcb @ 0x140BBB2C0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140BBBA1C (CmpLockKcbShared.c)
 */

__int64 __fastcall CmpPerformCompleteKcbCacheLookup(
        volatile signed __int64 *BugCheckParameter2,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        _DWORD *a5,
        ULONG_PTR *a6,
        char *a7,
        _WORD *a8)
{
  __int64 v8; // rdi
  ULONG_PTR v9; // rbp
  ULONG_PTR v10; // r13
  __int16 v11; // cx
  signed __int64 v12; // rax
  unsigned int v13; // ebx
  ULONG_PTR BugCheckParameter4; // r15
  unsigned int v15; // r12d
  int v16; // eax
  __int64 v17; // r14
  unsigned __int64 v18; // rbp
  signed __int64 *v19; // rsi
  char *v20; // rdi
  signed __int32 v21; // eax
  signed __int32 v22; // ett
  __int64 i; // r15
  volatile signed __int64 *v24; // rbp
  ULONG_PTR v25; // rdi
  __int64 v26; // rcx
  WCHAR *v27; // r13
  __int16 v28; // si
  __int16 *v29; // rdx
  __int16 j; // bp
  WCHAR v31; // cx
  __int16 v32; // r12
  signed __int64 v33; // rax
  signed __int64 v34; // rtt
  __int64 *v35; // rsi
  signed __int64 v36; // rax
  signed __int64 v37; // rdx
  __int64 v38; // rtt
  __int64 *v39; // rbx
  signed __int64 v40; // rax
  signed __int64 v41; // rdx
  __int64 v42; // rtt
  __int16 v43; // dx
  signed __int64 v44; // rax
  __int64 v45; // rcx
  char v46; // r14
  __int64 v47; // rdi
  __int64 *v48; // rbx
  signed __int64 v49; // rax
  signed __int64 v50; // rdx
  __int64 v51; // rtt
  __int64 v52; // rbx
  unsigned __int64 v53; // rcx
  unsigned __int64 v54; // rdx
  bool v55; // r8
  bool v56; // zf
  unsigned int v57; // esi
  unsigned int v59; // ebp
  ULONG_PTR v60; // rbx
  unsigned __int64 *v61; // rdi
  char *v62; // rax
  char *v63; // rsi
  signed __int32 v64; // eax
  signed __int32 v65; // ett
  char *v66; // rax
  char *v67; // rsi
  ULONG_PTR v68; // rdi
  __int64 v69; // rax
  __int64 v70; // rcx
  signed __int64 v71; // rax
  bool v72; // dl
  int v73; // ecx
  __int64 *v74; // rdi
  signed __int64 v75; // rax
  signed __int64 v76; // rdx
  __int64 v77; // rtt
  WCHAR v78; // ax
  __int64 v79; // rcx
  char *v80; // rax
  char *v81; // r14
  char *v82; // rax
  char *v83; // r14
  __int16 k; // r12
  __int16 v85; // ax
  WCHAR v86; // cx
  __int64 v87; // rsi
  struct _KTHREAD *v88; // rax
  _DWORD *v89; // rbx
  __int64 ComponentNameAtIndex; // rax
  __int64 v91; // rdx
  __int64 v92; // r8
  __int64 v93; // rdx
  __int64 v94; // rdi
  __int64 *v95; // rbx
  signed __int64 v96; // rax
  signed __int64 v97; // rdx
  __int64 v98; // rtt
  __int64 v99; // rbx
  unsigned __int64 v100; // rcx
  unsigned __int64 v101; // rdx
  bool v102; // r8
  unsigned int v103; // r14d
  ULONG_PTR v104; // rbx
  unsigned __int64 *v105; // rdi
  char *v106; // rax
  char *v107; // rbp
  signed __int32 v108; // eax
  signed __int32 v109; // ett
  char *v110; // rax
  char *v111; // rbp
  ULONG_PTR v112; // rdi
  __int64 v113; // rax
  __int64 v114; // rcx
  signed __int64 v115; // rax
  bool v116; // dl
  int v117; // ecx
  __int64 *v118; // rdi
  signed __int64 v119; // rax
  signed __int64 v120; // rdx
  __int64 v121; // rtt
  WORK_QUEUE_TYPE v122; // r8d
  __int64 v123; // rcx
  __int64 v124; // rbp
  struct _KTHREAD *CurrentThread; // rax
  WCHAR v126; // ax
  char v127; // [rsp+30h] [rbp-98h]
  __int16 v128; // [rsp+32h] [rbp-96h]
  __int16 v129; // [rsp+34h] [rbp-94h]
  __int16 v130; // [rsp+38h] [rbp-90h]
  unsigned int v131; // [rsp+3Ch] [rbp-8Ch]
  ULONG_PTR BugCheckParameter2a; // [rsp+40h] [rbp-88h]
  __int16 *v133; // [rsp+48h] [rbp-80h]
  __int16 *v134; // [rsp+48h] [rbp-80h]
  volatile signed __int64 *v135; // [rsp+50h] [rbp-78h]
  _QWORD *P; // [rsp+58h] [rbp-70h]
  __int128 v137; // [rsp+60h] [rbp-68h] BYREF
  _OWORD v138[5]; // [rsp+70h] [rbp-58h] BYREF
  unsigned int v140; // [rsp+D8h] [rbp+10h]
  unsigned int v141; // [rsp+E0h] [rbp+18h]

  v141 = a3;
  v140 = a2;
  v135 = BugCheckParameter2;
  v8 = a4;
  v129 = 0;
  v9 = (ULONG_PTR)BugCheckParameter2;
  while ( 2 )
  {
    v10 = *(_QWORD *)(v9 + 32);
    v11 = 0;
    P = (_QWORD *)v10;
    v128 = 0;
    v127 = 0;
    v12 = _InterlockedIncrement64((volatile signed __int64 *)v9);
    if ( !v12 )
      KeBugCheckEx(0x51u, 0x24uLL, v9, 0LL, 0LL);
    if ( v12 == 1 )
      goto LABEL_4;
    v13 = *(_DWORD *)(v9 + 16);
    BugCheckParameter4 = v9;
    BugCheckParameter2a = v9;
    v15 = a2;
LABEL_6:
    v131 = v15;
    if ( v15 < a3 )
    {
      if ( v15 >= 8 )
      {
        v17 = *(_QWORD *)(v8 + 160) + 16 * (v15 - 8 + 6LL);
        v16 = *(_DWORD *)(*(_QWORD *)(v8 + 160) + 4LL * (v15 - 8));
      }
      else
      {
        v16 = *(_DWORD *)(v8 + 4LL * v15);
        v17 = v8 + 16 * (v15 + 2LL);
      }
      v13 = v16 + 37 * v13;
      v18 = (101027 * (v13 ^ (v13 >> 9))) ^ ((unsigned __int64)(101027 * (v13 ^ (v13 >> 9))) >> 9);
      v19 = (signed __int64 *)(*(_QWORD *)(v10 + 1648) + 24LL * ((unsigned int)v18 & (*(_DWORD *)(v10 + 1656) - 1)));
      v20 = (char *)KeAbPreAcquire((__int64)v19, 0LL);
      if ( _InterlockedCompareExchange64(v19, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v19, 0, v20, (__int64)v19);
      if ( v20 )
        v20[10] = 1;
      _m_prefetchw((const void *)(v10 + 4232));
      v21 = *(_DWORD *)(v10 + 4232);
      do
      {
        if ( !v21 )
          KeBugCheckEx(0x51u, 0x17uLL, v10, 9uLL, v13);
        v22 = v21;
        v21 = _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 4232), v21 + 1, v21);
      }
      while ( v22 != v21 );
      for ( i = *(_QWORD *)(*(_QWORD *)(v10 + 1648) + 24LL * ((unsigned int)v18 & (*(_DWORD *)(v10 + 1656) - 1)) + 16);
            ;
            i = *(_QWORD *)(i + 8) )
      {
        if ( !i )
          goto LABEL_48;
        if ( *(_DWORD *)i == v13 )
        {
          v24 = (volatile signed __int64 *)BugCheckParameter2a;
          v25 = i - 16;
          if ( *(_QWORD *)(i - 16 + 72) == BugCheckParameter2a )
          {
            v26 = *(_QWORD *)(v25 + 80);
            v27 = *(WCHAR **)(v17 + 8);
            v28 = *(_WORD *)v17 >> 1;
            v29 = (__int16 *)(v26 + 26);
            if ( (*(_DWORD *)v26 & 1) != 0 )
            {
              for ( j = *(_WORD *)(v26 + 24); v28 && j; --j )
              {
                v31 = *v27++;
                v32 = *(unsigned __int8 *)v29;
                v29 = (__int16 *)((char *)v29 + 1);
                v133 = v29;
                if ( v31 != v32 )
                {
                  if ( v31 >= 0x61u )
                  {
                    if ( v31 > 0x7Au )
                    {
                      v78 = RtlUpcaseUnicodeChar(v31);
                      v29 = v133;
                      v31 = v78;
                    }
                    else
                    {
                      v31 -= 32;
                    }
                  }
                  if ( v31 != v32 )
                    goto LABEL_160;
                }
                --v28;
              }
              if ( v28 == j )
              {
                v24 = (volatile signed __int64 *)BugCheckParameter2a;
LABEL_32:
                if ( i == 16 )
                {
LABEL_48:
                  v39 = (__int64 *)(P[206]
                                  + 24
                                  * ((unsigned int)(*((_DWORD *)P + 414) - 1) & ((101027 * (v13 ^ (v13 >> 9))) ^ ((unsigned __int64)(101027 * (v13 ^ (v13 >> 9))) >> 9))));
                  v39[1] = 0LL;
                  _m_prefetchw(v39);
                  v40 = *v39;
                  v41 = *v39 - 16;
                  if ( (*v39 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                    v41 = 0LL;
                  if ( (v40 & 2) != 0 || (v42 = *v39, v42 != _InterlockedCompareExchange64(v39, v41, v40)) )
                    ExfReleasePushLock(v39);
                  KeAbPostRelease((ULONG_PTR)v39);
                  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 1058, 0xFFFFFFFF) == 1 )
                    CmpDeleteHive(P);
                  BugCheckParameter4 = BugCheckParameter2a;
                  v11 = v128;
                  v8 = a4;
                  break;
                }
                v33 = *(_QWORD *)v25;
                while ( v33 )
                {
                  if ( v33 == -1 )
                    KeBugCheckEx(0x51u, 0x24uLL, i - 16, 0LL, 0LL);
                  v34 = v33;
                  v33 = _InterlockedCompareExchange64((volatile signed __int64 *)v25, v33 + 1, v33);
                  if ( v34 == v33 )
                    goto LABEL_37;
                }
                CmpLockKcbShared(i - 16);
                CmpReferenceKeyControlBlock(i - 16);
                CmpUnlockKcb(i - 16);
LABEL_37:
                a3 = v141;
                v10 = (ULONG_PTR)P;
                if ( v131 == v141 - 1 )
                {
                  v127 = 1;
                }
                else
                {
                  v35 = (__int64 *)(P[206]
                                  + 24
                                  * ((unsigned int)(*((_DWORD *)P + 414) - 1) & ((101027 * (v13 ^ (v13 >> 9))) ^ ((unsigned __int64)(101027 * (v13 ^ (v13 >> 9))) >> 9))));
                  v35[1] = 0LL;
                  _m_prefetchw(v35);
                  v36 = *v35;
                  v37 = *v35 - 16;
                  if ( (*v35 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                    v37 = 0LL;
                  if ( (v36 & 2) != 0 || (v38 = *v35, v38 != _InterlockedCompareExchange64(v35, v37, v36)) )
                    ExfReleasePushLock(v35);
                  KeAbPostRelease((ULONG_PTR)v35);
                  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 1058, 0xFFFFFFFF) == 1 )
                    CmpDeleteHive(P);
                  a3 = v141;
                }
                if ( _InterlockedExchangeAdd64(v24, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
LABEL_46:
                  KeBugCheckEx(0x51u, 0x1FuLL, 0LL, 0LL, 0LL);
                BugCheckParameter4 = i - 16;
                v11 = v128 + 1;
                BugCheckParameter2a = v25;
                v56 = (*(_DWORD *)(v25 + 184) & 0x100000) == 0;
                v8 = a4;
                ++v128;
                if ( !v56 )
                  break;
                v15 = v131 + 1;
                goto LABEL_6;
              }
            }
            else
            {
              for ( k = *(_WORD *)(v26 + 24) >> 1; v28 && k; --k )
              {
                v85 = *v29++;
                v86 = *v27++;
                v130 = v85;
                v134 = v29;
                if ( v86 != v85 )
                {
                  if ( v86 >= 0x61u )
                  {
                    if ( v86 > 0x7Au )
                    {
                      v126 = RtlUpcaseUnicodeChar(v86);
                      v29 = v134;
                      v86 = v126;
                      v85 = v130;
                    }
                    else
                    {
                      v86 -= 32;
                    }
                  }
                  if ( v86 != v85 )
                    goto LABEL_160;
                }
                --v28;
              }
              if ( v28 == k )
                goto LABEL_32;
            }
          }
        }
LABEL_160:
        ;
      }
    }
    if ( v135 != BugCheckParameter2 && _InterlockedExchangeAdd64(v135, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      goto LABEL_46;
    v43 = v11 + v129;
    v140 += v11;
    v129 += v11;
    if ( (*(_DWORD *)(BugCheckParameter4 + 184) & 0x20000) == 0 )
    {
      v46 = v127;
      goto LABEL_84;
    }
    CmpLockKcbShared(BugCheckParameter4);
    if ( (*(_DWORD *)(BugCheckParameter4 + 184) & 0x20000) == 0 )
    {
      v46 = v127;
      goto LABEL_148;
    }
    v9 = *(_QWORD *)(BugCheckParameter4 + 104);
    v135 = (volatile signed __int64 *)v9;
    v44 = _InterlockedIncrement64((volatile signed __int64 *)v9);
    if ( !v44 )
      KeBugCheckEx(0x51u, 0x24uLL, v9, 0LL, 0LL);
    if ( v44 == 1 )
LABEL_4:
      KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
    v45 = *(_QWORD *)(v9 + 32);
    if ( (*(_DWORD *)(v45 + 160) & 0x20) != 0 && *(struct _KTHREAD **)(v45 + 4168) != KeGetCurrentThread() )
    {
      v57 = -1073741772;
      v89 = a5;
      if ( CmpLoadingSystemHivesActive
        && (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread()
        && a5
        && (ComponentNameAtIndex = CmpGetComponentNameAtIndex(v8, v140 - 1),
            (unsigned __int8)CmpWaitForHiveMount(ComponentNameAtIndex, v91, v92, a5 + 34)) )
      {
        *a5 |= 0x100u;
        v57 = 259;
        v93 = 393984LL;
      }
      else
      {
        v93 = 394240LL;
      }
      goto LABEL_171;
    }
    if ( (*(_DWORD *)(v9 + 8) & 0x40000) != 0 )
    {
      v89 = a5;
      v57 = -1073740763;
      v93 = 394496LL;
LABEL_171:
      CmpRecordParseFailure(v89, v93, v57);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        goto LABEL_46;
      CmpUnlockKcb(BugCheckParameter4);
      if ( v127 )
      {
        v94 = *(_QWORD *)(BugCheckParameter4 + 32);
        *(_QWORD *)(*(_QWORD *)(v94 + 1648)
                  + 24
                  * ((unsigned int)(*(_DWORD *)(v94 + 1656) - 1) & ((unsigned int)(101027
                                                                                 * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9))) >> 9)))
                  + 8) = 0LL;
        v95 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 32) + 1648LL)
                        + 24
                        * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(BugCheckParameter4 + 32) + 1656LL) - 1) & ((unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9))) >> 9))));
        _m_prefetchw(v95);
        v96 = *v95;
        v97 = *v95 - 16;
        if ( (*v95 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v97 = 0LL;
        if ( (v96 & 2) != 0 || (v98 = *v95, v98 != _InterlockedCompareExchange64(v95, v97, v96)) )
          ExfReleasePushLock(v95);
        KeAbPostRelease((ULONG_PTR)v95);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v94 + 4232), 0xFFFFFFFF) == 1 )
          CmpDeleteHive((_QWORD *)v94);
      }
      v138[0] = 0LL;
      CmpInitializeDelayDerefContext(v138);
      v99 = *(_QWORD *)(BugCheckParameter4 + 32);
      v100 = *(_QWORD *)BugCheckParameter4;
      while ( v100 > 1 )
      {
        v101 = v100 - 1;
        v102 = v100 == 3 && (*(_DWORD *)(BugCheckParameter4 + 184) & 0x40000) != 0 && *(_BYTE *)(v99 + 2944) == 1;
        v100 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter4, v101, v100);
        if ( v100 == v101 + 1 )
        {
          if ( v100 < v101 )
            KeBugCheckEx(0x51u, 0x25uLL, BugCheckParameter4, 0LL, 0LL);
          if ( v102 )
          {
            CmLockHive(v99);
            *(_DWORD *)(v99 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v99 + 4236), 1u) & 0x7F) + 4240) = 19;
            if ( **(_QWORD **)(v99 + 2936) == 2LL )
            {
              *(_DWORD *)(v99
                        + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v99 + 4236), 1u) & 0x7F)
                        + 4240) = 20;
              if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v99 + 4800), 1, 0) )
              {
                *(_DWORD *)(v99
                          + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v99 + 4236), 1u) & 0x7F)
                          + 4240) = 21;
                CmpReferenceHive(v99);
                ExQueueWorkItem(*(PWORK_QUEUE_ITEM *)(v99 + 4816), v122);
              }
            }
            CmUnlockHive(v99);
          }
          return v57;
        }
      }
      v103 = *(_DWORD *)(BugCheckParameter4 + 16);
      v104 = *(_QWORD *)(BugCheckParameter4 + 32);
      v105 = (unsigned __int64 *)(*(_QWORD *)(v104 + 1648)
                                + 24
                                * ((unsigned int)(*(_DWORD *)(v104 + 1656) - 1) & ((101027 * (v103 ^ (v103 >> 9))) ^ ((unsigned __int64)(101027 * (v103 ^ (v103 >> 9))) >> 9))));
      v106 = (char *)KeAbPreAcquire((__int64)v105, 0LL);
      v107 = v106;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v105, 0LL) )
        ExfAcquirePushLockExclusiveEx(v105, v106, (__int64)v105);
      if ( v107 )
        v107[10] = 1;
      v105[1] = (unsigned __int64)KeGetCurrentThread();
      _m_prefetchw((const void *)(v104 + 4232));
      v108 = *(_DWORD *)(v104 + 4232);
      do
      {
        if ( !v108 )
          KeBugCheckEx(0x51u, 0x17uLL, v104, 8uLL, BugCheckParameter4);
        v109 = v108;
        v108 = _InterlockedCompareExchange((volatile signed __int32 *)(v104 + 4232), v108 + 1, v108);
      }
      while ( v109 != v108 );
      v110 = (char *)KeAbPreAcquire(BugCheckParameter4 + 48, 0LL);
      v111 = v110;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter4 + 48), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(BugCheckParameter4 + 48), v110, BugCheckParameter4 + 48);
      if ( v111 )
        v111[10] = 1;
      *(_QWORD *)(BugCheckParameter4 + 56) = KeGetCurrentThread();
      v112 = 0LL;
      v113 = *(_QWORD *)(BugCheckParameter4 + 192);
      if ( v113 )
      {
        v123 = *(_QWORD *)(v113 + 24);
        if ( v123 )
        {
          v112 = *(_QWORD *)(v123 + 16);
          CmpUnlockKcb(BugCheckParameter4);
          CmpLockKcbExclusive(v112);
          CmpLockKcbExclusive(BugCheckParameter4);
        }
      }
      v114 = *(_QWORD *)(BugCheckParameter4 + 32);
      v115 = _InterlockedDecrement64((volatile signed __int64 *)BugCheckParameter4);
      if ( v115 == 2 )
      {
        if ( (*(_DWORD *)(BugCheckParameter4 + 184) & 0x40000) != 0 && *(_BYTE *)(v114 + 2944) == 1 )
          CmpDoQueueLateUnloadWorker();
      }
      else if ( !v115 )
      {
        if ( (*(_DWORD *)(BugCheckParameter4 + 184) & 0x40000) != 0 )
        {
          v124 = *(_QWORD *)(BugCheckParameter4 + 32);
          CmpCleanUpKcbCacheWithLock(BugCheckParameter4);
          CurrentThread = KeGetCurrentThread();
          *(_DWORD *)(v124 + 160) |= 0x80u;
          *(_QWORD *)(v124 + 4176) = CurrentThread;
          *(_DWORD *)(v124 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v124 + 4236), 1u) & 0x7F) + 4240) = 31;
          if ( (*(_DWORD *)(v124 + 160) & 0x20) == 0 )
            CmpDereferenceHive((volatile signed __int32 *)v124);
        }
        else
        {
          v116 = 0;
          v117 = *(_DWORD *)(BugCheckParameter4 + 8);
          if ( (v117 & 0x20) == 0 )
            v116 = (v117 & 0x20000) == 0;
          if ( (!CmpHoldLazyFlush
             || (*(_DWORD *)(BugCheckParameter4 + 184) & 0x100000) != 0
             || (*(_DWORD *)(BugCheckParameter4 + 8) & 8) != 0)
            && v116 )
          {
            CmpAddToDelayedClose(BugCheckParameter4);
          }
          else
          {
            CmpCleanUpKcbCacheWithLock(BugCheckParameter4);
            if ( *(struct _KTHREAD **)(BugCheckParameter4 + 56) != KeGetCurrentThread() )
              CmpDecommisssionKcb(BugCheckParameter4);
          }
        }
      }
      CmpUnlockKcb(BugCheckParameter4);
      if ( v112 )
        CmpUnlockKcb(v112);
      v118 = (__int64 *)(*(_QWORD *)(v104 + 1648)
                       + 24
                       * ((unsigned int)(*(_DWORD *)(v104 + 1656) - 1) & ((101027 * (v103 ^ (v103 >> 9))) ^ ((unsigned __int64)(101027 * (v103 ^ (v103 >> 9))) >> 9))));
      v118[1] = 0LL;
      _m_prefetchw(v118);
      v119 = *v118;
      v120 = *v118 - 16;
      if ( (*v118 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v120 = 0LL;
      if ( (v119 & 2) != 0 || (v121 = *v118, v121 != _InterlockedCompareExchange64(v118, v120, v119)) )
        ExfReleasePushLock(v118);
      KeAbPostRelease((ULONG_PTR)v118);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v104 + 4232), 0xFFFFFFFF) == 1 )
        CmpDeleteHive((_QWORD *)v104);
      CmpDrainDelayDerefContext((_QWORD **)v138);
      return v57;
    }
    CmpUnlockKcb(BugCheckParameter4);
    v46 = v127;
    if ( v127 )
    {
      v47 = *(_QWORD *)(BugCheckParameter4 + 32);
      *(_QWORD *)(*(_QWORD *)(v47 + 1648)
                + 24
                * ((unsigned int)(*(_DWORD *)(v47 + 1656) - 1) & ((unsigned int)(101027
                                                                               * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9))) >> 9)))
                + 8) = 0LL;
      v48 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 32) + 1648LL)
                      + 24
                      * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(BugCheckParameter4 + 32) + 1656LL) - 1) & ((unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9))) >> 9))));
      _m_prefetchw(v48);
      v49 = *v48;
      v50 = *v48 - 16;
      if ( (*v48 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v50 = 0LL;
      if ( (v49 & 2) != 0 || (v51 = *v48, v51 != _InterlockedCompareExchange64(v48, v50, v49)) )
        ExfReleasePushLock(v48);
      KeAbPostRelease((ULONG_PTR)v48);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v47 + 4232), 0xFFFFFFFF) == 1 )
        CmpDeleteHive((_QWORD *)v47);
    }
    v137 = 0LL;
    CmpInitializeDelayDerefContext(&v137);
    v52 = *(_QWORD *)(BugCheckParameter4 + 32);
    v53 = *(_QWORD *)BugCheckParameter4;
    while ( v53 > 1 )
    {
      v54 = v53 - 1;
      v55 = v53 == 3 && (*(_DWORD *)(BugCheckParameter4 + 184) & 0x40000) != 0 && *(_BYTE *)(v52 + 2944) == 1;
      v53 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter4, v54, v53);
      if ( v53 == v54 + 1 )
      {
        if ( v53 < v54 )
          KeBugCheckEx(0x51u, 0x25uLL, BugCheckParameter4, 0LL, 0LL);
        if ( v55 )
        {
          CmLockHive(v52);
          *(_DWORD *)(v52 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v52 + 4236), 1u) & 0x7F) + 4240) = 19;
          if ( **(_QWORD **)(v52 + 2936) == 2LL )
          {
            *(_DWORD *)(v52 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v52 + 4236), 1u) & 0x7F) + 4240) = 20;
            if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v52 + 4800), 1, 0) )
            {
              *(_DWORD *)(v52
                        + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v52 + 4236), 1u) & 0x7F)
                        + 4240) = 21;
              CmpReferenceHive(v52);
              ExQueueWorkItem(*(PWORK_QUEUE_ITEM *)(v52 + 4816), DelayedWorkQueue);
            }
          }
          CmUnlockHive(v52);
        }
        goto LABEL_120;
      }
    }
    v59 = *(_DWORD *)(BugCheckParameter4 + 16);
    v60 = *(_QWORD *)(BugCheckParameter4 + 32);
    v61 = (unsigned __int64 *)(*(_QWORD *)(v60 + 1648)
                             + 24
                             * ((unsigned int)(*(_DWORD *)(v60 + 1656) - 1) & ((101027 * (v59 ^ (v59 >> 9))) ^ ((unsigned __int64)(101027 * (v59 ^ (v59 >> 9))) >> 9))));
    v62 = (char *)KeAbPreAcquire((__int64)v61, 0LL);
    v63 = v62;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v61, 0LL) )
      ExfAcquirePushLockExclusiveEx(v61, v62, (__int64)v61);
    if ( v63 )
      v63[10] = 1;
    v61[1] = (unsigned __int64)KeGetCurrentThread();
    _m_prefetchw((const void *)(v60 + 4232));
    v64 = *(_DWORD *)(v60 + 4232);
    do
    {
      if ( !v64 )
        KeBugCheckEx(0x51u, 0x17uLL, v60, 8uLL, BugCheckParameter4);
      v65 = v64;
      v64 = _InterlockedCompareExchange((volatile signed __int32 *)(v60 + 4232), v64 + 1, v64);
    }
    while ( v65 != v64 );
    v66 = (char *)KeAbPreAcquire(BugCheckParameter4 + 48, 0LL);
    v67 = v66;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter4 + 48), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(BugCheckParameter4 + 48), v66, BugCheckParameter4 + 48);
    if ( v67 )
      v67[10] = 1;
    v68 = 0LL;
    *(_QWORD *)(BugCheckParameter4 + 56) = KeGetCurrentThread();
    v69 = *(_QWORD *)(BugCheckParameter4 + 192);
    if ( v69 )
    {
      v79 = *(_QWORD *)(v69 + 24);
      if ( v79 )
      {
        v68 = *(_QWORD *)(v79 + 16);
        CmpUnlockKcb(BugCheckParameter4);
        v80 = (char *)KeAbPreAcquire(v68 + 48, 0LL);
        v81 = v80;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v68 + 48), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v68 + 48), v80, v68 + 48);
        if ( v81 )
          v81[10] = 1;
        *(_QWORD *)(v68 + 56) = KeGetCurrentThread();
        v82 = (char *)KeAbPreAcquire(BugCheckParameter4 + 48, 0LL);
        v83 = v82;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter4 + 48), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(BugCheckParameter4 + 48), v82, BugCheckParameter4 + 48);
        if ( v83 )
          v83[10] = 1;
        v46 = v127;
        *(_QWORD *)(BugCheckParameter4 + 56) = KeGetCurrentThread();
      }
    }
    v70 = *(_QWORD *)(BugCheckParameter4 + 32);
    v71 = _InterlockedDecrement64((volatile signed __int64 *)BugCheckParameter4);
    if ( v71 == 2 )
    {
      if ( (*(_DWORD *)(BugCheckParameter4 + 184) & 0x40000) != 0 && *(_BYTE *)(v70 + 2944) == 1 )
        CmpDoQueueLateUnloadWorker();
    }
    else if ( !v71 )
    {
      if ( (*(_DWORD *)(BugCheckParameter4 + 184) & 0x40000) != 0 )
      {
        v87 = *(_QWORD *)(BugCheckParameter4 + 32);
        CmpCleanUpKcbCacheWithLock(BugCheckParameter4);
        v88 = KeGetCurrentThread();
        *(_DWORD *)(v87 + 160) |= 0x80u;
        *(_QWORD *)(v87 + 4176) = v88;
        *(_DWORD *)(v87 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v87 + 4236), 1u) & 0x7F) + 4240) = 31;
        if ( (*(_DWORD *)(v87 + 160) & 0x20) == 0 )
          CmpDereferenceHive((volatile signed __int32 *)v87);
      }
      else
      {
        v72 = 0;
        v73 = *(_DWORD *)(BugCheckParameter4 + 8);
        if ( (v73 & 0x20) == 0 )
          v72 = (v73 & 0x20000) == 0;
        if ( (!CmpHoldLazyFlush
           || (*(_DWORD *)(BugCheckParameter4 + 184) & 0x100000) != 0
           || (*(_DWORD *)(BugCheckParameter4 + 8) & 8) != 0)
          && v72 )
        {
          CmpAddToDelayedClose(BugCheckParameter4);
        }
        else
        {
          CmpCleanUpKcbCacheWithLock(BugCheckParameter4);
          if ( *(struct _KTHREAD **)(BugCheckParameter4 + 56) != KeGetCurrentThread() )
            CmpDecommisssionKcb(BugCheckParameter4);
        }
      }
    }
    CmpUnlockKcb(BugCheckParameter4);
    if ( v68 )
      CmpUnlockKcb(v68);
    v74 = (__int64 *)(*(_QWORD *)(v60 + 1648)
                    + 24
                    * ((unsigned int)(*(_DWORD *)(v60 + 1656) - 1) & ((101027 * (v59 ^ (v59 >> 9))) ^ ((unsigned __int64)(101027 * (v59 ^ (v59 >> 9))) >> 9))));
    v74[1] = 0LL;
    _m_prefetchw(v74);
    v75 = *v74;
    v76 = *v74 - 16;
    if ( (*v74 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v76 = 0LL;
    if ( (v75 & 2) != 0 || (v77 = *v74, v77 != _InterlockedCompareExchange64(v74, v76, v75)) )
      ExfReleasePushLock(v74);
    KeAbPostRelease((ULONG_PTR)v74);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v60 + 4232), 0xFFFFFFFF) == 1 )
      CmpDeleteHive((_QWORD *)v60);
    CmpDrainDelayDerefContext((_QWORD **)&v137);
    v9 = (ULONG_PTR)v135;
LABEL_120:
    if ( !v46 )
    {
      a3 = v141;
      v8 = a4;
      a2 = v140;
      continue;
    }
    break;
  }
  BugCheckParameter4 = v9;
  CmpLockHashEntrySharedByKcb(v9);
  CmpLockKcbShared(v9);
LABEL_148:
  CmpUnlockKcb(BugCheckParameter4);
  v43 = v129;
LABEL_84:
  v57 = 0;
  *a6 = BugCheckParameter4;
  *a7 = v46;
  *a8 = v43;
  return v57;
}
