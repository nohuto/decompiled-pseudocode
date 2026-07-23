/*
 * XREFs of ObReferenceObjectByNameEx @ 0x14086BC94
 * Callers:
 *     ObInitServerSilo @ 0x140740F4C (ObInitServerSilo.c)
 *     NtQueryOpenSubKeys @ 0x1407D0490 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1407D06A0 (NtQueryOpenSubKeysEx.c)
 *     AlpcpCreateClientPort @ 0x140868FD0 (AlpcpCreateClientPort.c)
 *     CmUnloadKey @ 0x14092D238 (CmUnloadKey.c)
 *     CmpResolveHiveLoadConflict @ 0x140A8189C (CmpResolveHiveLoadConflict.c)
 *     CmObReferenceObjectByName @ 0x140BBBCF8 (CmObReferenceObjectByName.c)
 * Callees:
 *     ObpReleaseLookupContext @ 0x14028EDF0 (ObpReleaseLookupContext.c)
 *     PsGetCurrentSilo @ 0x1403FCA20 (PsGetCurrentSilo.c)
 *     SeClearLearningModeObjectInformation @ 0x1404014C0 (SeClearLearningModeObjectInformation.c)
 *     HalPutDmaAdapter @ 0x14047E920 (HalPutDmaAdapter.c)
 *     SeSetLearningModeObjectInformation @ 0x1404B6F50 (SeSetLearningModeObjectInformation.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ObpFreeObjectNameBuffer @ 0x14083AD40 (ObpFreeObjectNameBuffer.c)
 *     SeCreateAccessState @ 0x14083B750 (SeCreateAccessState.c)
 *     SeDeleteAccessState @ 0x14083D240 (SeDeleteAccessState.c)
 *     ObpAdjustAccessMask @ 0x14086BAF0 (ObpAdjustAccessMask.c)
 *     ObpCheckObjectReference @ 0x14086C31C (ObpCheckObjectReference.c)
 *     ObpCaptureObjectCreateInformation @ 0x1408A5340 (ObpCaptureObjectCreateInformation.c)
 *     ObpLookupObjectName @ 0x1408A58B0 (ObpLookupObjectName.c)
 *     SeReleaseSecurityDescriptor @ 0x140912CC0 (SeReleaseSecurityDescriptor.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
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
  __int64 Size; // rdx
  __int64 Type; // rcx
  char v19; // si
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  struct _LIST_ENTRY *CurrentSilo; // rax
  __int64 v24; // r9
  PADAPTER_OBJECT v25; // rcx
  unsigned __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  struct _KPRCB *v29; // rdx
  _GENERAL_LOOKASIDE *v30; // rcx
  void (__stdcall *FreeEx)(PVOID); // rdx
  PADAPTER_OBJECT DmaAdapter; // [rsp+78h] [rbp-31h] BYREF
  __int128 v34; // [rsp+80h] [rbp-29h] BYREF
  __int128 v35; // [rsp+90h] [rbp-19h] BYREF
  __int128 v36; // [rsp+A0h] [rbp-9h]
  __int128 v37; // [rsp+B0h] [rbp+7h]
  __int64 v38; // [rsp+C0h] [rbp+17h]
  int Information; // [rsp+F8h] [rbp+4Fh] BYREF

  DmaAdapter = 0LL;
  v38 = 0LL;
  v10 = a1;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
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
        Type = (unsigned int)L->Type,
        ++L->AllocateMisses,
        (v15 = guard_dispatch_icall_no_overrides(Type, Size)) != 0) )
  {
LABEL_6:
    *(_DWORD *)v15 = CurrentPrcb->Number;
  }
  if ( !v15 )
    return 3221225626LL;
  v19 = a5;
  LOBYTE(v13) = a5;
  LOBYTE(v14) = a5;
  Information = ObpCaptureObjectCreateInformation(v14, v13, v10, (unsigned int)&v34, v15 + 160, 1);
  if ( Information >= 0 )
  {
    if ( !a2 )
    {
      Information = SeCreateAccessState((_QWORD *)v15, (_QWORD *)(v15 + 224), a3, (_DWORD *)(a4 + 76));
      if ( Information < 0 )
      {
LABEL_20:
        if ( a2 == v15 )
          SeDeleteAccessState(a2);
        v28 = *(_QWORD *)(v15 + 192);
        if ( v28 )
        {
          LOBYTE(v20) = *(_BYTE *)(v15 + 176);
          LOBYTE(v21) = 1;
          SeReleaseSecurityDescriptor(v28, v20, v21, v22);
          *(_QWORD *)(v15 + 192) = 0LL;
        }
        if ( *((_QWORD *)&v34 + 1) )
          ObpFreeObjectNameBuffer((__int64)&v34);
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
                      v19,
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
        v25 = DmaAdapter;
        v26 = (unsigned __int8)ObHeaderCookie ^ LOBYTE(DmaAdapter[-2].DmaOperations) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)DmaAdapter - 48) >> 8);
        v27 = ObTypeIndexTable[v26];
        if ( (*(_DWORD *)(v27 + 72) & *(_DWORD *)(v15 + 160)) != 0 )
        {
          HalPutDmaAdapter(DmaAdapter);
          Information = -1073741811;
        }
        else
        {
          if ( SepLearningModeTokenCount )
          {
            *(_QWORD *)&v36 = v27 + 16;
            *((_QWORD *)&v36 + 1) = &v34;
            *(_QWORD *)&v37 = *(_QWORD *)(v15 + 168);
            SeSetLearningModeObjectInformation((__int64)&v35);
            v25 = DmaAdapter;
          }
          LOBYTE(v24) = v19;
          if ( (unsigned __int8)ObpCheckObjectReference(v25, a2, v26, v24, &Information) )
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
  v29 = KeGetCurrentPrcb();
  v30 = v29->PPLookasideList[8].P;
  ++v30->TotalFrees;
  if ( LOWORD(v30->ListHead.Alignment) < v30->Depth
    || (++v30->FreeMisses,
        v30 = v29->PPLookasideList[8].L,
        ++v30->TotalFrees,
        LOWORD(v30->ListHead.Alignment) < v30->Depth) )
  {
    RtlpInterlockedPushEntrySList(&v30->ListHead, (PSLIST_ENTRY)v15);
  }
  else
  {
    ++v30->FreeMisses;
    FreeEx = (void (__stdcall *)(PVOID))v30->FreeEx;
    if ( FreeEx == ExFreePool )
      ExFreePool((PVOID)v15);
    else
      guard_dispatch_icall_no_overrides(v15, FreeEx);
  }
  return (unsigned int)Information;
}
