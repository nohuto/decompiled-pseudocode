/*
 * XREFs of RtlRbInsertNodeEx @ 0x1402E2370
 * Callers:
 *     KiSetClockInterval @ 0x14027614C (KiSetClockInterval.c)
 *     ExpUpdateTimerConfigurationWorker @ 0x140277560 (ExpUpdateTimerConfigurationWorker.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x14027E670 (KiAbConvertWaiterToOwnerEntry.c)
 *     RtlpHpSegPageRangeShrink @ 0x1402E0DA0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpVsChunkFree @ 0x1402E1780 (RtlpHpVsChunkFree.c)
 *     RtlpHpSegFreeRangeInsert @ 0x1402E2180 (RtlpHpSegFreeRangeInsert.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x1402E3830 (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x1402E39A0 (KiAbEntryUpdateWaiterTreePosition.c)
 *     RtlpHpVsChunkSplit @ 0x1402E3A80 (RtlpHpVsChunkSplit.c)
 *     KiAbDeferredProcessingWorker @ 0x1402E4D00 (KiAbDeferredProcessingWorker.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1402E83C0 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbProcessThreadLocks @ 0x1402E8D40 (KiAbProcessThreadLocks.c)
 *     PfSnGetFileInformation @ 0x140302AF0 (PfSnGetFileInformation.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x140371480 (KiInsertTimer2WithCollectionLockHeld.c)
 *     RtlpHpLargeAlloc @ 0x1403CAA94 (RtlpHpLargeAlloc.c)
 *     RtlpHpVaMgrFree @ 0x1403CC694 (RtlpHpVaMgrFree.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x1403DA050 (MiInvalidatePageFileBitmapsCache.c)
 *     MiBitmapsCachedEntryLengthChanged @ 0x1403DA318 (MiBitmapsCachedEntryLengthChanged.c)
 *     MiCoalescePageFileBitmapsCache @ 0x1403DA600 (MiCoalescePageFileBitmapsCache.c)
 *     MiRescanPageFileBitmapPortion @ 0x1403DADC8 (MiRescanPageFileBitmapPortion.c)
 *     HalpAllocateCommonBufferEntry @ 0x1404147B4 (HalpAllocateCommonBufferEntry.c)
 *     VmpFaultEntryInsert @ 0x14042B478 (VmpFaultEntryInsert.c)
 *     VmpSplitMemoryRange @ 0x14042B674 (VmpSplitMemoryRange.c)
 *     ?KiInsertSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x140430568 (-KiInsertSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 *     RtlpHpVsFreeChunkInsert @ 0x140435308 (RtlpHpVsFreeChunkInsert.c)
 *     MiInsertSlabEntry @ 0x14045C760 (MiInsertSlabEntry.c)
 *     IoStartDiskIoAttributionForContext @ 0x1404635C0 (IoStartDiskIoAttributionForContext.c)
 *     KasanDriverLoadImageInternal @ 0x1404B82E0 (KasanDriverLoadImageInternal.c)
 *     MiInitializePagefileBitmapsCache @ 0x1404BBF14 (MiInitializePagefileBitmapsCache.c)
 *     PspJobIoRateVolumeEntryInsert @ 0x1405D9898 (PspJobIoRateVolumeEntryInsert.c)
 *     RtlCompareExchangePointerMapping @ 0x1405DDA30 (RtlCompareExchangePointerMapping.c)
 *     VmpInsertMemoryRange @ 0x14063EA20 (VmpInsertMemoryRange.c)
 *     VmpUpdatePinRangesForFirstPin @ 0x14063F7DC (VmpUpdatePinRangesForFirstPin.c)
 *     MiInsertPageFileMemoryExtents @ 0x140682F58 (MiInsertPageFileMemoryExtents.c)
 *     KiGetSystemServiceTraceTable @ 0x1407312E4 (KiGetSystemServiceTraceTable.c)
 *     PfSnSetAltPrefetchParam @ 0x14073B764 (PfSnSetAltPrefetchParam.c)
 *     EtwpRegisterPrivateSession @ 0x14079E05C (EtwpRegisterPrivateSession.c)
 *     MiCreatePagefileMemoryExtents @ 0x1407EDFFC (MiCreatePagefileMemoryExtents.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x14088274C (HvpViewMapPromoteRangeToMapping.c)
 *     HvpViewMapCreateViewsForRegion @ 0x140884B94 (HvpViewMapCreateViewsForRegion.c)
 *     EtwpSetProviderTraitsCommon @ 0x140896C34 (EtwpSetProviderTraitsCommon.c)
 *     MiConstructLoaderMemoryTree @ 0x140C3DB98 (MiConstructLoaderMemoryTree.c)
 *     MiRemoveLargeFreeLoaderDescriptors @ 0x140C4088C (MiRemoveLargeFreeLoaderDescriptors.c)
 *     KeInitializeClock @ 0x140C4ECE8 (KeInitializeClock.c)
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
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r9
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rax
  int v30; // ebp
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rbx
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
  unsigned int v53; // [rsp+0h] [rbp-58h]
  __int64 v54; // [rsp+10h] [rbp-48h]
  __int64 v55; // [rsp+18h] [rbp-40h]
  unsigned int v56; // [rsp+68h] [rbp+10h]
  unsigned __int64 v57; // [rsp+78h] [rbp+20h]

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
      v57 = (unsigned __int64)Parent ^ v14;
      v16 = *(PRTL_BALANCED_NODE *)((unsigned __int64)Parent ^ v14);
    }
    else
    {
      v16 = *(PRTL_BALANCED_NODE *)v14;
      v17 = (_RTL_BALANCED_NODE *)(Parent->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
      v57 = (unsigned __int64)v17;
      if ( !v15 )
        goto LABEL_12;
    }
    if ( !v16 )
    {
LABEL_12:
      LOBYTE(Min) = v16 != Parent;
      v18 = v16 == Parent;
      v53 = v16 != Parent;
      v8 = v15 == 0;
      v56 = v53;
      v19 = v16 != Parent;
      v55 = v19;
      v54 = v19;
      v20 = v53;
      v21 = (unsigned __int64)v17->Children[v18];
      if ( v8 )
        goto LABEL_15;
      goto LABEL_13;
    }
    LOBYTE(Min) = ((unsigned __int64)v17 ^ (unsigned __int64)v16) != (_QWORD)Parent;
    v53 = (unsigned __int8)Min;
    v18 = ((unsigned __int64)v17 ^ (unsigned __int64)v16) == (_QWORD)Parent;
    v56 = (unsigned __int8)Min;
    v20 = (unsigned __int8)Min;
    v55 = (unsigned __int8)Min;
    v19 = (unsigned __int8)Min;
    v54 = (unsigned __int8)Min;
    v21 = *(_QWORD *)(v57 + 8 * v18);
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
    v33 = v57;
    goto LABEL_77;
  }
  v29 = Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  v30 = *(_BYTE *)&v13 & 1;
  if ( v30 && v29 )
    v29 ^= (unsigned __int64)Node;
  if ( (PRTL_BALANCED_NODE)v29 != Parent )
    goto LABEL_82;
  v31 = (unsigned __int64)Parent->Children[v18];
  if ( v30 && v31 )
    v31 ^= (unsigned __int64)Parent;
  if ( (PRTL_BALANCED_NODE)v31 != Node )
    goto LABEL_82;
  v32 = (unsigned __int64)v17->Children[v19];
  if ( v30 && v32 )
    v32 ^= (unsigned __int64)v17;
  if ( (PRTL_BALANCED_NODE)v32 != Parent )
    goto LABEL_82;
  if ( v30 && v14 )
    v14 ^= (unsigned __int64)Parent;
  if ( (_RTL_BALANCED_NODE *)v14 != v17 )
    goto LABEL_82;
  v33 = v57;
  v34 = (unsigned __int64)Node ^ v57;
  if ( v30 )
  {
    *(_QWORD *)(v57 + 8 * v54) = v34;
  }
  else
  {
    v34 = (unsigned __int64)v17;
    *(_QWORD *)(v57 + 8 * v55) = Node;
  }
  Node->ParentValue = v34 | *(_DWORD *)&Node->0 & 3;
  v35 = (unsigned __int64)Node->Children[v19];
  if ( v30 )
  {
    if ( !v35 )
      goto LABEL_72;
    v35 ^= (unsigned __int64)Node;
  }
  if ( !v35 )
    goto LABEL_72;
  v44 = *(_QWORD *)(v35 + 16);
  v45 = v44 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v30 && v45 )
    v45 ^= v35;
  if ( (PRTL_BALANCED_NODE)v45 != Node )
    goto LABEL_82;
  v46 = (unsigned __int64)Parent;
  if ( v30 )
    v46 = (unsigned __int64)Parent ^ v35;
  *(_QWORD *)(v35 + 16) = v46 | v44 & 3;
  v33 = v57;
LABEL_72:
  if ( v30 && v35 )
  {
    Parent->Children[v53 ^ 1LL] = (_RTL_BALANCED_NODE *)((unsigned __int64)Parent ^ v35);
LABEL_75:
    Node->Children[v53] = (_RTL_BALANCED_NODE *)((unsigned __int64)Node ^ (unsigned __int64)Parent);
    v36 = (unsigned __int64)Node ^ (unsigned __int64)Parent;
  }
  else
  {
    Parent->Children[v20 ^ 1LL] = (_RTL_BALANCED_NODE *)v35;
    if ( v30 )
      goto LABEL_75;
    v36 = (unsigned __int64)Node;
    v57 = v33;
    Node->Children[v53] = Parent;
  }
  Parent->ParentValue = v36 | *(_DWORD *)&Parent->0 & 3;
  Parent = Node;
LABEL_77:
  Root = (unsigned __int64)Tree->Root;
  if ( ((__int64)Tree->Min & 1) != 0 && Root )
    Root ^= (unsigned __int64)Tree;
  v38 = v56 ^ 1;
  v39 = Parent->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  v40 = (__int64)Tree->Min & 1;
  if ( ((__int64)Tree->Min & 1) != 0 && v39 )
    v39 ^= (unsigned __int64)Parent;
  if ( (_RTL_BALANCED_NODE *)v39 != v17 )
    goto LABEL_82;
  v51 = (unsigned __int64)v17->Children[v56];
  if ( ((__int64)Tree->Min & 1) != 0 && v51 )
    v51 ^= (unsigned __int64)v17;
  if ( (PRTL_BALANCED_NODE)v51 != Parent )
    goto LABEL_82;
  v24 = v17->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  if ( ((__int64)Tree->Min & 1) != 0 )
  {
    if ( !v24 )
    {
LABEL_139:
      if ( (_RTL_BALANCED_NODE *)Root == v17 )
      {
        Root = (unsigned __int64)Parent;
        goto LABEL_38;
      }
LABEL_82:
      __fastfail(0x1Du);
    }
    v24 ^= (unsigned __int64)v17;
  }
  if ( !v24 )
    goto LABEL_139;
  v25 = *(_QWORD *)(v24 + 8);
  if ( ((__int64)Tree->Min & 1) != 0 && v25 )
    v25 ^= v24;
  if ( (_RTL_BALANCED_NODE *)v25 == v17 )
  {
    v26 = (unsigned __int64)Parent;
    if ( ((__int64)Tree->Min & 1) != 0 )
      v26 = (unsigned __int64)Parent ^ v24;
    *(_QWORD *)(v24 + 8) = v26;
  }
  else
  {
    v48 = *(_QWORD *)v24;
    if ( ((__int64)Tree->Min & 1) != 0 && v48 )
      v48 ^= v24;
    if ( (_RTL_BALANCED_NODE *)v48 != v17 )
      goto LABEL_82;
    v49 = (unsigned __int64)Parent;
    if ( ((__int64)Tree->Min & 1) != 0 )
      v49 = (unsigned __int64)Parent ^ v24;
    *(_QWORD *)v24 = v49;
  }
LABEL_38:
  if ( v40 && v24 )
    v24 ^= (unsigned __int64)Parent;
  Parent->ParentValue = v24 | *(_DWORD *)&Parent->0 & 3;
  v27 = (unsigned __int64)Parent->Children[v38];
  if ( v40 )
  {
    if ( !v27 )
      goto LABEL_43;
    v27 ^= (unsigned __int64)Parent;
  }
  if ( v27 )
  {
    v41 = *(_QWORD *)(v27 + 16);
    v42 = v41 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v40 && v42 )
      v42 ^= v27;
    if ( (PRTL_BALANCED_NODE)v42 != Parent )
      goto LABEL_82;
    v43 = (unsigned __int64)v17;
    if ( v40 )
      v43 = (unsigned __int64)v17 ^ v27;
    *(_QWORD *)(v27 + 16) = v43 | v41 & 3;
    v33 = v57;
  }
LABEL_43:
  if ( v40 && v27 )
  {
    *(_QWORD *)(v33 + 8LL * v56) = (unsigned __int64)v17 ^ v27;
LABEL_46:
    Parent->Children[v38] = (_RTL_BALANCED_NODE *)((unsigned __int64)Parent ^ (unsigned __int64)v17);
    v28 = (unsigned __int64)Parent ^ (unsigned __int64)v17;
  }
  else
  {
    v17->Children[v56] = (_RTL_BALANCED_NODE *)v27;
    if ( v40 )
      goto LABEL_46;
    Parent->Children[v38] = v17;
    v28 = (unsigned __int64)Parent;
  }
  Min = v17->ParentValue & 3;
  v17->ParentValue = Min | v28;
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
