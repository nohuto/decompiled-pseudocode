/*
 * XREFs of ObReferenceObjectByNameEx @ 0x1408679A4
 * Callers:
 *     ObInitServerSilo @ 0x14074301C (ObInitServerSilo.c)
 *     NtQueryOpenSubKeys @ 0x1407CFFA0 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1407D01B0 (NtQueryOpenSubKeysEx.c)
 *     AlpcpCreateClientPort @ 0x1408649C0 (AlpcpCreateClientPort.c)
 *     CmUnloadKey @ 0x14092B0F8 (CmUnloadKey.c)
 *     CmpResolveHiveLoadConflict @ 0x140A86DC4 (CmpResolveHiveLoadConflict.c)
 *     CmObReferenceObjectByName @ 0x140BB9CF8 (CmObReferenceObjectByName.c)
 * Callees:
 *     ObpReleaseLookupContext @ 0x14025E7E0 (ObpReleaseLookupContext.c)
 *     PsGetCurrentSilo @ 0x140402420 (PsGetCurrentSilo.c)
 *     SeClearLearningModeObjectInformation @ 0x140408FE0 (SeClearLearningModeObjectInformation.c)
 *     HalPutDmaAdapter @ 0x1404833B0 (HalPutDmaAdapter.c)
 *     SeSetLearningModeObjectInformation @ 0x1404BBE8C (SeSetLearningModeObjectInformation.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B3890 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ObpFreeObjectNameBuffer @ 0x14083E740 (ObpFreeObjectNameBuffer.c)
 *     SeCreateAccessState @ 0x14083F490 (SeCreateAccessState.c)
 *     SeDeleteAccessState @ 0x140840F80 (SeDeleteAccessState.c)
 *     ObpAdjustAccessMask @ 0x140867800 (ObpAdjustAccessMask.c)
 *     ObpCheckObjectReference @ 0x14086802C (ObpCheckObjectReference.c)
 *     ObpCaptureObjectCreateInformation @ 0x14089CCA0 (ObpCaptureObjectCreateInformation.c)
 *     ObpLookupObjectName @ 0x14089D210 (ObpLookupObjectName.c)
 *     SeReleaseSecurityDescriptor @ 0x1409209D0 (SeReleaseSecurityDescriptor.c)
 *     ExFreePool @ 0x140B72CB0 (ExFreePool.c)
 */

