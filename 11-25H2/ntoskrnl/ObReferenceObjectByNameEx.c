/*
 * XREFs of ObReferenceObjectByNameEx @ 0x140914400
 * Callers:
 *     ObInitServerSilo @ 0x140736FFC (ObInitServerSilo.c)
 *     NtQueryOpenSubKeys @ 0x1407C08A0 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1407C0AA0 (NtQueryOpenSubKeysEx.c)
 *     CmUnloadKey @ 0x1408644F8 (CmUnloadKey.c)
 *     AlpcpCreateClientPort @ 0x140916890 (AlpcpCreateClientPort.c)
 *     CmpResolveHiveLoadConflict @ 0x140A82524 (CmpResolveHiveLoadConflict.c)
 *     CmObReferenceObjectByName @ 0x140BA9D80 (CmObReferenceObjectByName.c)
 * Callees:
 *     ObpReleaseLookupContext @ 0x1402BC6D0 (ObpReleaseLookupContext.c)
 *     PsGetCurrentSilo @ 0x1403FA570 (PsGetCurrentSilo.c)
 *     SeClearLearningModeObjectInformation @ 0x140401830 (SeClearLearningModeObjectInformation.c)
 *     HalPutDmaAdapter @ 0x140482570 (HalPutDmaAdapter.c)
 *     SeSetLearningModeObjectInformation @ 0x1404BCD2C (SeSetLearningModeObjectInformation.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     SeDeleteAccessState @ 0x140844A10 (SeDeleteAccessState.c)
 *     ObpCaptureObjectCreateInformation @ 0x14085C5F0 (ObpCaptureObjectCreateInformation.c)
 *     ObpLookupObjectName @ 0x14085CB70 (ObpLookupObjectName.c)
 *     ObpFreeObjectNameBuffer @ 0x14089F1A0 (ObpFreeObjectNameBuffer.c)
 *     SeCreateAccessState @ 0x1409154F0 (SeCreateAccessState.c)
 *     ObpCheckObjectReference @ 0x1409156D0 (ObpCheckObjectReference.c)
 *     ObpAdjustAccessMask @ 0x1409196D0 (ObpAdjustAccessMask.c)
 *     SeReleaseSecurityDescriptor @ 0x14092E1B0 (SeReleaseSecurityDescriptor.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 */

