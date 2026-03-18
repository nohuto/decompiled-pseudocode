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

char __fastcall RtlRbInsertNodeEx(__int64 *a1, unsigned __int64 a2, bool a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // r15
  bool v5; // r14
  char v7; // al
  bool v8; // zf
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  char v12; // si
  char v13; // bp
  unsigned __int64 v14; // r11
  char v15; // cl
  __int64 v16; // rbx
  unsigned __int64 v17; // r8
  _BOOL8 v18; // r12
  __int64 v19; // r13
  unsigned int v20; // ecx
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rcx
  unsigned __int64 v24; // r9
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // r9
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rax
  int v30; // ebp
  unsigned __int64 v31; // rax
  __int64 v32; // rax
  unsigned __int64 v33; // rbx
  unsigned __int64 v34; // r10
  __int64 v35; // r10
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rsi
  __int64 v38; // r11
  unsigned __int64 v39; // rax
  int v40; // r10d
  __int64 v41; // rbx
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rax
  __int64 v44; // rbx
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rcx
  __int64 v51; // rcx
  unsigned int v53; // [rsp+0h] [rbp-58h]
  __int64 v54; // [rsp+10h] [rbp-48h]
  __int64 v55; // [rsp+18h] [rbp-40h]
  unsigned int v56; // [rsp+68h] [rbp+10h]
  unsigned __int64 v57; // [rsp+78h] [rbp+20h]

  v4 = 0LL;
  v5 = a3;
  *(_QWORD *)a4 = 0LL;
  *(_QWORD *)(a4 + 8) = 0LL;
  v7 = a1[1] & 1;
  if ( !a2 )
  {
    if ( v7 )
    {
      v11 = 0LL;
      if ( a4 )
        v11 = (unsigned __int64)a1 ^ a4;
    }
    else
    {
      v11 = a4;
    }
    *a1 = v11;
    if ( (a1[1] & 1) != 0 )
    {
      v11 = 0LL;
      if ( a4 )
        v11 = (unsigned __int64)a1 ^ a4;
      a1[1] = v11;
      LOBYTE(v11) = v11 | 1;
      *((_BYTE *)a1 + 8) = v11;
      *(_QWORD *)(a4 + 16) = 0LL;
    }
    else
    {
      a1[1] = a4;
      *(_QWORD *)(a4 + 16) = 0LL;
    }
    return v11;
  }
  v8 = v7 == 0;
  v9 = a2 ^ a4;
  v10 = a2;
  if ( v8 )
    v9 = a4;
  *(_QWORD *)(a2 + 8LL * a3) = v9;
  if ( (a1[1] & 1) != 0 )
    v10 = a2 ^ a4;
  v11 = v10 | 1;
  *(_QWORD *)(a4 + 16) = v11;
  if ( !a3 )
  {
    v11 = a1[1];
    if ( (v11 & 1) != 0 )
    {
      if ( v11 == 1 )
        goto LABEL_7;
      v47 = v11 ^ ((unsigned __int64)a1 | 1);
    }
    else
    {
      v47 = a1[1];
    }
    if ( a2 == v47 )
    {
      if ( (v11 & 1) != 0 )
      {
        v50 = 0LL;
        LOBYTE(v11) = a4 ^ (unsigned __int8)a1;
        if ( a4 )
          v50 = a4 ^ (unsigned __int64)a1;
        a1[1] = v50;
        *((_BYTE *)a1 + 8) = v50 | 1;
      }
      else
      {
        a1[1] = a4;
      }
    }
  }
  while ( 1 )
  {
LABEL_7:
    v12 = *(_BYTE *)(a2 + 16);
    if ( (v12 & 1) == 0 )
      return v11;
    v13 = *((_BYTE *)a1 + 8);
    v14 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    v15 = v13 & 1;
    if ( (v13 & 1) != 0 && v14 )
    {
      v17 = a2 ^ v14;
      v57 = a2 ^ v14;
      v16 = *(_QWORD *)(a2 ^ v14);
    }
    else
    {
      v16 = *(_QWORD *)v14;
      v17 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      v57 = v17;
      if ( !v15 )
        goto LABEL_12;
    }
    if ( !v16 )
    {
LABEL_12:
      LOBYTE(v11) = v16 != a2;
      v18 = v16 == a2;
      v53 = v16 != a2;
      v8 = v15 == 0;
      v56 = v53;
      v19 = v16 != a2;
      v55 = v19;
      v54 = v19;
      v20 = v53;
      v21 = *(_QWORD *)(v17 + 8 * v18);
      if ( v8 )
        goto LABEL_15;
      goto LABEL_13;
    }
    LOBYTE(v11) = (v17 ^ v16) != a2;
    v53 = (unsigned __int8)v11;
    v18 = (v17 ^ v16) == a2;
    v56 = (unsigned __int8)v11;
    v20 = (unsigned __int8)v11;
    v55 = (unsigned __int8)v11;
    v19 = (unsigned __int8)v11;
    v54 = (unsigned __int8)v11;
    v21 = *(_QWORD *)(v57 + 8 * v18);
LABEL_13:
    if ( !v21 )
      break;
    v21 ^= v17;
LABEL_15:
    if ( !v21 || (*(_BYTE *)(v21 + 16) & 1) == 0 )
      break;
    a4 = v17;
    *(_BYTE *)(a2 + 16) = v12 & 0xFE;
    *(_BYTE *)(v21 + 16) &= ~1u;
    v22 = *(_QWORD *)(v17 + 16);
    a2 = v22 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (a1[1] & 1) != 0 )
    {
      if ( !a2 )
        return v11;
      a2 ^= v17;
    }
    if ( !a2 )
      return v11;
    *(_BYTE *)(v17 + 16) = v22 | 1;
    v23 = *(_QWORD *)a2;
    if ( (a1[1] & 1) != 0 )
    {
      if ( v23 )
        v23 ^= a2;
    }
    v5 = v17 != v23;
  }
  if ( v5 == v20 )
  {
    v33 = v57;
    goto LABEL_77;
  }
  v29 = *(_QWORD *)(a4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  v30 = v13 & 1;
  if ( v30 && v29 )
    v29 ^= a4;
  if ( v29 != a2 )
    goto LABEL_82;
  v31 = *(_QWORD *)(a2 + 8 * v18);
  if ( v30 && v31 )
    v31 ^= a2;
  if ( v31 != a4 )
    goto LABEL_82;
  v32 = *(_QWORD *)(v17 + 8 * v19);
  if ( v30 && v32 )
    v32 ^= v17;
  if ( v32 != a2 )
    goto LABEL_82;
  if ( v30 && v14 )
    v14 ^= a2;
  if ( v14 != v17 )
    goto LABEL_82;
  v33 = v57;
  v34 = a4 ^ v57;
  if ( v30 )
  {
    *(_QWORD *)(v57 + 8 * v54) = v34;
  }
  else
  {
    v34 = v17;
    *(_QWORD *)(v57 + 8 * v55) = a4;
  }
  *(_QWORD *)(a4 + 16) = v34 | *(_DWORD *)(a4 + 16) & 3;
  v35 = *(_QWORD *)(a4 + 8 * v19);
  if ( v30 )
  {
    if ( !v35 )
      goto LABEL_72;
    v35 ^= a4;
  }
  if ( !v35 )
    goto LABEL_72;
  v44 = *(_QWORD *)(v35 + 16);
  v45 = v44 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v30 && v45 )
    v45 ^= v35;
  if ( v45 != a4 )
    goto LABEL_82;
  v46 = a2;
  if ( v30 )
    v46 = a2 ^ v35;
  *(_QWORD *)(v35 + 16) = v46 | v44 & 3;
  v33 = v57;
