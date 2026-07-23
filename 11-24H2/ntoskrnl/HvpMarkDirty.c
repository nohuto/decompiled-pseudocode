/*
 * XREFs of HvpMarkDirty @ 0x140886940
 * Callers:
 *     HvMarkDirtyForFlush @ 0x140483DA4 (HvMarkDirtyForFlush.c)
 *     HvpMarkCellDirty @ 0x140875930 (HvpMarkCellDirty.c)
 *     HvpFindFreeCell @ 0x140886450 (HvpFindFreeCell.c)
 *     HvMarkCellDirty @ 0x1408867AC (HvMarkCellDirty.c)
 *     HvpAddBin @ 0x140968D94 (HvpAddBin.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14096A820 (HvpRemapAndEnlistHiveBins.c)
 *     HvpEnlistFreeCells @ 0x14096C4B0 (HvpEnlistFreeCells.c)
 *     CmpTransMgrPrepare @ 0x140A013B8 (CmpTransMgrPrepare.c)
 *     CmpTransMgrSyncHive @ 0x140A030DC (CmpTransMgrSyncHive.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x140A4CD78 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x140230640 (CmpArmLazyWriter.c)
 *     RtlSetBits @ 0x14027C2D0 (RtlSetBits.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     HvpMapEntryGetFreeBin @ 0x1408872D4 (HvpMapEntryGetFreeBin.c)
 *     CmpLogHiveDirtyEvent @ 0x1408872EC (CmpLogHiveDirtyEvent.c)
 *     CmpLogDirtyVectorUse @ 0x140887384 (CmpLogDirtyVectorUse.c)
 *     CmpForceFlushForCoalescing @ 0x14088740C (CmpForceFlushForCoalescing.c)
 *     HvpViewMapCOWAndUnsealRange @ 0x1409685D0 (HvpViewMapCOWAndUnsealRange.c)
 *     HvpProtectBinPartial @ 0x140A2C4E4 (HvpProtectBinPartial.c)
 *     CmpIssueNewDirtyCallback @ 0x140A4F938 (CmpIssueNewDirtyCallback.c)
 *     HvpGetCellMap @ 0x140BBB710 (HvpGetCellMap.c)
 *     HvpMapEntryGetBinAddress @ 0x140BBB770 (HvpMapEntryGetBinAddress.c)
 *     HvpMapEntryReleaseBinAddress @ 0x140BBB790 (HvpMapEntryReleaseBinAddress.c)
 *     HvpGetBinContextInitialize @ 0x140BBB8D0 (HvpGetBinContextInitialize.c)
 */

