/*
 * XREFs of MiInitializeLoadedModuleList @ 0x140C49F8C
 * Callers:
 *     MiInitSystem @ 0x140C3C930 (MiInitSystem.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x14025BE40 (RtlpxLookupFunctionTable.c)
 *     VslpEnterIumSecureMode @ 0x140282F50 (VslpEnterIumSecureMode.c)
 *     ExInitializeResourceLite2 @ 0x1402D6940 (ExInitializeResourceLite2.c)
 *     MmReleaseLoadLock @ 0x14036D060 (MmReleaseLoadLock.c)
 *     MiAcquireLoadLock @ 0x14036DF38 (MiAcquireLoadLock.c)
 *     MmGetLoadedModuleImageAdditionalTablesAddress @ 0x1403E09E0 (MmGetLoadedModuleImageAdditionalTablesAddress.c)
 *     RtlRemoveInvertedFunctionTable @ 0x14040F6A0 (RtlRemoveInvertedFunctionTable.c)
 *     MiUpdateDriverLoadInProgress @ 0x140410330 (MiUpdateDriverLoadInProgress.c)
 *     KasanDriverLoadImageInternal @ 0x1404B82E0 (KasanDriverLoadImageInternal.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     MxInstallMoreMemory @ 0x140660BB0 (MxInstallMoreMemory.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MiCaptureBootDriverRetpolineInfo @ 0x1407E084C (MiCaptureBootDriverRetpolineInfo.c)
 *     VslReserveProtectedPages @ 0x140A769CC (VslReserveProtectedPages.c)
 *     MiConstructLoaderEntry @ 0x140A8E4EC (MiConstructLoaderEntry.c)
 *     VslReapplyBootIndirectPatches @ 0x140C08A9C (VslReapplyBootIndirectPatches.c)
 *     RtlInitializeHistoryTable @ 0x140C25B40 (RtlInitializeHistoryTable.c)
 *     VfInitBootDriversLoaded @ 0x140C29F60 (VfInitBootDriversLoaded.c)
 *     MiCreateBootDriverHotPatchLinkage @ 0x140C45418 (MiCreateBootDriverHotPatchLinkage.c)
 *     MiUpdateBootDriverHotPatchImports @ 0x140C45580 (MiUpdateBootDriverHotPatchImports.c)
 *     MiInitializeKernelCfg @ 0x140C485AC (MiInitializeKernelCfg.c)
 *     MiBuildImportsForBootDrivers @ 0x140C49598 (MiBuildImportsForBootDrivers.c)
 *     MiLocateKernelSections @ 0x140C4A550 (MiLocateKernelSections.c)
 *     MiReloadBootLoadedDrivers @ 0x140C4A6A8 (MiReloadBootLoadedDrivers.c)
 */

