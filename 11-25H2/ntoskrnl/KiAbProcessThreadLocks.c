/*
 * XREFs of KiAbProcessThreadLocks @ 0x1402E8D40
 * Callers:
 *     KiAbPropagateBoosts @ 0x1402542E0 (KiAbPropagateBoosts.c)
 *     KiExecuteAllDpcs @ 0x140254370 (KiExecuteAllDpcs.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x14027E670 (KiAbConvertWaiterToOwnerEntry.c)
 *     KiAbDeferredProcessingWorker @ 0x1402E4D00 (KiAbDeferredProcessingWorker.c)
 *     KiAbProcessPreContextSwitch @ 0x140316AB0 (KiAbProcessPreContextSwitch.c)
 *     KiSwapThread @ 0x14031CEE0 (KiSwapThread.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObReferenceObjectSafeWithTag @ 0x140299100 (ObReferenceObjectSafeWithTag.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402BC860 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     RtlRbInsertNodeEx @ 0x1402E2370 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x1402E2A20 (RtlRbRemoveNode.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x1402E5690 (KiAbOwnerComputeCpuPriorityKey.c)
 *     KiAbIoBoostOwners @ 0x1402E61E0 (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x1402E72F0 (KiAbCpuBoostOwners.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1402E83C0 (KiAbEntryGetLockedHeadEntry.c)
 *     EtwTraceAutoBoostProcessLockEntry @ 0x1402E8C88 (EtwTraceAutoBoostProcessLockEntry.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x1402E9DE0 (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbSetMinimumThreadPriority @ 0x1402E9E70 (KiAbSetMinimumThreadPriority.c)
 *     PsGetIoPriorityThread @ 0x1403031B0 (PsGetIoPriorityThread.c)
 *     PsBoostThreadOutstandingIoQoS @ 0x140325D24 (PsBoostThreadOutstandingIoQoS.c)
 *     IoBoostThreadIoPriority @ 0x140326240 (IoBoostThreadIoPriority.c)
 */

