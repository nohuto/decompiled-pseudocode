/*
 * XREFs of KiAbProcessThreadLocks @ 0x140280FD0
 * Callers:
 *     KiAbDeferredProcessingWorker @ 0x140283660 (KiAbDeferredProcessingWorker.c)
 *     KiAbPropagateBoosts @ 0x140285850 (KiAbPropagateBoosts.c)
 *     KiExecuteAllDpcs @ 0x1402858E0 (KiExecuteAllDpcs.c)
 *     KiAbProcessPreContextSwitch @ 0x1402A5600 (KiAbProcessPreContextSwitch.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x1402CBF00 (KiAbConvertWaiterToOwnerEntry.c)
 * Callees:
 *     PsGetIoPriorityThread @ 0x14022BEB0 (PsGetIoPriorityThread.c)
 *     PsBoostThreadOutstandingIoQoS @ 0x14022DE70 (PsBoostThreadOutstandingIoQoS.c)
 *     IoBoostThreadIoPriority @ 0x14022E320 (IoBoostThreadIoPriority.c)
 *     KiAbSetMinimumThreadPriority @ 0x14027EB30 (KiAbSetMinimumThreadPriority.c)
 *     KiAbIoBoostOwners @ 0x14027F070 (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x14027F900 (KiAbCpuBoostOwners.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x140280660 (KiAbEntryGetLockedHeadEntry.c)
 *     EtwTraceAutoBoostProcessLockEntry @ 0x140280F20 (EtwTraceAutoBoostProcessLockEntry.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x140282090 (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x140282120 (KiAbOwnerComputeCpuPriorityKey.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14028EF60 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 *     ObReferenceObjectSafeWithTag @ 0x14031DCB0 (ObReferenceObjectSafeWithTag.c)
 *     RtlRbInsertNodeEx @ 0x1403651C0 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x140365870 (RtlRbRemoveNode.c)
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
  __int64 v15; // rdx
  char v16; // si
  int v17; // r9d
  __int64 v18; // rcx
  __int64 v19; // r12
  __int64 v20; // rax
  _QWORD *v21; // r8
  unsigned int v22; // esi
  unsigned int v23; // ecx
  __int64 v24; // rdx
  int v25; // r15d
  int v26; // r9d
  __int64 v27; // rcx
  __int64 v28; // r14
  __int64 v29; // rax
  int v30; // ebx
  __int64 v31; // rax
  __int64 v32; // r8
  __int64 v33; // r15
  __int64 v34; // rdx
  int v35; // eax
  unsigned int v36; // eax
  char v37; // cl
  _RTL_RB_TREE *v38; // r15
  _RTL_BALANCED_NODE *Min; // rax
  unsigned __int64 Root; // rdx
  BOOLEAN v41; // r8
  int v42; // r9d
  _RTL_BALANCED_NODE *v43; // rax
  char v44; // al
  int v45; // ebx
  __int64 v46; // rax
  __int64 v47; // r8
  _QWORD *v48; // r12
  __int64 v49; // rdx
  int v50; // eax
  unsigned int v51; // eax
  char v52; // cl
  __int64 v53; // rax
  __int64 v54; // rdx
  BOOLEAN v55; // r8
  int v56; // r9d
  __int64 v57; // rax
  int v58; // ecx
  __int64 v59; // rax
  char v60; // dl
  int v61; // ecx
  __int64 v62; // rax
  char v63; // dl
  char v64; // r14
  char v65; // r15
  char v66; // al
  unsigned __int64 v67; // r14
  __int64 v68; // rax
  __int64 v69; // rdx
  BOOLEAN v70; // r8
  int v71; // r9d
  __int64 v72; // rax
  __int64 v73; // rax
  char v74; // r9
  char v75; // dl
  __int64 v76; // rcx
  _DWORD *v77; // r11
  int v78; // r10d
  unsigned int v79; // r10d
  unsigned __int8 CpuPriorityKey; // r14
  char v81; // r9
  char v82; // al
  __int64 v83; // rax
  __int64 v84; // r9
  BOOLEAN v85; // r8
  int v86; // r10d
  __int64 v87; // rdx
  __int64 v88; // rax
  __int64 v89; // rax
  char v90; // r9
  char v91; // dl
  __int64 v92; // rdx
  __int64 v93; // r8
  char v94; // al
  __int64 v95; // rax
  __int64 v96; // rdx
  BOOLEAN v97; // r8
  int v98; // r9d
  __int64 v99; // rax
  __int64 v100; // rdx
  __int64 v101; // r8
  char v102; // al
  __int64 v103; // rax
  __int64 v104; // rdx
  BOOLEAN v105; // r8
  int v106; // r9d
  __int64 v107; // rax
  unsigned int v108; // r10d
  unsigned __int8 v109; // r15
  char v110; // r9
  char v111; // al
  char v112; // r9
  char v113; // dl
  char v114; // al
  char v115; // r9
  char v116; // dl
  __int64 v117; // rcx
  _DWORD *v118; // r11
  int v119; // r10d
  int v120; // edx
  int v121; // edx
  char v122; // al
  char v123; // al
  char v124; // al
  char v125; // al
  KSPIN_LOCK *v126; // r15
  KSPIN_LOCK *v127; // r12
  int v128; // [rsp+30h] [rbp-61h] BYREF
  unsigned int v129; // [rsp+34h] [rbp-5Dh]
  int v130; // [rsp+38h] [rbp-59h]
  __int64 v131; // [rsp+40h] [rbp-51h]
  int v132; // [rsp+48h] [rbp-49h] BYREF
  int v133; // [rsp+4Ch] [rbp-45h]
  int v134; // [rsp+50h] [rbp-41h] BYREF
  unsigned int v135; // [rsp+54h] [rbp-3Dh]
  __int64 v136; // [rsp+58h] [rbp-39h]
  int v137; // [rsp+60h] [rbp-31h]
  int v138; // [rsp+64h] [rbp-2Dh]
  __int64 v139; // [rsp+68h] [rbp-29h]
  _QWORD *LockedHeadEntry; // [rsp+70h] [rbp-21h]
  __int128 v141; // [rsp+78h] [rbp-19h] BYREF
  __int64 v142; // [rsp+88h] [rbp-9h]
  __int128 v143; // [rsp+90h] [rbp-1h] BYREF
  __int64 v144; // [rsp+A0h] [rbp+Fh]
  __int64 v145; // [rsp+F0h] [rbp+5Fh] BYREF
  __int64 v146; // [rsp+100h] [rbp+6Fh]
  _QWORD *v147; // [rsp+108h] [rbp+77h]

  v147 = a4;
  v146 = a3;
  v145 = a1;
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
  v139 = *(_QWORD *)(v7 + 1136);
  v133 = v14;
  if ( !v13 )
  {
    v15 = a2 & 2;
    v16 = a2 & 1;
    v129 = a2 & 2;
    v17 = a2 & 4;
    v130 = v17;
    while ( 1 )
    {
      v12 = ((_DWORD)v12 - 1) & (unsigned int)v12;
      v18 = 88LL * (unsigned int)a1;
      v131 = v12;
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
              if ( (unsigned __int8)KiAbOwnerComputeCpuPriorityKey(v18 + v9 + 16, v15, v9) != *(_BYTE *)(v19 + 40) )
                goto LABEL_39;
LABEL_120:
              v15 = v129;
              v9 = v139;
              goto LABEL_12;
            }
            v124 = *(_BYTE *)(*(_QWORD *)(v18 + v9 - 88LL * (*(_BYTE *)(v18 + v9 + 16 + 8) & 0x3F)) + 195LL);
            if ( v124 > 30 )
              v124 = 30;
            if ( v124 == *(_BYTE *)(v19 + 40) )
              goto LABEL_12;
LABEL_39:
            v142 = 0LL;
            v128 = 0;
            v132 = 0;
            v30 = (a2 & 7) << 6;
            v31 = v10 & *(_QWORD *)v19;
            v136 = v31;
            v141 = 0LL;
            if ( v31 && *(char *)(v19 + 8) >= 0 )
              v136 = v11 | v31;
            LockedHeadEntry = KiAbEntryGetLockedHeadEntry(v19, a2 & 1, (__int64)&v141);
            v33 = (__int64)LockedHeadEntry;
            if ( !LockedHeadEntry )
            {
LABEL_117:
              if ( (WORD2(xmmword_140FC6B50) & 0x1000) != 0 )
                EtwTraceAutoBoostProcessLockEntry(
                  *(_QWORD *)(v19 - 88LL * (*(_BYTE *)(v19 + 8) & 0x3F) - 16),
                  v136,
                  v30);
              v17 = v130;
              v10 = 0x7FFFFFFFFFFFFFFCLL;
              v11 = 0x8000000000000000uLL;
              goto LABEL_120;
            }
            v34 = *(unsigned __int8 *)(v19 + 9);
            v30 |= (_BYTE)v34 != 0 ? 8 : 0;
            if ( !(_BYTE)v34 )
            {
              if ( v129 )
              {
                if ( (_QWORD *)v19 != LockedHeadEntry )
                {
                  v35 = *(_DWORD *)(v19 + 80);
                  v137 = 0;
                  v36 = v35 & 0x3FFFFFFF;
                  if ( v36 )
                  {
                    _BitScanReverse((unsigned int *)&v34, v36);
                    v137 = v120;
                    LOBYTE(v34) = v120 + 1;
                  }
                  v37 = *(_BYTE *)(*(_QWORD *)(v19 - 88LL * (*(_BYTE *)(v19 + 8) & 0x3F) - 16) + 563LL);
                  if ( v37 > (char)v34 )
                  {
                    LOBYTE(v34) = *(_BYTE *)(*(_QWORD *)(v19 - 88LL * (*(_BYTE *)(v19 + 8) & 0x3F) - 16) + 563LL);
                    if ( v37 > 30 )
                      LOBYTE(v34) = 30;
                  }
                  if ( *(_BYTE *)(v19 + 40) != (_BYTE)v34 )
                  {
                    *(_BYTE *)(v19 + 40) = v34;
                    v38 = (_RTL_RB_TREE *)(v33 + 40);
                    RtlRbRemoveNode(v38, (PRTL_BALANCED_NODE)(v19 + 16));
                    Min = v38->Min;
                    Root = (unsigned __int64)v38->Root;
                    if ( ((unsigned __int8)Min & 1) == 0 )
                      goto LABEL_53;
                    if ( Root )
                    {
                      Root ^= (unsigned __int64)v38;
LABEL_53:
                      v41 = 0;
                      v42 = (unsigned __int8)Min & 1;
                      if ( !Root )
                        goto LABEL_87;
                      while ( 1 )
                      {
                        if ( *(_BYTE *)(Root + 24) <= *(_BYTE *)(v19 + 40) )
                        {
                          v43 = *(_RTL_BALANCED_NODE **)(Root + 8);
                          if ( v42 )
                          {
                            if ( !v43 )
                              goto LABEL_86;
                            v43 = (_RTL_BALANCED_NODE *)(Root ^ (unsigned __int64)v43);
                          }
                          if ( !v43 )
                          {
LABEL_86:
                            v41 = 1;
                            goto LABEL_87;
                          }
                        }
                        else
                        {
                          v43 = *(_RTL_BALANCED_NODE **)Root;
                          if ( v42 )
                          {
                            if ( !v43 )
                              goto LABEL_87;
                            v43 = (_RTL_BALANCED_NODE *)(Root ^ (unsigned __int64)v43);
                          }
                          if ( !v43 )
                            goto LABEL_87;
                        }
                        Root = (unsigned __int64)v43;
                      }
                    }
                    v41 = 0;
LABEL_87:
                    RtlRbInsertNodeEx(v38, (PRTL_BALANCED_NODE)Root, v41, (PRTL_BALANCED_NODE)(v19 + 16));
                    v33 = (__int64)LockedHeadEntry;
                  }
                  v30 |= 0x10u;
                }
                v58 = *(_DWORD *)(v33 + 84);
                if ( (_BYTE)v58 )
                  BYTE1(v128) = 2;
                if ( (v58 & 0x7F00) != 0 )
                  BYTE2(v128) = 1;
                v59 = *(_QWORD *)(v33 + 64);
                if ( v59 )
                {
                  v60 = *(_BYTE *)(v59 + 24);
                  LOBYTE(v128) = v60;
                }
                else
                {
                  v60 = v128;
                }
                if ( *(_BYTE *)(v33 + 9) )
                {
                  v122 = *(_BYTE *)(*(_QWORD *)(v33 - 88LL * (*(_BYTE *)(v33 + 8) & 0x3F) - 16) + 195LL);
                  if ( v122 > 30 )
                    v122 = 30;
                  if ( v122 > v60 )
                    LOBYTE(v128) = v122;
                }
                if ( !v128 )
                {
                  KxReleaseQueuedSpinLock(&v141);
                  v30 |= 1u;
                  goto LABEL_117;
                }
                if ( (unsigned int)KiAbSetMinimumThreadPriority(v19, (char *)&v128, v146, v147, a5, &v132) && v19 != v33 )
                {
                  v94 = KiAbOwnerComputeCpuPriorityKey(v19, v92, v93);
                  if ( *(_BYTE *)(v19 + 40) != v94 )
                  {
                    *(_BYTE *)(v19 + 40) = v94;
                    RtlRbRemoveNode((PRTL_RB_TREE)(v33 + 40), (PRTL_BALANCED_NODE)(v19 + 16));
                    v95 = *(_QWORD *)(v33 + 48);
                    v96 = *(_QWORD *)(v33 + 40);
                    if ( (v95 & 1) == 0 )
                      goto LABEL_194;
                    if ( v96 )
                    {
                      v96 ^= v33 + 40;
LABEL_194:
                      v97 = 0;
                      v98 = v95 & 1;
                      if ( !v96 )
                        goto LABEL_220;
                      while ( 1 )
                      {
                        if ( *(_BYTE *)(v96 + 24) <= *(_BYTE *)(v19 + 40) )
                        {
                          v99 = *(_QWORD *)(v96 + 8);
                          if ( v98 )
                          {
                            if ( !v99 )
                              goto LABEL_219;
                            v99 ^= v96;
                          }
                          if ( !v99 )
                          {
LABEL_219:
                            v97 = 1;
                            goto LABEL_220;
                          }
                        }
                        else
                        {
                          v99 = *(_QWORD *)v96;
                          if ( v98 )
                          {
                            if ( !v99 )
                              goto LABEL_220;
                            v99 ^= v96;
                          }
                          if ( !v99 )
                            goto LABEL_220;
                        }
                        v96 = v99;
                      }
                    }
                    v97 = 0;
LABEL_220:
                    RtlRbInsertNodeEx(
                      (PRTL_RB_TREE)(v33 + 40),
                      (PRTL_BALANCED_NODE)v96,
                      v97,
                      (PRTL_BALANCED_NODE)(v19 + 16));
                  }
                  v30 |= 0x20u;
                }
              }
LABEL_115:
              KxReleaseQueuedSpinLock(&v141);
              v64 = v132;
              if ( v132 )
              {
                v126 = *(KSPIN_LOCK **)(v19 - 88LL * (*(_BYTE *)(v19 + 8) & 0x3F) - 16);
                if ( (unsigned __int8)ObReferenceObjectSafeWithTag(v126, 1953261124LL) )
                {
                  if ( (v64 & 1) != 0 )
                    IoBoostThreadIoPriority(v126, 2, 0x80000000);
                  if ( (v64 & 2) != 0 )
                    PsBoostThreadOutstandingIoQoS((__int64)v126);
                  ObDereferenceObjectDeferDeleteWithTag(v126, 0x746C6644u);
                }
              }
LABEL_116:
              LODWORD(v12) = v131;
              goto LABEL_117;
            }
            if ( !v130 )
              goto LABEL_115;
            if ( (_QWORD *)v19 != LockedHeadEntry )
            {
              v66 = *(_BYTE *)(*(_QWORD *)(v19 - 88LL * (*(_BYTE *)(v19 + 8) & 0x3F) - 16) + 195LL);
              if ( v66 > 30 )
                v66 = 30;
              if ( *(_BYTE *)(v19 + 40) != v66 )
              {
                v67 = (unsigned __int64)(LockedHeadEntry + 7);
                *(_BYTE *)(v19 + 40) = v66;
                RtlRbRemoveNode((PRTL_RB_TREE)(v33 + 56), (PRTL_BALANCED_NODE)(v19 + 16));
                v68 = *(_QWORD *)(v33 + 64);
                v69 = *(_QWORD *)(v33 + 56);
                if ( (v68 & 1) == 0 )
                  goto LABEL_134;
                if ( v69 )
                {
                  v69 ^= v67;
LABEL_134:
                  v70 = 0;
                  v71 = v68 & 1;
                  if ( !v69 )
                    goto LABEL_144;
                  while ( 1 )
                  {
                    if ( *(_BYTE *)(v69 + 24) >= *(_BYTE *)(v19 + 40) )
                    {
                      v72 = *(_QWORD *)(v69 + 8);
                      if ( v71 )
                      {
                        if ( !v72 )
                          goto LABEL_143;
                        v72 ^= v69;
                      }
                      if ( !v72 )
                      {
LABEL_143:
                        v70 = 1;
                        goto LABEL_144;
                      }
                    }
                    else
                    {
                      v72 = *(_QWORD *)v69;
                      if ( v71 )
                      {
                        if ( !v72 )
                          goto LABEL_144;
                        v72 ^= v69;
                      }
                      if ( !v72 )
                        goto LABEL_144;
                    }
                    v69 = v72;
                  }
                }
                v70 = 0;
LABEL_144:
                RtlRbInsertNodeEx(
                  (PRTL_RB_TREE)(v33 + 56),
                  (PRTL_BALANCED_NODE)v69,
                  v70,
                  (PRTL_BALANCED_NODE)(v19 + 16));
              }
              v30 |= 0x20u;
            }
            v73 = *(_QWORD *)(v33 + 48);
            if ( v73 )
              v74 = *(_BYTE *)(v73 + 24);
            else
              v74 = 30;
            v13 = *(_BYTE *)(v33 + 9) == 0;
            LOBYTE(v128) = v74;
            if ( v13 )
            {
              v111 = KiAbOwnerComputeCpuPriorityKey(v33, v34, v32);
              v113 = v112;
              if ( v111 < v112 )
                v113 = v111;
              LOBYTE(v128) = v113;
            }
            if ( *(_BYTE *)(v19 + 9) )
            {
              v75 = *(_BYTE *)(v19 + 11);
              if ( (v75 & 6) != 6 )
              {
                v76 = 88LL * (*(_BYTE *)(v19 + 8) & 0x3F);
                v77 = *(_DWORD **)(v19 - v76 - 16);
                if ( (v75 & 2) == 0 && ((int)PsGetIoPriorityThread(*(_QWORD *)(v19 - v76 - 16)) >= 2 || v77[376] != v78) )
                {
                  ++*(_BYTE *)(v33 + 84);
                  *(_BYTE *)(v19 + 11) |= 2u;
                }
                if ( (*(_BYTE *)(v19 + 11) & 4) == 0 && (!v77[378] || v77[377]) )
                {
                  *(_DWORD *)(v33 + 84) ^= ((unsigned __int16)*(_DWORD *)(v33 + 84) ^ (unsigned __int16)(*(_DWORD *)(v33 + 84) + 256)) & 0x7F00;
                  *(_BYTE *)(v19 + 11) |= 4u;
                }
              }
            }
            CpuPriorityKey = KiAbEntryGetCpuPriorityKey(v19);
            if ( v81 < (char)CpuPriorityKey )
            {
              if ( v79 )
                goto LABEL_113;
            }
            else
            {
              if ( !v79 )
              {
                KxReleaseQueuedSpinLock(&v141);
                v30 |= 2u;
                goto LABEL_116;
              }
LABEL_113:
              KiAbIoBoostOwners(v33, v79, v146, v147, a5);
            }
            KiAbCpuBoostOwners(v33, CpuPriorityKey, v146, v147, a5);
            goto LABEL_115;
          }
        }
        else
        {
          if ( *(_BYTE *)(v19 + 9) )
          {
            if ( !v17 )
              goto LABEL_12;
            goto LABEL_39;
          }
          if ( (_DWORD)v15 )
            goto LABEL_39;
        }
      }
      else if ( v16 )
      {
        goto LABEL_39;
      }
LABEL_12:
      v13 = !_BitScanForward((unsigned int *)&a1, v12);
      v133 = a1;
      if ( v13 )
      {
        v7 = v145;
        break;
      }
    }
  }
  v21 = *(_QWORD **)(v7 + 1144);
  LockedHeadEntry = v21;
  if ( !v21 )
    return;
  v22 = (*((unsigned __int16 *)v21 + 4) | *((unsigned __int16 *)v21 + 5)) ^ ((1LL << *((_BYTE *)v21 + 12)) - 1);
  v13 = !_BitScanForward(&v23, v22);
  v135 = v23;
  if ( v13 )
    return;
  v24 = a2 & 1;
  v25 = a2 & 2;
  v129 = a2 & 1;
  v26 = a2 & 4;
  LODWORD(v131) = v25;
  v130 = v26;
  do
  {
    v22 &= v22 - 1;
    v27 = 11LL * v23;
    v28 = (__int64)&v21[v27 + 2];
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
          v125 = *(_BYTE *)(v21[v27 + -11 * (v21[v27 + 3] & 0x3F)] + 195LL);
          if ( v125 > 30 )
            v125 = 30;
          if ( v125 == *(_BYTE *)(v28 + 40) )
            goto LABEL_23;
        }
        else
        {
          v44 = KiAbOwnerComputeCpuPriorityKey(&v21[v27 + 2], v24, v21);
          v24 = v129;
          if ( v44 == *(_BYTE *)(v28 + 40) )
            goto LABEL_23;
        }
      }
      else if ( *(_BYTE *)(v28 + 9) )
      {
        if ( !v26 )
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
    v144 = 0LL;
    LODWORD(v145) = 0;
    v134 = 0;
    v45 = (a2 & 7) << 6;
    v46 = v10 & *(_QWORD *)v28;
    v136 = v46;
    v143 = 0LL;
    if ( v46 && *(char *)(v28 + 8) >= 0 )
      v136 = v11 | v46;
    v48 = KiAbEntryGetLockedHeadEntry(v28, v24, (__int64)&v143);
    if ( !v48 )
      goto LABEL_125;
    v49 = *(unsigned __int8 *)(v28 + 9);
    v45 |= (_BYTE)v49 != 0 ? 8 : 0;
    if ( (_BYTE)v49 )
    {
      if ( !v130 )
        goto LABEL_124;
      if ( (_QWORD *)v28 != v48 )
      {
        v82 = *(_BYTE *)(*(_QWORD *)(v28 - 88LL * (*(_BYTE *)(v28 + 8) & 0x3F) - 16) + 195LL);
        if ( v82 > 30 )
          v82 = 30;
        if ( *(_BYTE *)(v28 + 40) != v82 )
        {
          *(_BYTE *)(v28 + 40) = v82;
          RtlRbRemoveNode((PRTL_RB_TREE)(v48 + 7), (PRTL_BALANCED_NODE)(v28 + 16));
          v83 = v48[8];
          if ( (v83 & 1) == 0 )
          {
            v84 = v48[7];
            goto LABEL_168;
          }
          v87 = v48[7];
          if ( v87 )
          {
            v84 = v87 ^ (unsigned __int64)(v48 + 7);
LABEL_168:
            v85 = 0;
            v86 = v83 & 1;
            v87 = v84;
            if ( !v84 )
              goto LABEL_178;
            while ( 1 )
            {
              if ( *(_BYTE *)(v87 + 24) >= *(_BYTE *)(v28 + 40) )
              {
                v88 = *(_QWORD *)(v87 + 8);
                if ( v86 )
                {
                  if ( !v88 )
                    goto LABEL_177;
                  v88 ^= v87;
                }
                if ( !v88 )
                {
LABEL_177:
                  v85 = 1;
                  goto LABEL_178;
                }
              }
              else
              {
                v88 = *(_QWORD *)v87;
                if ( v86 )
                {
                  if ( !v88 )
                    goto LABEL_178;
                  v88 ^= v87;
                }
                if ( !v88 )
                  goto LABEL_178;
              }
              v87 = v88;
            }
          }
          v85 = 0;
LABEL_178:
          RtlRbInsertNodeEx((PRTL_RB_TREE)(v48 + 7), (PRTL_BALANCED_NODE)v87, v85, (PRTL_BALANCED_NODE)(v28 + 16));
        }
        v45 |= 0x20u;
      }
      v89 = v48[6];
      if ( v89 )
        v90 = *(_BYTE *)(v89 + 24);
      else
        v90 = 30;
      v13 = *((_BYTE *)v48 + 9) == 0;
      LOBYTE(v145) = v90;
      if ( v13 )
      {
        v114 = KiAbOwnerComputeCpuPriorityKey(v48, v49, v47);
        v116 = v115;
        if ( v114 < v115 )
          v116 = v114;
        LOBYTE(v145) = v116;
      }
      if ( *(_BYTE *)(v28 + 9) )
      {
        v91 = *(_BYTE *)(v28 + 11);
        if ( (v91 & 6) != 6 )
        {
          v117 = 88LL * (*(_BYTE *)(v28 + 8) & 0x3F);
          v118 = *(_DWORD **)(v28 - v117 - 16);
          if ( (v91 & 2) == 0 && ((int)PsGetIoPriorityThread(*(_QWORD *)(v28 - v117 - 16)) >= 2 || v118[376] != v119) )
          {
            ++*((_BYTE *)v48 + 84);
            *(_BYTE *)(v28 + 11) |= 2u;
          }
          if ( (*(_BYTE *)(v28 + 11) & 4) == 0 && (!v118[378] || v118[377]) )
          {
            *((_DWORD *)v48 + 21) ^= ((unsigned __int16)*((_DWORD *)v48 + 21) ^ (unsigned __int16)(*((_DWORD *)v48 + 21)
                                                                                                 + 256)) & 0x7F00;
            *(_BYTE *)(v28 + 11) |= 4u;
          }
        }
      }
      v109 = KiAbEntryGetCpuPriorityKey(v28);
      if ( v110 < (char)v109 )
      {
        if ( !v108 )
        {
LABEL_123:
          KiAbCpuBoostOwners((__int64)v48, v109, v146, v147, a5);
          goto LABEL_124;
        }
      }
      else if ( !v108 )
      {
        KxReleaseQueuedSpinLock(&v143);
        v45 |= 2u;
        goto LABEL_125;
      }
      KiAbIoBoostOwners((__int64)v48, v108, v146, v147, a5);
      goto LABEL_123;
    }
    if ( !v25 )
      goto LABEL_124;
    if ( (_QWORD *)v28 != v48 )
    {
      v50 = *(_DWORD *)(v28 + 80);
      v138 = 0;
      v51 = v50 & 0x3FFFFFFF;
      if ( v51 )
      {
        _BitScanReverse((unsigned int *)&v49, v51);
        v138 = v121;
        LOBYTE(v49) = v121 + 1;
      }
      v52 = *(_BYTE *)(*(_QWORD *)(v28 - 88LL * (*(_BYTE *)(v28 + 8) & 0x3F) - 16) + 563LL);
      if ( v52 > (char)v49 )
      {
        LOBYTE(v49) = *(_BYTE *)(*(_QWORD *)(v28 - 88LL * (*(_BYTE *)(v28 + 8) & 0x3F) - 16) + 563LL);
        if ( v52 > 30 )
          LOBYTE(v49) = 30;
      }
      if ( *(_BYTE *)(v28 + 40) != (_BYTE)v49 )
      {
        *(_BYTE *)(v28 + 40) = v49;
        RtlRbRemoveNode((PRTL_RB_TREE)(v48 + 5), (PRTL_BALANCED_NODE)(v28 + 16));
        v53 = v48[6];
        v54 = v48[5];
        if ( (v53 & 1) == 0 )
          goto LABEL_77;
        if ( v54 )
        {
          v54 ^= (unsigned __int64)(v48 + 5);
LABEL_77:
          v55 = 0;
          v56 = v53 & 1;
          if ( !v54 )
            goto LABEL_101;
          while ( 1 )
          {
            if ( *(_BYTE *)(v54 + 24) <= *(_BYTE *)(v28 + 40) )
            {
              v57 = *(_QWORD *)(v54 + 8);
              if ( v56 )
              {
                if ( !v57 )
                  goto LABEL_100;
                v57 ^= v54;
              }
              if ( !v57 )
              {
LABEL_100:
                v55 = 1;
                goto LABEL_101;
              }
            }
            else
            {
              v57 = *(_QWORD *)v54;
              if ( v56 )
              {
                if ( !v57 )
                  goto LABEL_101;
                v57 ^= v54;
              }
              if ( !v57 )
                goto LABEL_101;
            }
            v54 = v57;
          }
        }
        v55 = 0;
LABEL_101:
        RtlRbInsertNodeEx((PRTL_RB_TREE)(v48 + 5), (PRTL_BALANCED_NODE)v54, v55, (PRTL_BALANCED_NODE)(v28 + 16));
      }
      v45 |= 0x10u;
    }
    v61 = *((_DWORD *)v48 + 21);
    if ( (_BYTE)v61 )
      BYTE1(v145) = 2;
    if ( (v61 & 0x7F00) != 0 )
      BYTE2(v145) = 1;
    v62 = v48[8];
    if ( v62 )
    {
      v63 = *(_BYTE *)(v62 + 24);
      LOBYTE(v145) = v63;
    }
    else
    {
      v63 = v145;
    }
    if ( *((_BYTE *)v48 + 9) )
    {
      v123 = *(_BYTE *)(v48[-11 * ((_BYTE)v48[1] & 0x3F) - 2] + 195LL);
      if ( v123 > 30 )
        v123 = 30;
      if ( v123 > v63 )
        LOBYTE(v145) = v123;
    }
    if ( !(_DWORD)v145 )
    {
      KxReleaseQueuedSpinLock(&v143);
      v45 |= 1u;
      goto LABEL_125;
    }
    if ( !(unsigned int)KiAbSetMinimumThreadPriority(v28, (char *)&v145, v146, v147, a5, &v134) || (_QWORD *)v28 == v48 )
      goto LABEL_124;
    v102 = KiAbOwnerComputeCpuPriorityKey(v28, v100, v101);
    if ( *(_BYTE *)(v28 + 40) == v102 )
      goto LABEL_226;
    *(_BYTE *)(v28 + 40) = v102;
    RtlRbRemoveNode((PRTL_RB_TREE)(v48 + 5), (PRTL_BALANCED_NODE)(v28 + 16));
    v103 = v48[6];
    v104 = v48[5];
    if ( (v103 & 1) != 0 )
    {
      if ( !v104 )
      {
        RtlRbInsertNodeEx((PRTL_RB_TREE)(v48 + 5), 0LL, 0, (PRTL_BALANCED_NODE)(v28 + 16));
        v45 |= 0x20u;
        goto LABEL_124;
      }
      v104 ^= (unsigned __int64)(v48 + 5);
    }
    v105 = 0;
    v106 = v103 & 1;
    if ( !v104 )
      goto LABEL_225;
    while ( 1 )
    {
      if ( *(_BYTE *)(v104 + 24) > *(_BYTE *)(v28 + 40) )
      {
        v107 = *(_QWORD *)v104;
        if ( v106 )
        {
          if ( !v107 )
            goto LABEL_225;
          v107 ^= v104;
        }
        if ( !v107 )
          goto LABEL_225;
        goto LABEL_211;
      }
      v107 = *(_QWORD *)(v104 + 8);
      if ( v106 )
      {
        if ( !v107 )
          break;
        v107 ^= v104;
      }
      if ( !v107 )
        break;
LABEL_211:
      v104 = v107;
    }
    v105 = 1;
LABEL_225:
    RtlRbInsertNodeEx((PRTL_RB_TREE)(v48 + 5), (PRTL_BALANCED_NODE)v104, v105, (PRTL_BALANCED_NODE)(v28 + 16));
LABEL_226:
    v45 |= 0x20u;
LABEL_124:
    KxReleaseQueuedSpinLock(&v143);
    v65 = v134;
    if ( v134 )
    {
      v127 = *(KSPIN_LOCK **)(v28 - 88LL * (*(_BYTE *)(v28 + 8) & 0x3F) - 16);
      if ( (unsigned __int8)ObReferenceObjectSafeWithTag(v127, 1953261124LL) )
      {
        if ( (v65 & 1) != 0 )
          IoBoostThreadIoPriority(v127, 2, 0x80000000);
        if ( (v65 & 2) != 0 )
          PsBoostThreadOutstandingIoQoS((__int64)v127);
        ObDereferenceObjectDeferDeleteWithTag(v127, 0x746C6644u);
      }
    }
LABEL_125:
    if ( (WORD2(xmmword_140FC6B50) & 0x1000) != 0 )
      EtwTraceAutoBoostProcessLockEntry(*(_QWORD *)(v28 - 88LL * (*(_BYTE *)(v28 + 8) & 0x3F) - 16), v136, v45);
    v24 = v129;
LABEL_23:
    v21 = LockedHeadEntry;
    v25 = v131;
    v11 = 0x8000000000000000uLL;
    v26 = v130;
    v10 = 0x7FFFFFFFFFFFFFFCLL;
    v13 = !_BitScanForward(&v23, v22);
    v135 = v23;
  }
  while ( !v13 );
}