LABEL_72:
  if ( v30 && v35 )
  {
    *(_QWORD *)(a2 + 8 * (v53 ^ 1LL)) = a2 ^ v35;
LABEL_75:
    *(_QWORD *)(a4 + 8LL * v53) = a4 ^ a2;
    v36 = a4 ^ a2;
  }
  else
  {
    *(_QWORD *)(a2 + 8 * (v20 ^ 1LL)) = v35;
    if ( v30 )
      goto LABEL_75;
    v36 = a4;
    v57 = v33;
    *(_QWORD *)(a4 + 8LL * v53) = a2;
  }
  *(_QWORD *)(a2 + 16) = v36 | *(_DWORD *)(a2 + 16) & 3;
  a2 = a4;
LABEL_77:
  v37 = *a1;
  if ( (a1[1] & 1) != 0 && v37 )
    v37 ^= (unsigned __int64)a1;
  v38 = v56 ^ 1;
  v39 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  v40 = a1[1] & 1;
  if ( (a1[1] & 1) != 0 && v39 )
    v39 ^= a2;
  if ( v39 != v17 )
    goto LABEL_82;
  v51 = *(_QWORD *)(v17 + 8LL * v56);
  if ( (a1[1] & 1) != 0 && v51 )
    v51 ^= v17;
  if ( v51 != a2 )
    goto LABEL_82;
  v24 = *(_QWORD *)(v17 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (a1[1] & 1) != 0 )
  {
    if ( !v24 )
    {
LABEL_139:
      if ( v37 == v17 )
      {
        v37 = a2;
        goto LABEL_38;
      }
LABEL_82:
      __fastfail(0x1Du);
    }
    v24 ^= v17;
  }
  if ( !v24 )
    goto LABEL_139;
  v25 = *(_QWORD *)(v24 + 8);
  if ( (a1[1] & 1) != 0 && v25 )
    v25 ^= v24;
  if ( v25 == v17 )
  {
    v26 = a2;
    if ( (a1[1] & 1) != 0 )
      v26 = a2 ^ v24;
    *(_QWORD *)(v24 + 8) = v26;
  }
  else
  {
    v48 = *(_QWORD *)v24;
    if ( (a1[1] & 1) != 0 && v48 )
      v48 ^= v24;
    if ( v48 != v17 )
      goto LABEL_82;
    v49 = a2;
    if ( (a1[1] & 1) != 0 )
      v49 = a2 ^ v24;
    *(_QWORD *)v24 = v49;
  }
