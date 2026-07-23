/*
 * XREFs of MiApplyDriverHotPatch @ 0x1407F122C
 * Callers:
 *     MiApplyHotPatchToLoadedDriver @ 0x1407F19B8 (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     MiGetAnyMultiplexedVm @ 0x140439200 (MiGetAnyMultiplexedVm.c)
 *     MiGetBaseLoaderPortion @ 0x1404C96FC (MiGetBaseLoaderPortion.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     VslApplyHotPatch @ 0x140589EBC (VslApplyHotPatch.c)
 *     MiLinkHotPatchToBase @ 0x14067E3BC (MiLinkHotPatchToBase.c)
 *     MiUpdatePatchInProgress @ 0x14067EAA4 (MiUpdatePatchInProgress.c)
 *     RtlGetHotPatchSize @ 0x1406A44AC (RtlGetHotPatchSize.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     VslObtainHotPatchUndoTable @ 0x14070D850 (VslObtainHotPatchUndoTable.c)
 *     MiAddEntryToImportList @ 0x1407E78FC (MiAddEntryToImportList.c)
 *     MiPrepareDriverPatchState @ 0x1407E83FC (MiPrepareDriverPatchState.c)
 *     MiApplyHotPatchToDriverDataPages @ 0x1407F1858 (MiApplyHotPatchToDriverDataPages.c)
 *     MiIdentifyImageDiscardablePages @ 0x1407F3514 (MiIdentifyImageDiscardablePages.c)
 *     MiIdentifyPatchImageDataPages @ 0x1407F361C (MiIdentifyPatchImageDataPages.c)
 *     MiInvokePatchCallback @ 0x1407F3C98 (MiInvokePatchCallback.c)
 *     MiPrepareDriverForHotPatch @ 0x1407F5B04 (MiPrepareDriverForHotPatch.c)
 *     RtlFindHotPatchBaseMachine @ 0x14082F88C (RtlFindHotPatchBaseMachine.c)
 *     RtlFindHotPatchInformation @ 0x14082F8F4 (RtlFindHotPatchInformation.c)
 *     RtlValidateHotPatchBase @ 0x14082FBA0 (RtlValidateHotPatchBase.c)
 *     RtlFindExportedRoutineByName @ 0x140907090 (RtlFindExportedRoutineByName.c)
 *     MiGetSectionStrongImageReference @ 0x14093AE14 (MiGetSectionStrongImageReference.c)
 *     MiAllocateKernelCfgBitmapPageTables @ 0x140A33C7C (MiAllocateKernelCfgBitmapPageTables.c)
 *     MiUnlockDriverPages @ 0x140A33EDC (MiUnlockDriverPages.c)
 *     MiFreeLoadedImportList @ 0x140A9A0D8 (MiFreeLoadedImportList.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiApplyDriverHotPatch(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 result; // rax
  __int64 HotPatchInformation; // rax
  _DWORD *v8; // r14
  __int64 HotPatchBaseMachine; // rax
  unsigned int v10; // r12d
  unsigned int v11; // ebx
  __int64 v12; // r13
  ULONG v13; // ebx
  int SectionStrongImageReference; // ebx
  char *AnyMultiplexedVm; // rax
  __int64 *v16; // rcx
  __int64 v17; // r12
  __int64 v18; // r12
  __int64 v19; // r13
  _DWORD *v20; // r12
  unsigned __int64 v21; // r13
  int HotPatchSize; // r8d
  int v23; // eax
  int v24; // eax
  __int64 *v25; // rcx
  int v26; // [rsp+40h] [rbp-C0h]
  int v27; // [rsp+44h] [rbp-BCh]
  __int64 v28; // [rsp+48h] [rbp-B8h]
  __int64 BaseLoaderPortion; // [rsp+50h] [rbp-B0h]
  _QWORD v30[3]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD *v31; // [rsp+78h] [rbp-88h]
  _DWORD *v32; // [rsp+80h] [rbp-80h]
  PVOID P; // [rsp+88h] [rbp-78h]
  PVOID ExportedRoutineByName; // [rsp+90h] [rbp-70h] BYREF
  int v35; // [rsp+98h] [rbp-68h]
  __int64 v36; // [rsp+A0h] [rbp-60h]
  __int64 *v37; // [rsp+A8h] [rbp-58h]
  __int64 v38[3]; // [rsp+B0h] [rbp-50h] BYREF
  int v39; // [rsp+C8h] [rbp-38h]
  __int64 v40[3]; // [rsp+120h] [rbp+20h] BYREF
  int v41; // [rsp+138h] [rbp+38h]
  char v42[8]; // [rsp+190h] [rbp+90h] BYREF
  __int64 v43; // [rsp+198h] [rbp+98h]
  ULONG v44; // [rsp+1A0h] [rbp+A0h]

  v3 = 0LL;
  v36 = a3;
  v26 = 0;
  v27 = 0;
  memset_0(v30, 0, 0x40uLL);
  BaseLoaderPortion = MiGetBaseLoaderPortion(a2);
  if ( (*(_DWORD *)(BaseLoaderPortion + 184) & 0x80u) != 0 )
    return 3221225496LL;
  v28 = MiGetBaseLoaderPortion(a1);
  HotPatchInformation = RtlFindHotPatchInformation(*(PVOID *)(a1 + 48));
  v31 = (_DWORD *)HotPatchInformation;
  v8 = (_DWORD *)HotPatchInformation;
  if ( !HotPatchInformation )
    return 3221225595LL;
  HotPatchBaseMachine = RtlFindHotPatchBaseMachine(HotPatchInformation, 34404LL);
  v10 = *(_DWORD *)(a1 + 64);
  v11 = *(_DWORD *)(a2 + 64);
  v12 = HotPatchBaseMachine;
  if ( !(unsigned __int8)RtlValidateHotPatchBase((_DWORD)v8, HotPatchBaseMachine, v11, v10) )
    return 3221225595LL;
  memset_0(v38, 0, 0x68uLL);
  v38[0] = a2;
  v38[1] = v12;
  v39 = (v11 >> 12) + ((v11 & 0xFFF) != 0);
  memset_0(v40, 0, 0x68uLL);
  v40[0] = a1;
  v41 = (v10 >> 12) + ((v10 & 0xFFF) != 0);
  if ( !*(_QWORD *)(BaseLoaderPortion + 248) )
    goto LABEL_11;
  memset_0(v42, 0, 0x68uLL);
  v43 = *(_QWORD *)(a2 + 48);
  result = VslpEnterIumSecureMode(2u, 0x4Bu, 0, (__int64)v42);
  if ( (int)result < 0 )
    return result;
  v13 = v44;
  if ( !v44 )
    goto LABEL_11;
  P = (PVOID)MiAllocatePool(0x100uLL, v44, 1414877256);
  if ( !P )
    return 3221225626LL;
  SectionStrongImageReference = VslObtainHotPatchUndoTable(*(PVOID *)(a2 + 48), (__int64)P, v13);
  if ( SectionStrongImageReference >= 0 )
  {
LABEL_11:
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    v16 = *(__int64 **)(a2 + 136);
    v17 = (__int64)AnyMultiplexedVm;
    v37 = v16;
    if ( (*(_DWORD *)(v28 + 184) & 0x80u) == 0 && v16 != (__int64 *)1 )
    {
      v3 = MiAddEntryToImportList(v16, a1);
      if ( !v3 )
      {
        SectionStrongImageReference = -1073741670;
        goto LABEL_51;
      }
    }
    SectionStrongImageReference = MiPrepareDriverPatchState(v38, v17);
    if ( SectionStrongImageReference < 0 )
      goto LABEL_51;
    SectionStrongImageReference = MiPrepareDriverPatchState(v40, v17);
    if ( SectionStrongImageReference < 0 )
      goto LABEL_51;
    v18 = *(unsigned int *)(v12 + 24);
    v19 = v36;
    v30[0] = v38;
    v20 = (_DWORD *)((char *)v8 + v18);
    v32 = v20;
    v30[1] = v40;
    v30[2] = v36;
    SectionStrongImageReference = MiIdentifyPatchImageDataPages(v30);
    if ( SectionStrongImageReference < 0 )
      goto LABEL_51;
    SectionStrongImageReference = MiIdentifyImageDiscardablePages(v38);
    if ( SectionStrongImageReference < 0 )
      goto LABEL_51;
    SectionStrongImageReference = MiPrepareDriverForHotPatch(v30);
    if ( SectionStrongImageReference < 0 )
      goto LABEL_51;
    v21 = *(_QWORD *)(v19 + 96) & 0xFFFFFFFFFFFFFFF8uLL;
    SectionStrongImageReference = MiGetSectionStrongImageReference(v21);
    if ( SectionStrongImageReference < 0 )
      goto LABEL_51;
    if ( (*(_DWORD *)(v28 + 184) & 0x80u) != 0 )
    {
LABEL_38:
      if ( (*(_DWORD *)(v28 + 184) & 0x80u) == 0 )
      {
        MiUpdatePatchInProgress(a2, a1, 0);
        v27 = 1;
      }
      v24 = VslApplyHotPatch(
              *(_QWORD *)(v21 + 64),
              *(_QWORD *)(a1 + 112),
              *(_QWORD *)(a2 + 48),
              a2,
              *(_QWORD *)(a1 + 48),
              a1,
              1,
              0LL);
      SectionStrongImageReference = v24;
      if ( v24 >= 0 )
      {
        if ( ExportedRoutineByName )
        {
          v35 = 1;
          MiInvokePatchCallback(a1, &ExportedRoutineByName);
          v26 = 0;
          v8 = v31;
        }
        if ( v3 )
        {
          v25 = v37;
          *(_QWORD *)(a2 + 136) = v3;
          MiFreeLoadedImportList(v25);
          v3 = 0LL;
        }
        *(_QWORD *)(BaseLoaderPortion + 248) = a1;
        if ( (*(_DWORD *)(v28 + 184) & 0x80u) == 0 )
        {
          MiLinkHotPatchToBase(a2, a1, v8[2]);
          goto LABEL_51;
        }
      }
      else if ( v24 == -1073740628 )
      {
        KeBugCheckEx(0x1Au, 0x515C2uLL, *(_QWORD *)(a2 + 48), *(_QWORD *)(a1 + 48), 0LL);
      }
      if ( v27 )
        MiUpdatePatchInProgress(a2, a1, 1);
      goto LABEL_51;
    }
    if ( (MiFlags & 0x40000) != 0 )
    {
      if ( (v8[8] & 2) != 0 )
      {
LABEL_28:
        SectionStrongImageReference = MiAllocateKernelCfgBitmapPageTables(
                                        *(_QWORD *)(a1 + 48),
                                        *(unsigned int *)(a1 + 64),
                                        0LL);
        if ( SectionStrongImageReference < 0 )
          goto LABEL_51;
      }
      else
      {
        HotPatchSize = RtlGetHotPatchSize(v8);
        while ( *v20 )
        {
          if ( (*v20 & 0xFC000) == 0x44000 )
            goto LABEL_28;
          v20 += HotPatchSize * (*v20 & 0xFFFu) + 1;
        }
      }
    }
    v23 = VslApplyHotPatch(
            *(_QWORD *)(v21 + 64),
            *(_QWORD *)(a1 + 112),
            *(_QWORD *)(a2 + 48),
            a2,
            *(_QWORD *)(a1 + 48),
            a1,
            3,
            0LL);
    SectionStrongImageReference = v23;
    if ( v23 < 0 )
    {
      if ( v23 == -1073740628 )
        KeBugCheckEx(0x1Au, 0x515C1uLL, *(_QWORD *)(a2 + 48), *(_QWORD *)(a1 + 48), 0LL);
      goto LABEL_51;
    }
    SectionStrongImageReference = MiApplyHotPatchToDriverDataPages(v30);
    if ( SectionStrongImageReference >= 0 )
    {
      if ( (*(_DWORD *)(BaseLoaderPortion + 184) & 2) != 0 )
        ExportedRoutineByName = RtlFindExportedRoutineByName(*(PVOID *)(a1 + 48), "__PatchMainCallout__");
      if ( ExportedRoutineByName )
      {
        v35 = 0;
        SectionStrongImageReference = MiInvokePatchCallback(a1, &ExportedRoutineByName);
        if ( SectionStrongImageReference < 0 )
          goto LABEL_51;
        v8 = v31;
        v26 = 1;
      }
      goto LABEL_38;
    }
  }
LABEL_51:
  MiUnlockDriverPages(v38);
  MiUnlockDriverPages(v40);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v3 )
    MiFreeLoadedImportList(v3);
  if ( v26 )
  {
    v35 = 2;
    MiInvokePatchCallback(a1, &ExportedRoutineByName);
  }
  return (unsigned int)SectionStrongImageReference;
}
