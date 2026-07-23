/*
 * XREFs of MiInitializeLoadedModuleList @ 0x140C5D4A8
 * Callers:
 *     MiInitSystem @ 0x140C4FDD0 (MiInitSystem.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x140233240 (RtlpxLookupFunctionTable.c)
 *     MiAcquireLoadLock @ 0x1402BBB18 (MiAcquireLoadLock.c)
 *     RtlRemoveInvertedFunctionTable @ 0x1402EF4F4 (RtlRemoveInvertedFunctionTable.c)
 *     MiUpdateDriverLoadInProgress @ 0x1402EFC50 (MiUpdateDriverLoadInProgress.c)
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     MmGetLoadedModuleImageAdditionalTablesAddress @ 0x1403D7CB0 (MmGetLoadedModuleImageAdditionalTablesAddress.c)
 *     ExInitializeResourceLite2 @ 0x1403EAA00 (ExInitializeResourceLite2.c)
 *     KasanDriverLoadImageInternal @ 0x1404B24C0 (KasanDriverLoadImageInternal.c)
 *     MmReleaseLoadLock @ 0x1404C2E10 (MmReleaseLoadLock.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     MxInstallMoreMemory @ 0x14066D8C0 (MxInstallMoreMemory.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiCaptureBootDriverRetpolineInfo @ 0x1407F0CBC (MiCaptureBootDriverRetpolineInfo.c)
 *     VslReserveProtectedPages @ 0x140A72A2C (VslReserveProtectedPages.c)
 *     MiConstructLoaderEntry @ 0x140A8F794 (MiConstructLoaderEntry.c)
 *     VslReapplyBootIndirectPatches @ 0x140C1BB74 (VslReapplyBootIndirectPatches.c)
 *     RtlInitializeHistoryTable @ 0x140C38F50 (RtlInitializeHistoryTable.c)
 *     VfInitBootDriversLoaded @ 0x140C3D398 (VfInitBootDriversLoaded.c)
 *     MiCreateBootDriverHotPatchLinkage @ 0x140C58888 (MiCreateBootDriverHotPatchLinkage.c)
 *     MiUpdateBootDriverHotPatchImports @ 0x140C589F0 (MiUpdateBootDriverHotPatchImports.c)
 *     MiInitializeKernelCfg @ 0x140C5BA6C (MiInitializeKernelCfg.c)
 *     MiBuildImportsForBootDrivers @ 0x140C5CAB4 (MiBuildImportsForBootDrivers.c)
 *     MiLocateKernelSections @ 0x140C5DA6C (MiLocateKernelSections.c)
 *     MiReloadBootLoadedDrivers @ 0x140C5DBC4 (MiReloadBootLoadedDrivers.c)
 */

void __fastcall MiInitializeLoadedModuleList(__int64 a1)
{
  bool v2; // r12
  _QWORD *v3; // r15
  __int64 v4; // rbx
  struct _KTHREAD *Lock; // rsi
  __int64 v6; // rdi
  unsigned __int64 LoadedModuleImageAdditionalTablesAddress; // rax
  int v8; // esi
  unsigned __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rbx
  __int64 *i; // rbx
  int v13; // eax
  PVOID *j; // rbx
  int v15; // [rsp+38h] [rbp-79h] BYREF
  __int64 v16; // [rsp+40h] [rbp-71h] BYREF
  __int128 v17; // [rsp+48h] [rbp-69h] BYREF
  __int64 v18; // [rsp+58h] [rbp-59h]
  _BYTE v19[112]; // [rsp+68h] [rbp-49h] BYREF

  v15 = 0;
  v16 = 0LL;
  ExInitializeResourceLite2(&PsLoadedModuleResource, -1);
  MiReloadBootLoadedDrivers(a1);
  qword_140E2D948 = (__int64)&qword_140E2D940;
  qword_140E2D940 = (__int64)&qword_140E2D940;
  qword_140E2D978 = (__int64)&qword_140E2D970;
  qword_140E2D970 = &qword_140E2D970;
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
    if ( (int)MiConstructLoaderEntry(v4, (const void **)(v4 + 88), (const void **)(v4 + 72), 0x10000000, &v16) < 0 )
      goto LABEL_29;
    v6 = v16;
    MiUpdateDriverLoadInProgress(v16, (_QWORD *)v4, 0x10000000, 2);
    MmReleaseLoadLock(Lock);
    *(_QWORD *)(v4 + 144) = v6;
    *(_DWORD *)(v6 + 184) |= 2u;
    if ( qword_140E2D980[0] == v4 )
      qword_140E2D980[0] = v6;
    if ( *(PVOID *)(v6 + 48) == PsNtosImageBase && (MiFlags & 0x40000) == 0 )
    {
      LoadedModuleImageAdditionalTablesAddress = MmGetLoadedModuleImageAdditionalTablesAddress(v6, &v15);
      if ( LoadedModuleImageAdditionalTablesAddress )
        v8 = v15 + LoadedModuleImageAdditionalTablesAddress - *(_DWORD *)(v6 + 48);
      else
        v8 = *(_DWORD *)(v6 + 64);
      v9 = *(_QWORD *)(v6 + 48);
      v18 = 0LL;
      v17 = 0LL;
      RtlpxLookupFunctionTable(v9, (__int64)&v17);
      qword_141200040 = v18;
      xmmword_141200030 = v17;
      LODWORD(qword_141200040) = v8;
      RtlRemoveInvertedFunctionTable(v9);
    }
    if ( v2 && (*(_DWORD *)(v6 + 104) & 0x800000) == 0 )
    {
      v10 = MiCaptureBootDriverRetpolineInfo(*(PVOID *)(v6 + 48), *(unsigned int *)(v6 + 64), v6 + 280);
      if ( (int)(v10 + 0x80000000) >= 0 && v10 != -1073741637 )
        goto LABEL_29;
    }
    if ( (int)KasanDriverLoadImageInternal(v6, 0) < 0 )
      goto LABEL_29;
    *(_DWORD *)(v6 + 184) |= 0x20000u;
  }
  v11 = qword_140E2D9D8;
  VfInitBootDriversLoaded();
  if ( v11 != qword_140E2D9D8 )
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
    memset_0(v19, 0, 0x68uLL);
    v13 = VslpEnterIumSecureMode(2u, 0xD8u, 0, (__int64)v19);
    if ( v13 < 0 )
      KeBugCheckEx(0x422u, v13, 0LL, 2uLL, 0LL);
  }
  if ( _bittest64(&MiFlags, 0xEu) )
  {
    for ( j = (PVOID *)PsLoadedModuleList; j != &PsLoadedModuleList; j = (PVOID *)*j )
      VslReserveProtectedPages(0LL, (__int64)j[6], 0, 2u);
  }
  MiFlags |= 0x80000000uLL;
  RtlInitializeHistoryTable();
}
