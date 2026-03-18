/*
 * XREFs of MiUnloadSystemImage @ 0x140A8AD84
 * Callers:
 *     MiDereferenceImports @ 0x1407E73C0 (MiDereferenceImports.c)
 *     MmLoadSystemImageEx @ 0x1409C87D8 (MmLoadSystemImageEx.c)
 *     MmUnloadSystemImage @ 0x140A8AD10 (MmUnloadSystemImage.c)
 *     MmRegisterHotPatches @ 0x140C56C7C (MmRegisterHotPatches.c)
 * Callees:
 *     MiReturnResident @ 0x14020F6B0 (MiReturnResident.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14025E950 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     MiDecommitPages @ 0x140288300 (MiDecommitPages.c)
 *     MiManageSubsectionView @ 0x1402BAAB0 (MiManageSubsectionView.c)
 *     MiAcquireLoadLock @ 0x1402C6F98 (MiAcquireLoadLock.c)
 *     MiSectionControlArea @ 0x1402D4800 (MiSectionControlArea.c)
 *     MiDereferenceControlArea @ 0x14036F494 (MiDereferenceControlArea.c)
 *     MiUpdateDriverLoadInProgress @ 0x14042C688 (MiUpdateDriverLoadInProgress.c)
 *     MiGetPteAddress @ 0x140437550 (MiGetPteAddress.c)
 *     MiIsRetpolineEnabled @ 0x140446FE0 (MiIsRetpolineEnabled.c)
 *     LdrUnloadAlternateResourceModule @ 0x14044E0C4 (LdrUnloadAlternateResourceModule.c)
 *     MmGetMinWsPagePriority @ 0x1404790C0 (MmGetMinWsPagePriority.c)
 *     MiUnmapKernelScp @ 0x14049DF98 (MiUnmapKernelScp.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x1404A4024 (DbgUnLoadImageSymbolsUnicode.c)
 *     MiFreePrivateFixupEntryForSystemImage @ 0x1404AECE8 (MiFreePrivateFixupEntryForSystemImage.c)
 *     MmReleaseLoadLock @ 0x1404C9960 (MmReleaseLoadLock.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1404CBAD0 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiGetBaseLoaderPortion @ 0x1404D0508 (MiGetBaseLoaderPortion.c)
 *     MiClearDriverTablePtes @ 0x1404F2870 (MiClearDriverTablePtes.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     KasanDriverUnloadImage @ 0x1405A99B0 (KasanDriverUnloadImage.c)
 *     KeFlushRsb @ 0x1405BD4E0 (KeFlushRsb.c)
 *     MiRemoveLoaderEntry @ 0x14066C0B4 (MiRemoveLoaderEntry.c)
 *     MiUnloadSystemImageSoftWsles @ 0x140691168 (MiUnloadSystemImageSoftWsles.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     MmHasImageBeenImportOptimized @ 0x1406FB5B0 (MmHasImageBeenImportOptimized.c)
 *     MiDereferenceImports @ 0x1407E73C0 (MiDereferenceImports.c)
 *     MiReleasePrivilegedPtes @ 0x1407E8404 (MiReleasePrivilegedPtes.c)
 *     PerfLogImageUnload @ 0x1408E6808 (PerfLogImageUnload.c)
 *     MiFreeRetpolineRelocationInformation @ 0x1408F7460 (MiFreeRetpolineRelocationInformation.c)
 *     KseDriverUnloadImage @ 0x140959CDC (KseDriverUnloadImage.c)
 *     MiMarkKernelImageCfgBits @ 0x140A3DD40 (MiMarkKernelImageCfgBits.c)
 *     MiBytesToMapSystemImage @ 0x140A5E6FC (MiBytesToMapSystemImage.c)
 *     MiReturnSystemImageAddress @ 0x140A67CC0 (MiReturnSystemImageAddress.c)
 *     MiReleaseDriverPtes @ 0x140A67CE4 (MiReleaseDriverPtes.c)
 *     MiUnlockDriverCode @ 0x140A8823C (MiUnlockDriverCode.c)
 *     MiMarkKernelImageRetpolineBits @ 0x140A884D4 (MiMarkKernelImageRetpolineBits.c)
 *     MiReturnSystemImageCommitment @ 0x140A8F7AC (MiReturnSystemImageCommitment.c)
 *     KeCleanupImageTracepoints @ 0x140A90178 (KeCleanupImageTracepoints.c)
 *     MiFreeRetpolineImportInfo @ 0x140A981A0 (MiFreeRetpolineImportInfo.c)
 *     MiIsImageFullyRetpolined @ 0x140A984B4 (MiIsImageFullyRetpolined.c)
 *     MiFreeLoadedImportList @ 0x140A9ED10 (MiFreeLoadedImportList.c)
 *     MiRememberUnloadedDriver @ 0x140AB5BE4 (MiRememberUnloadedDriver.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     VfDriverUnloadImage @ 0x140B8A5C0 (VfDriverUnloadImage.c)
 */

