/*
 * XREFs of RtlRbRemoveNode @ 0x1402E2A20
 * Callers:
 *     KiSetClockInterval @ 0x14027614C (KiSetClockInterval.c)
 *     ExpUpdateTimerConfigurationWorker @ 0x140277560 (ExpUpdateTimerConfigurationWorker.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x14027E670 (KiAbConvertWaiterToOwnerEntry.c)
 *     KiAbEntryRemoveFromTree @ 0x14029D4A0 (KiAbEntryRemoveFromTree.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x1402E0A40 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpVsChunkFree @ 0x1402E1780 (RtlpHpVsChunkFree.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x1402E3830 (KiAbEntryUpdateOwnerTreePosition.c)
 *     RtlpHpSegFreeRangeRemove @ 0x1402E3940 (RtlpHpSegFreeRangeRemove.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x1402E39A0 (KiAbEntryUpdateWaiterTreePosition.c)
 *     RtlpHpVsChunkSplit @ 0x1402E3A80 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsFreeChunkRemove @ 0x1402E4990 (RtlpHpVsFreeChunkRemove.c)
 *     KiAbDeferredProcessingWorker @ 0x1402E4D00 (KiAbDeferredProcessingWorker.c)
 *     KiAbProcessThreadLocks @ 0x1402E8D40 (KiAbProcessThreadLocks.c)
 *     RtlpHpSegPageRangeAllocate @ 0x1402F8BBC (RtlpHpSegPageRangeAllocate.c)
 *     KiAbProcessPostContextSwitch @ 0x14031ECF0 (KiAbProcessPostContextSwitch.c)
 *     ?KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x140353968 (-KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 *     IoStopDiskIoAttributionForContext @ 0x14036D660 (IoStopDiskIoAttributionForContext.c)
 *     KiRemoveTimer2 @ 0x140372730 (KiRemoveTimer2.c)
 *     RtlpHpSegContextCompact @ 0x1403C7E20 (RtlpHpSegContextCompact.c)
 *     RtlpHpLargeFree @ 0x1403CB4FC (RtlpHpLargeFree.c)
 *     RtlpHpVaMgrAlloc @ 0x1403CBCE4 (RtlpHpVaMgrAlloc.c)
 *     RtlpHpVaMgrRangeCoalesce @ 0x1403CC730 (RtlpHpVaMgrRangeCoalesce.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x1403DA050 (MiInvalidatePageFileBitmapsCache.c)
 *     MiBitmapsCachedEntryLengthChanged @ 0x1403DA318 (MiBitmapsCachedEntryLengthChanged.c)
 *     MiCoalescePageFileBitmapsCache @ 0x1403DA600 (MiCoalescePageFileBitmapsCache.c)
 *     MiRescanPageFileBitmapPortion @ 0x1403DADC8 (MiRescanPageFileBitmapPortion.c)
 *     HalpPopCommonBufferEntry @ 0x1404117D4 (HalpPopCommonBufferEntry.c)
 *     VmpFaultEntryRemove @ 0x14042B5BC (VmpFaultEntryRemove.c)
 *     PfSnNameRemove @ 0x1404393D0 (PfSnNameRemove.c)
 *     MiRemoveSlabEntry @ 0x14045C66C (MiRemoveSlabEntry.c)
 *     VmpRemoveMemoryRange @ 0x14048258C (VmpRemoveMemoryRange.c)
 *     VmpMergeMemoryRanges @ 0x1404D0714 (VmpMergeMemoryRanges.c)
 *     KasanDriverUnloadImage @ 0x1405A6020 (KasanDriverUnloadImage.c)
 *     KiResetClockInterval @ 0x1405B66B0 (KiResetClockInterval.c)
 *     PspJobIoRateVolumeEntryRemove @ 0x1405D9A3C (PspJobIoRateVolumeEntryRemove.c)
 *     RtlRemovePointerMapping @ 0x1405DDF10 (RtlRemovePointerMapping.c)
 *     VmpRefDerefPinnedPages @ 0x14063F1F0 (VmpRefDerefPinnedPages.c)
 *     EtwpDeleteSessionDemuxObject @ 0x14079DBB0 (EtwpDeleteSessionDemuxObject.c)
 *     EtwpRegisterPrivateSession @ 0x14079E05C (EtwpRegisterPrivateSession.c)
 *     HvpViewMapShrinkStorage @ 0x1407CF774 (HvpViewMapShrinkStorage.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x14088274C (HvpViewMapPromoteRangeToMapping.c)
 *     EtwpSetProviderTraitsCommon @ 0x140896C34 (EtwpSetProviderTraitsCommon.c)
 *     PfProcessExitNotification @ 0x14091D314 (PfProcessExitNotification.c)
 *     EtwpReleaseProviderTraitsReference @ 0x140A01F80 (EtwpReleaseProviderTraitsReference.c)
 *     MiRemoveLargeFreeLoaderDescriptors @ 0x140C4088C (MiRemoveLargeFreeLoaderDescriptors.c)
 *     MiLimitLoaderBlockHighMemory @ 0x140C44B68 (MiLimitLoaderBlockHighMemory.c)
 *     MiLimitLoaderBlockTotalMemory @ 0x140C44D14 (MiLimitLoaderBlockTotalMemory.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlRbRemoveNode(PRTL_RB_TREE Tree, PRTL_BALANCED_NODE Node)
{
  PRTL_RB_TREE v3; // r11
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rdx
  _RTL_BALANCED_NODE *v10; // r12
  unsigned __int64 v11; // rdx
  _RTL_BALANCED_NODE *v12; // rdx
  _BOOL8 v13; // rbp
  _RTL_BALANCED_NODE *v14; // r8
  char v15; // dl
  _RTL_BALANCED_NODE *Min; // rcx
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rdx
  _RTL_BALANCED_NODE *v19; // rcx
  __int64 v20; // rdi
  unsigned __int64 v21; // rcx
  char v22; // si
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rax
  char v26; // di
  unsigned __int64 v27; // rax
  char v28; // cl
  _RTL_BALANCED_NODE *v29; // rcx
  unsigned __int64 v30; // rdi
  $7D93978C745EB1C2D28075BAF55422B4 v31; // dl
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rsi
  $424C8BBEF8F6C852886B4C6E806B5DB0 v34; // r8
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rdi
  unsigned __int64 Root; // rdi
  char v39; // r8
  $7D93978C745EB1C2D28075BAF55422B4 v40; // cl
  unsigned __int64 v41; // rdi
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rbx
  unsigned __int64 v44; // rax
  int v45; // r8d
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rcx
  $7D93978C745EB1C2D28075BAF55422B4 v48; // r8
  unsigned __int64 v49; // rcx
  char v50; // dl
  __int64 v51; // rax
  unsigned __int64 v52; // rax
  __int64 v53; // rcx
  unsigned __int64 v54; // rcx
  _QWORD *p_Root; // rax
  unsigned __int64 v56; // rcx
  __int64 v57; // rax
  char v58; // cl
  __int64 v59; // rax
  char v60; // al
  __int64 v61; // r10
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // r8
  unsigned __int64 v65; // rbx
  unsigned __int64 v66; // rax
  int v67; // r8d
  unsigned __int64 v68; // rcx
  unsigned __int64 v69; // rcx
  char v70; // cl
  __int64 v71; // rax
  __int64 v72; // rax
  unsigned __int64 v73; // rax
  unsigned __int64 v74; // r10
  __int64 v75; // rbx
  unsigned __int64 v76; // rax
  int v77; // r8d
  __int64 v78; // rcx
  unsigned __int64 v79; // rax
  unsigned __int64 v80; // rax
  unsigned __int64 v81; // rcx
  __int64 v82; // rcx
  unsigned __int64 v83; // rcx
  unsigned __int64 v84; // r8
  $7D93978C745EB1C2D28075BAF55422B4 v85; // r15
  PRTL_BALANCED_NODE v86; // rcx
  __int64 v87; // rsi
  unsigned __int64 v88; // rcx
  __int64 v89; // rax
  unsigned __int64 v90; // rax
  __int64 v91; // rcx
  __int64 v92; // r10
  unsigned __int64 v93; // rax
  unsigned __int64 v94; // rax
  __int64 v95; // rax
  unsigned __int64 v96; // rax
  __int64 v97; // rdi
  unsigned __int64 v98; // rax
  unsigned __int64 v99; // rax

  v3 = Tree;
  LOBYTE(Tree) = Tree->0;
  v4 = (unsigned __int64)Node->Children[0];
  if ( ((unsigned __int8)Tree & 1) != 0 && v4 )
  {
    v5 = (unsigned __int64)Node->Children[1];
    v4 ^= (unsigned __int64)Node;
  }
  else
  {
    v5 = (unsigned __int64)Node->Children[1];
    if ( ((unsigned __int8)Tree & 1) == 0 )
      goto LABEL_6;
  }
  if ( v5 )
    v5 ^= (unsigned __int64)Node;
LABEL_6:
  if ( !v4 )
  {
    v4 = v5;
    v6 = v5;
    goto LABEL_9;
  }
  v6 = v4;
  if ( v5 )
  {
    v18 = *(_QWORD *)v5;
    v10 = 0LL;
    v8 = v5;
    v7 = v5;
    LODWORD(v13) = 1;
    if ( *(_QWORD *)v5 )
    {
      LODWORD(v13) = 0;
      do
      {
        v7 = v8;
        if ( ((unsigned __int8)Tree & 1) != 0 && v18 )
          v8 ^= v18;
        else
          v8 = v18;
        v18 = *(_QWORD *)v8;
      }
      while ( *(_QWORD *)v8 );
    }
    if ( ((unsigned __int8)Tree & 1) != 0 )
      v19 = (_RTL_BALANCED_NODE *)(v4 ^ v8);
    else
      v19 = (_RTL_BALANCED_NODE *)v4;
    *(_QWORD *)v8 = v19;
    v20 = *(_QWORD *)(v4 + 16);
    v21 = v20 & 0xFFFFFFFFFFFFFFFCuLL;
    v22 = *(_BYTE *)&v3->0 & 1;
    if ( v22 && v21 )
      v21 ^= v4;
    if ( (PRTL_BALANCED_NODE)v21 != Node )
      goto LABEL_31;
    v23 = v8;
    if ( v22 )
      v23 = v4 ^ v8;
    *(_QWORD *)(v4 + 16) = v23 | v20 & 3;
    v24 = *(_QWORD *)(v5 + 16);
    v25 = v24 & 0xFFFFFFFFFFFFFFFCuLL;
    v26 = *(_BYTE *)&v3->0 & 1;
    if ( v26 && v25 )
      v25 ^= v5;
    if ( (PRTL_BALANCED_NODE)v25 != Node )
      goto LABEL_31;
    v27 = v8;
    if ( v26 )
      v27 = v5 ^ v8;
    *(_QWORD *)(v5 + 16) = v27 | v24 & 3;
    v4 = *(_QWORD *)(v8 + 8);
    v28 = *(_BYTE *)&v3->0 & 1;
    if ( v28 && v4 )
    {
      v4 ^= v8;
    }
    else if ( !v28 )
    {
      v29 = (_RTL_BALANCED_NODE *)v5;
      goto LABEL_56;
    }
    v29 = (_RTL_BALANCED_NODE *)(v5 ^ v8);
LABEL_56:
    v30 = *(_QWORD *)(v8 + 16);
    *(_QWORD *)(v8 + 8) = v29;
    v31 = v3->0;
    v32 = v30 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*(_BYTE *)&v31 & 1) != 0 && v32 )
      v33 = v8 ^ v32;
    else
      v33 = v30 & 0xFFFFFFFFFFFFFFFCuLL;
    v34 = ($424C8BBEF8F6C852886B4C6E806B5DB0)v30;
    if ( v33 == v7 )
      goto LABEL_60;
    v34 = ($424C8BBEF8F6C852886B4C6E806B5DB0)v30;
    if ( (*(_BYTE *)&v31 & 1) != 0 )
    {
      if ( !v32 )
      {
LABEL_258:
        if ( v8 != v7 )
          goto LABEL_31;
LABEL_60:
        v35 = Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
        if ( (*(_BYTE *)&v31 & 1) == 0 )
          goto LABEL_65;
        if ( v35 )
        {
          v35 ^= (unsigned __int64)Node;
        }
        else if ( (*(_BYTE *)&v31 & 1) == 0 )
        {
          goto LABEL_65;
        }
        if ( v35 )
          v35 ^= v8;
LABEL_65:
        v36 = v35 | *(_DWORD *)(v8 + 16) & 3;
        *(_QWORD *)(v8 + 16) = v36;
        *(_BYTE *)(v8 + 16) = v36 ^ (*(_BYTE *)&Node->0 ^ v36) & 1;
        v37 = Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v37 )
        {
          Tree = (PRTL_RB_TREE)v3->Min;
          Root = (unsigned __int64)v3->Root;
          if ( ((unsigned __int8)Tree & 1) != 0 && Root )
            Root ^= (unsigned __int64)v3;
          if ( (PRTL_BALANCED_NODE)Root != Node )
            goto LABEL_31;
          if ( ((unsigned __int8)Tree & 1) != 0 )
            v3->Root = (_RTL_BALANCED_NODE *)((unsigned __int64)v3 ^ v8);
          else
            v3->Root = (_RTL_BALANCED_NODE *)v8;
          goto LABEL_72;
        }
        v85 = v3->0;
        if ( (*(_BYTE *)&v85 & 1) != 0 )
        {
          v37 ^= (unsigned __int64)Node;
          v86 = *(PRTL_BALANCED_NODE *)(v37 + 8);
          if ( v86 )
          {
            v87 = 0LL;
            if ( (PRTL_BALANCED_NODE)((unsigned __int64)v86 ^ v37) == Node )
              v87 = 8LL;
            v88 = *(_QWORD *)(v37 + v87);
LABEL_240:
            if ( v88 )
              v88 ^= v37;
LABEL_242:
            if ( (PRTL_BALANCED_NODE)v88 != Node )
              goto LABEL_31;
            Tree = (PRTL_RB_TREE)v8;
            if ( (*(_BYTE *)&v85 & 1) != 0 )
              Tree = (PRTL_RB_TREE)(v8 ^ v37);
            *(_QWORD *)(v87 + v37) = Tree;
            LOBYTE(Tree) = v3->0;
            goto LABEL_72;
          }
        }
        else
        {
          v86 = *(PRTL_BALANCED_NODE *)(v37 + 8);
        }
        v87 = 0LL;
        if ( v86 == Node )
          v87 = 8LL;
        v88 = *(_QWORD *)(v87 + v37);
        if ( (*(_BYTE *)&v85 & 1) == 0 )
          goto LABEL_242;
        goto LABEL_240;
      }
      v32 ^= v8;
    }
    if ( v32 )
      goto LABEL_31;
    goto LABEL_258;
  }
LABEL_9:
  v7 = Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  if ( ((unsigned __int8)Tree & 1) != 0 && v7 )
    v7 ^= (unsigned __int64)Node;
  v8 = (unsigned __int64)Node;
  if ( !v7 )
  {
    v10 = 0LL;
    if ( v4 )
      *(_QWORD *)(v4 + 16) = 0LL;
    Min = v3->Min;
    v17 = (unsigned __int64)v3->Root;
    if ( ((unsigned __int8)Min & 1) != 0 && v17 )
      v17 ^= (unsigned __int64)v3;
    if ( (PRTL_BALANCED_NODE)v17 == Node )
    {
      if ( ((unsigned __int8)Min & 1) != 0 )
      {
        v84 = 0LL;
        if ( v4 )
          v84 = (unsigned __int64)v3 ^ v4;
        v3->Min = (_RTL_BALANCED_NODE *)v84;
        v48 = ($7D93978C745EB1C2D28075BAF55422B4)(v84 | 1);
        v3->0 = v48;
      }
      else
      {
        v3->Min = (_RTL_BALANCED_NODE *)v4;
        v48 = ($7D93978C745EB1C2D28075BAF55422B4)v4;
      }
      if ( (*(_BYTE *)&v48 & 1) != 0 )
      {
        if ( v4 )
          v10 = (_RTL_BALANCED_NODE *)((unsigned __int64)v3 ^ v4);
      }
      else
      {
        v10 = (_RTL_BALANCED_NODE *)v6;
      }
      goto LABEL_97;
    }
    goto LABEL_31;
  }
  v9 = *(_QWORD *)(v7 + 8);
  if ( ((unsigned __int8)Tree & 1) != 0 && v9 )
    v9 ^= v7;
  v10 = 0LL;
  if ( (PRTL_BALANCED_NODE)v9 == Node )
  {
    LODWORD(v13) = 1;
  }
  else
  {
    v11 = *(_QWORD *)v7;
    if ( ((unsigned __int8)Tree & 1) != 0 && v11 )
      v11 ^= v7;
    if ( (PRTL_BALANCED_NODE)v11 != Node )
      goto LABEL_31;
    v12 = v3->Min;
    LODWORD(v13) = 0;
    if ( ((unsigned __int8)v12 & 1) != 0 )
    {
      if ( v12 == (_RTL_BALANCED_NODE *)1 )
        v14 = 0LL;
      else
        v14 = (_RTL_BALANCED_NODE *)((unsigned __int64)v12 ^ ((unsigned __int64)v3 | 1));
    }
    else
    {
      v14 = v3->Min;
    }
    LOBYTE(Tree) = v3->Min;
    if ( v14 == Node )
    {
      v15 = (unsigned __int8)v12 & 1;
      if ( v4 )
      {
        if ( v15 )
        {
          v3->Min = (_RTL_BALANCED_NODE *)((unsigned __int64)v3 ^ v4);
          LOBYTE(Tree) = (unsigned __int8)v3 ^ v4 | 1;
          v3->0 = ($7D93978C745EB1C2D28075BAF55422B4)Tree;
        }
        else
        {
          v3->Min = (_RTL_BALANCED_NODE *)v4;
          LOBYTE(Tree) = v4;
        }
      }
      else if ( v15 )
      {
        v3->Min = (_RTL_BALANCED_NODE *)((unsigned __int64)v3 ^ v7);
        LOBYTE(Tree) = (unsigned __int8)v3 ^ v7 | 1;
        v3->0 = ($7D93978C745EB1C2D28075BAF55422B4)Tree;
      }
      else
      {
        v3->Min = (_RTL_BALANCED_NODE *)v7;
        LOBYTE(Tree) = v7;
      }
    }
  }
  v34 = Node->0;
LABEL_72:
  v39 = *(_BYTE *)&v34 & 1;
  if ( ((unsigned __int8)Tree & 1) != 0 && v4 )
  {
    *(_QWORD *)(v7 + 8 * v13) = v4 ^ v7;
    goto LABEL_100;
  }
  *(_QWORD *)(v7 + 8 * v13) = v4;
  if ( v4 )
  {
LABEL_100:
    v49 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    v50 = *(_BYTE *)&v3->0 & 1;
    if ( v50 && v49 )
      v49 ^= v4;
    if ( v49 == v8 )
    {
      if ( v50 && v7 )
        v7 ^= v4;
      *(_QWORD *)(v4 + 16) = v7;
      return v4;
    }
    goto LABEL_31;
  }
  if ( v39 )
    return v4;
  while ( 1 )
  {
    v40 = v3->0;
    v41 = v7;
    v42 = *(_QWORD *)(v7 + 8 * !v13);
    if ( (*(_BYTE *)&v40 & 1) != 0 && v42 )
      v42 ^= v7;
    if ( (*(_BYTE *)(v42 + 16) & 1) != 0 )
    {
      v43 = (unsigned __int64)v3->Root;
      if ( ((__int64)v3->Min & 1) != 0 && v43 )
        v43 ^= (unsigned __int64)v3;
      v44 = *(_QWORD *)(v42 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      v45 = (__int64)v3->Min & 1;
      if ( ((__int64)v3->Min & 1) != 0 && v44 )
        v44 ^= v42;
      if ( v44 != v7 )
        goto LABEL_31;
      v46 = *(_QWORD *)(v7 + 8 * !v13);
      if ( ((__int64)v3->Min & 1) != 0 && v46 )
        v46 ^= v7;
      if ( v46 != v42 )
        goto LABEL_31;
      v47 = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( ((__int64)v3->Min & 1) != 0 )
      {
        if ( !v47 )
          goto LABEL_91;
        v47 ^= v7;
      }
      if ( v47 )
      {
        v51 = *(_QWORD *)(v47 + 8);
        if ( ((__int64)v3->Min & 1) != 0 && v51 )
          v51 ^= v47;
        if ( v51 == v7 )
        {
          if ( ((__int64)v3->Min & 1) != 0 )
            v52 = v42 ^ v47;
          else
            v52 = v42;
          *(_QWORD *)(v47 + 8) = v52;
        }
        else
        {
          v72 = *(_QWORD *)v47;
          if ( ((__int64)v3->Min & 1) != 0 && v72 )
            v72 ^= v47;
          if ( v72 != v7 )
            goto LABEL_31;
          if ( ((__int64)v3->Min & 1) != 0 )
            v73 = v42 ^ v47;
          else
            v73 = v42;
          *(_QWORD *)v47 = v73;
        }
LABEL_122:
        if ( v45 && v47 )
          v47 ^= v42;
        *(_QWORD *)(v42 + 16) = v47 | *(_DWORD *)(v42 + 16) & 3;
        v53 = *(_QWORD *)(v42 + 8 * v13);
        if ( v45 )
        {
          if ( !v53 )
            goto LABEL_127;
          v53 ^= v42;
        }
        if ( v53 )
        {
          v61 = *(_QWORD *)(v53 + 16);
          v62 = v61 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v45 && v62 )
            v62 ^= v53;
          if ( v62 != v42 )
            goto LABEL_31;
          if ( v45 )
            v63 = v7 ^ v53;
          else
            v63 = v7;
          *(_QWORD *)(v53 + 16) = v63 | v61 & 3;
        }
LABEL_127:
        if ( v45 && v53 )
        {
          *(_QWORD *)(v7 + 8 * !v13) = v7 ^ v53;
        }
        else
        {
          *(_QWORD *)(v7 + 8 * !v13) = v53;
          if ( !v45 )
          {
            v54 = v42;
            *(_QWORD *)(v42 + 8 * v13) = v7;
            goto LABEL_131;
          }
        }
        *(_QWORD *)(v42 + 8 * v13) = v7 ^ v42;
        v54 = v7 ^ v42;
LABEL_131:
        *(_QWORD *)(v7 + 16) = v54 | *(_DWORD *)(v7 + 16) & 3;
        p_Root = &v3->Root;
        if ( (*(_BYTE *)&v3->0 & 1) != 0 )
        {
          v56 = 0LL;
          if ( v43 )
            v56 = v43 ^ (unsigned __int64)v3;
          p_Root = &v3->Root;
        }
        else
        {
          v56 = v43;
        }
        *p_Root = v56;
        *(_BYTE *)(v42 + 16) &= ~1u;
        *(_BYTE *)(v7 + 16) |= 1u;
        v40 = v3->0;
        v42 = *(_QWORD *)(v7 + 8 * !v13);
        if ( (*(_BYTE *)&v40 & 1) != 0 && v42 )
          v42 ^= v7;
        goto LABEL_136;
      }
LABEL_91:
      if ( v43 != v7 )
        goto LABEL_31;
      v43 = v42;
      goto LABEL_122;
    }
LABEL_136:
    v57 = *(_QWORD *)v42;
    v58 = *(_BYTE *)&v40 & 1;
    if ( *(_QWORD *)v42 )
    {
      if ( v58 )
        v57 ^= v42;
      if ( (*(_BYTE *)(v57 + 16) & 1) != 0 )
        break;
    }
    v59 = *(_QWORD *)(v42 + 8);
    if ( v59 )
    {
      if ( v58 )
        v59 ^= v42;
      if ( (*(_BYTE *)(v59 + 16) & 1) != 0 )
        break;
    }
    v60 = *(_BYTE *)(v7 + 16);
    if ( (v60 & 1) != 0 )
    {
      LOBYTE(v4) = v60 & 0xFE;
      *(_BYTE *)(v7 + 16) = v4;
      *(_BYTE *)(v42 + 16) |= 1u;
      return v4;
    }
    *(_BYTE *)(v42 + 16) |= 1u;
    v4 = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    v70 = *(_BYTE *)&v3->0 & 1;
    if ( v70 && v4 )
      v7 ^= v4;
    else
      v7 = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( !v7 )
      return v4;
    v71 = *(_QWORD *)(v7 + 8);
    if ( v70 && v71 )
      v71 ^= v7;
    v13 = v71 == v41;
  }
  v64 = *(_QWORD *)(v42 + 8 * !v13);
  if ( !v58 )
  {
LABEL_155:
    if ( !v64 || (*(_BYTE *)(v64 + 16) & 1) == 0 )
      goto LABEL_190;
    goto LABEL_157;
  }
  if ( v64 )
  {
    v64 ^= v42;
    goto LABEL_155;
  }
LABEL_190:
  v74 = *(_QWORD *)(v42 + 8 * v13);
  if ( v58 && v74 )
    v74 ^= v42;
  *(_BYTE *)(v74 + 16) &= ~1u;
  v75 = (unsigned int)v13 ^ 1;
  v76 = *(_QWORD *)(v74 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  v77 = *(_BYTE *)&v3->0 & 1;
  if ( (*(_BYTE *)&v3->0 & 1) != 0 && v76 )
    v76 ^= v74;
  if ( v76 != v42 )
    goto LABEL_31;
  v78 = *(_QWORD *)(v42 + 8 * v13);
  if ( (*(_BYTE *)&v3->0 & 1) != 0 && v78 )
    v78 ^= v42;
  if ( v78 != v74 )
    goto LABEL_31;
  v79 = *(_QWORD *)(v7 + 8 * v75);
  if ( (*(_BYTE *)&v3->0 & 1) != 0 && v79 )
    v79 ^= v7;
  if ( v79 != v42 )
    goto LABEL_31;
  v80 = *(_QWORD *)(v42 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (*(_BYTE *)&v3->0 & 1) != 0 && v80 )
    v80 ^= v42;
  if ( v80 != v7 )
    goto LABEL_31;
  if ( (*(_BYTE *)&v3->0 & 1) != 0 )
  {
    *(_QWORD *)(v7 + 8 * v75) = v7 ^ v74;
    if ( !v7 )
      goto LABEL_211;
    v81 = v7 ^ v74;
  }
  else
  {
    *(_QWORD *)(v7 + 8 * v75) = v74;
LABEL_211:
    v81 = v7;
  }
  *(_QWORD *)(v74 + 16) = v81 | *(_DWORD *)(v74 + 16) & 3;
  v82 = *(_QWORD *)(v74 + 8 * v75);
  if ( v77 )
  {
    if ( !v82 )
      goto LABEL_214;
    v82 ^= v74;
  }
  if ( !v82 )
    goto LABEL_214;
  v97 = *(_QWORD *)(v82 + 16);
  v98 = v97 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v77 && v98 )
    v98 ^= v82;
  if ( v98 != v74 )
    goto LABEL_31;
  v99 = v77 ? v42 ^ v82 : v42;
  *(_QWORD *)(v82 + 16) = v99 | v97 & 3;
LABEL_214:
  if ( v77 && v82 )
  {
    *(_QWORD *)(v42 + 8 * v13) = v42 ^ v82;
LABEL_217:
    *(_QWORD *)(v74 + 8 * v75) = v42 ^ v74;
    v83 = v42 ^ v74;
  }
  else
  {
    *(_QWORD *)(v42 + 8 * v13) = v82;
    if ( v77 )
      goto LABEL_217;
    *(_QWORD *)(v74 + 8 * v75) = v42;
    v83 = v74;
  }
  v64 = v42;
  *(_QWORD *)(v42 + 16) = v83 | *(_DWORD *)(v42 + 16) & 3;
  v42 = v74;
LABEL_157:
  *(_BYTE *)(v42 + 16) ^= (*(_BYTE *)(v7 + 16) ^ *(_BYTE *)(v42 + 16)) & 1;
  *(_BYTE *)(v7 + 16) &= ~1u;
  *(_BYTE *)(v64 + 16) &= ~1u;
  v65 = (unsigned __int64)v3->Root;
  if ( ((__int64)v3->Min & 1) != 0 && v65 )
    v65 ^= (unsigned __int64)v3;
  v66 = *(_QWORD *)(v42 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  v67 = (__int64)v3->Min & 1;
  if ( ((__int64)v3->Min & 1) != 0 && v66 )
    v66 ^= v42;
  if ( v66 != v7 )
    goto LABEL_31;
  v68 = *(_QWORD *)(v7 + 8 * !v13);
  if ( ((__int64)v3->Min & 1) != 0 && v68 )
    v68 ^= v7;
  if ( v68 != v42 )
    goto LABEL_31;
  v69 = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( ((__int64)v3->Min & 1) != 0 )
  {
    if ( !v69 )
      goto LABEL_168;
    v69 ^= v7;
  }
  if ( !v69 )
  {
LABEL_168:
    if ( v65 == v7 )
    {
      v65 = v42;
      goto LABEL_282;
    }
    goto LABEL_31;
  }
  v89 = *(_QWORD *)(v69 + 8);
  if ( ((__int64)v3->Min & 1) != 0 && v89 )
    v89 ^= v69;
  if ( v89 == v7 )
  {
    if ( ((__int64)v3->Min & 1) != 0 )
      v90 = v42 ^ v69;
    else
      v90 = v42;
    *(_QWORD *)(v69 + 8) = v90;
    goto LABEL_282;
  }
  v95 = *(_QWORD *)v69;
  if ( ((__int64)v3->Min & 1) != 0 && v95 )
    v95 ^= v69;
  if ( v95 != v7 )
    goto LABEL_31;
  if ( ((__int64)v3->Min & 1) != 0 )
    v96 = v42 ^ v69;
  else
    v96 = v42;
  *(_QWORD *)v69 = v96;
LABEL_282:
  if ( v67 && v69 )
    v69 ^= v42;
  *(_QWORD *)(v42 + 16) = v69 | *(_DWORD *)(v42 + 16) & 3;
  v91 = *(_QWORD *)(v42 + 8 * v13);
  if ( v67 )
  {
    if ( !v91 )
      goto LABEL_287;
    v91 ^= v42;
  }
  if ( !v91 )
    goto LABEL_287;
  v92 = *(_QWORD *)(v91 + 16);
  v93 = v92 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v67 && v93 )
    v93 ^= v91;
  if ( v93 != v42 )
LABEL_31:
    __fastfail(0x1Du);
  if ( v67 )
    v94 = v7 ^ v91;
  else
    v94 = v7;
  *(_QWORD *)(v91 + 16) = v94 | v92 & 3;
LABEL_287:
  if ( v67 && v91 )
  {
    *(_QWORD *)(v7 + 8 * !v13) = v7 ^ v91;
LABEL_290:
    *(_QWORD *)(v42 + 8 * v13) = v7 ^ v42;
    v42 ^= v7;
  }
  else
  {
    *(_QWORD *)(v7 + 8 * !v13) = v91;
    if ( v67 )
      goto LABEL_290;
    *(_QWORD *)(v42 + 8 * v13) = v7;
  }
  v4 = v42 | *(_DWORD *)(v7 + 16) & 3;
  *(_QWORD *)(v7 + 16) = v4;
  if ( (*(_BYTE *)&v3->0 & 1) != 0 )
  {
    LOBYTE(v4) = v65 ^ (unsigned __int8)v3;
    if ( v65 )
      v10 = (_RTL_BALANCED_NODE *)(v65 ^ (unsigned __int64)v3);
  }
  else
  {
    v10 = (_RTL_BALANCED_NODE *)v65;
  }
LABEL_97:
  v3->Root = v10;
  return v4;
}
