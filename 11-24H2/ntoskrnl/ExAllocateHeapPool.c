/*
 * XREFs of ExAllocateHeapPool @ 0x140277790
 * Callers:
 *     ExpAllocatePoolWithTagFromNode @ 0x1402776D0 (ExpAllocatePoolWithTagFromNode.c)
 * Callees:
 *     ExpAddTagForBigPages @ 0x14021A4A0 (ExpAddTagForBigPages.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     RtlpHpAcquireQueuedLockExclusive @ 0x140336C60 (RtlpHpAcquireQueuedLockExclusive.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExFreeHeapPool @ 0x140359950 (ExFreeHeapPool.c)
 *     RtlpHpFreeHeap @ 0x14035B220 (RtlpHpFreeHeap.c)
 *     MmDeterminePoolType @ 0x14035B710 (MmDeterminePoolType.c)
 *     KasanPoolAllocate @ 0x14035CFE0 (KasanPoolAllocate.c)
 *     RtlpHpAllocateHeapBackend @ 0x14035DC90 (RtlpHpAllocateHeapBackend.c)
 *     RtlpHpSegAlloc @ 0x14035DCCC (RtlpHpSegAlloc.c)
 *     RtlpHpEnvCompactionSchedule @ 0x14035ED20 (RtlpHpEnvCompactionSchedule.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x14035EE00 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x140360750 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x1403628A0 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpHpVsContextAllocate @ 0x14036781C (RtlpHpVsContextAllocate.c)
 *     RtlpHpVsSlotAllocate @ 0x140367A10 (RtlpHpVsSlotAllocate.c)
 *     RtlpHpVsContextAllocateFinalize @ 0x140368524 (RtlpHpVsContextAllocateFinalize.c)
 *     ExpPlFindLimitEntry @ 0x140396E20 (ExpPlFindLimitEntry.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140396EF0 (ExpInsertPoolTrackerExpansion.c)
 *     ExpPoolTrackerChargeEntry @ 0x140397070 (ExpPoolTrackerChargeEntry.c)
 *     EtwTracePool @ 0x1403971E8 (EtwTracePool.c)
 *     ExpFreeHeapSpecialPool @ 0x140398994 (ExpFreeHeapSpecialPool.c)
 *     RtlpHpAllocateHeap @ 0x1403E93B0 (RtlpHpAllocateHeap.c)
 *     ExCheckSingleFilter @ 0x1403FBEF8 (ExCheckSingleFilter.c)
 *     RtlpHpLargeAlloc @ 0x1404585E4 (RtlpHpLargeAlloc.c)
 *     RtlpHpLfhSubsegmentPrefetch @ 0x1404A2CC0 (RtlpHpLfhSubsegmentPrefetch.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x1404E7284 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x1404F2F1C (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpLfhBucketCheckAndUpdate @ 0x1404F8530 (RtlpHpLfhBucketCheckAndUpdate.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     InterlockedPushListSList @ 0x1406B48E0 (InterlockedPushListSList.c)
 *     RtlHeapZero @ 0x1406B5ED0 (RtlHeapZero.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExpPoolFlagsToPoolType @ 0x140B76080 (ExpPoolFlagsToPoolType.c)
 */

