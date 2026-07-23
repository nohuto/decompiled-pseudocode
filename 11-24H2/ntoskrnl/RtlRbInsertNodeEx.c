/*
 * XREFs of RtlRbInsertNodeEx @ 0x1403651C0
 * Callers:
 *     MiInsertSlabEntry @ 0x14021E754 (MiInsertSlabEntry.c)
 *     PfSnGetFileInformation @ 0x14022B790 (PfSnGetFileInformation.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x140280660 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbProcessThreadLocks @ 0x140280FD0 (KiAbProcessThreadLocks.c)
 *     KiAbDeferredProcessingWorker @ 0x140283660 (KiAbDeferredProcessingWorker.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x1402CBF00 (KiAbConvertWaiterToOwnerEntry.c)
 *     ?KiInsertSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x1402D8870 (-KiInsertSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 *     ExpUpdateTimerConfigurationWorker @ 0x140317740 (ExpUpdateTimerConfigurationWorker.c)
 *     RtlpHpSegPageRangeShrink @ 0x140363BF0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpVsChunkFree @ 0x1403645D0 (RtlpHpVsChunkFree.c)
 *     RtlpHpSegFreeRangeInsert @ 0x140364FD0 (RtlpHpSegFreeRangeInsert.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x1403665F0 (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x140366760 (KiAbEntryUpdateWaiterTreePosition.c)
 *     RtlpHpVsChunkSplit @ 0x140366900 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsFreeChunkInsert @ 0x140367E64 (RtlpHpVsFreeChunkInsert.c)
 *     HalpAllocateCommonBufferEntry @ 0x140396510 (HalpAllocateCommonBufferEntry.c)
 *     VmpFaultEntryInsert @ 0x140399AE0 (VmpFaultEntryInsert.c)
 *     VmpSplitMemoryRange @ 0x140399CE8 (VmpSplitMemoryRange.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x1403B11E0 (KiInsertTimer2WithCollectionLockHeld.c)
 *     MiInitializePagefileBitmapsCache @ 0x1403C3CC0 (MiInitializePagefileBitmapsCache.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x1403C4918 (MiInvalidatePageFileBitmapsCache.c)
 *     MiBitmapsCachedEntryLengthChanged @ 0x1403C4BF0 (MiBitmapsCachedEntryLengthChanged.c)
 *     MiCoalescePageFileBitmapsCache @ 0x1403C4F10 (MiCoalescePageFileBitmapsCache.c)
 *     MiRescanPageFileBitmapPortion @ 0x1403C56D8 (MiRescanPageFileBitmapPortion.c)
 *     IoStartDiskIoAttributionForContext @ 0x14045825C (IoStartDiskIoAttributionForContext.c)
 *     RtlpHpLargeAlloc @ 0x1404585E4 (RtlpHpLargeAlloc.c)
 *     RtlpHpVaMgrFree @ 0x140459AA8 (RtlpHpVaMgrFree.c)
 *     KiSetClockInterval @ 0x140463DB4 (KiSetClockInterval.c)
 *     KasanDriverLoadImageInternal @ 0x1404B24C0 (KasanDriverLoadImageInternal.c)
 *     PspJobIoRateVolumeEntryInsert @ 0x1405E3008 (PspJobIoRateVolumeEntryInsert.c)
 *     RtlCompareExchangePointerMapping @ 0x1405E70D0 (RtlCompareExchangePointerMapping.c)
 *     VmpInsertMemoryRange @ 0x140648FA0 (VmpInsertMemoryRange.c)
 *     VmpUpdatePinRangesForFirstPin @ 0x140649D5C (VmpUpdatePinRangesForFirstPin.c)
 *     MiInsertPageFileMemoryExtents @ 0x14068F918 (MiInsertPageFileMemoryExtents.c)
 *     KiGetSystemServiceTraceTable @ 0x14073B234 (KiGetSystemServiceTraceTable.c)
 *     PfSnSetAltPrefetchParam @ 0x140745A74 (PfSnSetAltPrefetchParam.c)
 *     EtwpRegisterPrivateSession @ 0x1407AD880 (EtwpRegisterPrivateSession.c)
 *     MiCreatePagefileMemoryExtents @ 0x1407FE5FC (MiCreatePagefileMemoryExtents.c)
 *     HvpViewMapCreateViewsForRegion @ 0x140967F8C (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x14096AEDC (HvpViewMapPromoteRangeToMapping.c)
 *     EtwpSetProviderTraitsCommon @ 0x1409F69B4 (EtwpSetProviderTraitsCommon.c)
 *     MiConstructLoaderMemoryTree @ 0x140C50F58 (MiConstructLoaderMemoryTree.c)
 *     MiRemoveLargeFreeLoaderDescriptors @ 0x140C53C4C (MiRemoveLargeFreeLoaderDescriptors.c)
 *     KeInitializeClock @ 0x140C624A0 (KeInitializeClock.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlRbInsertNodeEx(PRTL_RB_TREE Tree, PRTL_BALANCED_NODE Parent, BOOLEAN Right, PRTL_BALANCED_NODE Node)
{
  _RTL_BALANCED_NODE *v4; // r15
  unsigned __int8 v5; // r14
  char v7; // al
  bool v8; // zf
  _RTL_BALANCED_NODE *v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 Min; // rax
  $424C8BBEF8F6C852886B4C6E806B5DB0 v12; // si
  $7D93978C745EB1C2D28075BAF55422B4 v13; // bp
  unsigned __int64 v14; // r11
  char v15; // cl
  PRTL_BALANCED_NODE v16; // rbx
  _RTL_BALANCED_NODE *v17; // r8
  _BOOL8 v18; // r12
  __int64 v19; // r13
  unsigned int v20; // ecx
  unsigned __int64 v21; // rbx
  unsigned __int64 ParentValue; // rcx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r9
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  int v29; // ebp
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // r14
  unsigned int v33; // ebx
  unsigned __int64 v34; // r10
  unsigned __int64 v35; // r10
  unsigned __int64 v36; // rcx
  unsigned __int64 Root; // rsi
  __int64 v38; // r11
  unsigned __int64 v39; // rax
  int v40; // r10d
  unsigned __int64 v41; // rbx
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rbx
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rax
  _RTL_BALANCED_NODE *v47; // rcx
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rcx
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // r9
  unsigned __int64 v54; // [rsp+0h] [rbp-58h]
  __int64 v55; // [rsp+10h] [rbp-48h]
  __int64 v56; // [rsp+18h] [rbp-40h]
  unsigned int v57; // [rsp+68h] [rbp+10h]
  unsigned int v58; // [rsp+78h] [rbp+20h]

  v4 = 0LL;
  v5 = Right;
  Node->Children[0] = 0LL;
  Node->Children[1] = 0LL;
  v7 = *(_BYTE *)&Tree->0 & 1;
  if ( !Parent )
  {
    if ( v7 )
    {
      Min = 0LL;
      if ( Node )
        Min = (unsigned __int64)Tree ^ (unsigned __int64)Node;
    }
    else
    {
      Min = (unsigned __int64)Node;
    }
    Tree->Root = (_RTL_BALANCED_NODE *)Min;
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
    {
      Min = 0LL;
      if ( Node )
        Min = (unsigned __int64)Tree ^ (unsigned __int64)Node;
      Tree->Min = (_RTL_BALANCED_NODE *)Min;
      LOBYTE(Min) = Min | 1;
      Tree->0 = ($7D93978C745EB1C2D28075BAF55422B4)Min;
      Node->ParentValue = 0LL;
    }
    else
    {
      Tree->Min = Node;
      Node->ParentValue = 0LL;
    }
    return Min;
  }
  v8 = v7 == 0;
  v9 = (_RTL_BALANCED_NODE *)((unsigned __int64)Parent ^ (unsigned __int64)Node);
  v10 = (unsigned __int64)Parent;
  if ( v8 )
    v9 = Node;
  Parent->Children[Right] = v9;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
    v10 = (unsigned __int64)Parent ^ (unsigned __int64)Node;
  Min = v10 | 1;
  Node->ParentValue = Min;
  if ( !Right )
  {
    Min = (unsigned __int64)Tree->Min;
    if ( (Min & 1) != 0 )
    {
      if ( Min == 1 )
        goto LABEL_7;
      v47 = (_RTL_BALANCED_NODE *)(Min ^ ((unsigned __int64)Tree | 1));
    }
    else
    {
      v47 = Tree->Min;
    }
    if ( Parent == v47 )
    {
      if ( (Min & 1) != 0 )
      {
        v50 = 0LL;
        LOBYTE(Min) = (unsigned __int8)Node ^ (unsigned __int8)Tree;
        if ( Node )
          v50 = (unsigned __int64)Node ^ (unsigned __int64)Tree;
        Tree->Min = (_RTL_BALANCED_NODE *)v50;
        Tree->0 = ($7D93978C745EB1C2D28075BAF55422B4)(v50 | 1);
      }
      else
      {
        Tree->Min = Node;
      }
    }
  }
  while ( 1 )
  {
LABEL_7:
    v12 = Parent->0;
    if ( (*(_BYTE *)&v12 & 1) == 0 )
      return Min;
    v13 = Tree->0;
    v14 = Parent->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    v15 = *(_BYTE *)&v13 & 1;
    if ( (*(_BYTE *)&v13 & 1) != 0 && v14 )
    {
      v17 = (_RTL_BALANCED_NODE *)((unsigned __int64)Parent ^ v14);
      v54 = (unsigned __int64)Parent ^ v14;
      v16 = *(PRTL_BALANCED_NODE *)((unsigned __int64)Parent ^ v14);
    }
    else
    {
      v16 = *(PRTL_BALANCED_NODE *)v14;
      v17 = (_RTL_BALANCED_NODE *)(Parent->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
      v54 = (unsigned __int64)v17;
      if ( !v15 )
        goto LABEL_12;
    }
    if ( !v16 )
    {
LABEL_12:
      LOBYTE(Min) = v16 != Parent;
      v18 = v16 == Parent;
      v58 = v16 != Parent;
      v8 = v15 == 0;
      v57 = v58;
      v19 = v16 != Parent;
      v56 = v19;
      v55 = v19;
      v20 = v58;
      v21 = (unsigned __int64)v17->Children[v18];
      if ( v8 )
        goto LABEL_15;
      goto LABEL_13;
    }
    LOBYTE(Min) = ((unsigned __int64)v17 ^ (unsigned __int64)v16) != (_QWORD)Parent;
    v58 = (unsigned __int8)Min;
    v18 = ((unsigned __int64)v17 ^ (unsigned __int64)v16) == (_QWORD)Parent;
    v57 = (unsigned __int8)Min;
    v20 = (unsigned __int8)Min;
    v56 = (unsigned __int8)Min;
    v19 = (unsigned __int8)Min;
    v55 = (unsigned __int8)Min;
    v21 = *(_QWORD *)(v54 + 8 * v18);
LABEL_13:
    if ( !v21 )
      break;
    v21 ^= (unsigned __int64)v17;
LABEL_15:
    if ( !v21 || (*(_BYTE *)(v21 + 16) & 1) == 0 )
      break;
    Node = v17;
    Parent->0 = ($424C8BBEF8F6C852886B4C6E806B5DB0)(*(_BYTE *)&v12 & 0xFE);
    *(_BYTE *)(v21 + 16) &= ~1u;
    ParentValue = v17->ParentValue;
    Parent = (PRTL_BALANCED_NODE)(ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
    {
      if ( !Parent )
        return Min;
      Parent = (PRTL_BALANCED_NODE)((unsigned __int64)v17 ^ (unsigned __int64)Parent);
    }
    if ( !Parent )
      return Min;
    v17->0 = ($424C8BBEF8F6C852886B4C6E806B5DB0)(ParentValue | 1);
    v23 = (unsigned __int64)Parent->Children[0];
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
    {
      if ( v23 )
        v23 ^= (unsigned __int64)Parent;
    }
    v5 = v17 != (_RTL_BALANCED_NODE *)v23;
  }
  if ( v5 == v20 )
  {
    v32 = v54;
    goto LABEL_76;
  }
  v28 = Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  v29 = *(_BYTE *)&v13 & 1;
  if ( v29 && v28 )
    v28 ^= (unsigned __int64)Node;
  if ( (PRTL_BALANCED_NODE)v28 != Parent )
    goto LABEL_81;
  v30 = (unsigned __int64)Parent->Children[v18];
  if ( v29 && v30 )
    v30 ^= (unsigned __int64)Parent;
  if ( (PRTL_BALANCED_NODE)v30 != Node )
    goto LABEL_81;
  v31 = (unsigned __int64)v17->Children[v19];
  if ( v29 && v31 )
    v31 ^= (unsigned __int64)v17;
  if ( (PRTL_BALANCED_NODE)v31 != Parent )
    goto LABEL_81;
  if ( v29 && v14 )
    v14 ^= (unsigned __int64)Parent;
  if ( (_RTL_BALANCED_NODE *)v14 != v17 )
    goto LABEL_81;
  v32 = v54;
  v33 = v58;
  v34 = (unsigned __int64)Node ^ v54;
  if ( v29 )
  {
    *(_QWORD *)(v54 + 8 * v55) = v34;
  }
  else
  {
    v34 = (unsigned __int64)v17;
    *(_QWORD *)(v54 + 8 * v56) = Node;
  }
  Node->ParentValue = v34 | *(_DWORD *)&Node->0 & 3;
  v35 = (unsigned __int64)Node->Children[v19];
  if ( v29 )
  {
    if ( !v35 )
      goto LABEL_71;
    v35 ^= (unsigned __int64)Node;
  }
  if ( !v35 )
    goto LABEL_71;
  v44 = *(_QWORD *)(v35 + 16);
  v45 = v44 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v29 && v45 )
    v45 ^= v35;
  if ( (PRTL_BALANCED_NODE)v45 != Node )
    goto LABEL_81;
  v46 = (unsigned __int64)Parent;
  if ( v29 )
    v46 = (unsigned __int64)Parent ^ v35;
  *(_QWORD *)(v35 + 16) = v46 | v44 & 3;
  v33 = v58;
LABEL_71:
  if ( v29 && v35 )
  {
    Parent->Children[v33 ^ 1LL] = (_RTL_BALANCED_NODE *)((unsigned __int64)Parent ^ v35);
LABEL_74:
    Node->Children[v33] = (_RTL_BALANCED_NODE *)((unsigned __int64)Node ^ (unsigned __int64)Parent);
    v36 = (unsigned __int64)Node ^ (unsigned __int64)Parent;
  }
  else
  {
    Parent->Children[v20 ^ 1LL] = (_RTL_BALANCED_NODE *)v35;
    if ( v29 )
      goto LABEL_74;
    v36 = (unsigned __int64)Node;
    Node->Children[v33] = Parent;
  }
  Parent->ParentValue = v36 | *(_DWORD *)&Parent->0 & 3;
  Parent = Node;
LABEL_76:
  Root = (unsigned __int64)Tree->Root;
  if ( ((__int64)Tree->Min & 1) != 0 && Root )
    Root ^= (unsigned __int64)Tree;
  v38 = v57 ^ 1;
  v39 = Parent->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  v40 = (__int64)Tree->Min & 1;
  if ( ((__int64)Tree->Min & 1) != 0 && v39 )
    v39 ^= (unsigned __int64)Parent;
  if ( (_RTL_BALANCED_NODE *)v39 != v17 )
    goto LABEL_81;
  v51 = (unsigned __int64)v17->Children[v57];
  if ( ((__int64)Tree->Min & 1) != 0 && v51 )
    v51 ^= (unsigned __int64)v17;
  if ( (PRTL_BALANCED_NODE)v51 != Parent )
    goto LABEL_81;
  v52 = v17->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  if ( ((__int64)Tree->Min & 1) != 0 )
  {
    if ( !v52 )
    {
LABEL_134:
      if ( (_RTL_BALANCED_NODE *)Root == v17 )
      {
        Root = (unsigned __int64)Parent;
        goto LABEL_37;
      }
LABEL_81:
      __fastfail(0x1Du);
    }
    v52 ^= (unsigned __int64)v17;
  }
  if ( !v52 )
    goto LABEL_134;
  v24 = *(_QWORD *)(v52 + 8);
  if ( ((__int64)Tree->Min & 1) != 0 && v24 )
    v24 ^= v52;
  if ( (_RTL_BALANCED_NODE *)v24 == v17 )
  {
    v25 = (unsigned __int64)Parent;
    if ( ((__int64)Tree->Min & 1) != 0 )
      v25 = (unsigned __int64)Parent ^ v52;
    *(_QWORD *)(v52 + 8) = v25;
  }
  else
  {
    v48 = *(_QWORD *)v52;
    if ( ((__int64)Tree->Min & 1) != 0 && v48 )
      v48 ^= v52;
    if ( (_RTL_BALANCED_NODE *)v48 != v17 )
      goto LABEL_81;
    v49 = (unsigned __int64)Parent;
    if ( ((__int64)Tree->Min & 1) != 0 )
      v49 = (unsigned __int64)Parent ^ v52;
    *(_QWORD *)v52 = v49;
  }
LABEL_37:
  if ( v40 && v52 )
    v52 ^= (unsigned __int64)Parent;
  Parent->ParentValue = v52 | *(_DWORD *)&Parent->0 & 3;
  v26 = (unsigned __int64)Parent->Children[v38];
  if ( v40 )
  {
    if ( !v26 )
      goto LABEL_42;
    v26 ^= (unsigned __int64)Parent;
  }
  if ( v26 )
  {
    v41 = *(_QWORD *)(v26 + 16);
    v42 = v41 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v40 && v42 )
      v42 ^= v26;
    if ( (PRTL_BALANCED_NODE)v42 != Parent )
      goto LABEL_81;
    v43 = (unsigned __int64)v17;
    if ( v40 )
      v43 = (unsigned __int64)v17 ^ v26;
    *(_QWORD *)(v26 + 16) = v43 | v41 & 3;
  }
LABEL_42:
  if ( v40 && v26 )
  {
    *(_QWORD *)(v32 + 8LL * v57) = (unsigned __int64)v17 ^ v26;
LABEL_45:
    Parent->Children[v38] = (_RTL_BALANCED_NODE *)((unsigned __int64)Parent ^ (unsigned __int64)v17);
    v27 = (unsigned __int64)Parent ^ (unsigned __int64)v17;
  }
  else
  {
    v17->Children[v57] = (_RTL_BALANCED_NODE *)v26;
    if ( v40 )
      goto LABEL_45;
    Parent->Children[v38] = v17;
    v27 = (unsigned __int64)Parent;
  }
  Min = v17->ParentValue & 3;
  v17->ParentValue = Min | v27;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
  {
    LOBYTE(Min) = (unsigned __int8)Tree ^ Root;
    if ( Root )
      v4 = (_RTL_BALANCED_NODE *)((unsigned __int64)Tree ^ Root);
  }
  else
  {
    v4 = (_RTL_BALANCED_NODE *)Root;
  }
  Tree->Root = v4;
  *(_BYTE *)&v17->0 |= 1u;
  *(_BYTE *)&Parent->0 &= ~1u;
  return Min;
}