__int64 __fastcall ObReferenceObjectByNameEx(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        struct _OBJECT_TYPE *a4,
        char a5,
        __int64 a6,
        PADAPTER_OBJECT *a7)
{
  struct _KPRCB *CurrentPrcb; // r14
  _GENERAL_LOOKASIDE *P; // rsi
  __int64 v13; // rbx
  unsigned __int8 v14; // si
  int *v15; // r14
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  struct _LIST_ENTRY *CurrentSilo; // rax
  __int64 v20; // r9
  PADAPTER_OBJECT v21; // rcx
  unsigned __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  struct _KPRCB *v25; // rdx
  _GENERAL_LOOKASIDE *v26; // rcx
  _GENERAL_LOOKASIDE *L; // rsi
  __int64 Type; // rcx
  PADAPTER_OBJECT DmaAdapter; // [rsp+78h] [rbp-31h] BYREF
  __int128 v31; // [rsp+80h] [rbp-29h] BYREF
  __int128 v32; // [rsp+90h] [rbp-19h] BYREF
  __int128 v33; // [rsp+A0h] [rbp-9h]
  __int128 v34; // [rsp+B0h] [rbp+7h]
  __int64 v35; // [rsp+C0h] [rbp+17h]
  int AccessState; // [rsp+F8h] [rbp+4Fh] BYREF

  DmaAdapter = 0LL;
  v35 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  if ( !a1 || !a4 )
    return 3221225485LL;
  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[8].P;
  ++P->TotalAllocates;
  v13 = (__int64)RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( v13
    || (++P->AllocateMisses,
        L = CurrentPrcb->PPLookasideList[8].L,
        ++L->TotalAllocates,
        (v13 = (__int64)RtlpInterlockedPopEntrySList(&L->ListHead)) != 0)
    || (Type = (unsigned int)L->Type, ++L->AllocateMisses, (v13 = guard_dispatch_icall_no_overrides(Type)) != 0) )
  {
    *(_DWORD *)v13 = CurrentPrcb->Number;
  }
  if ( !v13 )
    return 3221225626LL;
  v14 = a5;
  v15 = (int *)(v13 + 160);
  AccessState = ObpCaptureObjectCreateInformation(a5, a5, a1, &v31, v13 + 160, 1u);
  if ( AccessState >= 0 )
  {
    if ( !a2 )
    {
      AccessState = SeCreateAccessState(v13, v13 + 224, a3, &a4->TypeInfo.GenericMapping);
      if ( AccessState < 0 )
      {
LABEL_18:
        if ( a2 == v13 )
          SeDeleteAccessState(a2);
        v24 = *(_QWORD *)(v13 + 192);
        if ( v24 )
        {
          LOBYTE(v16) = *(_BYTE *)(v13 + 176);
          LOBYTE(v17) = 1;
          SeReleaseSecurityDescriptor(v24, v16, v17, v18);
          *(_QWORD *)(v13 + 192) = 0LL;
        }
        if ( *((_QWORD *)&v31 + 1) )
          ObpFreeObjectNameBuffer((__int64)&v31);
        goto LABEL_24;
      }
      a2 = v13;
    }
    AccessState = ObpAdjustAccessMask(a2);
    if ( AccessState >= 0 )
    {
      CurrentSilo = PsGetCurrentSilo();
      AccessState = ObpLookupObjectName(
                      *(_QWORD *)(v13 + 168),
                      (__int64)&v31,
                      *v15,
                      a4,
                      v14,
                      a6,
                      0LL,
                      0LL,
                      (__int64)CurrentSilo,
                      a2,
                      (ULONG_PTR *)(v13 + 448),
                      0LL,
                      (ULONG_PTR *)&DmaAdapter);
      if ( AccessState >= 0 )
      {
        ObpReleaseLookupContext(v13 + 448);
        v21 = DmaAdapter;
        v22 = (unsigned __int8)ObHeaderCookie ^ LOBYTE(DmaAdapter[-2].DmaOperations) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)DmaAdapter - 48) >> 8);
        v23 = ObTypeIndexTable[v22];
        if ( (*(_DWORD *)(v23 + 72) & *v15) != 0 )
        {
          HalPutDmaAdapter(DmaAdapter);
          AccessState = -1073741811;
        }
        else
        {
          if ( SepLearningModeTokenCount )
          {
            *(_QWORD *)&v33 = v23 + 16;
            *((_QWORD *)&v33 + 1) = &v31;
            *(_QWORD *)&v34 = *(_QWORD *)(v13 + 168);
            SeSetLearningModeObjectInformation((__int64)&v32);
            v21 = DmaAdapter;
          }
          LOBYTE(v20) = v14;
          if ( (unsigned __int8)ObpCheckObjectReference(v21, a2, v22, v20, &AccessState) )
            *a7 = DmaAdapter;
          else
            HalPutDmaAdapter(DmaAdapter);
          SeClearLearningModeObjectInformation();
        }
      }
    }
    goto LABEL_18;
  }
LABEL_24:
  v25 = KeGetCurrentPrcb();
  v26 = v25->PPLookasideList[8].P;
  ++v26->TotalFrees;
  if ( LOWORD(v26->ListHead.Alignment) < v26->Depth
    || (++v26->FreeMisses,
        v26 = v25->PPLookasideList[8].L,
        ++v26->TotalFrees,
        LOWORD(v26->ListHead.Alignment) < v26->Depth) )
  {
    RtlpInterlockedPushEntrySList(&v26->ListHead, (PSLIST_ENTRY)v13);
  }
  else
  {
    ++v26->FreeMisses;
    if ( (void (__stdcall *)(PVOID))v26->FreeEx == ExFreePool )
      ExFreePool((PVOID)v13);
    else
      guard_dispatch_icall_no_overrides(v13);
  }
  return (unsigned int)AccessState;
}
