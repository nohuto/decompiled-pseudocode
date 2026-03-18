/*
 * XREFs of RtlRbInsertNodeEx @ 0x1402BDA80
 * Callers:
 *     KiAbEntryGetLockedHeadEntry @ 0x140250050 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbProcessThreadLocks @ 0x1402509C0 (KiAbProcessThreadLocks.c)
 *     KiAbDeferredProcessingWorker @ 0x140253050 (KiAbDeferredProcessingWorker.c)
 *     PfSnGetFileInformation @ 0x140276200 (PfSnGetFileInformation.c)
 *     KiSetClockInterval @ 0x14029F358 (KiSetClockInterval.c)
 *     ExpUpdateTimerConfigurationWorker @ 0x14029FDD0 (ExpUpdateTimerConfigurationWorker.c)
 *     RtlpHpSegPageRangeShrink @ 0x1402BC4B0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpVsChunkFree @ 0x1402BCE90 (RtlpHpVsChunkFree.c)
 *     RtlpHpSegFreeRangeInsert @ 0x1402BD890 (RtlpHpSegFreeRangeInsert.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x1402BEEB0 (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x1402BF020 (KiAbEntryUpdateWaiterTreePosition.c)
 *     RtlpHpVsChunkSplit @ 0x1402BF1C0 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsFreeChunkInsert @ 0x1402C0530 (RtlpHpVsFreeChunkInsert.c)
 *     ?KiInsertSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x14030E824 (-KiInsertSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x140323370 (KiAbConvertWaiterToOwnerEntry.c)
 *     MiInitializePagefileBitmapsCache @ 0x140366010 (MiInitializePagefileBitmapsCache.c)
 *     MiCoalescePageFileBitmapsCache @ 0x140366840 (MiCoalescePageFileBitmapsCache.c)
 *     MiRescanPageFileBitmapPortion @ 0x140367008 (MiRescanPageFileBitmapPortion.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x140367598 (MiInvalidatePageFileBitmapsCache.c)
 *     MiBitmapsCachedEntryLengthChanged @ 0x140367870 (MiBitmapsCachedEntryLengthChanged.c)
 *     VmpFaultEntryInsert @ 0x1403AB3CC (VmpFaultEntryInsert.c)
 *     VmpSplitMemoryRange @ 0x1403AB5D4 (VmpSplitMemoryRange.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x1403C2620 (KiInsertTimer2WithCollectionLockHeld.c)
 *     HalpAllocateCommonBufferEntry @ 0x140411084 (HalpAllocateCommonBufferEntry.c)
 *     MiInsertSlabEntry @ 0x140413D28 (MiInsertSlabEntry.c)
 *     RtlpHpLargeAlloc @ 0x140420250 (RtlpHpLargeAlloc.c)
 *     RtlpHpVaMgrFree @ 0x1404217D4 (RtlpHpVaMgrFree.c)
 *     IoStartDiskIoAttributionForContext @ 0x140462C4C (IoStartDiskIoAttributionForContext.c)
 *     KasanDriverLoadImageInternal @ 0x1404B7B70 (KasanDriverLoadImageInternal.c)
 *     PspJobIoRateVolumeEntryInsert @ 0x1405E5A68 (PspJobIoRateVolumeEntryInsert.c)
 *     RtlCompareExchangePointerMapping @ 0x1405E9B80 (RtlCompareExchangePointerMapping.c)
 *     VmpInsertMemoryRange @ 0x14064A9E0 (VmpInsertMemoryRange.c)
 *     VmpUpdatePinRangesForFirstPin @ 0x14064B79C (VmpUpdatePinRangesForFirstPin.c)
 *     MiInsertPageFileMemoryExtents @ 0x14068E7E8 (MiInsertPageFileMemoryExtents.c)
 *     KiGetSystemServiceTraceTable @ 0x14073D304 (KiGetSystemServiceTraceTable.c)
 *     PfSnSetAltPrefetchParam @ 0x140747784 (PfSnSetAltPrefetchParam.c)
 *     EtwpRegisterPrivateSession @ 0x1407AD42C (EtwpRegisterPrivateSession.c)
 *     MiCreatePagefileMemoryExtents @ 0x1407FDE8C (MiCreatePagefileMemoryExtents.c)
 *     EtwpSetProviderTraitsCommon @ 0x1408361EC (EtwpSetProviderTraitsCommon.c)
 *     HvpViewMapCreateViewsForRegion @ 0x14097F77C (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x1409826CC (HvpViewMapPromoteRangeToMapping.c)
 *     MiConstructLoaderMemoryTree @ 0x140C4EDC8 (MiConstructLoaderMemoryTree.c)
 *     MiRemoveLargeFreeLoaderDescriptors @ 0x140C51ABC (MiRemoveLargeFreeLoaderDescriptors.c)
 *     KeInitializeClock @ 0x140C60350 (KeInitializeClock.c)
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
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // r9
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  int v29; // ebp
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int64 v32; // r14
  unsigned int v33; // ebx
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
  unsigned __int64 v52; // r9
  unsigned __int64 v54; // [rsp+0h] [rbp-58h]
  __int64 v55; // [rsp+10h] [rbp-48h]
  __int64 v56; // [rsp+18h] [rbp-40h]
  unsigned int v57; // [rsp+68h] [rbp+10h]
  unsigned int v58; // [rsp+78h] [rbp+20h]

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
      v54 = a2 ^ v14;
      v16 = *(_QWORD *)(a2 ^ v14);
    }
    else
    {
      v16 = *(_QWORD *)v14;
      v17 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      v54 = v17;
      if ( !v15 )
        goto LABEL_12;
    }
    if ( !v16 )
    {
LABEL_12:
      LOBYTE(v11) = v16 != a2;
      v18 = v16 == a2;
      v58 = v16 != a2;
      v8 = v15 == 0;
      v57 = v58;
      v19 = v16 != a2;
      v56 = v19;
      v55 = v19;
      v20 = v58;
      v21 = *(_QWORD *)(v17 + 8 * v18);
      if ( v8 )
        goto LABEL_15;
      goto LABEL_13;
    }
    LOBYTE(v11) = (v17 ^ v16) != a2;
    v58 = (unsigned __int8)v11;
    v18 = (v17 ^ v16) == a2;
    v57 = (unsigned __int8)v11;
    v20 = (unsigned __int8)v11;
    v56 = (unsigned __int8)v11;
    v19 = (unsigned __int8)v11;
    v55 = (unsigned __int8)v11;
    v21 = *(_QWORD *)(v54 + 8 * v18);
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
    v32 = v54;
    goto LABEL_76;
  }
  v28 = *(_QWORD *)(a4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  v29 = v13 & 1;
  if ( v29 && v28 )
    v28 ^= a4;
  if ( v28 != a2 )
    goto LABEL_81;
  v30 = *(_QWORD *)(a2 + 8 * v18);
  if ( v29 && v30 )
    v30 ^= a2;
  if ( v30 != a4 )
    goto LABEL_81;
  v31 = *(_QWORD *)(v17 + 8 * v19);
  if ( v29 && v31 )
    v31 ^= v17;
  if ( v31 != a2 )
    goto LABEL_81;
  if ( v29 && v14 )
    v14 ^= a2;
  if ( v14 != v17 )
    goto LABEL_81;
  v32 = v54;
  v33 = v58;
  v34 = a4 ^ v54;
  if ( v29 )
  {
    *(_QWORD *)(v54 + 8 * v55) = v34;
  }
  else
  {
    v34 = v17;
    *(_QWORD *)(v54 + 8 * v56) = a4;
  }
  *(_QWORD *)(a4 + 16) = v34 | *(_DWORD *)(a4 + 16) & 3;
  v35 = *(_QWORD *)(a4 + 8 * v19);
  if ( v29 )
  {
    if ( !v35 )
      goto LABEL_71;
    v35 ^= a4;
  }
  if ( !v35 )
    goto LABEL_71;
  v44 = *(_QWORD *)(v35 + 16);
  v45 = v44 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v29 && v45 )
    v45 ^= v35;
  if ( v45 != a4 )
    goto LABEL_81;
  v46 = a2;
  if ( v29 )
    v46 = a2 ^ v35;
  *(_QWORD *)(v35 + 16) = v46 | v44 & 3;
  v33 = v58;
LABEL_71:
  if ( v29 && v35 )
  {
    *(_QWORD *)(a2 + 8 * (v33 ^ 1LL)) = a2 ^ v35;
LABEL_74:
    *(_QWORD *)(a4 + 8LL * v33) = a4 ^ a2;
    v36 = a4 ^ a2;
  }
  else
  {
    *(_QWORD *)(a2 + 8 * (v20 ^ 1LL)) = v35;
    if ( v29 )
      goto LABEL_74;
    v36 = a4;
    *(_QWORD *)(a4 + 8LL * v33) = a2;
  }
  *(_QWORD *)(a2 + 16) = v36 | *(_DWORD *)(a2 + 16) & 3;
  a2 = a4;
LABEL_76:
  v37 = *a1;
  if ( (a1[1] & 1) != 0 && v37 )
    v37 ^= (unsigned __int64)a1;
  v38 = v57 ^ 1;
  v39 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  v40 = a1[1] & 1;
  if ( (a1[1] & 1) != 0 && v39 )
    v39 ^= a2;
  if ( v39 != v17 )
    goto LABEL_81;
  v51 = *(_QWORD *)(v17 + 8LL * v57);
  if ( (a1[1] & 1) != 0 && v51 )
    v51 ^= v17;
  if ( v51 != a2 )
    goto LABEL_81;
  v52 = *(_QWORD *)(v17 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (a1[1] & 1) != 0 )
  {
    if ( !v52 )
    {
LABEL_134:
      if ( v37 == v17 )
      {
        v37 = a2;
        goto LABEL_37;
      }
LABEL_81:
      __fastfail(0x1Du);
    }
    v52 ^= v17;
  }
  if ( !v52 )
    goto LABEL_134;
  v24 = *(_QWORD *)(v52 + 8);
  if ( (a1[1] & 1) != 0 && v24 )
    v24 ^= v52;
  if ( v24 == v17 )
  {
    v25 = a2;
    if ( (a1[1] & 1) != 0 )
      v25 = a2 ^ v52;
    *(_QWORD *)(v52 + 8) = v25;
  }
  else
  {
    v48 = *(_QWORD *)v52;
    if ( (a1[1] & 1) != 0 && v48 )
      v48 ^= v52;
    if ( v48 != v17 )
      goto LABEL_81;
    v49 = a2;
    if ( (a1[1] & 1) != 0 )
      v49 = a2 ^ v52;
    *(_QWORD *)v52 = v49;
  }
LABEL_37:
  if ( v40 && v52 )
    v52 ^= a2;
  *(_QWORD *)(a2 + 16) = v52 | *(_DWORD *)(a2 + 16) & 3;
  v26 = *(_QWORD *)(a2 + 8 * v38);
  if ( v40 )
  {
    if ( !v26 )
      goto LABEL_42;
    v26 ^= a2;
  }
  if ( v26 )
  {
    v41 = *(_QWORD *)(v26 + 16);
    v42 = v41 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v40 && v42 )
      v42 ^= v26;
    if ( v42 != a2 )
      goto LABEL_81;
    v43 = v17;
    if ( v40 )
      v43 = v17 ^ v26;
    *(_QWORD *)(v26 + 16) = v43 | v41 & 3;
  }
LABEL_42:
  if ( v40 && v26 )
  {
    *(_QWORD *)(v32 + 8LL * v57) = v17 ^ v26;
LABEL_45:
    *(_QWORD *)(a2 + 8 * v38) = a2 ^ v17;
    v27 = a2 ^ v17;
  }
  else
  {
    *(_QWORD *)(v17 + 8LL * v57) = v26;
    if ( v40 )
      goto LABEL_45;
    *(_QWORD *)(a2 + 8 * v38) = v17;
    v27 = a2;
  }
  v11 = *(_QWORD *)(v17 + 16) & 3LL;
  *(_QWORD *)(v17 + 16) = v11 | v27;
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