__int64 __fastcall ObReferenceObjectByNameEx(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        char a5,
        __int64 a6,
        PADAPTER_OBJECT *a7)
{
  int v10; // r12d
  struct _KPRCB *CurrentPrcb; // r14
  _GENERAL_LOOKASIDE *P; // rsi
  int v13; // edx
  int v14; // ecx
  __int64 v15; // rbx
  _GENERAL_LOOKASIDE *L; // rsi
  __int64 v17; // r9
  __int64 Size; // rdx
  __int64 Tag; // r8
  __int64 Type; // rcx
  char v21; // si
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  struct _LIST_ENTRY *CurrentSilo; // rax
  __int64 v26; // r9
  PADAPTER_OBJECT v27; // rcx
  unsigned __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  struct _KPRCB *v31; // rdx
  _GENERAL_LOOKASIDE *v32; // rcx
  void (__stdcall *FreeEx)(PVOID); // rdx
  PADAPTER_OBJECT DmaAdapter; // [rsp+78h] [rbp-31h] BYREF
  __int128 v36; // [rsp+80h] [rbp-29h] BYREF
  __int128 v37; // [rsp+90h] [rbp-19h] BYREF
  __int128 v38; // [rsp+A0h] [rbp-9h]
  __int128 v39; // [rsp+B0h] [rbp+7h]
  __int64 v40; // [rsp+C0h] [rbp+17h]
  int Information; // [rsp+F8h] [rbp+4Fh] BYREF

  DmaAdapter = 0LL;
  v40 = 0LL;
  v10 = a1;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  if ( !a1 || !a4 )
    return 3221225485LL;
  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[8].P;
  ++P->TotalAllocates;
  v15 = (__int64)RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( v15 )
    goto LABEL_6;
  ++P->AllocateMisses;
  L = CurrentPrcb->PPLookasideList[8].L;
  ++L->TotalAllocates;
  v15 = (__int64)RtlpInterlockedPopEntrySList(&L->ListHead);
  if ( v15
    || (Size = L->Size,
        Tag = L->Tag,
        Type = (unsigned int)L->Type,
        ++L->AllocateMisses,
        (v15 = guard_dispatch_icall_no_overrides(Type, Size, Tag, v17)) != 0) )
  {
LABEL_6:
    *(_DWORD *)v15 = CurrentPrcb->Number;
  }
  if ( !v15 )
    return 3221225626LL;
  v21 = a5;
  LOBYTE(v13) = a5;
  LOBYTE(v14) = a5;
  Information = ObpCaptureObjectCreateInformation(v14, v13, v10, (unsigned int)&v36, v15 + 160, 1);
  if ( Information >= 0 )
  {
    if ( !a2 )
    {
      Information = SeCreateAccessState((_QWORD *)v15, (_QWORD *)(v15 + 224), a3, (_DWORD *)(a4 + 76));
      if ( Information < 0 )
      {
LABEL_20:
        if ( a2 == v15 )
          SeDeleteAccessState(a2, v24, v22, v23);
        v30 = *(_QWORD *)(v15 + 192);
        if ( v30 )
        {
          LOBYTE(v24) = *(_BYTE *)(v15 + 176);
          LOBYTE(v22) = 1;
          SeReleaseSecurityDescriptor(v30, v24, v22);
          *(_QWORD *)(v15 + 192) = 0LL;
        }
        if ( *((_QWORD *)&v36 + 1) )
          ObpFreeObjectNameBuffer((__int64)&v36, v24, v22, v23);
        goto LABEL_26;
      }
      a2 = v15;
    }
    Information = ObpAdjustAccessMask(a2);
    if ( Information >= 0 )
    {
      CurrentSilo = PsGetCurrentSilo();
      Information = ObpLookupObjectName(
                      *(_QWORD *)(v15 + 168),
                      v21,
                      a6,
                      0LL,
                      0LL,
                      (__int64)CurrentSilo,
                      a2,
                      v15 + 448,
                      0LL,
                      (__int64)&DmaAdapter);
      if ( Information >= 0 )
      {
        ObpReleaseLookupContext(v15 + 448);
        v27 = DmaAdapter;
        v28 = (unsigned __int8)ObHeaderCookie ^ LOBYTE(DmaAdapter[-2].DmaOperations) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)DmaAdapter - 48) >> 8);
        v29 = ObTypeIndexTable[v28];
        if ( (*(_DWORD *)(v29 + 72) & *(_DWORD *)(v15 + 160)) != 0 )
        {
          HalPutDmaAdapter(DmaAdapter);
          Information = -1073741811;
        }
        else
        {
          if ( SepLearningModeTokenCount )
          {
            *(_QWORD *)&v38 = v29 + 16;
            *((_QWORD *)&v38 + 1) = &v36;
            *(_QWORD *)&v39 = *(_QWORD *)(v15 + 168);
            SeSetLearningModeObjectInformation((__int64)&v37);
            v27 = DmaAdapter;
          }
          LOBYTE(v26) = v21;
          if ( (unsigned __int8)ObpCheckObjectReference(v27, a2, v28, v26, &Information) )
            *a7 = DmaAdapter;
          else
            HalPutDmaAdapter(DmaAdapter);
          SeClearLearningModeObjectInformation();
        }
      }
    }
    goto LABEL_20;
  }
LABEL_26:
  v31 = KeGetCurrentPrcb();
  v32 = v31->PPLookasideList[8].P;
  ++v32->TotalFrees;
  if ( LOWORD(v32->ListHead.Alignment) < v32->Depth
    || (++v32->FreeMisses,
        v32 = v31->PPLookasideList[8].L,
        ++v32->TotalFrees,
        LOWORD(v32->ListHead.Alignment) < v32->Depth) )
  {
    RtlpInterlockedPushEntrySList(&v32->ListHead, (PSLIST_ENTRY)v15);
  }
  else
  {
    ++v32->FreeMisses;
    FreeEx = (void (__stdcall *)(PVOID))v32->FreeEx;
    if ( FreeEx == ExFreePool )
      ExFreePool((PVOID)v15);
    else
      guard_dispatch_icall_no_overrides(v15, FreeEx, v22, v23);
  }
  return (unsigned int)Information;
}