__int64 __fastcall ExAllocateHeapPool(
        ULONG_PTR BugCheckParameter2,
        signed __int64 Size,
        ULONG_PTR BugCheckParameter4,
        unsigned int a4)
{
  PSLIST_ENTRY Heap; // r14
  ULONG_PTR v5; // r13
  ULONG_PTR v6; // r12
  __int64 v7; // r10
  int v8; // r8d
  unsigned int v9; // r15d
  ULONG_PTR v10; // rdx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rbx
  __int16 v13; // t0
  unsigned __int64 v14; // r11
  unsigned __int64 v15; // r8
  unsigned int v16; // esi
  unsigned __int64 v17; // rcx
  __int16 v18; // t0
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v20; // dl
  __int64 v21; // rax
  _BOOL8 v22; // rax
  __int64 v23; // r14
  char v24; // bl
  size_t v25; // rcx
  __int64 v26; // r12
  int v27; // edx
  unsigned int Number; // eax
  unsigned __int64 v29; // r12
  int v30; // r8d
  __int64 v31; // r10
  __int64 v32; // rdx
  unsigned __int64 v33; // r14
  __int64 v34; // r9
  int *v35; // rbx
  int v36; // eax
  int v37; // edx
  __int64 v38; // rcx
  __int64 v39; // r15
  __int64 LimitEntry; // rax
  int v41; // ebx
  __int64 result; // rax
  unsigned __int64 v43; // rbx
  unsigned __int64 v44; // r9
  char *v45; // rcx
  unsigned __int64 v46; // r10
  _BOOL8 v47; // rax
  unsigned __int64 v48; // r15
  unsigned __int64 v49; // r15
  unsigned __int64 HeapBackend; // rdi
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rcx
  __int64 v53; // r11
  unsigned __int64 v54; // r10
  unsigned int v55; // r8d
  __int64 v56; // rsi
  unsigned int v57; // ecx
  _QWORD *ExSaPageArray; // r9
  int v59; // edx
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rbx
  __int64 v63; // r8
  __int64 v64; // r8
  __int64 v65; // rax
  unsigned __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rax
  unsigned __int64 v69; // r11
  struct _KTHREAD *CurrentThread; // r9
  unsigned int v71; // r10d
  struct _LIST_ENTRY *Blink; // rcx
  unsigned __int64 v73; // rdx
  int v74; // ebx
  unsigned __int64 v75; // rdx
  char *v76; // r8
  _QWORD *v77; // rdx
  unsigned __int64 i; // rcx
  int v79; // edi
  int v82; // edx
  signed __int64 v84; // rbx
  signed __int64 v85; // rax
  struct _KTHREAD *v86; // r9
  unsigned __int64 v87; // r12
  struct _LIST_ENTRY *v88; // rcx
  unsigned __int64 v89; // r14
  unsigned __int64 v90; // rdx
  __int64 v91; // rdi
  char *v92; // r8
  unsigned __int64 v93; // rdx
  int v94; // r11d
  unsigned int v95; // esi
  _QWORD *v96; // rdi
  _QWORD *v97; // rdx
  unsigned __int64 v104; // rax
  unsigned int v105; // eax
  signed __int64 v107; // rax
  __int64 v108; // r8
  signed __int64 v109; // r9
  int v110; // eax
  unsigned int v111; // esi
  int v112; // edi
  __int64 v113; // r14
  __int64 v114; // rdi
  signed __int64 v115; // rax
  __int64 v116; // r14
  char v117; // dl
  unsigned __int64 v118; // rdx
  signed __int64 v119; // rtt
  __int64 v121; // r10
  signed __int64 v122; // rax
  __int64 v123; // r11
  char v124; // bl
  int v125; // edx
  unsigned int v126; // eax
  int v127; // r8d
  unsigned __int64 v128; // r12
  __int64 v129; // r10
  __int64 v130; // rdx
  unsigned __int64 v131; // r14
  __int64 v132; // r9
  int *v133; // rbx
  int v134; // eax
  int v135; // edx
  __int64 v136; // rcx
  __int64 v137; // r15
  __int64 v138; // rax
  int v139; // esi
  ULONG_PTR v140; // r10
  unsigned __int64 v141; // rax
  unsigned __int64 v142; // rsi
  __int64 v143; // rcx
  unsigned int v144; // eax
  __int64 v145; // rcx
  unsigned __int16 *v146; // rbx
  unsigned int v147; // r12d
  unsigned int v148; // eax
  unsigned int v149; // r12d
  _BYTE *v150; // rsi
  unsigned int v151; // r12d
  unsigned int v152; // r10d
  _BYTE *v153; // rdx
  __int64 v154; // rcx
  unsigned int v155; // r8d
  _BYTE *v156; // r13
  bool v157; // zf
  _SLIST_ENTRY *v158; // rbx
  unsigned int v159; // r15d
  __int64 v160; // rax
  _SLIST_ENTRY *Finalize; // rax
  char v162; // cl
  int v163; // edx
  unsigned int v164; // eax
  unsigned __int64 v165; // r15
  int v166; // r12d
  __int64 v167; // r9
  __int64 v168; // rdx
  unsigned __int64 v169; // rsi
  int v170; // r8d
  int *v171; // rbx
  int v172; // eax
  int v173; // edx
  __int64 v174; // rcx
  __int64 v175; // rax
  unsigned int v176; // ecx
  unsigned __int64 v177; // rdx
  __int64 v178; // rcx
  unsigned int v179; // [rsp+30h] [rbp-D0h]
  char v180; // [rsp+34h] [rbp-CCh] BYREF
  char v181; // [rsp+35h] [rbp-CBh] BYREF
  __int64 v182; // [rsp+38h] [rbp-C8h]
  size_t v183; // [rsp+40h] [rbp-C0h]
  char v184; // [rsp+48h] [rbp-B8h] BYREF
  char v185; // [rsp+49h] [rbp-B7h] BYREF
  char v186; // [rsp+4Ah] [rbp-B6h] BYREF
  char v187; // [rsp+4Bh] [rbp-B5h] BYREF
  char v188[4]; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int v189; // [rsp+50h] [rbp-B0h]
  __int64 v190; // [rsp+58h] [rbp-A8h]
  char *v191; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v192; // [rsp+68h] [rbp-98h]
  int v193; // [rsp+70h] [rbp-90h] BYREF
  int v194; // [rsp+74h] [rbp-8Ch] BYREF
  int v195; // [rsp+78h] [rbp-88h] BYREF
  int v196; // [rsp+7Ch] [rbp-84h] BYREF
  __int64 v197; // [rsp+80h] [rbp-80h]
  __int64 v198; // [rsp+88h] [rbp-78h]
  __int64 v199; // [rsp+90h] [rbp-70h]
  __int64 v200; // [rsp+98h] [rbp-68h]
  int v201; // [rsp+A0h] [rbp-60h]
  int v202; // [rsp+A4h] [rbp-5Ch]
  ULONG_PTR v203; // [rsp+A8h] [rbp-58h]
  __int128 v204; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v205; // [rsp+C0h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C8h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v207; // [rsp+E0h] [rbp-20h] BYREF
  struct _KLOCK_QUEUE_HANDLE v208; // [rsp+F8h] [rbp-8h] BYREF
  char v209; // [rsp+160h] [rbp+60h] BYREF
  signed __int64 v210; // [rsp+168h] [rbp+68h]
  unsigned int v211; // [rsp+170h] [rbp+70h]
  unsigned int v212; // [rsp+178h] [rbp+78h]

  v212 = a4;
  v211 = BugCheckParameter4;
  v210 = Size;
  Heap = 0LL;
  v5 = (unsigned int)BugCheckParameter4;
  v190 = 0LL;
  v195 = 0;
  v6 = Size;
  v203 = BugCheckParameter2 & 2;
  v187 = 0;
  v7 = 2LL;
  v186 = 0;
  v8 = 2;
  if ( (BugCheckParameter2 & 2) != 0 )
    v8 = 0;
  v9 = a4;
  v10 = BugCheckParameter2 & 0xFFFFFFFFFFFFFFF7uLL;
  v179 = v8;
  v11 = 0LL;
  if ( (BugCheckParameter2 & 0x408) != 0x408 )
    v10 = BugCheckParameter2;
  v191 = (char *)v10;
  v12 = v10;
  if ( (v10 & 0x140) == 0 )
  {
    v13 = *(_WORD *)&KeNumberProcessorsGroup0[9];
    v191 = (char *)v10;
    if ( (v13 & 0x400) != 0 )
    {
      v12 = v10 & 0xFFFFFFFFFFFFFF3FuLL | 0x40;
      v191 = (char *)v12;
    }
  }
  v14 = 0x140000000uLL;
  if ( v6 > 0xFE0 )
    goto LABEL_63;
  if ( (!MmSpecialPoolTag
     || !v6
     || !(unsigned int)ExCheckSingleFilter((unsigned int)v5, (unsigned int)MmSpecialPoolTag)
     && (v15 < v6 + 16 || v15 >= v6 + 32))
    && (v12 & 0x100000000LL) == 0 )
  {
    goto LABEL_62;
  }
  v16 = v12;
  v17 = v12 & 0x1C0;
  if ( v17 == 256 || (v18 = *(_WORD *)&KeNumberProcessorsGroup0[9], (v18 & 0x400) == 0) )
  {
    v20 = 1;
    CurrentIrql = KeGetCurrentIrql();
    if ( v17 == 256 )
      goto LABEL_20;
  }
  else
  {
    v16 = v12 & 0xFFFFFF3F | 0x40;
    CurrentIrql = KeGetCurrentIrql();
  }
  v20 = v7;
LABEL_20:
  if ( CurrentIrql > v20 )
    KeBugCheckEx(0xC1u, CurrentIrql, v16, v6, 0x30uLL);
  if ( (v16 & 0x10) != 0 )
  {
    v21 = qword_140EEEE58;
  }
  else
  {
    if ( (v16 & 0x100) != 0 )
      v22 = v7;
    else
      v22 = (v16 & 0x80u) == 0;
    v21 = *(_QWORD *)(v14 + 8 * v22 + 15658560);
  }
  v199 = v21;
  v23 = RtlpHpSegAlloc((int)v21 + 320, 4096, 4096, 4096, 4);
  if ( !v23 )
    goto LABEL_60;
  v24 = MEMORY[0xFFFFF78000000320];
  memset_0((void *)(v23 + 16), MEMORY[0xFFFFF78000000320] | 1, 0xFF0uLL);
  *(_QWORD *)(v23 + 8) = 0LL;
  *(_DWORD *)(v23 + 4) = v5;
  v25 = v6 - 8;
  if ( (v16 & 0x400) == 0 )
    v25 = v6;
  *(_DWORD *)v23 = v25;
  v183 = v25;
  *(_BYTE *)(v23 + 2) = v24 | 1;
  if ( (v16 & 0x400) != 0 )
    *(_DWORD *)v23 |= 0x4000u;
  v11 = (v23 - v25 + 4096) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (v16 & 2) == 0 )
    memset_0((void *)((v23 - v25 + 4096) & 0xFFFFFFFFFFFFFFF0uLL), 0, v25);
  v26 = MmDeterminePoolType(v23);
  v193 = 0;
  v192 = (v183 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  v209 = 0;
  v184 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (_DWORD)v5 == PoolHitTag )
    __debugbreak();
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0
    && (int)ExpPoolFlagsToPoolType(v26, v26 & 0x10, (unsigned int)&v193, (unsigned int)&v209, (__int64)&v184) >= 0 )
  {
    v27 = v193;
    if ( v209 )
    {
      v27 = v193 | 8;
      v193 |= 8u;
    }
    EtwTracePool(3616, v27, v5, v23, v192);
  }
  Number = KeGetPcr()->Prcb.Number;
  v29 = v26 & 0xFFFFFFFFFFFFFFFBuLL;
  v30 = PoolTrackTableMask;
  v31 = PoolTrackTableSize;
  v200 = PoolTrackTableMask;
  v198 = PoolTrackTableSize;
  v32 = (__int64)*(&ExPoolTagTables + Number);
  v182 = v32;
  v33 = (unsigned int)PoolTrackTableMask & ((40543 * (int)v5) ^ ((40543 * v5) >> 32));
  v34 = (unsigned int)v33;
  v189 = PoolTrackTableMask & ((40543 * v5) ^ ((40543 * v5) >> 32));
  v35 = (int *)(v32 + 80 * v33);
  v36 = *v35;
  if ( *v35 == (_DWORD)v5 )
  {
LABEL_54:
    v41 = ExpPoolTrackerChargeEntry((v29 & 0x100) == 0, v192, v35, v34);
    KasanPoolAllocate(v11 & 0xFFFFFFFFFFFFF000uLL);
    if ( v41 )
      goto LABEL_57;
    ExpFreeHeapSpecialPool(v199, v11);
    v6 = v210;
    Heap = 0LL;
    v11 = 0LL;
    goto LABEL_61;
  }
  while ( 1 )
  {
    if ( !v36 )
    {
      v37 = *(_DWORD *)(PoolTrackTable + 80LL * (unsigned int)v33);
      if ( v37 )
      {
        *v35 = v37;
        v32 = v182;
        v38 = *(_QWORD *)(PoolTrackTable + 80LL * (unsigned int)v33 + 72);
        if ( v38 )
          *((_QWORD *)v35 + 9) = v38;
        goto LABEL_52;
      }
      if ( (unsigned int)v33 != v31 - 1 )
      {
        KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
        v39 = PoolTrackTable;
        if ( !*(_DWORD *)(PoolTrackTable + 80LL * (unsigned int)v33) )
        {
          LimitEntry = ExpPlFindLimitEntry((unsigned int)v5);
          *(_QWORD *)(v39 + 80LL * (unsigned int)v33 + 72) = LimitEntry;
          *((_QWORD *)v35 + 9) = LimitEntry;
          *(_DWORD *)(PoolTrackTable + 80LL * (unsigned int)v33) = v5;
          *v35 = v5;
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        v30 = v200;
        v32 = v182;
        v34 = v189;
        v31 = v198;
        goto LABEL_52;
      }
      v32 = v182;
    }
    LODWORD(v33) = v30 & (v33 + 1);
    if ( (_DWORD)v33 == (_DWORD)v34 )
      break;
LABEL_52:
    v35 = (int *)(v32 + 80LL * (unsigned int)v33);
    v36 = *v35;
    if ( *v35 == (_DWORD)v5 )
    {
      v9 = v212;
      goto LABEL_54;
    }
  }
  ExpInsertPoolTrackerExpansion((unsigned int)v5, v192, v29);
  KasanPoolAllocate(v11 & 0xFFFFFFFFFFFFF000uLL);
  v9 = v212;
LABEL_57:
  if ( v11 )
  {
    _InterlockedIncrement(&ExpSpecialAllocations);
    return v11;
  }
  v6 = v210;
LABEL_60:
  Heap = 0LL;
LABEL_61:
  v14 = 0x140000000uLL;
  v7 = 2LL;
LABEL_62:
  v8 = v179;
LABEL_63:
  v43 = (unsigned __int16)v191 & 0xFFF;
  v44 = 1LL;
  v191 = (char *)v43;
  if ( v6 )
    v44 = v6;
  v200 = v44;
  if ( v9 == 0x80000000 )
    goto LABEL_68;
  if ( v9 >= (unsigned __int16)KeNumberNodes )
    KeBugCheckEx(0xC2u, 0xEuLL, v9, v43 & 0xFFFFFFFFFFFFFDFFuLL, v5);
  if ( v9 == 0x80000000 )
LABEL_68:
    v9 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  if ( v9 >= dword_140E6BE10 )
    v9 = 0;
  v45 = (char *)&unk_140E6BE40 + 8384 * v9;
  if ( (v43 & 0x10) != 0 )
  {
    v46 = *((_QWORD *)v45 + 3);
  }
  else
  {
    if ( (v43 & 0x100) != 0 )
      v47 = v7;
    else
      v47 = (v43 & 0x80u) == 0LL;
    v46 = *(_QWORD *)&v45[8 * v47];
  }
  v192 = v46;
  if ( v44 > 0xFE0 )
  {
    v48 = (v44 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
    v183 = v48;
    if ( (((_WORD)v44 + 15) & 0xFF0u) > 0xFC0 || v48 >= 0x10000 )
    {
      v48 = (v48 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      v183 = v48;
    }
    if ( v48 < v44 )
    {
      v49 = v192;
LABEL_229:
      if ( v11 )
        RtlpHpFreeHeap(v49, v11);
LABEL_169:
      v124 = (char)v191;
      result = v190;
LABEL_170:
      if ( (v124 & 0x20) != 0 )
        RtlRaiseStatus(-1073741670);
      return result;
    }
    if ( (v48 & 0xFFF) != 0 )
    {
      v179 = v8;
    }
    else if ( v48 <= *(unsigned int *)(v46 + 528) )
    {
      HeapBackend = RtlpHpAllocateHeapBackend(v46, v48, v48, ~(_BYTE)v43 & 2);
      goto LABEL_167;
    }
    v51 = *(unsigned __int16 *)(v46 + 900);
    v52 = 1LL;
    if ( v48 > 1 )
      v52 = v48;
    v198 = v52;
    if ( v52 >= v51 )
    {
LABEL_95:
      v64 = (unsigned int)v52;
      goto LABEL_96;
    }
    v53 = v46 + 832;
    v54 = *(unsigned int *)(v46 + 908);
    v55 = ((unsigned int)v54 >> 13) & 0x3FFFF;
    v182 = v53;
    v56 = (unsigned int)*((unsigned __int8 *)RtlpLfhBucketIndexMap + ((unsigned int)(v52 + 15) >> 4)) - 1;
    _BitScanReverse(&v57, v55);
    ExSaPageArray = KeGetCurrentPrcb()->ExSaPageArray;
    v59 = 1 << v57;
    v60 = v57 - 2;
    v201 = v60;
    v61 = *(_QWORD *)(*(_QWORD *)(ExSaPageArray[v60] + 8LL * (v55 ^ v59) + 8) + 8 * ((v54 >> 4) & 0x1FF));
    if ( !v61 )
    {
      v61 = RtlpHpLfhThreadDataInitializeSet(v53);
      v53 = v182;
    }
    v62 = v53 + ((unsigned __int16)v61 << 6);
    v210 = v61;
    v63 = *(unsigned __int16 *)(2 * v56 + v62);
    if ( !*(_WORD *)(2 * v56 + v62) )
    {
      if ( !RtlpHpLfhBucketCheckAndUpdate(v53, (unsigned int)v56, v63) )
      {
        v52 = v198;
        v46 = v192;
        goto LABEL_95;
      }
      v53 = v182;
      v66 = ((unsigned __int64)BYTE4(v210) << 8) + v182 + 1472;
      LODWORD(v63) = *(unsigned __int16 *)(v66 + 2 * v56);
      if ( v62 != v66 )
        *(_WORD *)(2 * v56 + v62) = *(_WORD *)(v66 + 2 * v56);
    }
    v67 = v53 + (unsigned int)((_DWORD)v63 << 6);
    v197 = v67;
    if ( *(_WORD *)(v67 + 4) )
    {
      v68 = *(_QWORD *)(v67 + 56);
      if ( (v68 & 0xFFF) == 0 )
        goto LABEL_102;
      v69 = v68 & 0xFFFFFFFFFFFFF000uLL;
      *(_QWORD *)(v67 + 56) = v68 - 1;
      CurrentThread = KeGetCurrentThread();
      v71 = *(unsigned __int8 *)((v68 & 0xFFFFFFFFFFFFF000uLL) + 0x18) - 8;
      Blink = CurrentThread[1].SchedulerApc.ApcListEntry.Blink;
      v73 = (unsigned __int64)CurrentThread[1].SchedulerApc.Reserved[0];
      LODWORD(v210) = qword_140E28348 ^ *(_DWORD *)((v68 & 0xFFFFFFFFFFFFF000uLL) + 0x28) ^ ((v68 & 0xFFFFFFFFFFFFF000uLL) >> 12);
      v74 = (unsigned __int16)v210;
      v76 = (char *)Blink + v73;
      v75 = (unsigned __int64)Blink ^ v73;
      LODWORD(v76) = (v68 & 0xFFFFF000) + 64;
      CurrentThread[1].SchedulerApc.Reserved[0] = (PVOID)__ROL8__(v75, 37);
      CurrentThread[1].SchedulerApc.ApcListEntry.Blink = (struct _LIST_ENTRY *)(v75 ^ (v75 << 16) ^ __ROL8__(Blink, 24));
      v77 = (_QWORD *)((v68 & 0xFFFFFFFFFFFFF000uLL)
                     + 8 * (*(unsigned __int8 *)((v68 & 0xFFFFFFFFFFFFF000uLL) + 0x24) + 8LL));
      for ( i = ~*v77; *v77 == -1LL; i = ~*v77 )
      {
        if ( v77 == (_QWORD *)((v68 & 0xFFFFFFFFFFFFF000uLL) + 8 * (v71 + 7LL)) )
          v77 = (_QWORD *)(v69 + 64);
        else
          ++v77;
      }
      v79 = WORD1(v210);
      _RAX = 1LL << ((unsigned __int16)(BYTE4(v76) * (unsigned __int16)__popcnt(i)) >> 8);
      __asm { pdep    rcx, rax, rcx }
      *v77 |= _RCX;
      v82 = (_DWORD)v77 - (_DWORD)v76;
      __asm { tzcnt   rax, rcx }
      *(_BYTE *)(v69 + 36) = (unsigned int)(_RAX + 8 * v82) >> 6;
      HeapBackend = v69 + (unsigned int)((_RAX + 8 * v82) * v74 + v79);
      if ( !v203 )
        RtlHeapZero(HeapBackend, (unsigned int)v48);
LABEL_160:
      v52 = v198;
      v64 = (unsigned int)v198;
      if ( HeapBackend == -1LL )
      {
        v46 = v192;
LABEL_96:
        if ( v52 > 0x20000 )
        {
          if ( v52 > *(unsigned int *)(v46 + 528) )
            v65 = RtlpHpLargeAlloc(v46, v48, v52, v179);
          else
            v65 = RtlpHpAllocateHeapBackend(v46, v48, v52, v179);
        }
        else
        {
          v65 = RtlpHpVsContextAllocate(v46 + 704, (unsigned int)v48, v64, v179);
        }
        HeapBackend = v65;
      }
      v43 = (unsigned __int64)v191;
LABEL_167:
      if ( !HeapBackend )
      {
        v190 = 0LL;
        goto LABEL_169;
      }
      if ( !(unsigned int)ExpAddTagForBigPages(HeapBackend, (unsigned int)v5, v48, (char *)v43, 0, 0) )
      {
        v190 = 0LL;
        RtlpHpFreeHeap(v192, HeapBackend);
        goto LABEL_169;
      }
      v194 = 0;
      v180 = 0;
      v185 = 0;
      memset(&v207, 0, sizeof(v207));
      if ( (_DWORD)v5 == PoolHitTag )
        __debugbreak();
      if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0
        && (int)ExpPoolFlagsToPoolType(v43, v43 & 0x10, (unsigned int)&v194, (unsigned int)&v180, (__int64)&v185) >= 0 )
      {
        v125 = v194;
        if ( v180 )
        {
          v125 = v194 | 8;
          v194 |= 8u;
        }
        EtwTracePool(3616, v125, v5, HeapBackend, v48);
      }
      v126 = KeGetPcr()->Prcb.Number;
      v127 = PoolTrackTableMask;
      v128 = v43 & 0xFFFFFFFFFFFFFFFBuLL;
      v129 = PoolTrackTableSize;
      v197 = PoolTrackTableMask;
      v198 = PoolTrackTableSize;
      v130 = (__int64)*(&ExPoolTagTables + v126);
      v182 = v130;
      v131 = (unsigned int)PoolTrackTableMask & ((40543 * (int)v5) ^ ((40543 * v5) >> 32));
      v132 = (unsigned int)v131;
      LODWORD(v210) = PoolTrackTableMask & ((40543 * v5) ^ ((40543 * v5) >> 32));
      v133 = (int *)(v130 + 80 * v131);
      v134 = *v133;
      if ( *v133 == (_DWORD)v5 )
      {
LABEL_194:
        v139 = ExpPoolTrackerChargeEntry((v128 & 0x100) == 0, v48, v133, v132);
        v124 = (char)v191;
        v140 = HeapBackend;
        goto LABEL_260;
      }
      while ( 2 )
      {
        if ( !v134 )
        {
          v135 = *(_DWORD *)(PoolTrackTable + 80LL * (unsigned int)v131);
          if ( v135 )
          {
            *v133 = v135;
            v130 = v182;
            v136 = *(_QWORD *)(PoolTrackTable + 80LL * (unsigned int)v131 + 72);
            if ( v136 )
              *((_QWORD *)v133 + 9) = v136;
            goto LABEL_192;
          }
          if ( (unsigned int)v131 != v129 - 1 )
          {
            KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &v207);
            v137 = PoolTrackTable;
            if ( !*(_DWORD *)(PoolTrackTable + 80LL * (unsigned int)v131) )
            {
              v138 = ExpPlFindLimitEntry((unsigned int)v5);
              *(_QWORD *)(v137 + 80LL * (unsigned int)v131 + 72) = v138;
              *((_QWORD *)v133 + 9) = v138;
              *(_DWORD *)(PoolTrackTable + 80LL * (unsigned int)v131) = v5;
              *v133 = v5;
            }
            KeReleaseInStackQueuedSpinLock(&v207);
            v127 = v197;
            v130 = v182;
            v132 = (unsigned int)v210;
            v129 = v198;
LABEL_192:
            v133 = (int *)(v130 + 80LL * (unsigned int)v131);
            v134 = *v133;
            if ( *v133 == (_DWORD)v5 )
            {
              v48 = v183;
              goto LABEL_194;
            }
            continue;
          }
          v130 = v182;
        }
        break;
      }
      LODWORD(v131) = v127 & (v131 + 1);
      if ( (_DWORD)v131 == (_DWORD)v132 )
      {
        ExpInsertPoolTrackerExpansion((unsigned int)v5, v183, v128);
        v124 = (char)v191;
        v140 = HeapBackend;
        v139 = 1;
        goto LABEL_260;
      }
      goto LABEL_192;
    }
    v189 = 0;
    _m_prefetchw((const void *)(v67 + 56));
    v84 = *(_QWORD *)(v67 + 56);
    if ( (v84 & 0xFFF) == 0 )
    {
LABEL_102:
      HeapBackend = RtlpHpLfhSlotAllocateSlow(v53);
      goto LABEL_160;
    }
    while ( 1 )
    {
      v85 = _InterlockedCompareExchange64((volatile signed __int64 *)(v67 + 56), v84 - 1, v84);
      if ( v84 == v85 )
        break;
      v189 = 1;
      v84 = v85;
      if ( (v85 & 0xFFF) == 0 )
        goto LABEL_102;
    }
    v86 = KeGetCurrentThread();
    v87 = v84 & 0xFFFFFFFFFFFFF000uLL;
    v88 = v86[1].SchedulerApc.ApcListEntry.Blink;
    v89 = (v84 & 0xFFFFFFFFFFFFF000uLL) + 64;
    v90 = (unsigned __int64)v86[1].SchedulerApc.Reserved[0];
    v91 = (unsigned int)*(unsigned __int8 *)((v84 & 0xFFFFFFFFFFFFF000uLL) + 0x18) - 8;
    LODWORD(v190) = qword_140E28348 ^ *(_DWORD *)((v84 & 0xFFFFFFFFFFFFF000uLL) + 0x28) ^ ((v84 & 0xFFFFFFFFFFFFF000uLL) >> 12);
    LODWORD(v199) = (unsigned __int16)v190;
    v92 = (char *)v88 + v90;
    v93 = (unsigned __int64)v88 ^ v90;
    v94 = BYTE4(v92);
    v86[1].SchedulerApc.Reserved[0] = (PVOID)__ROL8__(v93, 37);
    v86[1].SchedulerApc.ApcListEntry.Blink = (struct _LIST_ENTRY *)(v93 ^ (v93 << 16) ^ __ROL8__(v88, 24));
    v95 = *(unsigned __int8 *)((v84 & 0xFFFFFFFFFFFFF000uLL) + 0x32);
    LOBYTE(v210) = *(_BYTE *)((v84 & 0xFFFFFFFFFFFFF000uLL) + 0x27);
    v96 = (_QWORD *)(v89 + 8 * (v91 - 1));
    v97 = (_QWORD *)(v89 + 8LL * *(unsigned __int8 *)((v84 & 0xFFFFFFFFFFFFF000uLL) + 0x24));
LABEL_115:
    for ( _R8 = ~*v97; *v97 == -1LL; _R8 = ~*v97 )
    {
      if ( v97 == v96 )
        v97 = (_QWORD *)((v84 & 0xFFFFFFFFFFFFF000uLL) + 64);
      else
        ++v97;
    }
    while ( 1 )
    {
      if ( (qword_140E28368 & 4) != 0 )
      {
        _RAX = 1LL << ((unsigned __int16)(v94 * __popcnt(_R8)) >> 8);
        __asm
        {
          pdep    r9, rax, r8
          tzcnt   r10, r9
        }
      }
      else
      {
        if ( v97 == v96 || v95 != 64 )
        {
          __asm { tzcnt   rcx, r8 }
          _BitScanReverse64(&v104, _R8);
          v202 = v104;
          v105 = v104 - _RCX + 1;
          if ( v95 < v105 )
            v105 = v95;
          v94 = _RCX + ((v105 * v94) >> 8);
          _R8 = __ROR8__(_R8, v94);
          __asm { tzcnt   r10, r8 }
          LODWORD(_R10) = v94 + _R10;
        }
        else
        {
          _R8 = __ROR8__(_R8, v94);
          __asm { tzcnt   r10, r8 }
          LODWORD(_R10) = ((_BYTE)v94 + (_BYTE)_R10) & 0x3F;
        }
        _R9 = 1LL << _R10;
      }
      _m_prefetchw(v97);
      v107 = _InterlockedOr64(v97, _R9);
      v108 = v107;
      if ( (_R9 & v107) == 0 )
        break;
      _R8 = ~v107;
      if ( v107 == -1 )
      {
        if ( v97 == v96 )
          v97 = (_QWORD *)((v84 & 0xFFFFFFFFFFFFF000uLL) + 64);
        else
          ++v97;
        goto LABEL_115;
      }
    }
    v109 = (unsigned int)v199;
    v110 = WORD1(v190);
    v111 = _R10 + 8 * ((_DWORD)v97 - v89);
    v112 = v111 * v199;
    v113 = v111 >> 6;
    *(_BYTE *)((v84 & 0xFFFFFFFFFFFFF000uLL) + 0x24) = v113;
    v114 = (unsigned int)(v110 + v112);
    if ( (unsigned __int8)v210 <= 1u )
    {
      if ( v111 > *(unsigned __int16 *)((v84 & 0xFFFFFFFFFFFFF000uLL) + 0x30) )
        RtlpHpLfhSubsegmentPrefetch(v182, v84 & 0xFFFFFFFFFFFFF000uLL, (unsigned int)v114);
    }
    else if ( (int)RtlpHpLfhSubsegmentCommitBlock(v182, v84 & 0xFFFFFFFFFFFFF000uLL, (unsigned int)v114) < 0 )
    {
      v108 = 0LL;
      HeapBackend = 0LL;
      if ( v111 != -1 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v87 + 8 * v113 + 64), __ROL8__(-2LL, v111 & 0x3F));
LABEL_143:
        v115 = *(_QWORD *)((v84 & 0xFFFFFFFFFFFFF000uLL) + 0x10);
        v108 = 2LL;
        v116 = v182;
        do
        {
          v210 = v115;
          v117 = BYTE6(v115);
          v190 = v115;
          if ( BYTE6(v115) == 1 )
            v117 = 2;
          ++WORD1(v210);
          BYTE6(v210) = v117;
          v118 = (unsigned __int64)*(unsigned __int16 *)((v84 & 0xFFFFFFFFFFFFF000uLL) + 0x2C) << 6;
          v119 = v115;
          v115 = _InterlockedCompareExchange64((volatile signed __int64 *)(v87 + 16), v210, v115);
        }
        while ( v119 != v115 );
        if ( !*(_BYTE *)(v118 + v182 + 92) )
        {
          *(_BYTE *)(v118 + v182 + 92) = 1;
          if ( !(BYTE1(**(_QWORD **)(*(_QWORD *)v116 + 56LL)) == 1 ? ExpHpGCScheduledNonPaged : ExpHpGCScheduledPaged) )
            RtlpHpEnvCompactionSchedule(*(_QWORD *)(*(_QWORD *)v116 + 56LL), v118, 2LL);
        }
        if ( BYTE6(v190) == 1 )
        {
          v121 = v116 + (WORD2(v190) << 6);
          _m_prefetchw((const void *)(v121 + 8));
          v122 = *(_QWORD *)(v121 + 8);
          v123 = *(_DWORD *)((v84 & 0xFFFFFFFFFFFFF000uLL) + 0x18) & 0xFFF;
          *(_QWORD *)((v84 & 0xFFFFFFFFFFFFF000uLL) + 0x18) = (v122 - (v122 & 0xFFF)) | v123;
          v109 = _InterlockedCompareExchange64(
                   (volatile signed __int64 *)(v121 + 8),
                   v122 ^ (v84 ^ v122) & 0xFFFFFFFFFFFFF000uLL,
                   v122);
          if ( v122 != v109 )
          {
            do
            {
              v108 = v109;
              *(_QWORD *)((v84 & 0xFFFFFFFFFFFFF000uLL) + 0x18) = (v109 - (v109 & 0xFFF)) | v123;
              v109 = _InterlockedCompareExchange64(
                       (volatile signed __int64 *)(v121 + 8),
                       v109 ^ (v84 ^ v109) & 0xFFFFFFFFFFFFF000uLL,
                       v109);
            }
            while ( v109 != v108 );
          }
        }
        goto LABEL_158;
      }
LABEL_142:
      if ( !HeapBackend )
        goto LABEL_143;
      v116 = v182;
LABEL_158:
      if ( v189 )
        RtlpHpLfhBucketUpdateAffinityMapping(
          v116,
          v116 + ((unsigned __int64)*(unsigned __int16 *)(v197 + 2) << 6),
          v108,
          v109);
      goto LABEL_160;
    }
    HeapBackend = v87 + v114;
    if ( !v203 )
      RtlHeapZero(HeapBackend, (unsigned int)v48);
    goto LABEL_142;
  }
  v141 = v44 + 16;
  if ( (v43 & 8) != 0 )
  {
    v141 += (unsigned int)ExpCacheLineSize;
    if ( v141 > 0xFE0 )
    {
      v43 &= ~8uLL;
      v141 = v44 + 16;
      v191 = (char *)v43;
    }
  }
  v142 = (v141 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  v183 = v142;
  if ( v142 - 513 > 0xD7F )
    goto LABEL_224;
  v143 = *(unsigned __int8 *)(((unsigned int)v142 >> 4) + v14 + 84096);
  v142 = *(unsigned __int16 *)(v14 + 2 * v143 + 115328);
  v144 = v143 - 33;
  v145 = *(_QWORD *)(v46 + 56);
  v183 = v142;
  LODWORD(v190) = v144;
  v197 = v145;
  if ( !v145 )
    goto LABEL_224;
  v146 = (unsigned __int16 *)(v145 + ((v144 + 1LL) << 6));
  ++*((_DWORD *)v146 + 5);
  if ( !*v146 )
    goto LABEL_204;
  Heap = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(v145 + ((v144 + 1LL) << 6)));
  if ( !Heap )
  {
    v46 = v192;
LABEL_204:
    ++*((_DWORD *)v146 + 6);
    v147 = v146[8];
    v148 = *v146;
    if ( v148 < v147 )
    {
      v149 = (v147 - v148) >> 1;
      if ( v149 )
      {
        v150 = (_BYTE *)(v46 + 704);
        v151 = v149 + 1;
        v152 = (*(_BYTE *)(v46 + 708) & 1) + ((unsigned int)(v183 + 15) >> 4) + 1;
        v153 = &v150[64 * (unsigned __int64)*(unsigned __int16 *)v150];
        v154 = (unsigned __int8)(v150[2] & KeGetCurrentThread()[1].SchedulerApcFill3[45]);
        v155 = v152 << 16;
        v189 = v152;
        LODWORD(v210) = v152 << 16;
        v156 = &v150[64 * (unsigned __int64)*(unsigned __int16 *)&v153[4 * v154]];
        v205 = 0LL;
        v157 = (v150[5] & 1) == 0;
        v204 = 0LL;
        if ( v157 )
        {
          RtlpHpAcquireQueuedLockExclusive(v156 + 8, (unsigned __int8)v150[3], &v204);
          v155 = v210;
          v152 = v189;
        }
        v158 = 0LL;
        v159 = 0;
        if ( v151 )
        {
          while ( 1 )
          {
            v160 = RtlpHpVsSlotAllocate((_DWORD)v150, (_DWORD)v156, v152, v155, (__int64)&v204);
            if ( !v160 )
              break;
            Finalize = (_SLIST_ENTRY *)RtlpHpVsContextAllocateFinalize(v150, v160, (unsigned int)v183, 0LL);
            v155 = v210;
            v152 = v189;
            if ( !v158 )
              v158 = Finalize;
            ++v159;
            Finalize->Next = Heap;
            Heap = Finalize;
            if ( v159 >= v151 )
              goto LABEL_213;
          }
        }
        else
        {
LABEL_213:
          if ( (v150[5] & 1) == 0 )
            RtlpHpReleaseQueuedLockExclusive((unsigned __int8)v150[3], &v204);
        }
        if ( v159 )
        {
          if ( v159 != 1 )
            InterlockedPushListSList(
              (PSLIST_HEADER)(v197 + (((unsigned int)v190 + 1LL) << 6)),
              Heap->Next,
              v158,
              v159 - 1);
        }
        else
        {
          Heap = 0LL;
        }
        LODWORD(v5) = v211;
        v142 = v183;
      }
    }
  }
  LODWORD(v43) = (_DWORD)v191;
  if ( ((unsigned __int8)v191 & 2) != 0 )
  {
LABEL_223:
    if ( !Heap )
      goto LABEL_224;
    v49 = v192;
  }
  else
  {
    if ( Heap )
    {
      RtlHeapZero(&Heap[1], v142 - 16);
      goto LABEL_223;
    }
LABEL_224:
    v49 = v192;
    Heap = (PSLIST_ENTRY)RtlpHpAllocateHeap(v192, v142, v179);
    if ( !Heap )
    {
LABEL_228:
      v190 = 0LL;
      goto LABEL_229;
    }
  }
  v11 = (unsigned __int64)Heap;
  if ( (int)ExpPoolFlagsToPoolType(v43, v43 & 0x10, (unsigned int)&v195, (unsigned int)&v187, (__int64)&v186) < 0 )
    goto LABEL_228;
  v162 = v195;
  if ( (v43 & 1) != 0 )
  {
    v162 = v195 | 8;
    v195 |= 8u;
  }
  HIDWORD(Heap->Next) = v5;
  LOBYTE(Heap->Next) = 0;
  BYTE3(Heap->Next) = v162 & 0x6D | 2;
  BYTE2(Heap->Next) = v142 >> 4;
  v196 = 0;
  v181 = 0;
  v188[0] = 0;
  memset(&v208, 0, sizeof(v208));
  if ( (_DWORD)v5 == PoolHitTag )
    __debugbreak();
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0
    && (int)ExpPoolFlagsToPoolType(v43 & 0x3CD, 0, (unsigned int)&v196, (unsigned int)&v181, (__int64)v188) >= 0 )
  {
    v163 = v196;
    if ( v181 )
    {
      v163 = v196 | 8;
      v196 |= 8u;
    }
    EtwTracePool(3616, v163, v5, (_DWORD)Heap + 16, v142);
  }
  v164 = KeGetPcr()->Prcb.Number;
  v165 = v43 & 0x3C9;
  v166 = PoolTrackTableMask;
  v167 = PoolTrackTableSize;
  v197 = PoolTrackTableSize;
  v168 = (__int64)*(&ExPoolTagTables + v164);
  v182 = v168;
  v169 = (unsigned int)PoolTrackTableMask & ((40543 * (int)v5) ^ ((40543 * (unsigned __int64)(unsigned int)v5) >> 32));
  v170 = PoolTrackTableMask & ((40543 * v5) ^ ((40543 * (unsigned __int64)(unsigned int)v5) >> 32));
  LODWORD(v210) = v170;
  v171 = (int *)(v168 + 80 * v169);
  v172 = *v171;
  if ( *v171 == (_DWORD)v5 )
  {
LABEL_253:
    v139 = ExpPoolTrackerChargeEntry((v165 & 0x100) == 0, v183, v171, v167);
    goto LABEL_254;
  }
  while ( 2 )
  {
    if ( !v172 )
    {
      v173 = *(_DWORD *)(PoolTrackTable + 80LL * (unsigned int)v169);
      if ( v173 )
      {
        *v171 = v173;
        v168 = v182;
        v174 = *(_QWORD *)(PoolTrackTable + 80LL * (unsigned int)v169 + 72);
        if ( v174 )
          *((_QWORD *)v171 + 9) = v174;
LABEL_252:
        v171 = (int *)(v168 + 80LL * (unsigned int)v169);
        v172 = *v171;
        if ( *v171 == (_DWORD)v5 )
          goto LABEL_253;
        continue;
      }
      if ( (unsigned int)v169 != v167 - 1 )
      {
        KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &v208);
        v5 = PoolTrackTable;
        if ( *(_DWORD *)(PoolTrackTable + 80LL * (unsigned int)v169) )
        {
          LODWORD(v5) = v211;
        }
        else
        {
          v175 = ExpPlFindLimitEntry(v211);
          *(_QWORD *)(v5 + 80LL * (unsigned int)v169 + 72) = v175;
          LODWORD(v5) = v211;
          *((_QWORD *)v171 + 9) = v175;
          *(_DWORD *)(PoolTrackTable + 80LL * (unsigned int)v169) = v5;
          *v171 = v5;
        }
        KeReleaseInStackQueuedSpinLock(&v208);
        v168 = v182;
        v170 = v210;
        v167 = v197;
        goto LABEL_252;
      }
      v168 = v182;
    }
    break;
  }
  LODWORD(v169) = v166 & (v169 + 1);
  if ( (_DWORD)v169 != v170 )
    goto LABEL_252;
  ExpInsertPoolTrackerExpansion((unsigned int)v5, v183, v165);
  v139 = 1;
