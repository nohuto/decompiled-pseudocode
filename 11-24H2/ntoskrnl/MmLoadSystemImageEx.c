/*
 * XREFs of MmLoadSystemImageEx @ 0x1409C87D8
 * Callers:
 *     IopLoadCrashdumpDriver @ 0x1404D88C4 (IopLoadCrashdumpDriver.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1407F13E8 (MiApplyHotPatchToLoadedDriver.c)
 *     MmLoadSystemImage @ 0x1409C7FC0 (MmLoadSystemImage.c)
 *     IopLoadDriver @ 0x1409C90C0 (IopLoadDriver.c)
 *     MiResolveImageReferences @ 0x140A17C94 (MiResolveImageReferences.c)
 *     IopLoadCrashdmpImage @ 0x140AC0E60 (IopLoadCrashdmpImage.c)
 * Callees:
 *     MiReferenceActiveSubsection @ 0x14020E140 (MiReferenceActiveSubsection.c)
 *     MiSectionControlArea @ 0x1402D4800 (MiSectionControlArea.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     MiCheckPurgeAndUpMapCount @ 0x14040EFF0 (MiCheckPurgeAndUpMapCount.c)
 *     MiControlAreaRequiresCharge @ 0x1404166A4 (MiControlAreaRequiresCharge.c)
 *     MiUpdateDriverLoadInProgress @ 0x14042C688 (MiUpdateDriverLoadInProgress.c)
 *     MiSetImageProtection @ 0x140435EEC (MiSetImageProtection.c)
 *     PsAttachSiloToCurrentThread @ 0x14043CF50 (PsAttachSiloToCurrentThread.c)
 *     RtlImageNtHeader @ 0x14043E310 (RtlImageNtHeader.c)
 *     PsDetachSiloFromCurrentThread @ 0x140444750 (PsDetachSiloFromCurrentThread.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x140484160 (PdcCreateWatchdogAroundClientCall.c)
 *     VfDriverLoadSucceeded @ 0x1404B33E0 (VfDriverLoadSucceeded.c)
 *     KasanDriverLoadImage @ 0x1404B7B50 (KasanDriverLoadImage.c)
 *     MmReleaseLoadLock @ 0x1404C9960 (MmReleaseLoadLock.c)
 *     MiGetBaseLoaderPortion @ 0x1404D0508 (MiGetBaseLoaderPortion.c)
 *     MmAcquireLoadLock @ 0x1404D2990 (MmAcquireLoadLock.c)
 *     MiApplyRequiredDriverHotPatches @ 0x1406FBC44 (MiApplyRequiredDriverHotPatches.c)
 *     MiResolveImageImports @ 0x1407E7750 (MiResolveImageImports.c)
 *     MmCallDllInitialize @ 0x1407E7978 (MmCallDllInitialize.c)
 *     MiCompactServiceTable @ 0x1407FB23C (MiCompactServiceTable.c)
 *     KseDriverLoadImage @ 0x140959DBC (KseDriverLoadImage.c)
 *     MiObtainSectionForDriver @ 0x140A18544 (MiObtainSectionForDriver.c)
 *     MiLogFailedDriverLoad @ 0x140A18B7C (MiLogFailedDriverLoad.c)
 *     MiFinalizeDriverCfgState @ 0x140A3D8B8 (MiFinalizeDriverCfgState.c)
 *     MiHandleDriverNonPagedSections @ 0x140A3DA08 (MiHandleDriverNonPagedSections.c)
 *     MiFreeDriverInitialization @ 0x140A3DC80 (MiFreeDriverInitialization.c)
 *     MiGetSystemAddressForImage @ 0x140A5E524 (MiGetSystemAddressForImage.c)
 *     MiProcessLoadConfigForDriver @ 0x140A6587C (MiProcessLoadConfigForDriver.c)
 *     MiValidateStrongCodeDriverImage @ 0x140A768CC (MiValidateStrongCodeDriverImage.c)
 *     MiRelocateAmount @ 0x140A7FDB4 (MiRelocateAmount.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140A8760C (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MiFinalizeKernelScpForSystemImage @ 0x140A88484 (MiFinalizeKernelScpForSystemImage.c)
 *     MiUnloadSystemImage @ 0x140A8AD84 (MiUnloadSystemImage.c)
 *     MiMapSystemImage @ 0x140A8B428 (MiMapSystemImage.c)
 *     MiProtectSystemImage @ 0x140A90AEC (MiProtectSystemImage.c)
 *     MiConstructLoaderEntry @ 0x140A92FE4 (MiConstructLoaderEntry.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x140AAB2DC (MiLogStrongCodeDriverLoadFailure.c)
 *     MiGenerateSystemImageNames @ 0x140ABF64C (MiGenerateSystemImageNames.c)
 *     MiCacheImageSymbols @ 0x140ABFD60 (MiCacheImageSymbols.c)
 *     MiCallImageNotify @ 0x140AC26CC (MiCallImageNotify.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     VfDriverLoadImage @ 0x140BA7DF4 (VfDriverLoadImage.c)
 */