void __fastcall KiAbProcessThreadLocks(__int64 a1, char a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  __int64 v5; // rax
  __int64 v7; // rsi
  BOOL v8; // r10d
  __int64 v9; // r8
  __int64 v10; // r11
  unsigned __int64 v11; // r10
  __int64 v12; // r14
  bool v13; // zf
  int v14; // ecx
  int v15; // edx
  char v16; // si
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // r12
  __int64 v20; // rax
  __int64 v21; // r8
  unsigned int v22; // esi
  unsigned int v23; // ecx
  __int64 v24; // rdx
  int v25; // r15d
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // r14
  __int64 v29; // rax
  int v30; // ebx
  __int64 v31; // rax
  __int64 v32; // r15
  char v33; // dl
  int v34; // eax
  unsigned int v35; // eax
  char v36; // cl
  _RTL_RB_TREE *v37; // r15
  _RTL_BALANCED_NODE *Min; // rax
  unsigned __int64 Root; // rdx
  BOOLEAN v40; // r8
  int v41; // r9d
  _RTL_BALANCED_NODE *v42; // rax
  char v43; // al
  int v44; // ebx
  __int64 v45; // rax
  _QWORD *v46; // r12
  char v47; // dl
  int v48; // eax
  unsigned int v49; // eax
  char v50; // cl
  __int64 v51; // rax
  __int64 v52; // rdx
  BOOLEAN v53; // r8
  int v54; // r9d
  __int64 v55; // rax
  int v56; // ecx
  __int64 v57; // rax
  char v58; // dl
  int v59; // ecx
  __int64 v60; // rax
  char v61; // dl
  char v62; // r14
  char v63; // r15
  char v64; // al
  unsigned __int64 v65; // r14
  __int64 v66; // rax
  __int64 v67; // rdx
  BOOLEAN v68; // r8
  int v69; // r9d
  __int64 v70; // rax
  __int64 v71; // rax
  char v72; // r9
  char v73; // dl
  __int64 v74; // rcx
  _DWORD *v75; // r11
  int v76; // r10d
  int v77; // r10d
  signed __int8 CpuPriorityKey; // r14
  char v79; // r9
  char v80; // al
  __int64 v81; // rax
  __int64 v82; // r9
  BOOLEAN v83; // r8
  int v84; // r10d
  __int64 v85; // rdx
  __int64 v86; // rax
  __int64 v87; // rax
  char v88; // r9
  char v89; // dl
  char v90; // al
  __int64 v91; // rax
  __int64 v92; // rdx
  BOOLEAN v93; // r8
  int v94; // r9d
  __int64 v95; // rax
  char v96; // al
  __int64 v97; // rax
  __int64 v98; // rdx
  BOOLEAN v99; // r8
  int v100; // r9d
  __int64 v101; // rax
  int v102; // r10d
  signed __int8 v103; // r15
  char v104; // r9
  char v105; // al
  char v106; // r9
  char v107; // dl
  char v108; // al
  char v109; // r9
  char v110; // dl
  __int64 v111; // rcx
  _DWORD *v112; // r11
  int v113; // r10d
  unsigned int v114; // edx
  unsigned int v115; // edx
  char v116; // al
  char v117; // al
  char v118; // al
  char v119; // al
  void *v120; // r15
  void *v121; // r12
  int v122; // [rsp+30h] [rbp-61h] BYREF
  unsigned int v123; // [rsp+34h] [rbp-5Dh]
  unsigned int v124; // [rsp+38h] [rbp-59h]
  __int64 v125; // [rsp+40h] [rbp-51h]
  __int64 v126; // [rsp+48h] [rbp-49h]
  int v127; // [rsp+50h] [rbp-41h] BYREF
  int v128; // [rsp+54h] [rbp-3Dh]
  int v129; // [rsp+58h] [rbp-39h] BYREF
  unsigned int v130; // [rsp+5Ch] [rbp-35h]
  __int64 v131; // [rsp+60h] [rbp-31h]
  unsigned int v132; // [rsp+68h] [rbp-29h]
  unsigned int v133; // [rsp+6Ch] [rbp-25h]
  _QWORD *LockedHeadEntry; // [rsp+70h] [rbp-21h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-19h] BYREF
  struct _KLOCK_QUEUE_HANDLE v136; // [rsp+90h] [rbp-1h] BYREF
  __int64 v137; // [rsp+F0h] [rbp+5Fh] BYREF
  __int64 v138; // [rsp+100h] [rbp+6Fh]
  _QWORD *v139; // [rsp+108h] [rbp+77h]

  v139 = a4;
  v138 = a3;
  v137 = a1;
  v5 = *(_QWORD *)(a1 + 1144);
  v7 = a1;
  if ( v5 )
    v8 = (unsigned int)(1LL << *(_BYTE *)(v5 + 12)) - 1 == (*(unsigned __int16 *)(v5 + 8) | *(unsigned __int16 *)(v5 + 10));
  else
    v8 = 1;
  if ( (unsigned int)(1LL << *(_BYTE *)(*(_QWORD *)(a1 + 1136) + 12LL)) - 1 == (*(unsigned __int16 *)(*(_QWORD *)(a1 + 1136) + 8LL) | *(unsigned __int16 *)(*(_QWORD *)(a1 + 1136) + 10LL))
    && v8 )
  {
    return;
  }
  v9 = *(_QWORD *)(a1 + 1136);
  v10 = 0x7FFFFFFFFFFFFFFCLL;
  v11 = 0x8000000000000000uLL;
  LODWORD(v12) = (*(unsigned __int16 *)(v9 + 8) | *(unsigned __int16 *)(v9 + 10)) ^ ((1LL << *(_BYTE *)(v9 + 12)) - 1);
  v13 = !_BitScanForward((unsigned int *)&a1, v12);
  v126 = *(_QWORD *)(v7 + 1136);
  v128 = v14;
  if ( !v13 )
  {
    v15 = a2 & 2;
    v16 = a2 & 1;
    v123 = a2 & 2;
    v17 = a2 & 4;
    v124 = a2 & 4;
    while ( 1 )
    {
      v12 = ((_DWORD)v12 - 1) & (unsigned int)v12;
      v18 = 88LL * (unsigned int)a1;
      v125 = v12;
      v19 = v18 + v9 + 16;
      v20 = *(_QWORD *)v19;
      if ( !*(_QWORD *)v19 || (v20 & 2) != 0 || v16 && (v20 & 1) != 0 )
        goto LABEL_12;
      if ( v20 < 0 )
      {
        if ( v16 )
        {
          if ( (*(_BYTE *)(v19 + 11) & 1) == 0 )
          {
            if ( !*(_BYTE *)(v19 + 9) )
            {
              if ( KiAbOwnerComputeCpuPriorityKey(v18 + v9 + 16) != *(_BYTE *)(v19 + 40) )
                goto LABEL_38;
LABEL_120:
              v15 = v123;
              v9 = v126;
              goto LABEL_12;
            }
            v118 = *(_BYTE *)(*(_QWORD *)(v18 + v9 - 88LL * (*(_BYTE *)(v18 + v9 + 16 + 8) & 0x3F)) + 195LL);
            if ( v118 > 30 )
              v118 = 30;
            if ( v118 == *(_BYTE *)(v19 + 40) )
              goto LABEL_12;
LABEL_38:
            v122 = 0;
            v127 = 0;
            v30 = (a2 & 7) << 6;
            v31 = v10 & *(_QWORD *)v19;
            v131 = v31;
            memset(&LockHandle, 0, sizeof(LockHandle));
            if ( v31 && *(char *)(v19 + 8) >= 0 )
              v131 = v11 | v31;
            LockedHeadEntry = KiAbEntryGetLockedHeadEntry(v19, a2 & 1, (__int64)&LockHandle, v17);
            v32 = (__int64)LockedHeadEntry;
            if ( !LockedHeadEntry )
            {
LABEL_117:
              if ( (WORD2(xmmword_140FC5B10) & 0x1000) != 0 )
                EtwTraceAutoBoostProcessLockEntry(
                  *(_QWORD *)(v19 - 88LL * (*(_BYTE *)(v19 + 8) & 0x3F) - 16),
                  v131,
                  v30);
              v17 = v124;
              v10 = 0x7FFFFFFFFFFFFFFCLL;
              v11 = 0x8000000000000000uLL;
              goto LABEL_120;
            }
            v33 = *(_BYTE *)(v19 + 9);
            v30 |= v33 != 0 ? 8 : 0;
            if ( !v33 )
            {
              if ( v123 )
              {
                if ( (_QWORD *)v19 != LockedHeadEntry )
                {
                  v34 = *(_DWORD *)(v19 + 80);
                  v132 = 0;
                  v35 = v34 & 0x3FFFFFFF;
                  if ( v35 )
                  {
                    _BitScanReverse(&v114, v35);
                    v132 = v114;
                    v33 = v114 + 1;
                  }
                  v36 = *(_BYTE *)(*(_QWORD *)(v19 - 88LL * (*(_BYTE *)(v19 + 8) & 0x3F) - 16) + 563LL);
                  if ( v36 > v33 )
                  {
                    v33 = *(_BYTE *)(*(_QWORD *)(v19 - 88LL * (*(_BYTE *)(v19 + 8) & 0x3F) - 16) + 563LL);
                    if ( v36 > 30 )
                      v33 = 30;
                  }
                  if ( *(_BYTE *)(v19 + 40) != v33 )
                  {
                    *(_BYTE *)(v19 + 40) = v33;
                    v37 = (_RTL_RB_TREE *)(v32 + 40);
                    RtlRbRemoveNode(v37, (PRTL_BALANCED_NODE)(v19 + 16));
                    Min = v37->Min;
                    Root = (unsigned __int64)v37->Root;
                    if ( ((unsigned __int8)Min & 1) == 0 )
                      goto LABEL_52;
                    if ( Root )
                    {
                      Root ^= (unsigned __int64)v37;
LABEL_52:
                      v40 = 0;
                      v41 = (unsigned __int8)Min & 1;
                      if ( !Root )
                        goto LABEL_87;
                      while ( 1 )
                      {
                        if ( *(_BYTE *)(Root + 24) <= *(_BYTE *)(v19 + 40) )
                        {
                          v42 = *(_RTL_BALANCED_NODE **)(Root + 8);
                          if ( v41 )
                          {
                            if ( !v42 )
                              goto LABEL_86;
                            v42 = (_RTL_BALANCED_NODE *)(Root ^ (unsigned __int64)v42);
                          }
                          if ( !v42 )
                          {
LABEL_86:
                            v40 = 1;
                            goto LABEL_87;
                          }
                        }
                        else
                        {
                          v42 = *(_RTL_BALANCED_NODE **)Root;
                          if ( v41 )
                          {
                            if ( !v42 )
                              goto LABEL_87;
                            v42 = (_RTL_BALANCED_NODE *)(Root ^ (unsigned __int64)v42);
                          }
                          if ( !v42 )
                            goto LABEL_87;
                        }
                        Root = (unsigned __int64)v42;
                      }
                    }
                    v40 = 0;
LABEL_87:
                    RtlRbInsertNodeEx(v37, (PRTL_BALANCED_NODE)Root, v40, (PRTL_BALANCED_NODE)(v19 + 16));
                    v32 = (__int64)LockedHeadEntry;
                  }
                  v30 |= 0x10u;
                }
                v56 = *(_DWORD *)(v32 + 84);
                if ( (_BYTE)v56 )
                  BYTE1(v122) = 2;
                if ( (v56 & 0x7F00) != 0 )
                  BYTE2(v122) = 1;
                v57 = *(_QWORD *)(v32 + 64);
                if ( v57 )
                {
                  v58 = *(_BYTE *)(v57 + 24);
                  LOBYTE(v122) = v58;
                }
                else
                {
                  v58 = v122;
                }
                if ( *(_BYTE *)(v32 + 9) )
                {
                  v116 = *(_BYTE *)(*(_QWORD *)(v32 - 88LL * (*(_BYTE *)(v32 + 8) & 0x3F) - 16) + 195LL);
                  if ( v116 > 30 )
                    v116 = 30;
                  if ( v116 > v58 )
                    LOBYTE(v122) = v116;
                }
                if ( !v122 )
                {
                  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                  v30 |= 1u;
                  goto LABEL_117;
                }
                if ( (unsigned int)KiAbSetMinimumThreadPriority(
                                     v19,
                                     (unsigned int)&v122,
                                     v138,
                                     (_DWORD)v139,
                                     (__int64)a5,
                                     (__int64)&v127)
                  && v19 != v32 )
                {
                  v90 = KiAbOwnerComputeCpuPriorityKey(v19);
                  if ( *(_BYTE *)(v19 + 40) != v90 )
                  {
                    *(_BYTE *)(v19 + 40) = v90;
                    RtlRbRemoveNode((PRTL_RB_TREE)(v32 + 40), (PRTL_BALANCED_NODE)(v19 + 16));
                    v91 = *(_QWORD *)(v32 + 48);
                    v92 = *(_QWORD *)(v32 + 40);
                    if ( (v91 & 1) == 0 )
                      goto LABEL_191;
                    if ( v92 )
                    {
                      v92 ^= v32 + 40;
LABEL_191:
                      v93 = 0;
                      v94 = v91 & 1;
                      if ( !v92 )
                        goto LABEL_231;
                      while ( 1 )
                      {
                        if ( *(_BYTE *)(v92 + 24) <= *(_BYTE *)(v19 + 40) )
                        {
                          v95 = *(_QWORD *)(v92 + 8);
                          if ( v94 )
                          {
                            if ( !v95 )
                              goto LABEL_230;
                            v95 ^= v92;
                          }
                          if ( !v95 )
                          {
LABEL_230:
                            v93 = 1;
                            goto LABEL_231;
                          }
                        }
                        else
                        {
                          v95 = *(_QWORD *)v92;
                          if ( v94 )
                          {
                            if ( !v95 )
                              goto LABEL_231;
                            v95 ^= v92;
                          }
                          if ( !v95 )
                            goto LABEL_231;
                        }
                        v92 = v95;
                      }
                    }
                    v93 = 0;
LABEL_231:
                    RtlRbInsertNodeEx(
                      (PRTL_RB_TREE)(v32 + 40),
                      (PRTL_BALANCED_NODE)v92,
                      v93,
                      (PRTL_BALANCED_NODE)(v19 + 16));
                  }
                  v30 |= 0x20u;
                }
              }
LABEL_115:
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
              v62 = v127;
              if ( v127 )
              {
                v120 = *(void **)(v19 - 88LL * (*(_BYTE *)(v19 + 8) & 0x3F) - 16);
                if ( ObReferenceObjectSafeWithTag((__int64)v120, 0x746C6644u) )
                {
                  if ( (v62 & 1) != 0 )
                    IoBoostThreadIoPriority(v120, 2LL, 0x80000000LL);
                  if ( (v62 & 2) != 0 )
                    PsBoostThreadOutstandingIoQoS(v120);
                  ObDereferenceObjectDeferDeleteWithTag(v120, 0x746C6644u);
                }
              }
LABEL_116:
              LODWORD(v12) = v125;
              goto LABEL_117;
            }
            if ( !v124 )
              goto LABEL_115;
            if ( (_QWORD *)v19 != LockedHeadEntry )
            {
              v64 = *(_BYTE *)(*(_QWORD *)(v19 - 88LL * (*(_BYTE *)(v19 + 8) & 0x3F) - 16) + 195LL);
              if ( v64 > 30 )
                v64 = 30;
              if ( *(_BYTE *)(v19 + 40) != v64 )
              {
                v65 = (unsigned __int64)(LockedHeadEntry + 7);
                *(_BYTE *)(v19 + 40) = v64;
                RtlRbRemoveNode((PRTL_RB_TREE)(v32 + 56), (PRTL_BALANCED_NODE)(v19 + 16));
                v66 = *(_QWORD *)(v32 + 64);
                v67 = *(_QWORD *)(v32 + 56);
                if ( (v66 & 1) == 0 )
                  goto LABEL_135;
                if ( v67 )
                {
                  v67 ^= v65;
LABEL_135:
                  v68 = 0;
                  v69 = v66 & 1;
                  if ( !v67 )
                    goto LABEL_145;
                  while ( 1 )
                  {
                    if ( *(_BYTE *)(v67 + 24) >= *(_BYTE *)(v19 + 40) )
                    {
                      v70 = *(_QWORD *)(v67 + 8);
                      if ( v69 )
                      {
                        if ( !v70 )
                          goto LABEL_144;
                        v70 ^= v67;
                      }
                      if ( !v70 )
                      {
LABEL_144:
                        v68 = 1;
                        goto LABEL_145;
                      }
                    }
                    else
                    {
                      v70 = *(_QWORD *)v67;
                      if ( v69 )
                      {
                        if ( !v70 )
                          goto LABEL_145;
                        v70 ^= v67;
                      }
                      if ( !v70 )
                        goto LABEL_145;
                    }
                    v67 = v70;
                  }
                }
                v68 = 0;
LABEL_145:
                RtlRbInsertNodeEx(
                  (PRTL_RB_TREE)(v32 + 56),
                  (PRTL_BALANCED_NODE)v67,
                  v68,
                  (PRTL_BALANCED_NODE)(v19 + 16));
              }
              v30 |= 0x20u;
            }
            v71 = *(_QWORD *)(v32 + 48);
            if ( v71 )
              v72 = *(_BYTE *)(v71 + 24);
            else
              v72 = 30;
            v13 = *(_BYTE *)(v32 + 9) == 0;
            LOBYTE(v122) = v72;
            if ( v13 )
            {
              v105 = KiAbOwnerComputeCpuPriorityKey(v32);
              v107 = v106;
              if ( v105 < v106 )
                v107 = v105;
              LOBYTE(v122) = v107;
            }
            if ( *(_BYTE *)(v19 + 9) )
            {
              v73 = *(_BYTE *)(v19 + 11);
              if ( (v73 & 6) != 6 )
              {
                v74 = 88LL * (*(_BYTE *)(v19 + 8) & 0x3F);
                v75 = *(_DWORD **)(v19 - v74 - 16);
                if ( (v73 & 2) == 0 && ((int)PsGetIoPriorityThread(*(_QWORD *)(v19 - v74 - 16)) >= 2 || v75[376] != v76) )
                {
                  ++*(_BYTE *)(v32 + 84);
                  *(_BYTE *)(v19 + 11) |= 2u;
                }
                if ( (*(_BYTE *)(v19 + 11) & 4) == 0 && (!v75[378] || v75[377]) )
                {
                  *(_DWORD *)(v32 + 84) ^= ((unsigned __int16)*(_DWORD *)(v32 + 84) ^ (unsigned __int16)(*(_DWORD *)(v32 + 84) + 256)) & 0x7F00;
                  *(_BYTE *)(v19 + 11) |= 4u;
                }
              }
            }
            CpuPriorityKey = KiAbEntryGetCpuPriorityKey(v19);
            if ( v79 < CpuPriorityKey )
            {
              if ( v77 )
                goto LABEL_113;
            }
            else
            {
              if ( !v77 )
              {
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                v30 |= 2u;
                goto LABEL_116;
              }
LABEL_113:
              KiAbIoBoostOwners(v32, v77, v138, v139, a5);
            }
            KiAbCpuBoostOwners(v32, CpuPriorityKey, v138, v139, a5);
            goto LABEL_115;
          }
        }
        else
        {
          if ( *(_BYTE *)(v19 + 9) )
          {
            if ( !(_DWORD)v17 )
              goto LABEL_12;
            goto LABEL_38;
          }
          if ( v15 )
            goto LABEL_38;
        }
      }
      else if ( v16 )
      {
        goto LABEL_38;
      }
LABEL_12:
      v13 = !_BitScanForward((unsigned int *)&a1, v12);
      v128 = a1;
      if ( v13 )
      {
        v7 = v137;
        break;
      }
    }
  }
  v21 = *(_QWORD *)(v7 + 1144);
  v126 = v21;
  if ( !v21 )
    return;
  v22 = (*(unsigned __int16 *)(v21 + 8) | *(unsigned __int16 *)(v21 + 10)) ^ ((1LL << *(_BYTE *)(v21 + 12)) - 1);
  v13 = !_BitScanForward(&v23, v22);
  v130 = v23;
  if ( v13 )
    return;
  v24 = a2 & 1;
  v25 = a2 & 2;
  v123 = a2 & 1;
  v26 = a2 & 4;
  LODWORD(v125) = v25;
  v124 = a2 & 4;
  do
  {
    v22 &= v22 - 1;
    v27 = 88LL * v23;
    v28 = v27 + v21 + 16;
    v29 = *(_QWORD *)v28;
    if ( !*(_QWORD *)v28 || (v29 & 2) != 0 || (_BYTE)v24 && (v29 & 1) != 0 )
      goto LABEL_23;
    if ( v29 < 0 )
    {
      if ( (_BYTE)v24 )
      {
        if ( (*(_BYTE *)(v28 + 11) & 1) != 0 )
          goto LABEL_23;
        if ( *(_BYTE *)(v28 + 9) )
        {
          v119 = *(_BYTE *)(*(_QWORD *)(v27 + v21 - 88LL * (*(_BYTE *)(v27 + v21 + 16 + 8) & 0x3F)) + 195LL);
          if ( v119 > 30 )
            v119 = 30;
          if ( v119 == *(_BYTE *)(v28 + 40) )
            goto LABEL_23;
        }
        else
        {
          v43 = KiAbOwnerComputeCpuPriorityKey(v27 + v21 + 16);
          v24 = v123;
          if ( v43 == *(_BYTE *)(v28 + 40) )
            goto LABEL_128;
        }
      }
      else if ( *(_BYTE *)(v28 + 9) )
      {
        if ( !(_DWORD)v26 )
          goto LABEL_23;
      }
      else if ( !v25 )
      {
        goto LABEL_23;
      }
    }
    else if ( !(_BYTE)v24 )
    {
      goto LABEL_23;
    }
    LODWORD(v137) = 0;
    v129 = 0;
    v44 = (a2 & 7) << 6;
    v45 = v10 & *(_QWORD *)v28;
    v131 = v45;
    memset(&v136, 0, sizeof(v136));
    if ( v45 && *(char *)(v28 + 8) >= 0 )
      v131 = v11 | v45;
    v46 = KiAbEntryGetLockedHeadEntry(v28, v24, (__int64)&v136, v26);
    if ( !v46 )
      goto LABEL_125;
    v47 = *(_BYTE *)(v28 + 9);
    v44 |= v47 != 0 ? 8 : 0;
    if ( v47 )
    {
      if ( !v124 )
        goto LABEL_124;
      if ( (_QWORD *)v28 != v46 )
      {
        v80 = *(_BYTE *)(*(_QWORD *)(v28 - 88LL * (*(_BYTE *)(v28 + 8) & 0x3F) - 16) + 195LL);
        if ( v80 > 30 )
          v80 = 30;
        if ( *(_BYTE *)(v28 + 40) != v80 )
        {
          *(_BYTE *)(v28 + 40) = v80;
          RtlRbRemoveNode((PRTL_RB_TREE)(v46 + 7), (PRTL_BALANCED_NODE)(v28 + 16));
          v81 = v46[8];
          if ( (v81 & 1) == 0 )
          {
            v82 = v46[7];
            goto LABEL_169;
          }
          v85 = v46[7];
          if ( v85 )
          {
            v82 = v85 ^ (unsigned __int64)(v46 + 7);
LABEL_169:
            v83 = 0;
            v84 = v81 & 1;
            v85 = v82;
            if ( !v82 )
              goto LABEL_179;
            while ( 1 )
            {
              if ( *(_BYTE *)(v85 + 24) >= *(_BYTE *)(v28 + 40) )
              {
                v86 = *(_QWORD *)(v85 + 8);
                if ( v84 )
                {
                  if ( !v86 )
                    goto LABEL_178;
                  v86 ^= v85;
                }
                if ( !v86 )
                {
LABEL_178:
                  v83 = 1;
                  goto LABEL_179;
                }
              }
              else
              {
                v86 = *(_QWORD *)v85;
                if ( v84 )
                {
                  if ( !v86 )
                    goto LABEL_179;
                  v86 ^= v85;
                }
                if ( !v86 )
                  goto LABEL_179;
              }
              v85 = v86;
            }
          }
          v83 = 0;
LABEL_179:
          RtlRbInsertNodeEx((PRTL_RB_TREE)(v46 + 7), (PRTL_BALANCED_NODE)v85, v83, (PRTL_BALANCED_NODE)(v28 + 16));
        }
        v44 |= 0x20u;
      }
      v87 = v46[6];
      if ( v87 )
        v88 = *(_BYTE *)(v87 + 24);
      else
        v88 = 30;
      v13 = *((_BYTE *)v46 + 9) == 0;
      LOBYTE(v137) = v88;
      if ( v13 )
      {
        v108 = KiAbOwnerComputeCpuPriorityKey((__int64)v46);
        v110 = v109;
        if ( v108 < v109 )
          v110 = v108;
        LOBYTE(v137) = v110;
      }
      if ( *(_BYTE *)(v28 + 9) )
      {
        v89 = *(_BYTE *)(v28 + 11);
        if ( (v89 & 6) != 6 )
        {
          v111 = 88LL * (*(_BYTE *)(v28 + 8) & 0x3F);
          v112 = *(_DWORD **)(v28 - v111 - 16);
          if ( (v89 & 2) == 0 && ((int)PsGetIoPriorityThread(*(_QWORD *)(v28 - v111 - 16)) >= 2 || v112[376] != v113) )
          {
            ++*((_BYTE *)v46 + 84);
            *(_BYTE *)(v28 + 11) |= 2u;
          }
          if ( (*(_BYTE *)(v28 + 11) & 4) == 0 && (!v112[378] || v112[377]) )
          {
            *((_DWORD *)v46 + 21) ^= ((unsigned __int16)*((_DWORD *)v46 + 21) ^ (unsigned __int16)(*((_DWORD *)v46 + 21)
                                                                                                 + 256)) & 0x7F00;
            *(_BYTE *)(v28 + 11) |= 4u;
          }
        }
      }
      v103 = KiAbEntryGetCpuPriorityKey(v28);
      if ( v104 < v103 )
      {
        if ( !v102 )
        {
LABEL_123:
          KiAbCpuBoostOwners((__int64)v46, v103, v138, v139, a5);
          goto LABEL_124;
        }
      }
      else if ( !v102 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v136);
        v44 |= 2u;
        goto LABEL_125;
      }
      KiAbIoBoostOwners((__int64)v46, v102, v138, v139, a5);
      goto LABEL_123;
    }
    if ( !v25 )
      goto LABEL_124;
    if ( (_QWORD *)v28 != v46 )
    {
      v48 = *(_DWORD *)(v28 + 80);
      v133 = 0;
      v49 = v48 & 0x3FFFFFFF;
      if ( v49 )
      {
        _BitScanReverse(&v115, v49);
        v133 = v115;
        v47 = v115 + 1;
      }
      v50 = *(_BYTE *)(*(_QWORD *)(v28 - 88LL * (*(_BYTE *)(v28 + 8) & 0x3F) - 16) + 563LL);
      if ( v50 > v47 )
      {
        v47 = *(_BYTE *)(*(_QWORD *)(v28 - 88LL * (*(_BYTE *)(v28 + 8) & 0x3F) - 16) + 563LL);
        if ( v50 > 30 )
          v47 = 30;
      }
      if ( *(_BYTE *)(v28 + 40) != v47 )
      {
        *(_BYTE *)(v28 + 40) = v47;
        RtlRbRemoveNode((PRTL_RB_TREE)(v46 + 5), (PRTL_BALANCED_NODE)(v28 + 16));
        v51 = v46[6];
        v52 = v46[5];
        if ( (v51 & 1) == 0 )
          goto LABEL_76;
        if ( v52 )
        {
          v52 ^= (unsigned __int64)(v46 + 5);
LABEL_76:
          v53 = 0;
          v54 = v51 & 1;
          if ( !v52 )
            goto LABEL_101;
          while ( 1 )
          {
            if ( *(_BYTE *)(v52 + 24) <= *(_BYTE *)(v28 + 40) )
            {
              v55 = *(_QWORD *)(v52 + 8);
              if ( v54 )
              {
                if ( !v55 )
                  goto LABEL_100;
                v55 ^= v52;
              }
              if ( !v55 )
              {
LABEL_100:
                v53 = 1;
                goto LABEL_101;
              }
            }
            else
            {
              v55 = *(_QWORD *)v52;
              if ( v54 )
              {
                if ( !v55 )
                  goto LABEL_101;
                v55 ^= v52;
              }
              if ( !v55 )
                goto LABEL_101;
            }
            v52 = v55;
          }
        }
        v53 = 0;
LABEL_101:
        RtlRbInsertNodeEx((PRTL_RB_TREE)(v46 + 5), (PRTL_BALANCED_NODE)v52, v53, (PRTL_BALANCED_NODE)(v28 + 16));
      }
      v44 |= 0x10u;
    }
    v59 = *((_DWORD *)v46 + 21);
    if ( (_BYTE)v59 )
      BYTE1(v137) = 2;
    if ( (v59 & 0x7F00) != 0 )
      BYTE2(v137) = 1;
    v60 = v46[8];
    if ( v60 )
    {
      v61 = *(_BYTE *)(v60 + 24);
      LOBYTE(v137) = v61;
    }
    else
    {
      v61 = v137;
    }
    if ( *((_BYTE *)v46 + 9) )
    {
      v117 = *(_BYTE *)(v46[-11 * ((_BYTE)v46[1] & 0x3F) - 2] + 195LL);
      if ( v117 > 30 )
        v117 = 30;
      if ( v117 > v61 )
        LOBYTE(v137) = v117;
    }
    if ( !(_DWORD)v137 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v136);
      v44 |= 1u;
      goto LABEL_125;
    }
    if ( !(unsigned int)KiAbSetMinimumThreadPriority(
                          v28,
                          (unsigned int)&v137,
                          v138,
                          (_DWORD)v139,
                          (__int64)a5,
                          (__int64)&v129)
      || (_QWORD *)v28 == v46 )
    {
      goto LABEL_124;
    }
    v96 = KiAbOwnerComputeCpuPriorityKey(v28);
    if ( *(_BYTE *)(v28 + 40) == v96 )
      goto LABEL_237;
    *(_BYTE *)(v28 + 40) = v96;
    RtlRbRemoveNode((PRTL_RB_TREE)(v46 + 5), (PRTL_BALANCED_NODE)(v28 + 16));
    v97 = v46[6];
    v98 = v46[5];
    if ( (v97 & 1) != 0 )
    {
      if ( !v98 )
      {
        RtlRbInsertNodeEx((PRTL_RB_TREE)(v46 + 5), 0LL, 0, (PRTL_BALANCED_NODE)(v28 + 16));
        v44 |= 0x20u;
        goto LABEL_124;
      }
      v98 ^= (unsigned __int64)(v46 + 5);
    }
    v99 = 0;
    v100 = v97 & 1;
    if ( !v98 )
      goto LABEL_236;
    while ( 1 )
    {
      if ( *(_BYTE *)(v98 + 24) > *(_BYTE *)(v28 + 40) )
      {
        v101 = *(_QWORD *)v98;
        if ( v100 )
        {
          if ( !v101 )
            goto LABEL_236;
          v101 ^= v98;
        }
        if ( !v101 )
          goto LABEL_236;
        goto LABEL_208;
      }
      v101 = *(_QWORD *)(v98 + 8);
      if ( v100 )
      {
        if ( !v101 )
          break;
        v101 ^= v98;
      }
      if ( !v101 )
        break;
LABEL_208:
      v98 = v101;
    }
    v99 = 1;
