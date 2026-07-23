/*
 * XREFs of HvFreeHivePartial @ 0x140A46B7C
 * Callers:
 *     HvpTruncateBins @ 0x140967554 (HvpTruncateBins.c)
 *     HvpPerformLogFileRecovery @ 0x140AAB57C (HvpPerformLogFileRecovery.c)
 * Callees:
 *     RtlClearBits @ 0x1402EA360 (RtlClearBits.c)
 *     RtlNumberOfSetBits @ 0x140377880 (RtlNumberOfSetBits.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     HvpViewMapShrinkStorage @ 0x1407DF59C (HvpViewMapShrinkStorage.c)
 *     CmpReleaseGlobalQuota @ 0x140882D70 (CmpReleaseGlobalQuota.c)
 *     HvpAdjustHiveFreeDisplay @ 0x140882DB0 (HvpAdjustHiveFreeDisplay.c)
 *     HvpMapEntryGetFreeBin @ 0x1408872D4 (HvpMapEntryGetFreeBin.c)
 *     HvpFreeMap @ 0x140A486DC (HvpFreeMap.c)
 *     CmpUpdateSystemHiveHysteresis @ 0x140A52C44 (CmpUpdateSystemHiveHysteresis.c)
 *     HvpFreeBin @ 0x140A634EC (HvpFreeBin.c)
 *     HvpGetCellMap @ 0x140BBB710 (HvpGetCellMap.c)
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
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  _QWORD *v16; // rax
  unsigned int v17; // ecx
  __int64 v18; // rax
  unsigned int v19; // r8d
  ULONG v20; // r14d
  ULONG v21; // ebx
  int v22; // ebx
  unsigned int v23; // [rsp+68h] [rbp+10h]

  v5 = 632LL * a3;
  v7 = a2;
  result = *(unsigned int *)(v5 + BugCheckParameter2 + 280);
  v23 = result;
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
      v14 = FreeBin;
      if ( FreeBin )
      {
        v15 = *FreeBin;
        if ( *(_QWORD **)(*FreeBin + 8LL) != FreeBin || (v16 = (_QWORD *)FreeBin[1], (_QWORD *)*v16 != v14) )
          __fastfail(3u);
        *v16 = v15;
        *(_QWORD *)(v15 + 8) = v16;
        guard_dispatch_icall_no_overrides(v14, 24LL);
      }
      v17 = *((_DWORD *)v12 + 4);
      if ( (*((_QWORD *)v12 + 1) & 8) != 0 )
        HvpFreeBin(BugCheckParameter2, v17);
      else
        CmpReleaseGlobalQuota(v17);
      v7 += *((_DWORD *)v12 + 4);
      do
      {
        v18 = HvpGetCellMap(BugCheckParameter2, v10);
        if ( !v18 )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v10, 0x19EuLL);
        v10 += 4096;
        *(_OWORD *)v18 = 0LL;
        *(_QWORD *)(v18 + 16) = 0LL;
      }
      while ( v10 - v9 < v7 );
    }
    while ( v7 < v23 );
    if ( a2 )
      v19 = (a2 - 1) >> 21;
    else
      v19 = -1;
    HvpFreeMap(
      BugCheckParameter2,
      *(_QWORD *)(v5 + BugCheckParameter2 + 288),
      v19 + 1,
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
      v20 = a2 >> 9;
      v21 = *(_DWORD *)(BugCheckParameter2 + 88) - v20;
      RtlClearBits((PRTL_BITMAP)(BugCheckParameter2 + 88), v20, v21);
      RtlClearBits((PRTL_BITMAP)(BugCheckParameter2 + 112), v20, v21);
      *(_QWORD *)(BugCheckParameter2 + 96) = *(_QWORD *)(BugCheckParameter2 + 96);
      *(_DWORD *)(BugCheckParameter2 + 88) = v20;
      *(_QWORD *)(BugCheckParameter2 + 120) = *(_QWORD *)(BugCheckParameter2 + 120);
      *(_DWORD *)(BugCheckParameter2 + 112) = v20;
      v22 = *(_DWORD *)(BugCheckParameter2 + 104);
      *(_DWORD *)(BugCheckParameter2 + 104) = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 88));
      *(_DWORD *)(BugCheckParameter2 + 128) = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 112));
      _InterlockedAdd(&CmpDirtySectorCount, *(_DWORD *)(BugCheckParameter2 + 104) - v22);
    }
    return HvpAdjustHiveFreeDisplay(BugCheckParameter2, *(_DWORD *)(v5 + BugCheckParameter2 + 280), a3);
  }
  return result;
}