LABEL_38:
  if ( v40 && v24 )
    v24 ^= a2;
  *(_QWORD *)(a2 + 16) = v24 | *(_DWORD *)(a2 + 16) & 3;
  v27 = *(_QWORD *)(a2 + 8 * v38);
  if ( v40 )
  {
    if ( !v27 )
      goto LABEL_43;
    v27 ^= a2;
  }
  if ( v27 )
  {
    v41 = *(_QWORD *)(v27 + 16);
    v42 = v41 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v40 && v42 )
      v42 ^= v27;
    if ( v42 != a2 )
      goto LABEL_82;
    v43 = v17;
    if ( v40 )
      v43 = v17 ^ v27;
    *(_QWORD *)(v27 + 16) = v43 | v41 & 3;
    v33 = v57;
  }
LABEL_43:
  if ( v40 && v27 )
  {
    *(_QWORD *)(v33 + 8LL * v56) = v17 ^ v27;
LABEL_46:
    *(_QWORD *)(a2 + 8 * v38) = a2 ^ v17;
    v28 = a2 ^ v17;
  }
  else
  {
    *(_QWORD *)(v17 + 8LL * v56) = v27;
    if ( v40 )
      goto LABEL_46;
    *(_QWORD *)(a2 + 8 * v38) = v17;
    v28 = a2;
  }
  v11 = *(_QWORD *)(v17 + 16) & 3LL;
  *(_QWORD *)(v17 + 16) = v11 | v28;
  if ( (a1[1] & 1) != 0 )
  {
    LOBYTE(v11) = (unsigned __int8)a1 ^ v37;
    if ( v37 )
      v4 = (unsigned __int64)a1 ^ v37;
  }
  else
  {
    v4 = v37;
  }
  *a1 = v4;
  *(_BYTE *)(v17 + 16) |= 1u;
  *(_BYTE *)(a2 + 16) &= ~1u;
  return v11;
}