__int64 __fastcall HvpMarkDirty(ULONG_PTR BugCheckParameter2, unsigned int a2, unsigned int a3, unsigned int a4)
{
  int v4; // eax
  unsigned int v5; // r15d
  unsigned int v9; // edx
  unsigned int v10; // esi
  int v11; // eax
  unsigned int v12; // r9d
  unsigned int v13; // eax
  unsigned int v14; // esi
  unsigned int v15; // r9d
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // edi
  ULONG v20; // r9d
  unsigned int v21; // esi
  char v22; // r8
  BOOL v23; // eax
  int v24; // ebx
  __int64 v25; // rcx
  __int64 v26; // rdx
  ULONG v27; // r12d
  unsigned int v28; // r15d
  __int64 CellMap; // rax
  __int64 FreeBin; // rax
  ULONG *v31; // rcx
  ULONG v32; // r11d
  __int64 v33; // rax
  __int64 v34; // rcx
  char v35; // r8
  __int64 v36; // r10
  int v37; // r11d
  unsigned int v38; // ebx
  __int64 BinAddress; // rax
  __int64 v40; // rcx
  int v41; // edx
  int v42; // r8d
  int v43; // r11d
  ULONG v44; // [rsp+30h] [rbp-48h]
  __int64 v45; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v46; // [rsp+98h] [rbp+20h]

  v46 = a4;
  v4 = *(_DWORD *)(BugCheckParameter2 + 164);
  v5 = a4;
  if ( (v4 & 1) != 0 )
    return 3221225506LL;
  if ( (v4 & 2) != 0 && a4 != 2 )
    return 3221225865LL;
  if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 1) != 0 || (a2 & 0x80000000) != 0 )
    return 0LL;
  v9 = *(_DWORD *)(BugCheckParameter2 + 136);
  v10 = (a2 + a3 - 1) >> 9;
  if ( v9 <= 1 )
  {
    v12 = a2 >> 9;
  }
  else
  {
    v11 = ~(v9 - 1);
    v12 = (a2 >> 9) & v11;
    v10 = (v11 & (v9 + v10)) - 1;
  }
  v13 = (v12 + 8) & 0xFFFFFFF8;
  v14 = ((v10 + 16) & 0xFFFFFFF8) - 9;
  v15 = v13 - 8;
  if ( !v13 )
    v15 = 0;
  v16 = *(_DWORD *)(BugCheckParameter2 + 280) >> 9;
  v44 = v15;
  if ( v14 >= v16 )
    v14 = v16 - 1;
  v17 = v15;
  v18 = 0;
  if ( v15 > v14 )
    goto LABEL_16;
  do
  {
    if ( !_bittest64(*(const signed __int64 **)(BugCheckParameter2 + 96), v17) )
      ++v18;
    ++v17;
  }
  while ( v17 <= v14 );
  if ( !v18 )
  {
LABEL_16:
    if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 2) == 0 )
    {
      v45 = *(_QWORD *)(BugCheckParameter2 + 4136) + 10000000LL * (unsigned int)CmpLazyFlushIntervalInSeconds;
      CmpArmLazyWriter(0, (unsigned __int64 *)&v45, 0);
    }
    return 0LL;
  }
  LOWORD(v45) = 0;
  HvpGetBinContextInitialize(&v45);
  v21 = v14 - v20;
  if ( (v22 & 0x11) != 0 )
  {
    LOBYTE(v23) = 1;
    goto LABEL_22;
  }
  v27 = v20 << 9;
  v28 = (v21 + 1) << 9;
  while ( v28 )
  {
    CellMap = HvpGetCellMap(BugCheckParameter2, v27);
    if ( !CellMap )
      KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v27, 0x445uLL);
    if ( (*(_QWORD *)(CellMap + 8) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
    {
      FreeBin = HvpMapEntryGetFreeBin(CellMap);
      if ( FreeBin )
        v32 = v27 - *(_DWORD *)(FreeBin + 20);
      else
        v32 = *v31;
      v33 = HvpGetCellMap(BugCheckParameter2, v27 - v32);
      v38 = *(_DWORD *)(v33 + 16) - v37;
      if ( v28 < v38 )
        v38 = v28;
      if ( (v35 & 8) != 0 )
      {
        BinAddress = HvpMapEntryGetBinAddress(v34, v36, &v45);
        HvpMapEntryReleaseBinAddress(v40, BinAddress, &v45);
        v23 = (int)HvpProtectBinPartial(BugCheckParameter2, v41, v42, v43, v38, 1) >= 0;
      }
      else
      {
        if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x20000) == 0
          || (int)HvpViewMapCOWAndUnsealRange(BugCheckParameter2 + 224, v27, v38) >= 0 )
        {
          goto LABEL_41;
        }
        v23 = 0;
      }
      if ( !v23 )
        goto LABEL_44;
LABEL_41:
      v28 -= v38;
      v27 += v38;
    }
    else
    {
      v27 += 4096;
      v28 -= 4096;
    }
  }
  LOBYTE(v23) = 1;
LABEL_44:
  v5 = v46;
  v20 = v44;
LABEL_22:
  if ( v23 )
  {
    v24 = *(_DWORD *)(BugCheckParameter2 + 104);
    *(_DWORD *)(BugCheckParameter2 + 104) = v24 + v18;
    RtlSetBits((PRTL_BITMAP)(BugCheckParameter2 + 88), v20, v21 + 1);
    CmpLogDirtyVectorUse(BugCheckParameter2, 0LL, a2, a3);
    CmpLogHiveDirtyEvent(BugCheckParameter2, v5);
    if ( !v24 )
    {
      v25 = MEMORY[0xFFFFF780000003B0];
      v26 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
      *(_QWORD *)(BugCheckParameter2 + 4136) = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
      CmpIssueNewDirtyCallback(v25, v26, 0xFFFFF780000003B0uLL, 0xFFFFF78000000008uLL);
    }
    if ( (int)(v18 + _InterlockedExchangeAdd(&CmpDirtySectorCount, v18)) >= 0x8000 )
      CmpForceFlushForCoalescing();
    goto LABEL_16;
  }
  return 3221225853LL;
}