__int64 __fastcall MmLoadSystemImageEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        __int64 *a6,
        __int64 ***a7)
{
  char *v12; // r15
  char v13; // bl
  struct _LIST_ENTRY *v15; // rax
  int active; // edi
  char v17; // r14
  int v18; // eax
  __int64 BaseLoaderPortion; // rsi
  int v20; // ecx
  __int64 v21; // r13
  __int64 v22; // rbx
  int v23; // edi
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 **v26; // rdx
  int v27; // eax
  unsigned __int64 v28; // rbx
  __int64 v29; // rsi
  _DWORD *v30; // r13
  __int64 v31; // rcx
  int v32; // r13d
  __int64 v33; // rdx
  _QWORD *v34; // rbx
  _QWORD *v35; // rdi
  __int64 v36; // rax
  _DWORD *v37; // r13
  unsigned __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rcx
  char v41[4]; // [rsp+38h] [rbp-61h] BYREF
  int v42; // [rsp+3Ch] [rbp-5Dh] BYREF
  __int64 **SystemAddressForImage; // [rsp+40h] [rbp-59h]
  PVOID v44; // [rsp+48h] [rbp-51h] BYREF
  __int64 v45; // [rsp+50h] [rbp-49h] BYREF
  unsigned __int64 v46; // [rsp+58h] [rbp-41h]
  struct _KTHREAD *Lock; // [rsp+60h] [rbp-39h]
  struct _LIST_ENTRY *v48; // [rsp+68h] [rbp-31h]
  __int128 v49; // [rsp+70h] [rbp-29h] BYREF
  PVOID P[2]; // [rsp+80h] [rbp-19h] BYREF
  _OWORD v51[4]; // [rsp+90h] [rbp-9h] BYREF
  int v53; // [rsp+F0h] [rbp+57h]
  char v54; // [rsp+108h] [rbp+6Fh]

  v53 = a2;
  v54 = 1;
  v45 = 0LL;
  *a6 = 0LL;
  v48 = 0LL;
  Lock = 0LL;
  v12 = 0LL;
  v44 = 0LL;
  v13 = 0;
  *a7 = 0LL;
  *(_OWORD *)P = 0LL;
  v49 = 0LL;
  v51[0] = 0LL;
  if ( (a5 & 1) != 0 )
    return 3221226581LL;
  if ( LODWORD(PsGetCurrentServerSiloGlobals()[83].Blink) < (unsigned __int16)NtBuildNumber )
  {
    v15 = (struct _LIST_ENTRY *)PdcCreateWatchdogAroundClientCall();
    v48 = PsAttachSiloToCurrentThread(v15);
    v13 = 1;
  }
  active = MiGenerateSystemImageNames(a1, a2, a3, &v49, v51, P);
  if ( active >= 0 )
  {
    v17 = v13 | 2;
    if ( !a2 )
      v17 = v13;
    Lock = MmAcquireLoadLock();
    v18 = MiObtainSectionForDriver((unsigned int)P, a1, a4, a5, (__int64)&v44);
    v12 = (char *)v44;
    active = v18;
    v13 = v17;
    if ( v44 )
    {
      BaseLoaderPortion = MiGetBaseLoaderPortion((__int64)v44);
      if ( (*(_DWORD *)(BaseLoaderPortion + 184) & 0x100) == 0 )
      {
        *a6 = (__int64)v12;
        *a7 = (__int64 **)*((_QWORD *)v12 + 6);
        v20 = *((_DWORD *)v12 + 26);
        v12 = 0LL;
        active = (v20 & 0x4000000) != 0 ? -1073741411 : -1073741554;
        goto LABEL_11;
      }
      v21 = *((_QWORD *)v12 + 14);
      v46 = MiSectionControlArea(v21);
      v22 = v46;
      v23 = *(_DWORD *)(*(_QWORD *)v46 + 8LL);
      SystemAddressForImage = (__int64 **)MiGetSystemAddressForImage(v12, a5);
      if ( !SystemAddressForImage )
      {
        active = -1073741670;
LABEL_26:
        v13 = v17;
        goto LABEL_12;
      }
      MiCheckPurgeAndUpMapCount(v22, v24, v25);
      v26 = SystemAddressForImage;
      *(_DWORD *)(BaseLoaderPortion + 184) |= 0x80000u;
      MiUpdateDriverLoadInProgress((__int64)v12, v26, v23 << 12, 1);
      v27 = MiControlAreaRequiresCharge(v22, 2u);
      if ( !v27 )
      {
        active = -1073740277;
        goto LABEL_26;
      }
      if ( v27 == 2 )
      {
        active = MiReferenceActiveSubsection((_QWORD *)(v22 + 128), 136, 0x11u);
        v13 = v17;
        if ( active < 0 )
          goto LABEL_11;
        *(_DWORD *)(BaseLoaderPortion + 184) |= 0x800u;
      }
      active = MiMapSystemImage(v21, SystemAddressForImage);
      v13 = v17;
      if ( active >= 0 )
      {
        *(_DWORD *)(BaseLoaderPortion + 184) |= 0x4000u;
        v54 = 0;
        v41[0] = 0;
        v28 = RtlImageNtHeader((unsigned __int64)SystemAddressForImage);
        if ( !v28 )
        {
          active = -1073741279;
          goto LABEL_26;
        }
        if ( *(_WORD *)(v28 + 4) != 0x8664 || *(_WORD *)(v28 + 24) != 523 )
        {
          active = -1073741520;
          goto LABEL_26;
        }
        if ( (MiFlags & 0x8000) != 0 && (a5 & 0x40000000) == 0 )
        {
          active = MiValidateStrongCodeDriverImage(v28);
          if ( active < 0 )
          {
            *(_OWORD *)(v12 + 88) = v49;
            *((_DWORD *)v12 + 30) = *(_DWORD *)(v28 + 88);
            *((_DWORD *)v12 + 39) = *(_DWORD *)(v28 + 8);
            MiLogStrongCodeDriverLoadFailure("SectionWXable");
            goto LABEL_26;
          }
        }
        active = MiConstructLoaderEntry((_DWORD)v12, (unsigned int)&v49, (unsigned int)P, a5, (__int64)&v45);
        v13 = v17;
        if ( active >= 0 )
        {
          v29 = v45;
          MiUpdateDriverLoadInProgress(v45, (__int64 **)v12, a5, 2);
          ExFreePoolWithTag(v12, 0);
          v12 = (char *)v29;
          v30 = (_DWORD *)MiGetBaseLoaderPortion(v29);
          v44 = v30;
          active = KasanDriverLoadImage(v31);
          if ( active >= 0 )
          {
            v30[46] |= 0x20000u;
            v32 = a5 & 0x40000000;
            if ( (a5 & 0x20000000) != 0
              || (active = MiResolveImageImports(v29, v53, (int)v51, (int)&v49, v32 != 0, v41), v54 = v41[0],
                                                                                                active >= 0) )
            {
              v45 = v46 + 128;
              if ( v32 || (active = MiProcessLoadConfigForDriver(v29, v46 + 128), v13 = v17, active >= 0) )
              {
                active = MiFinalizeKernelScpForSystemImage(v29);
                v13 = v17;
                if ( active >= 0 )
                {
                  v34 = (_QWORD *)v46;
                  *((_DWORD *)v44 + 46) |= 0x40000u;
                  if ( (*(_BYTE *)(*(_QWORD *)(*v34 + 56LL) + 46LL) & 0x40) == 0 )
                  {
                    v35 = (__int64 **)((char *)SystemAddressForImage
                                     + *(unsigned int *)(*(_QWORD *)((v34[12] & 0xFFFFFFFFFFFFFFF8uLL) + 32) + 60LL));
                    MiSetImageProtection(v29, (unsigned __int64)v35, 8);
                    v36 = MiRelocateAmount(v34);
                    *v35 = (char *)SystemAddressForImage - v36;
                    if ( v34[18] )
                      MiSetImageProtection(v29, (unsigned __int64)v35, 8);
                  }
                  if ( v32 )
                  {
                    v37 = v44;
                  }
                  else
                  {
                    v42 = 0;
                    VfDriverLoadImage(v29, v33, 0LL);
                    v37 = v44;
                    *((_DWORD *)v44 + 46) |= 0x8000u;
                    active = KseDriverLoadImage(v29, &v42);
                    v13 = v17;
                    if ( active < 0 )
                      goto LABEL_11;
                    v38 = v46;
                    v37[46] |= 0x10000u;
                    active = MiApplyImportOptimizationToRuntimeDriver(v29, v38);
                    if ( active < 0 )
                      goto LABEL_11;
                  }
                  if ( (a5 & 4) == 0 || (active = MiCompactServiceTable(v29), v13 = v17, active >= 0) )
                  {
                    active = MiHandleDriverNonPagedSections(v29, a5);
                    v13 = v17;
                    if ( active >= 0 )
                    {
                      if ( (a5 & 0x40000000) != 0 )
                        goto LABEL_66;
                      active = MiFinalizeDriverCfgState(v29, a5, v45);
                      if ( active >= 0 )
                      {
                        active = MiApplyRequiredDriverHotPatches(v29);
                        if ( active >= 0 )
                        {
                          *(_DWORD *)(v29 + 104) |= 0x41004000u;
                          v39 = MiGetBaseLoaderPortion(v29);
                          *(_DWORD *)(v39 + 184) |= 2u;
                          MiCallImageNotify(v40, a1);
                          MiCacheImageSymbols(v29, P, &v49);
                          if ( !*(_QWORD *)(MiSectionControlArea(*(_QWORD *)(v29 + 112)) + 144)
                            || (*(_DWORD *)(v29 + 104) & 0x8000000) == 0 )
                          {
                            MiProtectSystemImage(v29, 0LL);
                          }
                          VfDriverLoadSucceeded(v29);
LABEL_66:
                          active = 0;
                          if ( (a5 & 8) != 0 && (active = (unsigned int)MmCallDllInitialize(v29), active >= 0) )
                          {
                            MiFreeDriverInitialization(v29);
                          }
                          else
                          {
                            v13 = v17;
                            if ( active < 0 )
                            {
LABEL_12:
                              if ( v12 )
                                MiUnloadSystemImage((ULONG_PTR)v12);
                              goto LABEL_14;
                            }
                          }
                          v37[46] &= ~0x100u;
                          v13 = v17;
                          active = 0;
                          *a6 = v29;
                          *a7 = SystemAddressForImage;
                          goto LABEL_14;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_11:
  if ( active < 0 )
    goto LABEL_12;
LABEL_14:
  if ( Lock )
    MmReleaseLoadLock(Lock);
  if ( active < 0 && !v54 )
    MiLogFailedDriverLoad(a1, 0LL, 0LL, (unsigned int)active);
  if ( (v13 & 2) != 0 )
    ExFreePoolWithTag(P[1], 0);
  if ( (v13 & 1) != 0 )
    PsDetachSiloFromCurrentThread(v48);
  return (unsigned int)active;
}