void __fastcall MiUnloadSystemImage(ULONG_PTR BugCheckParameter3)
{
  __int64 BaseLoaderPortion; // rdi
  struct _KTHREAD *Lock; // r15
  unsigned __int64 v4; // r14
  bool v5; // zf
  int v6; // r8d
  void *v7; // r13
  __int64 **v8; // rsi
  int v9; // eax
  _QWORD *v10; // rcx
  unsigned int v11; // eax
  unsigned __int64 v12; // r14
  __int64 v13; // r12
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // rdx
  __int128 v16; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v17; // [rsp+60h] [rbp-A0h]
  __int128 v18; // [rsp+70h] [rbp-90h]
  __int64 v19; // [rsp+80h] [rbp-80h]
  __int64 v20[28]; // [rsp+90h] [rbp-70h] BYREF
  char v21; // [rsp+180h] [rbp+80h]
  __int64 BugCheckParameter2; // [rsp+188h] [rbp+88h]
  unsigned __int64 v23; // [rsp+190h] [rbp+90h]
  unsigned __int64 v24; // [rsp+198h] [rbp+98h]

  memset_0(v20, 0, 0x98uLL);
  v19 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  BaseLoaderPortion = MiGetBaseLoaderPortion(BugCheckParameter3);
  if ( (*(_DWORD *)(BaseLoaderPortion + 184) & 0x100) != 0 )
    Lock = 0LL;
  else
    Lock = MiAcquireLoadLock(1);
  v4 = *(_QWORD *)(BugCheckParameter3 + 136);
  if ( v4 == 1 || (v5 = *(_WORD *)(BugCheckParameter3 + 108) == 1, --*(_WORD *)(BugCheckParameter3 + 108), !v5) )
  {
    if ( Lock )
      MmReleaseLoadLock(Lock);
  }
  else
  {
    v6 = *(_DWORD *)(BaseLoaderPortion + 184) | 0x200;
    *(_DWORD *)(BaseLoaderPortion + 184) = v6;
    v7 = *(void **)(BugCheckParameter3 + 112);
    if ( v7 )
      v23 = MiSectionControlArea(*(_QWORD *)(BugCheckParameter3 + 112));
    else
      v23 = 0LL;
    v8 = *(__int64 ***)(BugCheckParameter3 + 48);
    if ( v8 )
      BugCheckParameter2 = MiGetPteAddress(*(_QWORD *)(BugCheckParameter3 + 48));
    else
      BugCheckParameter2 = 0LL;
    v24 = (unsigned __int64)*(unsigned int *)(BugCheckParameter3 + 64) >> 12;
    if ( (v6 & 0x400) != 0 )
      KeCleanupImageTracepoints(BugCheckParameter3);
    if ( (*(_DWORD *)(BaseLoaderPortion + 184) & 0x80000) != 0 || !v7 )
    {
      v9 = MiMarkKernelImageCfgBits(BugCheckParameter3, 0);
      if ( v9 < 0 )
        KeBugCheckEx(0x1Au, 0x1015uLL, (ULONG_PTR)v8, BugCheckParameter3, v9);
    }
    if ( (*(_DWORD *)(BaseLoaderPortion + 184) & 0x40000) != 0 )
    {
      if ( dword_140E374B0 + dword_140E374AC )
        MiClearDriverTablePtes(BugCheckParameter3);
      MiUnmapKernelScp(BugCheckParameter3);
      if ( MiIsRetpolineEnabled() )
      {
        MiMarkKernelImageRetpolineBits(BugCheckParameter3, 0);
        if ( (unsigned int)MiIsImageFullyRetpolined(BugCheckParameter3) )
          KeFlushRsb();
        _mm_lfence();
      }
    }
    v10 = *(_QWORD **)(BaseLoaderPortion + 280);
    if ( v10 )
    {
      MiFreeRetpolineRelocationInformation(v10);
      *(_QWORD *)(BaseLoaderPortion + 280) = 0LL;
    }
    if ( (*(_DWORD *)(BaseLoaderPortion + 184) & 0x8000) != 0 )
    {
      VfDriverUnloadImage(BugCheckParameter3);
      if ( (*(_DWORD *)(BaseLoaderPortion + 184) & 0x10000) != 0 )
        KseDriverUnloadImage(BugCheckParameter3);
    }
    if ( (*(_DWORD *)(BaseLoaderPortion + 184) & 0x20000) != 0 )
      KasanDriverUnloadImage(BugCheckParameter3);
    if ( v4 )
    {
      MiDereferenceImports(v4);
      MiFreeLoadedImportList(v4);
    }
    if ( v8 )
      LdrUnloadAlternateResourceModule();
    if ( (*(_DWORD *)(BugCheckParameter3 + 104) & 0x100000) != 0 )
      DbgUnLoadImageSymbolsUnicode((PCUNICODE_STRING)(BugCheckParameter3 + 88), (__int64)v8, 0xFFFFFFFFLL);
    v11 = *(_DWORD *)(BugCheckParameter3 + 64);
    if ( v11 )
      v12 = MiBytesToMapSystemImage(v11) >> 12;
    else
      v12 = 0LL;
    v21 = 0;
    if ( (*(_DWORD *)(BaseLoaderPortion + 184) & 0x4000) != 0 )
    {
      MiRememberUnloadedDriver(BugCheckParameter3 + 88, v8, v12 << 12);
      if ( v7 && (*(_DWORD *)(BaseLoaderPortion + 184) & 0x400) != 0 )
      {
        v20[0] = v23;
        MiManageSubsectionView(v20, (_QWORD *)(BaseLoaderPortion + 160), 4);
      }
      MiUnlockDriverCode(BugCheckParameter3);
      MiDecommitPages(BugCheckParameter2, v24, v23, 0LL, 0LL, 32, 0LL, (__int64)&v16);
      v13 = *((_QWORD *)&v17 + 1);
      _InterlockedAdd((_DWORD *)&xmmword_140E2D868 + 3, v16 - DWORD2(v17));
      if ( (unsigned int)MmHasImageBeenImportOptimized() )
        MiFreeRetpolineImportInfo();
      if ( !v7 )
      {
        if ( !(unsigned int)MmGetMinWsPagePriority() )
          MiUnloadSystemImageSoftWsles();
        v21 = 1;
      }
      *(_QWORD *)&v16 = v13;
      MiReturnSystemImageCommitment(BugCheckParameter3, &v16);
    }
    if ( (*(_DWORD *)(BaseLoaderPortion + 184) & 0x400) != 0 )
    {
      MiRemoveLoaderEntry((_QWORD *)BugCheckParameter3);
      if ( (PerfGlobalGroupMask[0] & 4) != 0 )
        PerfLogImageUnload(
          (unsigned __int16 *)(BugCheckParameter3 + 72),
          0LL,
          0LL,
          (unsigned __int64)v8,
          *(unsigned int *)(BugCheckParameter3 + 64),
          *(_DWORD *)(BugCheckParameter3 + 120),
          *(_WORD *)(BugCheckParameter3 + 110) & 0xF,
          (*(unsigned __int16 *)(BugCheckParameter3 + 110) >> 4) & 7,
          0);
    }
    else
    {
      MiUpdateDriverLoadInProgress(BugCheckParameter3, v8, *(_DWORD *)(BugCheckParameter3 + 64), 3);
    }
    if ( v7 && (*(_DWORD *)(BaseLoaderPortion + 184) & 0x80000) == 0 )
    {
      v14 = BugCheckParameter2;
    }
    else
    {
      v14 = BugCheckParameter2;
      if ( v12 )
        MiReleasePrivilegedPtes(BugCheckParameter2, (unsigned int)v12);
    }
    if ( v21 )
      MiReleaseDriverPtes(v14, (unsigned int)v12);
    if ( (*(_DWORD *)(BaseLoaderPortion + 184) & 1) != 0 )
      ExFreePoolWithTag(*(PVOID *)(BugCheckParameter3 + 80), 0);
    if ( v7 )
    {
      v15 = *(_QWORD *)(BaseLoaderPortion + 192);
      if ( v15 )
        MiReturnResident((__int64)&MiSystemPartition, v15);
      if ( v8 && v8 != *(__int64 ***)(*(_QWORD *)v23 + 32LL) )
      {
        MiFreePrivateFixupEntryForSystemImage((ULONG_PTR)v8);
        MiReturnSystemImageAddress((unsigned __int64)v8);
      }
      if ( (*(_DWORD *)(BaseLoaderPortion + 184) & 0x800) != 0 )
        MiReturnCrossPartitionControlAreaCharges(v23);
      if ( (*(_DWORD *)(BaseLoaderPortion + 184) & 0x80000) != 0 )
        MiDereferenceControlArea(v23);
      ObDereferenceObjectDeferDeleteWithTag(v7, 0x63536D4Du);
    }
    if ( Lock )
      MmReleaseLoadLock(Lock);
    ExFreePoolWithTag((PVOID)BugCheckParameter3, 0);
  }
}
