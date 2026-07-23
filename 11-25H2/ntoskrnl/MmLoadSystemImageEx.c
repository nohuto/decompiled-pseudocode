/*
 * XREFs of MmLoadSystemImageEx @ 0x1409B0468
 * Callers:
 *     IopLoadCrashdumpDriver @ 0x1404D9844 (IopLoadCrashdumpDriver.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1407E1548 (MiApplyHotPatchToLoadedDriver.c)
 *     MmLoadSystemImage @ 0x1409AFC50 (MmLoadSystemImage.c)
 *     IopLoadDriver @ 0x1409B0D50 (IopLoadDriver.c)
 *     MiResolveImageReferences @ 0x140A1286C (MiResolveImageReferences.c)
 *     IopLoadCrashdmpImage @ 0x140ABCDB0 (IopLoadCrashdmpImage.c)
 * Callees:
 *     MiReferenceActiveSubsection @ 0x1402140B0 (MiReferenceActiveSubsection.c)
 *     MiControlAreaRequiresCharge @ 0x1402A673C (MiControlAreaRequiresCharge.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     MmAcquireLoadLock @ 0x14036CED0 (MmAcquireLoadLock.c)
 *     MmReleaseLoadLock @ 0x14036D060 (MmReleaseLoadLock.c)
 *     MiCheckPurgeAndUpMapCount @ 0x1403A4900 (MiCheckPurgeAndUpMapCount.c)
 *     MiSectionControlArea @ 0x1403B4FE0 (MiSectionControlArea.c)
 *     MiSetImageProtection @ 0x1403F3430 (MiSetImageProtection.c)
 *     MiUpdateDriverLoadInProgress @ 0x140410330 (MiUpdateDriverLoadInProgress.c)
 *     PsAttachSiloToCurrentThread @ 0x14043C9E0 (PsAttachSiloToCurrentThread.c)
 *     RtlImageNtHeader @ 0x14043DFA0 (RtlImageNtHeader.c)
 *     PsDetachSiloFromCurrentThread @ 0x140443110 (PsDetachSiloFromCurrentThread.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x140483BB0 (PdcCreateWatchdogAroundClientCall.c)
 *     VfDriverLoadSucceeded @ 0x1404B3520 (VfDriverLoadSucceeded.c)
 *     KasanDriverLoadImage @ 0x1404B82C0 (KasanDriverLoadImage.c)
 *     MiGetBaseLoaderPortion @ 0x1404D0B80 (MiGetBaseLoaderPortion.c)
 *     MiApplyRequiredDriverHotPatches @ 0x1406EFDD4 (MiApplyRequiredDriverHotPatches.c)
 *     MiResolveImageImports @ 0x1407D7898 (MiResolveImageImports.c)
 *     MmCallDllInitialize @ 0x1407D7AC0 (MmCallDllInitialize.c)
 *     MiCompactServiceTable @ 0x1407EB3AC (MiCompactServiceTable.c)
 *     MiObtainSectionForDriver @ 0x140A13124 (MiObtainSectionForDriver.c)
 *     MiLogFailedDriverLoad @ 0x140A1375C (MiLogFailedDriverLoad.c)
 *     MiFinalizeDriverCfgState @ 0x140A3959C (MiFinalizeDriverCfgState.c)
 *     MiHandleDriverNonPagedSections @ 0x140A396E8 (MiHandleDriverNonPagedSections.c)
 *     MiFreeDriverInitialization @ 0x140A39960 (MiFreeDriverInitialization.c)
 *     KseDriverLoadImage @ 0x140A4FD90 (KseDriverLoadImage.c)
 *     MiGetSystemAddressForImage @ 0x140A5B2CC (MiGetSystemAddressForImage.c)
 *     MiProcessLoadConfigForDriver @ 0x140A631A4 (MiProcessLoadConfigForDriver.c)
 *     MiValidateStrongCodeDriverImage @ 0x140A747FC (MiValidateStrongCodeDriverImage.c)
 *     MiRelocateAmount @ 0x140A7C77C (MiRelocateAmount.c)
 *     MiFinalizeKernelScpForSystemImage @ 0x140A83988 (MiFinalizeKernelScpForSystemImage.c)
 *     MiUnloadSystemImage @ 0x140A862D4 (MiUnloadSystemImage.c)
 *     MiMapSystemImage @ 0x140A869D8 (MiMapSystemImage.c)
 *     MiProtectSystemImage @ 0x140A8B9E8 (MiProtectSystemImage.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140A8DB7C (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MiConstructLoaderEntry @ 0x140A8E4EC (MiConstructLoaderEntry.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x140AA5D1C (MiLogStrongCodeDriverLoadFailure.c)
 *     MiGenerateSystemImageNames @ 0x140ABB4B0 (MiGenerateSystemImageNames.c)
 *     MiCacheImageSymbols @ 0x140ABB930 (MiCacheImageSymbols.c)
 *     MiCallImageNotify @ 0x140ABE8DC (MiCallImageNotify.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     VfDriverLoadImage @ 0x140B97E14 (VfDriverLoadImage.c)
 */