LABEL_236:
    RtlRbInsertNodeEx((PRTL_RB_TREE)(v46 + 5), (PRTL_BALANCED_NODE)v98, v99, (PRTL_BALANCED_NODE)(v28 + 16));
LABEL_237:
    v44 |= 0x20u;
LABEL_124:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v136);
    v63 = v129;
    if ( v129 )
    {
      v121 = *(void **)(v28 - 88LL * (*(_BYTE *)(v28 + 8) & 0x3F) - 16);
      if ( ObReferenceObjectSafeWithTag((__int64)v121, 0x746C6644u) )
      {
        if ( (v63 & 1) != 0 )
          IoBoostThreadIoPriority(v121, 2LL, 0x80000000LL);
        if ( (v63 & 2) != 0 )
          PsBoostThreadOutstandingIoQoS(v121);
        ObDereferenceObjectDeferDeleteWithTag(v121, 0x746C6644u);
      }
    }
LABEL_125:
    if ( (WORD2(xmmword_140FC5B10) & 0x1000) != 0 )
      EtwTraceAutoBoostProcessLockEntry(*(_QWORD *)(v28 - 88LL * (*(_BYTE *)(v28 + 8) & 0x3F) - 16), v131, v44);
    v26 = v124;
    v25 = v125;
    v24 = v123;
LABEL_128:
    v21 = v126;
LABEL_23:
    v13 = !_BitScanForward(&v23, v22);
    v11 = 0x8000000000000000uLL;
    v130 = v23;
    v10 = 0x7FFFFFFFFFFFFFFCLL;
  }
  while ( !v13 );
}