void __fastcall MiInitializeLoadedModuleList(__int64 a1)
{
  bool v2; // r12
  _QWORD *v3; // r15
  __int64 v4; // rbx
  struct _KTHREAD *Lock; // rsi
  __int64 v6; // rdi
  __int64 v7; // rax
  unsigned __int64 LoadedModuleImageAdditionalTablesAddress; // rax
  int v9; // esi
  unsigned __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rbx
  __int64 *i; // rbx
  int v14; // eax
  PVOID *j; // rbx
  int v16; // [rsp+38h] [rbp-79h] BYREF
  __int64 v17; // [rsp+40h] [rbp-71h] BYREF
  __int128 v18; // [rsp+48h] [rbp-69h] BYREF
  __int64 v19; // [rsp+58h] [rbp-59h]
  _BYTE v20[112]; // [rsp+68h] [rbp-49h] BYREF

  v16 = 0;
  v17 = 0LL;
  ExInitializeResourceLite2(&PsLoadedModuleResource, -1);
  MiReloadBootLoadedDrivers(a1);
  qword_140E2D5C8 = (__int64)&qword_140E2D5C0;
  qword_140E2D5C0 = (__int64)&qword_140E2D5C0;
  qword_140E2D5F8 = (__int64)&qword_140E2D5F0;
  qword_140E2D5F0 = &qword_140E2D5F0;
  *(&PsLoadedModuleList + 1) = &PsLoadedModuleList;
  PsLoadedModuleList = &PsLoadedModuleList;
  v2 = (KiSpeculationFeatures & 0x20000000000LL) != 0 || (KiFeatureSettings & 0x20000) == 0;
  v3 = *(_QWORD **)(a1 + 16);
  MiLocateKernelSections(v3);
  while ( v3 != (_QWORD *)(a1 + 16) )
  {
    v4 = (__int64)v3;
    v3 = (_QWORD *)*v3;
    Lock = MiAcquireLoadLock(1);
    if ( (int)MiConstructLoaderEntry(v4, (const void **)(v4 + 88), (const void **)(v4 + 72), 0x10000000, &v17) < 0 )
      goto LABEL_29;
    v6 = v17;
    MiUpdateDriverLoadInProgress(v17, (_QWORD *)v4, 0x10000000, 2);
    MmReleaseLoadLock(Lock);
    *(_QWORD *)(v4 + 144) = v6;
    *(_DWORD *)(v6 + 184) |= 2u;
    if ( qword_140E2D600[0] == v4 )
      qword_140E2D600[0] = v6;
    v7 = *(_QWORD *)&KeNumberProcessorsGroup0[9];
    if ( *(_QWORD *)(v6 + 48) == v7 && (MiFlags & 0x40000) == 0 )
    {
      LoadedModuleImageAdditionalTablesAddress = MmGetLoadedModuleImageAdditionalTablesAddress(v6, &v16);
      if ( LoadedModuleImageAdditionalTablesAddress )
        v9 = v16 + LoadedModuleImageAdditionalTablesAddress - *(_DWORD *)(v6 + 48);
      else
        v9 = *(_DWORD *)(v6 + 64);
      v10 = *(_QWORD *)(v6 + 48);
      v19 = 0LL;
      v18 = 0LL;
      RtlpxLookupFunctionTable(v10, (__int64)&v18);
      qword_141200040 = v19;
      xmmword_141200030 = v18;
      LODWORD(qword_141200040) = v9;
      RtlRemoveInvertedFunctionTable(v10);
    }
    if ( v2 && (*(_DWORD *)(v6 + 104) & 0x800000) == 0 )
    {
      v11 = MiCaptureBootDriverRetpolineInfo(*(PVOID *)(v6 + 48), *(unsigned int *)(v6 + 64), v6 + 280);
      if ( (int)(v11 + 0x80000000) >= 0 && v11 != -1073741637 )
        goto LABEL_29;
    }
    if ( (int)KasanDriverLoadImageInternal(v6, 0) < 0 )
      goto LABEL_29;
    *(_DWORD *)(v6 + 184) |= 0x20000u;
  }
  v12 = qword_140E2D658;
  VfInitBootDriversLoaded();
  if ( v12 != qword_140E2D658 )
  {
    for ( i = *(__int64 **)(*(_QWORD *)(a1 + 240) + 3784LL);
          i != (__int64 *)(*(_QWORD *)(a1 + 240) + 3784LL);
          i = (__int64 *)*i )
    {
      if ( (i[5] & 3) == 1 && (int)VslReapplyBootIndirectPatches(*(_QWORD *)(i[10] + 48)) < 0 )
        goto LABEL_29;
    }
  }
  MiCreateBootDriverHotPatchLinkage(a1);
  MiBuildImportsForBootDrivers();
  if ( (int)MiUpdateBootDriverHotPatchImports() < 0 )
LABEL_29:
    MxInstallMoreMemory(32);
  MiInitializeKernelCfg();
  if ( (MiFlags & 0x40000) != 0 || (KiSpeculationFeatures & 0x20000000000LL) != 0 && _bittest64(&MiFlags, 0xEu) )
  {
    memset_0(v20, 0, 0x68uLL);
    v14 = VslpEnterIumSecureMode(2u, 0xD8u, 0, (__int64)v20);
    if ( v14 < 0 )
      KeBugCheckEx(0x422u, v14, 0LL, 2uLL, 0LL);
  }
  if ( _bittest64(&MiFlags, 0xEu) )
  {
    for ( j = (PVOID *)PsLoadedModuleList; j != &PsLoadedModuleList; j = (PVOID *)*j )
      VslReserveProtectedPages(0LL, (__int64)j[6], 0, 2u);
  }
  MiFlags |= 0x80000000uLL;
  RtlInitializeHistoryTable();
}