__int64 __fastcall MmLoadSystemImageEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        __int64 *a6,
        PVOID *a7)
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
  _QWORD *v24; // rdx
  int v25; // eax
  PIMAGE_NT_HEADERS v26; // rbx
  __int64 v27; // rsi
  _DWORD *v28; // r13
  __int64 v29; // rcx
  int v30; // r13d
  __int64 v31; // rdx
  _QWORD *v32; // rbx
  _QWORD *v33; // rdi
  __int64 v34; // rax
  _DWORD *v35; // r13
  unsigned __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rcx
  char v39[4]; // [rsp+38h] [rbp-61h] BYREF
  int v40; // [rsp+3Ch] [rbp-5Dh] BYREF
  PVOID BaseOfImage; // [rsp+40h] [rbp-59h]
  PVOID v42; // [rsp+48h] [rbp-51h] BYREF
  __int64 v43; // [rsp+50h] [rbp-49h] BYREF
  unsigned __int64 v44; // [rsp+58h] [rbp-41h]
  struct _KTHREAD *Lock; // [rsp+60h] [rbp-39h]
  struct _LIST_ENTRY *v46; // [rsp+68h] [rbp-31h]
  __int128 v47; // [rsp+70h] [rbp-29h] BYREF
  PVOID P[2]; // [rsp+80h] [rbp-19h] BYREF
  _OWORD v49[4]; // [rsp+90h] [rbp-9h] BYREF
  int v51; // [rsp+F0h] [rbp+57h]
  char v52; // [rsp+108h] [rbp+6Fh]

  v51 = a2;
  v52 = 1;
  v43 = 0LL;
  *a6 = 0LL;
  v46 = 0LL;
  Lock = 0LL;
  v12 = 0LL;
  v42 = 0LL;
  v13 = 0;
  *a7 = 0LL;
  *(_OWORD *)P = 0LL;
  v47 = 0LL;
  v49[0] = 0LL;
  if ( (a5 & 1) != 0 )
    return 3221226581LL;
  if ( LODWORD(PsGetCurrentServerSiloGlobals()[83].Blink) < (unsigned __int16)NtBuildNumber )
  {
    v15 = (struct _LIST_ENTRY *)PdcCreateWatchdogAroundClientCall();
    v46 = PsAttachSiloToCurrentThread(v15);
    v13 = 1;
  }
  active = MiGenerateSystemImageNames(a1, a2, a3, &v47, v49, P);
  if ( active >= 0 )
  {
    v17 = v13 | 2;
    if ( !a2 )
      v17 = v13;
    Lock = (struct _KTHREAD *)MmAcquireLoadLock();
    v18 = MiObtainSectionForDriver((unsigned int)P, a1, a4, a5, (__int64)&v42);
    v12 = (char *)v42;
    active = v18;
    v13 = v17;
    if ( v42 )
    {
      BaseLoaderPortion = MiGetBaseLoaderPortion((__int64)v42);
      if ( (*(_DWORD *)(BaseLoaderPortion + 184) & 0x100) == 0 )
      {
        *a6 = (__int64)v12;
        *a7 = (PVOID)*((_QWORD *)v12 + 6);
        v20 = *((_DWORD *)v12 + 26);
        v12 = 0LL;
        active = (v20 & 0x4000000) != 0 ? -1073741411 : -1073741554;
        goto LABEL_11;
      }
      v21 = *((_QWORD *)v12 + 14);
      v44 = MiSectionControlArea(v21);
      v22 = v44;
      v23 = *(_DWORD *)(*(_QWORD *)v44 + 8LL);
      BaseOfImage = (PVOID)MiGetSystemAddressForImage(v12, a5);
      if ( !BaseOfImage )
      {
        active = -1073741670;
LABEL_26:
        v13 = v17;
        goto LABEL_12;
      }
      MiCheckPurgeAndUpMapCount(v22);
      v24 = BaseOfImage;
      *(_DWORD *)(BaseLoaderPortion + 184) |= 0x80000u;
      MiUpdateDriverLoadInProgress((__int64)v12, v24, v23 << 12, 1);
      v25 = MiControlAreaRequiresCharge(v22, 2u);
      if ( !v25 )
      {
        active = -1073740277;
        goto LABEL_26;
      }
      if ( v25 == 2 )
      {
        active = MiReferenceActiveSubsection((_QWORD *)(v22 + 128), 136, 0x11u);
        v13 = v17;
        if ( active < 0 )
          goto LABEL_11;
        *(_DWORD *)(BaseLoaderPortion + 184) |= 0x800u;
      }
      active = MiMapSystemImage(v21, BaseOfImage);
      v13 = v17;
      if ( active >= 0 )
      {
        *(_DWORD *)(BaseLoaderPortion + 184) |= 0x4000u;
        v52 = 0;
        v39[0] = 0;
        v26 = RtlImageNtHeader(BaseOfImage);
        if ( !v26 )
        {
          active = -1073741279;
          goto LABEL_26;
        }
        if ( v26->FileHeader.Machine != 0x8664 || v26->OptionalHeader.Magic != 523 )
        {
          active = -1073741520;
          goto LABEL_26;
        }
        if ( (MiFlags & 0x8000) != 0 && (a5 & 0x40000000) == 0 )
        {
          active = MiValidateStrongCodeDriverImage(v26);
          if ( active < 0 )
          {
            *(_OWORD *)(v12 + 88) = v47;
            *((_DWORD *)v12 + 30) = v26->OptionalHeader.CheckSum;
            *((_DWORD *)v12 + 39) = v26->FileHeader.TimeDateStamp;
            MiLogStrongCodeDriverLoadFailure("SectionWXable");
            goto LABEL_26;
          }
        }
        active = MiConstructLoaderEntry((_DWORD)v12, (unsigned int)&v47, (unsigned int)P, a5, (__int64)&v43);
        v13 = v17;
        if ( active >= 0 )
        {
          v27 = v43;
          MiUpdateDriverLoadInProgress(v43, v12, a5, 2);
          ExFreePoolWithTag(v12, 0);
          v12 = (char *)v27;
          v28 = (_DWORD *)MiGetBaseLoaderPortion(v27);
          v42 = v28;
          active = KasanDriverLoadImage(v29);
          if ( active >= 0 )
          {
            v28[46] |= 0x20000u;
            v30 = a5 & 0x40000000;
            if ( (a5 & 0x20000000) != 0
              || (active = MiResolveImageImports(v27, v51, (int)v49, (int)&v47, v30 != 0, v39), v52 = v39[0],
                                                                                                active >= 0) )
            {
              v43 = v44 + 128;
              if ( v30 || (active = MiProcessLoadConfigForDriver(v27, v44 + 128), v13 = v17, active >= 0) )
              {
                active = MiFinalizeKernelScpForSystemImage(v27);
                v13 = v17;
                if ( active >= 0 )
                {
                  v32 = (_QWORD *)v44;
                  *((_DWORD *)v42 + 46) |= 0x40000u;
                  if ( (*(_BYTE *)(*(_QWORD *)(*v32 + 56LL) + 46LL) & 0x40) == 0 )
                  {
                    v33 = (char *)BaseOfImage
                        + *(unsigned int *)(*(_QWORD *)((v32[12] & 0xFFFFFFFFFFFFFFF8uLL) + 32) + 60LL);
                    MiSetImageProtection(v27, (unsigned __int64)v33, 8);
                    v34 = MiRelocateAmount(v32);
                    *v33 = (char *)BaseOfImage - v34;
                    if ( v32[18] )
                      MiSetImageProtection(v27, (unsigned __int64)v33, 8);
                  }
                  if ( v30 )
                  {
                    v35 = v42;
                  }
                  else
                  {
                    v40 = 0;
                    VfDriverLoadImage(v27, v31, 0LL);
                    v35 = v42;
                    *((_DWORD *)v42 + 46) |= 0x8000u;
                    active = KseDriverLoadImage(v27, &v40);
                    v13 = v17;
                    if ( active < 0 )
                      goto LABEL_11;
                    v36 = v44;
                    v35[46] |= 0x10000u;
                    active = MiApplyImportOptimizationToRuntimeDriver(v27, v36);
                    if ( active < 0 )
                      goto LABEL_11;
                  }
                  if ( (a5 & 4) == 0 || (active = MiCompactServiceTable(v27), v13 = v17, active >= 0) )
                  {
                    active = MiHandleDriverNonPagedSections(v27, a5);
                    v13 = v17;
                    if ( active >= 0 )
                    {
                      if ( (a5 & 0x40000000) != 0 )
                        goto LABEL_66;
                      active = MiFinalizeDriverCfgState(v27, a5, v43);
                      if ( active >= 0 )
                      {
                        active = MiApplyRequiredDriverHotPatches(v27);
                        if ( active >= 0 )
                        {
                          *(_DWORD *)(v27 + 104) |= 0x41004000u;
                          v37 = MiGetBaseLoaderPortion(v27);
                          *(_DWORD *)(v37 + 184) |= 2u;
                          MiCallImageNotify(v38, a1);
                          MiCacheImageSymbols(v27, P, &v47);
                          if ( !*(_QWORD *)(MiSectionControlArea(*(_QWORD *)(v27 + 112)) + 144)
                            || (*(_DWORD *)(v27 + 104) & 0x8000000) == 0 )
                          {
                            MiProtectSystemImage(v27, 0LL);
                          }
                          VfDriverLoadSucceeded(v27);
LABEL_66:
                          active = 0;
                          if ( (a5 & 8) != 0 && (active = (unsigned int)MmCallDllInitialize(v27), active >= 0) )
                          {
                            MiFreeDriverInitialization(v27);
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
                          v35[46] &= ~0x100u;
                          v13 = v17;
                          active = 0;
                          *a6 = v27;
                          *a7 = BaseOfImage;
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
  if ( active < 0 && !v52 )
    MiLogFailedDriverLoad(a1, 0LL, 0LL, (unsigned int)active);
  if ( (v13 & 2) != 0 )
    ExFreePoolWithTag(P[1], 0);
  if ( (v13 & 1) != 0 )
    PsDetachSiloFromCurrentThread(v46);
  return (unsigned int)active;
}
