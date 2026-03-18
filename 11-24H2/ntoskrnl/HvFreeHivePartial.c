/*
 * XREFs of HvFreeHivePartial @ 0x140A4FDCC
 * Callers:
 *     HvpTruncateBins @ 0x14097ED44 (HvpTruncateBins.c)
 *     HvpPerformLogFileRecovery @ 0x140AB060C (HvpPerformLogFileRecovery.c)
 * Callees:
 *     RtlClearBits @ 0x14037CD40 (RtlClearBits.c)
 *     RtlNumberOfSetBits @ 0x14042B480 (RtlNumberOfSetBits.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     HvpViewMapShrinkStorage @ 0x1407DF04C (HvpViewMapShrinkStorage.c)
 *     CmpReleaseGlobalQuota @ 0x14087EEC0 (CmpReleaseGlobalQuota.c)
 *     HvpAdjustHiveFreeDisplay @ 0x14087EF00 (HvpAdjustHiveFreeDisplay.c)
 *     HvpMapEntryGetFreeBin @ 0x140883424 (HvpMapEntryGetFreeBin.c)
 *     HvpFreeMap @ 0x140A51610 (HvpFreeMap.c)
 *     CmpUpdateSystemHiveHysteresis @ 0x140A5B334 (CmpUpdateSystemHiveHysteresis.c)
 *     HvpFreeBin @ 0x140A6A13C (HvpFreeBin.c)
 *     HvpGetCellMap @ 0x140BB9710 (HvpGetCellMap.c)
 */

__int64 __fastcall HvFreeHivePartial(ULONG_PTR BugCheckParameter2, unsigned int a2, int a3)
{
  __int64 v5; // r15
  unsigned int v7; // esi
  __int64 result; // rax
  int v9; // r13d
  unsigned int v10; // ebx
  _BYTE *CellMap; // rax
  _BYTE *v12; // rdi
  _QWORD *FreeBin; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rcx
  __int64 v17; // rdx
  _QWORD *v18; // rax
  unsigned int v19; // ecx
  __int64 v20; // rax
  unsigned int v21; // r8d
  ULONG v22; // r14d
  ULONG v23; // ebx
  int v24; // ebx
  unsigned int v25; // [rsp+68h] [rbp+10h]

  v5 = 632LL * a3;
  v7 = a2;
  result = *(unsigned int *)(v5 + BugCheckParameter2 + 280);
  v25 = result;
  if ( a2 != (_DWORD)result )
  {
    v9 = a3 << 31;
    do
    {
      v10 = v7 + v9;
      CellMap = (_BYTE *)HvpGetCellMap(BugCheckParameter2, v7 + v9);
      v12 = CellMap;
      if ( !CellMap )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v10, 0x165uLL);
      FreeBin = (_QWORD *)HvpMapEntryGetFreeBin(CellMap);
      v16 = FreeBin;
      if ( FreeBin )
      {
        v17 = *FreeBin;
        if ( *(_QWORD **)(*FreeBin + 8LL) != FreeBin || (v18 = (_QWORD *)FreeBin[1], (_QWORD *)*v18 != v16) )
          __fastfail(3u);
        *v18 = v17;
        *(_QWORD *)(v17 + 8) = v18;
        guard_dispatch_icall_no_overrides(v16, 24LL, v14, v15);
      }
      v19 = *((_DWORD *)v12 + 4);
      if ( (*((_QWORD *)v12 + 1) & 8) != 0 )
        HvpFreeBin(BugCheckParameter2, v19);
      else
        CmpReleaseGlobalQuota(v19);
      v7 += *((_DWORD *)v12 + 4);
      do
      {
        v20 = HvpGetCellMap(BugCheckParameter2, v10);
        if ( !v20 )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v10, 0x19EuLL);
        v10 += 4096;
        *(_OWORD *)v20 = 0LL;
        *(_QWORD *)(v20 + 16) = 0LL;
      }
      while ( v10 - v9 < v7 );
    }
    while ( v7 < v25 );
    if ( a2 )
      v21 = (a2 - 1) >> 21;
    else
      v21 = -1;
    HvpFreeMap(
      BugCheckParameter2,
      *(_QWORD *)(v5 + BugCheckParameter2 + 288),
      v21 + 1,
      (unsigned int)((*(_DWORD *)(v5 + BugCheckParameter2 + 280) >> 12) - 1) >> 9);
    if ( !a3 )
    {
      CmpUpdateSystemHiveHysteresis(
        BugCheckParameter2,
        a2 & 0x7FFFFFFF,
        *(unsigned int *)(v5 + BugCheckParameter2 + 280));
      if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x20000) != 0 && a2 < *(_DWORD *)(BugCheckParameter2 + 232) - 4096 )
        HvpViewMapShrinkStorage(BugCheckParameter2 + 224, a2 & 0x7FFFFFFF);
    }
    *(_DWORD *)(v5 + BugCheckParameter2 + 280) = a2 & 0x7FFFFFFF;
    if ( !a3 )
    {
      v22 = a2 >> 9;
      v23 = *(_DWORD *)(BugCheckParameter2 + 88) - v22;
      RtlClearBits((PRTL_BITMAP)(BugCheckParameter2 + 88), v22, v23);
      RtlClearBits((PRTL_BITMAP)(BugCheckParameter2 + 112), v22, v23);
      *(_QWORD *)(BugCheckParameter2 + 96) = *(_QWORD *)(BugCheckParameter2 + 96);
      *(_DWORD *)(BugCheckParameter2 + 88) = v22;
      *(_QWORD *)(BugCheckParameter2 + 120) = *(_QWORD *)(BugCheckParameter2 + 120);
      *(_DWORD *)(BugCheckParameter2 + 112) = v22;
      v24 = *(_DWORD *)(BugCheckParameter2 + 104);
      *(_DWORD *)(BugCheckParameter2 + 104) = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 88));
      *(_DWORD *)(BugCheckParameter2 + 128) = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 112));
      _InterlockedAdd(&CmpDirtySectorCount, *(_DWORD *)(BugCheckParameter2 + 104) - v24);
    }
    return HvpAdjustHiveFreeDisplay(BugCheckParameter2, *(_DWORD *)(v5 + BugCheckParameter2 + 280), a3);
  }
  return result;
}