LABEL_254:
  v124 = (char)v191;
  v140 = (ULONG_PTR)Heap;
  if ( ((unsigned __int8)v191 & 8) != 0 )
  {
    BYTE3(Heap->Next) &= ~4u;
    v176 = (ExpCacheLineSize - 1) & (-16 - (_DWORD)Heap);
    if ( v176 )
    {
      v177 = (unsigned __int64)Heap + v176;
      v178 = (__int64)v176 >> 4;
      *(_BYTE *)v177 = v178;
      *(_BYTE *)(v177 + 2) = BYTE2(Heap->Next) - v178;
      *(_BYTE *)(v177 + 1) = BYTE1(Heap->Next);
      *(_BYTE *)(v177 + 3) = BYTE3(Heap->Next) | 4;
      *(_DWORD *)(v177 + 4) = HIDWORD(Heap->Next);
      if ( (unsigned __int8)*(_WORD *)v177 > 1u )
        Heap[1].Next = (_SLIST_ENTRY *)(ExpPoolQuotaCookie ^ v177);
      Heap = (PSLIST_ENTRY)v177;
    }
  }
  HeapBackend = (unsigned __int64)&Heap[1];
LABEL_260:
  KasanPoolAllocate(v140);
  if ( !v139 )
  {
    ExFreeHeapPool(HeapBackend);
    result = 0LL;
    goto LABEL_170;
  }
  result = HeapBackend;
  if ( !HeapBackend )
    goto LABEL_170;
  return result;
}
