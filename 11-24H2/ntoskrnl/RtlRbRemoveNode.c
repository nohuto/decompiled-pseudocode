/*
 * XREFs of RtlRbRemoveNode @ 0x140365870
 * Callers:
 *     KiAbProcessThreadLocks @ 0x140280FD0 (KiAbProcessThreadLocks.c)
 *     KiAbDeferredProcessingWorker @ 0x140283660 (KiAbDeferredProcessingWorker.c)
 *     KiAbEntryRemoveFromTree @ 0x14028D4F0 (KiAbEntryRemoveFromTree.c)
 *     IoStopDiskIoAttributionForContext @ 0x1402BA89C (IoStopDiskIoAttributionForContext.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x1402CBF00 (KiAbConvertWaiterToOwnerEntry.c)
 *     ?KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x1402D89A8 (-KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 *     ExpUpdateTimerConfigurationWorker @ 0x140317740 (ExpUpdateTimerConfigurationWorker.c)
 *     KiAbProcessPostContextSwitch @ 0x140338DE0 (KiAbProcessPostContextSwitch.c)
 *     RtlpHpVsFreeChunkRemove @ 0x14035C9F8 (RtlpHpVsFreeChunkRemove.c)
 *     RtlpHpSegPageRangeAllocate @ 0x14035DE94 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegContextCompact @ 0x14035E4C0 (RtlpHpSegContextCompact.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x140360140 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpVsChunkFree @ 0x1403645D0 (RtlpHpVsChunkFree.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x1403665F0 (KiAbEntryUpdateOwnerTreePosition.c)
 *     RtlpHpSegFreeRangeRemove @ 0x140366700 (RtlpHpSegFreeRangeRemove.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x140366760 (KiAbEntryUpdateWaiterTreePosition.c)
 *     RtlpHpVsChunkSplit @ 0x140366900 (RtlpHpVsChunkSplit.c)
 *     HalpPopCommonBufferEntry @ 0x140397E84 (HalpPopCommonBufferEntry.c)
 *     VmpFaultEntryRemove @ 0x140399C30 (VmpFaultEntryRemove.c)
 *     KiRemoveTimer2 @ 0x1403B04C0 (KiRemoveTimer2.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x1403C4918 (MiInvalidatePageFileBitmapsCache.c)
 *     MiBitmapsCachedEntryLengthChanged @ 0x1403C4BF0 (MiBitmapsCachedEntryLengthChanged.c)
 *     MiCoalescePageFileBitmapsCache @ 0x1403C4F10 (MiCoalescePageFileBitmapsCache.c)
 *     MiRescanPageFileBitmapPortion @ 0x1403C56D8 (MiRescanPageFileBitmapPortion.c)
 *     PfSnNameRemove @ 0x14042A140 (PfSnNameRemove.c)
 *     MiRemoveSlabEntry @ 0x14043C298 (MiRemoveSlabEntry.c)
 *     RtlpHpLargeFree @ 0x140458F38 (RtlpHpLargeFree.c)
 *     RtlpHpVaMgrAlloc @ 0x1404596F4 (RtlpHpVaMgrAlloc.c)
 *     RtlpHpVaMgrRangeCoalesce @ 0x140459B48 (RtlpHpVaMgrRangeCoalesce.c)
 *     KiSetClockInterval @ 0x140463DB4 (KiSetClockInterval.c)
 *     VmpRemoveMemoryRange @ 0x140479B50 (VmpRemoveMemoryRange.c)
 *     VmpMergeMemoryRanges @ 0x1404C98A4 (VmpMergeMemoryRanges.c)
 *     KasanDriverUnloadImage @ 0x1405A6920 (KasanDriverUnloadImage.c)
 *     KiResetClockInterval @ 0x1405B7B04 (KiResetClockInterval.c)
 *     PspJobIoRateVolumeEntryRemove @ 0x1405E31AC (PspJobIoRateVolumeEntryRemove.c)
 *     RtlRemovePointerMapping @ 0x1405E75B0 (RtlRemovePointerMapping.c)
 *     VmpRefDerefPinnedPages @ 0x140649770 (VmpRefDerefPinnedPages.c)
 *     EtwpDeleteSessionDemuxObject @ 0x1407AD450 (EtwpDeleteSessionDemuxObject.c)
 *     EtwpRegisterPrivateSession @ 0x1407AD880 (EtwpRegisterPrivateSession.c)
 *     HvpViewMapShrinkStorage @ 0x1407DF59C (HvpViewMapShrinkStorage.c)
 *     EtwpReleaseProviderTraitsReference @ 0x140837CFC (EtwpReleaseProviderTraitsReference.c)
 *     PfProcessExitNotification @ 0x14094BDC4 (PfProcessExitNotification.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x14096AEDC (HvpViewMapPromoteRangeToMapping.c)
 *     EtwpSetProviderTraitsCommon @ 0x1409F69B4 (EtwpSetProviderTraitsCommon.c)
 *     MiRemoveLargeFreeLoaderDescriptors @ 0x140C53C4C (MiRemoveLargeFreeLoaderDescriptors.c)
 *     MiLimitLoaderBlockHighMemory @ 0x140C57FD8 (MiLimitLoaderBlockHighMemory.c)
 *     MiLimitLoaderBlockTotalMemory @ 0x140C58184 (MiLimitLoaderBlockTotalMemory.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlRbRemoveNode(PRTL_RB_TREE Tree, PRTL_BALANCED_NODE Node)
{
  PRTL_BALANCED_NODE v2; // r10
  _RTL_BALANCED_NODE *v4; // rax
  unsigned __int64 v5; // r8
  _RTL_BALANCED_NODE *v6; // rdi
  _RTL_BALANCED_NODE *v7; // r9
  _RTL_BALANCED_NODE *v8; // rbx
  unsigned __int64 v9; // rcx
  _RTL_BALANCED_NODE *v10; // r15
  unsigned __int64 v11; // rcx
  _RTL_BALANCED_NODE *v12; // rcx
  _BOOL8 v13; // rbp
  unsigned __int64 v14; // r8
  char v15; // cl
  _RTL_BALANCED_NODE *Min; // rcx
  unsigned __int64 v17; // rdx
  _RTL_BALANCED_NODE *v18; // rcx
  _RTL_BALANCED_NODE *v19; // rcx
  unsigned __int64 ParentValue; // rdi
  unsigned __int64 v21; // rcx
  char v22; // si
  unsigned __int64 v23; // rdx
  __int64 v24; // rdx
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
  _RTL_BALANCED_NODE *v41; // rdi
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rbx
  unsigned __int64 v44; // rax
  int v45; // r8d
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rcx
  $7D93978C745EB1C2D28075BAF55422B4 v48; // dl
  unsigned __int64 v49; // rcx
  char v50; // dl
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rcx
  unsigned __int64 v54; // rcx
  PRTL_RB_TREE v55; // rax
  unsigned __int64 v56; // rcx
  __int64 v57; // rax
  char v58; // cl
  __int64 v59; // rax
  $424C8BBEF8F6C852886B4C6E806B5DB0 v60; // al
  unsigned __int64 v61; // r10
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // r8
  unsigned __int64 v65; // rbx
  unsigned __int64 v66; // rax
  int v67; // r8d
  unsigned __int64 v68; // rcx
  unsigned __int64 v69; // rcx
  char v70; // cl
  unsigned __int64 v71; // rax
  unsigned __int64 v72; // rax
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
  unsigned __int64 v84; // rdx
  $7D93978C745EB1C2D28075BAF55422B4 v85; // r12
  unsigned __int64 v86; // rcx
  __int64 v87; // rsi
  unsigned __int64 v88; // rcx
  _RTL_BALANCED_NODE *v89; // rcx
  unsigned __int64 v90; // rax
  unsigned __int64 v91; // rax
  unsigned __int64 v92; // rcx
  unsigned __int64 v93; // r10
  unsigned __int64 v94; // rax
  unsigned __int64 v95; // rax
  unsigned __int64 v96; // rax
  unsigned __int64 v97; // rax
  __int64 v98; // rdi
  unsigned __int64 v99; // rax
  unsigned __int64 v100; // rax

  v2 = Node;
  LOBYTE(Node) = Tree->0;
  v4 = v2->Children[0];
  if ( ((unsigned __int8)Node & 1) != 0 && v4 )
  {
    v5 = (unsigned __int64)v2->Children[1];
    v4 = (_RTL_BALANCED_NODE *)((unsigned __int64)v2 ^ (unsigned __int64)v4);
  }
  else
  {
    v5 = (unsigned __int64)v2->Children[1];
    if ( ((unsigned __int8)Node & 1) == 0 )
      goto LABEL_6;
  }
  if ( v5 )
    v5 ^= (unsigned __int64)v2;
LABEL_6:
  if ( !v4 )
  {
    v4 = (_RTL_BALANCED_NODE *)v5;
    v6 = (_RTL_BALANCED_NODE *)v5;
    goto LABEL_9;
  }
  v6 = v4;
  if ( v5 )
  {
    v18 = *(_RTL_BALANCED_NODE **)v5;
    v10 = 0LL;
    v8 = (_RTL_BALANCED_NODE *)v5;
    v7 = (_RTL_BALANCED_NODE *)v5;
    LODWORD(v13) = 1;
    if ( *(_QWORD *)v5 )
    {
      LODWORD(v13) = 0;
      do
      {
        v7 = v8;
        if ( ((unsigned __int8)Node & 1) != 0 && v18 )
          v8 = (_RTL_BALANCED_NODE *)((unsigned __int64)v18 ^ (unsigned __int64)v8);
        else
          v8 = v18;
        v18 = v8->Children[0];
      }
      while ( v8->Children[0] );
    }
    if ( ((unsigned __int8)Node & 1) != 0 )
      v19 = (_RTL_BALANCED_NODE *)((unsigned __int64)v4 ^ (unsigned __int64)v8);
    else
      v19 = v4;
    v8->Children[0] = v19;
    ParentValue = v4->ParentValue;
    v21 = ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    v22 = *(_BYTE *)&Tree->0 & 1;
    if ( v22 && v21 )
      v21 ^= (unsigned __int64)v4;
    if ( (PRTL_BALANCED_NODE)v21 != v2 )
      goto LABEL_31;
    v23 = (unsigned __int64)v8;
    if ( v22 )
      v23 = (unsigned __int64)v4 ^ (unsigned __int64)v8;
    v4->ParentValue = v23 | ParentValue & 3;
    v24 = *(_QWORD *)(v5 + 16);
    v25 = v24 & 0xFFFFFFFFFFFFFFFCuLL;
    v26 = *(_BYTE *)&Tree->0 & 1;
    if ( v26 && v25 )
      v25 ^= v5;
    if ( (PRTL_BALANCED_NODE)v25 != v2 )
      goto LABEL_31;
    v27 = (unsigned __int64)v8;
    if ( v26 )
      v27 = v5 ^ (unsigned __int64)v8;
    *(_QWORD *)(v5 + 16) = v27 | v24 & 3;
    v4 = v8->Children[1];
    v28 = *(_BYTE *)&Tree->0 & 1;
    if ( v28 && v4 )
    {
      v4 = (_RTL_BALANCED_NODE *)((unsigned __int64)v8 ^ (unsigned __int64)v4);
    }
    else if ( !v28 )
    {
      v29 = (_RTL_BALANCED_NODE *)v5;
      goto LABEL_56;
    }
    v29 = (_RTL_BALANCED_NODE *)(v5 ^ (unsigned __int64)v8);
LABEL_56:
    v30 = v8->ParentValue;
    v8->Children[1] = v29;
    v31 = Tree->0;
    v32 = v30 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*(_BYTE *)&v31 & 1) != 0 && v32 )
      v33 = (unsigned __int64)v8 ^ v32;
    else
      v33 = v30 & 0xFFFFFFFFFFFFFFFCuLL;
    v34 = ($424C8BBEF8F6C852886B4C6E806B5DB0)v30;
    if ( (_RTL_BALANCED_NODE *)v33 == v7 )
      goto LABEL_60;
    v34 = ($424C8BBEF8F6C852886B4C6E806B5DB0)v30;
    if ( (*(_BYTE *)&v31 & 1) != 0 )
    {
      if ( !v32 )
      {
LABEL_245:
        if ( v8 != v7 )
          goto LABEL_31;
LABEL_60:
        v35 = v2->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
        if ( (*(_BYTE *)&v31 & 1) == 0 )
          goto LABEL_65;
        if ( v35 )
        {
          v35 ^= (unsigned __int64)v2;
        }
        else if ( (*(_BYTE *)&v31 & 1) == 0 )
        {
          goto LABEL_65;
        }
        if ( v35 )
          v35 ^= (unsigned __int64)v8;
LABEL_65:
        v36 = v35 | *(_DWORD *)&v8->0 & 3;
        v8->ParentValue = v36;
        v8->0 = ($424C8BBEF8F6C852886B4C6E806B5DB0)(v36 ^ (*(_BYTE *)&v2->0 ^ v36) & 1);
        v37 = v2->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v37 )
        {
          Node = Tree->Min;
          Root = (unsigned __int64)Tree->Root;
          if ( ((unsigned __int8)Node & 1) != 0 && Root )
            Root ^= (unsigned __int64)Tree;
          if ( (PRTL_BALANCED_NODE)Root != v2 )
            goto LABEL_31;
          if ( ((unsigned __int8)Node & 1) != 0 )
            Tree->Root = (_RTL_BALANCED_NODE *)((unsigned __int64)Tree ^ (unsigned __int64)v8);
          else
            Tree->Root = v8;
          goto LABEL_72;
        }
        v85 = Tree->0;
        if ( (*(_BYTE *)&v85 & 1) != 0 )
        {
          v37 ^= (unsigned __int64)v2;
          v86 = *(_QWORD *)(v37 + 8);
          if ( v86 )
          {
            v87 = 0LL;
            if ( (PRTL_BALANCED_NODE)(v86 ^ v37) == v2 )
              v87 = 8LL;
            v88 = *(_QWORD *)(v37 + v87);
LABEL_233:
            if ( v88 )
              v88 ^= v37;
LABEL_235:
            if ( (PRTL_BALANCED_NODE)v88 != v2 )
              goto LABEL_31;
            v89 = v8;
            if ( (*(_BYTE *)&v85 & 1) != 0 )
              v89 = (_RTL_BALANCED_NODE *)((unsigned __int64)v8 ^ v37);
            *(_QWORD *)(v87 + v37) = v89;
            LOBYTE(Node) = Tree->0;
            goto LABEL_72;
          }
        }
        else
        {
          v86 = *(_QWORD *)(v37 + 8);
        }
        v87 = 0LL;
        if ( (PRTL_BALANCED_NODE)v86 == v2 )
          v87 = 8LL;
        v88 = *(_QWORD *)(v87 + v37);
        if ( (*(_BYTE *)&v85 & 1) == 0 )
          goto LABEL_235;
        goto LABEL_233;
      }
      v32 ^= (unsigned __int64)v8;
    }
    if ( v32 )
      goto LABEL_31;
    goto LABEL_245;
  }
LABEL_9:
  v7 = (_RTL_BALANCED_NODE *)(v2->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
  if ( ((unsigned __int8)Node & 1) != 0 && v7 )
    v7 = (_RTL_BALANCED_NODE *)((unsigned __int64)v2 ^ (unsigned __int64)v7);
  v8 = v2;
  if ( !v7 )
  {
    v10 = 0LL;
    if ( v4 )
      v4->ParentValue = 0LL;
    Min = Tree->Min;
    v17 = (unsigned __int64)Tree->Root;
    if ( ((unsigned __int8)Min & 1) != 0 && v17 )
      v17 ^= (unsigned __int64)Tree;
    if ( (PRTL_BALANCED_NODE)v17 == v2 )
    {
      if ( ((unsigned __int8)Min & 1) != 0 )
      {
        v84 = 0LL;
        if ( v4 )
          v84 = (unsigned __int64)Tree ^ (unsigned __int64)v4;
        Tree->Min = (_RTL_BALANCED_NODE *)v84;
        v48 = ($7D93978C745EB1C2D28075BAF55422B4)(v84 | 1);
        Tree->0 = v48;
      }
      else
      {
        Tree->Min = v4;
        v48 = ($7D93978C745EB1C2D28075BAF55422B4)v4;
      }
      if ( (*(_BYTE *)&v48 & 1) != 0 )
      {
        if ( v4 )
          v10 = (_RTL_BALANCED_NODE *)((unsigned __int64)Tree ^ (unsigned __int64)v4);
      }
      else
      {
        v10 = v6;
      }
      goto LABEL_97;
    }
    goto LABEL_31;
  }
  v9 = (unsigned __int64)v7->Children[1];
  if ( ((unsigned __int8)Node & 1) != 0 && v9 )
    v9 ^= (unsigned __int64)v7;
  v10 = 0LL;
  if ( (PRTL_BALANCED_NODE)v9 == v2 )
  {
    LODWORD(v13) = 1;
  }
  else
  {
    v11 = (unsigned __int64)v7->Children[0];
    if ( ((unsigned __int8)Node & 1) != 0 && v11 )
      v11 ^= (unsigned __int64)v7;
    if ( (PRTL_BALANCED_NODE)v11 != v2 )
      goto LABEL_31;
    v12 = Tree->Min;
    LODWORD(v13) = 0;
    if ( ((unsigned __int8)v12 & 1) != 0 )
    {
      if ( v12 == (_RTL_BALANCED_NODE *)1 )
        v14 = 0LL;
      else
        v14 = (unsigned __int64)v12 ^ ((unsigned __int64)Tree | 1);
    }
    else
    {
      v14 = (unsigned __int64)Tree->Min;
    }
    LOBYTE(Node) = Tree->Min;
    if ( (PRTL_BALANCED_NODE)v14 == v2 )
    {
      v15 = (unsigned __int8)v12 & 1;
      if ( v4 )
      {
        if ( v15 )
        {
          Tree->Min = (_RTL_BALANCED_NODE *)((unsigned __int64)Tree ^ (unsigned __int64)v4);
          Tree->0 = ($7D93978C745EB1C2D28075BAF55422B4)((unsigned __int8)Tree ^ (unsigned __int8)v4 | 1);
          LOBYTE(Node) = (unsigned __int8)Tree ^ (unsigned __int8)v4 | 1;
        }
        else
        {
          Tree->Min = v4;
          LOBYTE(Node) = (_BYTE)v4;
        }
      }
      else if ( v15 )
      {
        Tree->Min = (_RTL_BALANCED_NODE *)((unsigned __int64)Tree ^ (unsigned __int64)v7);
        LOBYTE(Node) = (unsigned __int8)Tree ^ (unsigned __int8)v7 | 1;
        Tree->0 = ($7D93978C745EB1C2D28075BAF55422B4)Node;
      }
      else
      {
        Tree->Min = v7;
        LOBYTE(Node) = (_BYTE)v7;
      }
    }
  }
  v34 = v2->0;
LABEL_72:
  v39 = *(_BYTE *)&v34 & 1;
  if ( ((unsigned __int8)Node & 1) != 0 && v4 )
  {
    v7->Children[v13] = (_RTL_BALANCED_NODE *)((unsigned __int64)v4 ^ (unsigned __int64)v7);
    goto LABEL_99;
  }
  v7->Children[v13] = v4;
  if ( v4 )
  {
LABEL_99:
    v49 = v4->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    v50 = *(_BYTE *)&Tree->0 & 1;
    if ( v50 && v49 )
      v49 ^= (unsigned __int64)v4;
    if ( (_RTL_BALANCED_NODE *)v49 == v8 )
    {
      if ( v50 && v7 )
        v7 = (_RTL_BALANCED_NODE *)((unsigned __int64)v4 ^ (unsigned __int64)v7);
      v4->ParentValue = (unsigned __int64)v7;
      return (unsigned __int8)v4;
    }
    goto LABEL_31;
  }
  if ( v39 )
    return (unsigned __int8)v4;
  while ( 1 )
  {
    v40 = Tree->0;
    v41 = v7;
    v42 = (unsigned __int64)v7->Children[!v13];
    if ( (*(_BYTE *)&v40 & 1) != 0 && v42 )
      v42 ^= (unsigned __int64)v7;
    if ( (*(_BYTE *)(v42 + 16) & 1) != 0 )
    {
      v43 = (unsigned __int64)Tree->Root;
      if ( ((__int64)Tree->Min & 1) != 0 && v43 )
        v43 ^= (unsigned __int64)Tree;
      v44 = *(_QWORD *)(v42 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      v45 = (__int64)Tree->Min & 1;
      if ( ((__int64)Tree->Min & 1) != 0 && v44 )
        v44 ^= v42;
      if ( (_RTL_BALANCED_NODE *)v44 != v7 )
        goto LABEL_31;
      v46 = (unsigned __int64)v7->Children[!v13];
      if ( ((__int64)Tree->Min & 1) != 0 && v46 )
        v46 ^= (unsigned __int64)v7;
      if ( v46 != v42 )
        goto LABEL_31;
      v47 = v7->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( ((__int64)Tree->Min & 1) != 0 )
      {
        if ( !v47 )
          goto LABEL_91;
        v47 ^= (unsigned __int64)v7;
      }
      if ( v47 )
      {
        v51 = *(_QWORD *)(v47 + 8);
        if ( ((__int64)Tree->Min & 1) != 0 && v51 )
          v51 ^= v47;
        if ( (_RTL_BALANCED_NODE *)v51 == v7 )
        {
          if ( ((__int64)Tree->Min & 1) != 0 )
            v52 = v42 ^ v47;
          else
            v52 = v42;
          *(_QWORD *)(v47 + 8) = v52;
        }
        else
        {
          v72 = *(_QWORD *)v47;
          if ( ((__int64)Tree->Min & 1) != 0 && v72 )
            v72 ^= v47;
          if ( (_RTL_BALANCED_NODE *)v72 != v7 )
            goto LABEL_31;
          if ( ((__int64)Tree->Min & 1) != 0 )
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
            v63 = (unsigned __int64)v7 ^ v53;
          else
            v63 = (unsigned __int64)v7;
          *(_QWORD *)(v53 + 16) = v63 | v61 & 3;
        }
LABEL_127:
        if ( v45 && v53 )
        {
          v7->Children[!v13] = (_RTL_BALANCED_NODE *)((unsigned __int64)v7 ^ v53);
        }
        else
        {
          v7->Children[!v13] = (_RTL_BALANCED_NODE *)v53;
          if ( !v45 )
          {
            v54 = v42;
            *(_QWORD *)(v42 + 8 * v13) = v7;
            goto LABEL_131;
          }
        }
        *(_QWORD *)(v42 + 8 * v13) = (unsigned __int64)v7 ^ v42;
        v54 = (unsigned __int64)v7 ^ v42;
LABEL_131:
        v7->ParentValue = v54 | *(_DWORD *)&v7->0 & 3;
        v55 = Tree;
        if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
        {
          v56 = 0LL;
          if ( v43 )
            v56 = v43 ^ (unsigned __int64)Tree;
          v55 = Tree;
        }
        else
        {
          v56 = v43;
        }
        v55->Root = (_RTL_BALANCED_NODE *)v56;
        *(_BYTE *)(v42 + 16) &= ~1u;
        *(_BYTE *)&v7->0 |= 1u;
        v40 = Tree->0;
        v42 = (unsigned __int64)v7->Children[!v13];
        if ( (*(_BYTE *)&v40 & 1) != 0 && v42 )
          v42 ^= (unsigned __int64)v7;
        goto LABEL_136;
      }
LABEL_91:
      if ( (_RTL_BALANCED_NODE *)v43 != v7 )
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
    v60 = v7->0;
    if ( (*(_BYTE *)&v60 & 1) != 0 )
    {
      LOBYTE(v4) = *(_BYTE *)&v60 & 0xFE;
      v7->0 = ($424C8BBEF8F6C852886B4C6E806B5DB0)v4;
      *(_BYTE *)(v42 + 16) |= 1u;
      return (unsigned __int8)v4;
    }
    *(_BYTE *)(v42 + 16) |= 1u;
    v4 = (_RTL_BALANCED_NODE *)(v7->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
    v70 = *(_BYTE *)&Tree->0 & 1;
    if ( v70 && v4 )
      v7 = (_RTL_BALANCED_NODE *)((unsigned __int64)v4 ^ (unsigned __int64)v7);
    else
      v7 = (_RTL_BALANCED_NODE *)(v7->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
    if ( !v7 )
      return (unsigned __int8)v4;
    v71 = (unsigned __int64)v7->Children[1];
    if ( v70 && v71 )
      v71 ^= (unsigned __int64)v7;
    v13 = v71 == (_QWORD)v41;
  }
  v64 = *(_QWORD *)(v42 + 8 * !v13);
  if ( !v58 )
  {
LABEL_155:
    if ( !v64 || (*(_BYTE *)(v64 + 16) & 1) == 0 )
      goto LABEL_191;
    goto LABEL_157;
  }
  if ( v64 )
  {
    v64 ^= v42;
    goto LABEL_155;
  }
LABEL_191:
  v74 = *(_QWORD *)(v42 + 8 * v13);
  if ( v58 && v74 )
    v74 ^= v42;
  *(_BYTE *)(v74 + 16) &= ~1u;
  v75 = (unsigned int)v13 ^ 1;
  v76 = *(_QWORD *)(v74 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  v77 = *(_BYTE *)&Tree->0 & 1;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v76 )
    v76 ^= v74;
  if ( v76 != v42 )
    goto LABEL_31;
  v78 = *(_QWORD *)(v42 + 8 * v13);
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v78 )
    v78 ^= v42;
  if ( v78 != v74 )
    goto LABEL_31;
  v79 = (unsigned __int64)v7->Children[v75];
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v79 )
    v79 ^= (unsigned __int64)v7;
  if ( v79 != v42 )
    goto LABEL_31;
  v80 = *(_QWORD *)(v42 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v80 )
    v80 ^= v42;
  if ( (_RTL_BALANCED_NODE *)v80 != v7 )
    goto LABEL_31;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
  {
    v7->Children[v75] = (_RTL_BALANCED_NODE *)((unsigned __int64)v7 ^ v74);
    if ( !v7 )
      goto LABEL_212;
    v81 = (unsigned __int64)v7 ^ v74;
  }
  else
  {
    v7->Children[v75] = (_RTL_BALANCED_NODE *)v74;
LABEL_212:
    v81 = (unsigned __int64)v7;
  }
  *(_QWORD *)(v74 + 16) = v81 | *(_DWORD *)(v74 + 16) & 3;
  v82 = *(_QWORD *)(v74 + 8 * v75);
  if ( v77 )
  {
    if ( !v82 )
      goto LABEL_215;
    v82 ^= v74;
  }
  if ( !v82 )
    goto LABEL_215;
  v98 = *(_QWORD *)(v82 + 16);
  v99 = v98 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v77 && v99 )
    v99 ^= v82;
  if ( v99 != v74 )
    goto LABEL_31;
  v100 = v77 ? v42 ^ v82 : v42;
  *(_QWORD *)(v82 + 16) = v100 | v98 & 3;
LABEL_215:
  if ( v77 && v82 )
  {
    *(_QWORD *)(v42 + 8 * v13) = v42 ^ v82;
LABEL_218:
    *(_QWORD *)(v74 + 8 * v75) = v42 ^ v74;
    v83 = v42 ^ v74;
  }
  else
  {
    *(_QWORD *)(v42 + 8 * v13) = v82;
    if ( v77 )
      goto LABEL_218;
    *(_QWORD *)(v74 + 8 * v75) = v42;
    v83 = v74;
  }
  v64 = v42;
  *(_QWORD *)(v42 + 16) = v83 | *(_DWORD *)(v42 + 16) & 3;
  v42 = v74;
LABEL_157:
  *(_BYTE *)(v42 + 16) ^= (*(_BYTE *)&v7->0 ^ *(_BYTE *)(v42 + 16)) & 1;
  *(_BYTE *)&v7->0 &= ~1u;
  *(_BYTE *)(v64 + 16) &= ~1u;
  v65 = (unsigned __int64)Tree->Root;
  if ( ((__int64)Tree->Min & 1) != 0 && v65 )
    v65 ^= (unsigned __int64)Tree;
  v66 = *(_QWORD *)(v42 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  v67 = (__int64)Tree->Min & 1;
  if ( ((__int64)Tree->Min & 1) != 0 && v66 )
    v66 ^= v42;
  if ( (_RTL_BALANCED_NODE *)v66 != v7 )
    goto LABEL_31;
  v68 = (unsigned __int64)v7->Children[!v13];
  if ( ((__int64)Tree->Min & 1) != 0 && v68 )
    v68 ^= (unsigned __int64)v7;
  if ( v68 != v42 )
    goto LABEL_31;
  v69 = v7->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  if ( ((__int64)Tree->Min & 1) != 0 )
  {
    if ( !v69 )
      goto LABEL_168;
    v69 ^= (unsigned __int64)v7;
  }
  if ( !v69 )
  {
LABEL_168:
    if ( (_RTL_BALANCED_NODE *)v65 == v7 )
    {
      v65 = v42;
      goto LABEL_267;
    }
    goto LABEL_31;
  }
  v90 = *(_QWORD *)(v69 + 8);
  if ( ((__int64)Tree->Min & 1) != 0 && v90 )
    v90 ^= v69;
  if ( (_RTL_BALANCED_NODE *)v90 == v7 )
  {
    if ( ((__int64)Tree->Min & 1) != 0 )
      v91 = v42 ^ v69;
    else
      v91 = v42;
    *(_QWORD *)(v69 + 8) = v91;
    goto LABEL_267;
  }
  v96 = *(_QWORD *)v69;
  if ( ((__int64)Tree->Min & 1) != 0 && v96 )
    v96 ^= v69;
  if ( (_RTL_BALANCED_NODE *)v96 != v7 )
    goto LABEL_31;
  if ( ((__int64)Tree->Min & 1) != 0 )
    v97 = v42 ^ v69;
  else
    v97 = v42;
  *(_QWORD *)v69 = v97;
LABEL_267:
  if ( v67 && v69 )
    v69 ^= v42;
  *(_QWORD *)(v42 + 16) = v69 | *(_DWORD *)(v42 + 16) & 3;
  v92 = *(_QWORD *)(v42 + 8 * v13);
  if ( v67 )
  {
    if ( !v92 )
      goto LABEL_272;
    v92 ^= v42;
  }
  if ( !v92 )
    goto LABEL_272;
  v93 = *(_QWORD *)(v92 + 16);
  v94 = v93 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v67 && v94 )
    v94 ^= v92;
  if ( v94 != v42 )
LABEL_31:
    __fastfail(0x1Du);
  if ( v67 )
    v95 = (unsigned __int64)v7 ^ v92;
  else
    v95 = (unsigned __int64)v7;
  *(_QWORD *)(v92 + 16) = v95 | v93 & 3;
LABEL_272:
  if ( v67 && v92 )
  {
    v7->Children[!v13] = (_RTL_BALANCED_NODE *)((unsigned __int64)v7 ^ v92);
LABEL_275:
    *(_QWORD *)(v42 + 8 * v13) = (unsigned __int64)v7 ^ v42;
    v42 ^= (unsigned __int64)v7;
  }
  else
  {
    v7->Children[!v13] = (_RTL_BALANCED_NODE *)v92;
    if ( v67 )
      goto LABEL_275;
    *(_QWORD *)(v42 + 8 * v13) = v7;
  }
  v4 = (_RTL_BALANCED_NODE *)(v42 | *(_DWORD *)&v7->0 & 3);
  v7->ParentValue = (unsigned __int64)v4;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
  {
    LOBYTE(v4) = v65 ^ (unsigned __int8)Tree;
    if ( v65 )
      v10 = (_RTL_BALANCED_NODE *)(v65 ^ (unsigned __int64)Tree);
  }
  else
  {
    v10 = (_RTL_BALANCED_NODE *)v65;
  }
LABEL_97:
  Tree->Root = v10;
  return (unsigned __int8)v4;
}
