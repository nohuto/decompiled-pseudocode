/*
 * XREFs of CmpPerformCompleteKcbCacheLookup @ 0x140848B80
 * Callers:
 *     CmpDoParseKey @ 0x140871670 (CmpDoParseKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x14088A6C0 (CmpGetSymbolicLinkTarget.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     CmpDrainDelayDerefContext @ 0x14041D8F0 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x14042A740 (CmpInitializeDelayDerefContext.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     RtlUpcaseUnicodeChar @ 0x140848120 (RtlUpcaseUnicodeChar.c)
 *     CmpLockHashEntrySharedByKcb @ 0x1408483D4 (CmpLockHashEntrySharedByKcb.c)
 *     CmpDereferenceHive @ 0x1408484B4 (CmpDereferenceHive.c)
 *     CmpDecommisssionKcb @ 0x140848640 (CmpDecommisssionKcb.c)
 *     CmpDeleteHive @ 0x1408488CC (CmpDeleteHive.c)
 *     CmpAddToDelayedClose @ 0x140848A10 (CmpAddToDelayedClose.c)
 *     CmpReferenceHive @ 0x140848B50 (CmpReferenceHive.c)
 *     CmpReferenceKeyControlBlock @ 0x140849E30 (CmpReferenceKeyControlBlock.c)
 *     CmpRecordParseFailure @ 0x140849FA0 (CmpRecordParseFailure.c)
 *     CmUnlockHive @ 0x14084AA3C (CmUnlockHive.c)
 *     CmLockHive @ 0x14084AA78 (CmLockHive.c)
 *     CmpLockKcbExclusive @ 0x140874380 (CmpLockKcbExclusive.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1408743F0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpDoQueueLateUnloadWorker @ 0x14087C588 (CmpDoQueueLateUnloadWorker.c)
 *     CmpGetComponentNameAtIndex @ 0x1408895D0 (CmpGetComponentNameAtIndex.c)
 *     CmpWaitForHiveMount @ 0x140AAE5C4 (CmpWaitForHiveMount.c)
 *     CmpUnlockKcb @ 0x140BA92B0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140BA9340 (CmpLockKcbShared.c)
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
  ULONG_PTR BugCheckParameter4; // r14
  unsigned int v15; // r12d
  int v16; // eax
  __int64 v17; // r14
  unsigned __int64 v18; // rbp
  signed __int64 *v19; // rsi
  __int64 *v20; // rdi
  signed __int32 v21; // eax
  signed __int32 v22; // ett
  __int64 i; // r15
  volatile signed __int64 *v24; // rbp
  __int64 v25; // rdi
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
  bool v39; // zf
  __int64 *v40; // rbx
  signed __int64 v41; // rax
  signed __int64 v42; // rdx
  __int64 v43; // rtt
  __int16 v44; // dx
  signed __int64 v45; // rax
  char v46; // r15
  unsigned int v47; // esi
  __int64 v49; // rcx
  __int64 v50; // rdi
  __int64 *v51; // rbx
  signed __int64 v52; // rax
  signed __int64 v53; // rdx
  __int64 v54; // rtt
  __int64 v55; // rbx
  unsigned __int64 v56; // rcx
  unsigned __int64 v57; // rdx
  bool v58; // r8
  unsigned int v59; // ebp
  ULONG_PTR v60; // rbx
  unsigned __int64 *v61; // rdi
  __int64 *v62; // rax
  __int64 *v63; // rsi
  signed __int32 v64; // eax
  signed __int32 v65; // ett
  __int64 *v66; // rax
  __int64 *v67; // rsi
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
  __int64 *v80; // rax
  __int64 *v81; // r15
  __int64 *v82; // rax
  __int64 *v83; // r15
  __int16 k; // r12
  __int16 v85; // ax
  WCHAR v86; // cx
  _DWORD *v87; // rbx
  __int64 ComponentNameAtIndex; // rax
  __int64 v89; // rdx
  __int64 v90; // r8
  __int64 v91; // rdx
  __int64 v92; // rdi
  __int64 *v93; // rbx
  signed __int64 v94; // rax
  signed __int64 v95; // rdx
  __int64 v96; // rtt
  __int64 v97; // rbx
  unsigned __int64 v98; // rcx
  unsigned __int64 v99; // rdx
  bool v100; // r8
  unsigned int v101; // ebp
  ULONG_PTR v102; // rbx
  unsigned __int64 *v103; // rdi
  __int64 *v104; // rax
  __int64 *v105; // r15
  signed __int32 v106; // eax
  signed __int32 v107; // ett
  __int64 *v108; // rax
  __int64 *v109; // r15
  ULONG_PTR v110; // rdi
  __int64 v111; // rax
  __int64 v112; // rcx
  signed __int64 v113; // rax
  bool v114; // dl
  int v115; // ecx
  __int64 *v116; // rdi
  signed __int64 v117; // rax
  signed __int64 v118; // rdx
  __int64 v119; // rtt
  WORK_QUEUE_TYPE v120; // r8d
  __int64 v121; // rcx
  __int64 v122; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v124; // r15
  struct _KTHREAD *v125; // rax
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
  while ( 1 )
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
LABEL_4:
      KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
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
      v20 = KeAbPreAcquire((__int64)v19, 0LL);
      if ( _InterlockedCompareExchange64(v19, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v19, 0, v20, (unsigned __int64)v19);
      if ( v20 )
        *((_BYTE *)v20 + 10) = 1;
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
          goto LABEL_52;
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
                    goto LABEL_50;
                }
                --v28;
              }
              if ( v28 == j )
              {
                v24 = (volatile signed __int64 *)BugCheckParameter2a;
LABEL_32:
                if ( i == 16 )
                {
LABEL_52:
                  v40 = (__int64 *)(P[206]
                                  + 24
                                  * ((unsigned int)(*((_DWORD *)P + 414) - 1) & ((101027 * (v13 ^ (v13 >> 9))) ^ ((unsigned __int64)(101027 * (v13 ^ (v13 >> 9))) >> 9))));
                  v40[1] = 0LL;
                  _m_prefetchw(v40);
                  v41 = *v40;
                  v42 = *v40 - 16;
                  if ( (*v40 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                    v42 = 0LL;
                  if ( (v41 & 2) != 0 || (v43 = *v40, v43 != _InterlockedCompareExchange64(v40, v42, v41)) )
                    ExfReleasePushLock(v40);
                  KeAbPostRelease((ULONG_PTR)v40);
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
                BugCheckParameter2a = i - 16;
                v39 = (*(_DWORD *)(v25 + 184) & 0x100000) == 0;
                v8 = a4;
                ++v128;
                if ( !v39 )
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
                    goto LABEL_50;
                }
                --v28;
              }
              if ( v28 == k )
                goto LABEL_32;
            }
          }
        }
LABEL_50:
        ;
      }
    }
    if ( v135 != BugCheckParameter2 && _InterlockedExchangeAdd64(v135, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      goto LABEL_46;
    v44 = v11 + v129;
    v140 += v11;
    v129 += v11;
    if ( (*(_DWORD *)(BugCheckParameter4 + 184) & 0x20000) == 0 )
    {
      v46 = v127;
LABEL_68:
      v47 = 0;
      *a6 = BugCheckParameter4;
      *a7 = v46;
      *a8 = v44;
      return v47;
    }
    CmpLockKcbShared(BugCheckParameter4);
    if ( (*(_DWORD *)(BugCheckParameter4 + 184) & 0x20000) == 0 )
    {
      v46 = v127;
      goto LABEL_149;
    }
    v9 = *(_QWORD *)(BugCheckParameter4 + 104);
    v135 = (volatile signed __int64 *)v9;
    v45 = _InterlockedIncrement64((volatile signed __int64 *)v9);
    if ( !v45 )
      KeBugCheckEx(0x51u, 0x24uLL, v9, 0LL, 0LL);
    if ( v45 == 1 )
      goto LABEL_4;
    v49 = *(_QWORD *)(v9 + 32);
    if ( (*(_DWORD *)(v49 + 160) & 0x20) != 0 && *(struct _KTHREAD **)(v49 + 4168) != KeGetCurrentThread() )
    {
      v47 = -1073741772;
      v87 = a5;
      if ( CmpLoadingSystemHivesActive
        && (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread()
        && a5
        && (ComponentNameAtIndex = CmpGetComponentNameAtIndex(v8, v140 - 1),
            (unsigned __int8)CmpWaitForHiveMount(ComponentNameAtIndex, v89, v90, a5 + 34)) )
      {
        *a5 |= 0x100u;
        v47 = 259;
        v91 = 393984LL;
      }
      else
      {
        v91 = 394240LL;
      }
      goto LABEL_167;
    }
    if ( (*(_DWORD *)(v9 + 8) & 0x40000) != 0 )
      break;
    CmpUnlockKcb(BugCheckParameter4);
    v46 = v127;
    if ( v127 )
    {
      v50 = *(_QWORD *)(BugCheckParameter4 + 32);
      *(_QWORD *)(*(_QWORD *)(v50 + 1648)
                + 24
                * ((unsigned int)(*(_DWORD *)(v50 + 1656) - 1) & ((unsigned int)(101027
                                                                               * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9))) >> 9)))
                + 8) = 0LL;
      v51 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 32) + 1648LL)
                      + 24
                      * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(BugCheckParameter4 + 32) + 1656LL) - 1) & ((unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9))) >> 9))));
      _m_prefetchw(v51);
      v52 = *v51;
      v53 = *v51 - 16;
      if ( (*v51 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v53 = 0LL;
      if ( (v52 & 2) != 0 || (v54 = *v51, v54 != _InterlockedCompareExchange64(v51, v53, v52)) )
        ExfReleasePushLock(v51);
      KeAbPostRelease((ULONG_PTR)v51);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v50 + 4232), 0xFFFFFFFF) == 1 )
        CmpDeleteHive((_QWORD *)v50);
    }
    v137 = 0LL;
    CmpInitializeDelayDerefContext(&v137);
    v55 = *(_QWORD *)(BugCheckParameter4 + 32);
    v56 = *(_QWORD *)BugCheckParameter4;
    while ( v56 > 1 )
    {
      v57 = v56 - 1;
      v58 = v56 == 3 && (*(_DWORD *)(BugCheckParameter4 + 184) & 0x40000) != 0 && *(_BYTE *)(v55 + 2944) == 1;
      v56 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter4, v57, v56);
      if ( v56 == v57 + 1 )
      {
        if ( v56 < v57 )
          KeBugCheckEx(0x51u, 0x25uLL, BugCheckParameter4, 0LL, 0LL);
        if ( v58 )
        {
          CmLockHive(v55);
          *(_DWORD *)(v55 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v55 + 4236), 1u) & 0x7F) + 4240) = 19;
          if ( **(_QWORD **)(v55 + 2936) == 2LL )
          {
            *(_DWORD *)(v55 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v55 + 4236), 1u) & 0x7F) + 4240) = 20;
            if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v55 + 4800), 1, 0) )
            {
              *(_DWORD *)(v55
                        + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v55 + 4236), 1u) & 0x7F)
                        + 4240) = 21;
              CmpReferenceHive(v55);
              ExQueueWorkItem(*(PWORK_QUEUE_ITEM *)(v55 + 4816), DelayedWorkQueue);
            }
          }
          CmUnlockHive(v55);
        }
        goto LABEL_121;
      }
    }
    v59 = *(_DWORD *)(BugCheckParameter4 + 16);
    v60 = *(_QWORD *)(BugCheckParameter4 + 32);
    v61 = (unsigned __int64 *)(*(_QWORD *)(v60 + 1648)
                             + 24
                             * ((unsigned int)(*(_DWORD *)(v60 + 1656) - 1) & ((101027 * (v59 ^ (v59 >> 9))) ^ ((unsigned __int64)(101027 * (v59 ^ (v59 >> 9))) >> 9))));
    v62 = KeAbPreAcquire((__int64)v61, 0LL);
    v63 = v62;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v61, 0LL) )
      ExfAcquirePushLockExclusiveEx(v61, v62, (__int64)v61);
    if ( v63 )
      *((_BYTE *)v63 + 10) = 1;
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
    v66 = KeAbPreAcquire(BugCheckParameter4 + 48, 0LL);
    v67 = v66;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter4 + 48), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(BugCheckParameter4 + 48), v66, BugCheckParameter4 + 48);
    if ( v67 )
      *((_BYTE *)v67 + 10) = 1;
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
        v80 = KeAbPreAcquire(v68 + 48, 0LL);
        v81 = v80;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v68 + 48), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v68 + 48), v80, v68 + 48);
        if ( v81 )
          *((_BYTE *)v81 + 10) = 1;
        *(_QWORD *)(v68 + 56) = KeGetCurrentThread();
        v82 = KeAbPreAcquire(BugCheckParameter4 + 48, 0LL);
        v83 = v82;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter4 + 48), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(BugCheckParameter4 + 48), v82, BugCheckParameter4 + 48);
        if ( v83 )
          *((_BYTE *)v83 + 10) = 1;
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
        v122 = *(_QWORD *)(BugCheckParameter4 + 32);
        CmpCleanUpKcbCacheWithLock(BugCheckParameter4);
        CurrentThread = KeGetCurrentThread();
        *(_DWORD *)(v122 + 160) |= 0x80u;
        *(_QWORD *)(v122 + 4176) = CurrentThread;
        *(_DWORD *)(v122 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v122 + 4236), 1u) & 0x7F) + 4240) = 31;
        if ( (*(_DWORD *)(v122 + 160) & 0x20) == 0 )
          CmpDereferenceHive((volatile signed __int32 *)v122);
      }
      else
      {
        v72 = 0;
        v73 = *(_DWORD *)(BugCheckParameter4 + 8);
        if ( (v73 & 0x20) == 0 )
          v72 = (v73 & 0x20000) == 0;
        if ( CmpHoldLazyFlush
          && (*(_WORD *)(BugCheckParameter4 + 186) & 0x10) == 0
          && (*(_BYTE *)(BugCheckParameter4 + 8) & 8) == 0
          || !v72 )
        {
          CmpCleanUpKcbCacheWithLock(BugCheckParameter4);
          if ( *(struct _KTHREAD **)(BugCheckParameter4 + 56) != KeGetCurrentThread() )
            CmpDecommisssionKcb(BugCheckParameter4);
        }
        else
        {
          CmpAddToDelayedClose(BugCheckParameter4);
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
LABEL_121:
    if ( v46 )
    {
      BugCheckParameter4 = v9;
      CmpLockHashEntrySharedByKcb(v9);
      CmpLockKcbShared(v9);
LABEL_149:
      CmpUnlockKcb(BugCheckParameter4);
      v44 = v129;
      goto LABEL_68;
    }
    a3 = v141;
    v8 = a4;
    a2 = v140;
  }
  v87 = a5;
  v47 = -1073740763;
  v91 = 394496LL;
LABEL_167:
  CmpRecordParseFailure(v87, v91, v47);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    goto LABEL_46;
  CmpUnlockKcb(BugCheckParameter4);
  if ( v127 )
  {
    v92 = *(_QWORD *)(BugCheckParameter4 + 32);
    *(_QWORD *)(*(_QWORD *)(v92 + 1648)
              + 24
              * ((unsigned int)(*(_DWORD *)(v92 + 1656) - 1) & ((unsigned int)(101027
                                                                             * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9))) >> 9)))
              + 8) = 0LL;
    v93 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 32) + 1648LL)
                    + 24
                    * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(BugCheckParameter4 + 32) + 1656LL) - 1) & ((unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9))) >> 9))));
    _m_prefetchw(v93);
    v94 = *v93;
    v95 = *v93 - 16;
    if ( (*v93 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v95 = 0LL;
    if ( (v94 & 2) != 0 || (v96 = *v93, v96 != _InterlockedCompareExchange64(v93, v95, v94)) )
      ExfReleasePushLock(v93);
    KeAbPostRelease((ULONG_PTR)v93);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v92 + 4232), 0xFFFFFFFF) == 1 )
      CmpDeleteHive((_QWORD *)v92);
  }
  v138[0] = 0LL;
  CmpInitializeDelayDerefContext(v138);
  v97 = *(_QWORD *)(BugCheckParameter4 + 32);
  v98 = *(_QWORD *)BugCheckParameter4;
  while ( v98 > 1 )
  {
    v99 = v98 - 1;
    v100 = v98 == 3 && (*(_DWORD *)(BugCheckParameter4 + 184) & 0x40000) != 0 && *(_BYTE *)(v97 + 2944) == 1;
    v98 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter4, v99, v98);
    if ( v98 == v99 + 1 )
    {
      if ( v98 < v99 )
        KeBugCheckEx(0x51u, 0x25uLL, BugCheckParameter4, 0LL, 0LL);
      if ( v100 )
      {
        CmLockHive(v97);
        *(_DWORD *)(v97 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v97 + 4236), 1u) & 0x7F) + 4240) = 19;
        if ( **(_QWORD **)(v97 + 2936) == 2LL )
        {
          *(_DWORD *)(v97 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v97 + 4236), 1u) & 0x7F) + 4240) = 20;
          if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v97 + 4800), 1, 0) )
          {
            *(_DWORD *)(v97 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v97 + 4236), 1u) & 0x7F) + 4240) = 21;
            CmpReferenceHive(v97);
            ExQueueWorkItem(*(PWORK_QUEUE_ITEM *)(v97 + 4816), v120);
          }
        }
        CmUnlockHive(v97);
      }
      return v47;
    }
  }
  v101 = *(_DWORD *)(BugCheckParameter4 + 16);
  v102 = *(_QWORD *)(BugCheckParameter4 + 32);
  v103 = (unsigned __int64 *)(*(_QWORD *)(v102 + 1648)
                            + 24
                            * ((unsigned int)(*(_DWORD *)(v102 + 1656) - 1) & ((101027 * (v101 ^ (v101 >> 9))) ^ ((unsigned __int64)(101027 * (v101 ^ (v101 >> 9))) >> 9))));
  v104 = KeAbPreAcquire((__int64)v103, 0LL);
  v105 = v104;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v103, 0LL) )
    ExfAcquirePushLockExclusiveEx(v103, v104, (__int64)v103);
  if ( v105 )
    *((_BYTE *)v105 + 10) = 1;
  v103[1] = (unsigned __int64)KeGetCurrentThread();
  _m_prefetchw((const void *)(v102 + 4232));
  v106 = *(_DWORD *)(v102 + 4232);
  do
  {
    if ( !v106 )
      KeBugCheckEx(0x51u, 0x17uLL, v102, 8uLL, BugCheckParameter4);
    v107 = v106;
    v106 = _InterlockedCompareExchange((volatile signed __int32 *)(v102 + 4232), v106 + 1, v106);
  }
  while ( v107 != v106 );
  v108 = KeAbPreAcquire(BugCheckParameter4 + 48, 0LL);
  v109 = v108;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter4 + 48), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(BugCheckParameter4 + 48), v108, BugCheckParameter4 + 48);
  if ( v109 )
    *((_BYTE *)v109 + 10) = 1;
  *(_QWORD *)(BugCheckParameter4 + 56) = KeGetCurrentThread();
  v110 = 0LL;
  v111 = *(_QWORD *)(BugCheckParameter4 + 192);
  if ( v111 )
  {
    v121 = *(_QWORD *)(v111 + 24);
    if ( v121 )
    {
      v110 = *(_QWORD *)(v121 + 16);
      CmpUnlockKcb(BugCheckParameter4);
      CmpLockKcbExclusive(v110);
      CmpLockKcbExclusive(BugCheckParameter4);
    }
  }
  v112 = *(_QWORD *)(BugCheckParameter4 + 32);
  v113 = _InterlockedDecrement64((volatile signed __int64 *)BugCheckParameter4);
  if ( v113 == 2 )
  {
    if ( (*(_DWORD *)(BugCheckParameter4 + 184) & 0x40000) != 0 && *(_BYTE *)(v112 + 2944) == 1 )
      CmpDoQueueLateUnloadWorker();
  }
  else if ( !v113 )
  {
    if ( (*(_DWORD *)(BugCheckParameter4 + 184) & 0x40000) != 0 )
    {
      v124 = *(_QWORD *)(BugCheckParameter4 + 32);
      CmpCleanUpKcbCacheWithLock(BugCheckParameter4);
      v125 = KeGetCurrentThread();
      *(_DWORD *)(v124 + 160) |= 0x80u;
      *(_QWORD *)(v124 + 4176) = v125;
      *(_DWORD *)(v124 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v124 + 4236), 1u) & 0x7F) + 4240) = 31;
      if ( (*(_DWORD *)(v124 + 160) & 0x20) == 0 )
        CmpDereferenceHive((volatile signed __int32 *)v124);
    }
    else
    {
      v114 = 0;
      v115 = *(_DWORD *)(BugCheckParameter4 + 8);
      if ( (v115 & 0x20) == 0 )
        v114 = (v115 & 0x20000) == 0;
      if ( CmpHoldLazyFlush
        && (*(_WORD *)(BugCheckParameter4 + 186) & 0x10) == 0
        && (*(_BYTE *)(BugCheckParameter4 + 8) & 8) == 0
        || !v114 )
      {
        CmpCleanUpKcbCacheWithLock(BugCheckParameter4);
        if ( *(struct _KTHREAD **)(BugCheckParameter4 + 56) != KeGetCurrentThread() )
          CmpDecommisssionKcb(BugCheckParameter4);
      }
      else
      {
        CmpAddToDelayedClose(BugCheckParameter4);
      }
    }
  }
  CmpUnlockKcb(BugCheckParameter4);
  if ( v110 )
    CmpUnlockKcb(v110);
  v116 = (__int64 *)(*(_QWORD *)(v102 + 1648)
                   + 24
                   * ((unsigned int)(*(_DWORD *)(v102 + 1656) - 1) & ((101027 * (v101 ^ (v101 >> 9))) ^ ((unsigned __int64)(101027 * (v101 ^ (v101 >> 9))) >> 9))));
  v116[1] = 0LL;
  _m_prefetchw(v116);
  v117 = *v116;
  v118 = *v116 - 16;
  if ( (*v116 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v118 = 0LL;
  if ( (v117 & 2) != 0 || (v119 = *v116, v119 != _InterlockedCompareExchange64(v116, v118, v117)) )
    ExfReleasePushLock(v116);
  KeAbPostRelease((ULONG_PTR)v116);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v102 + 4232), 0xFFFFFFFF) == 1 )
    CmpDeleteHive((_QWORD *)v102);
  CmpDrainDelayDerefContext((_QWORD **)v138);
  return v47;
}
