/*
 * XREFs of IopAllocRealFileObject @ 0x14085A290
 * Callers:
 *     IopParseDevice @ 0x14085F1F0 (IopParseDevice.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 *     PsIsServerSilo @ 0x1403104CC (PsIsServerSilo.c)
 *     PsReleaseSiloHardReference @ 0x140373EC0 (PsReleaseSiloHardReference.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     IopGetSetSpecificExtension @ 0x14042F260 (IopGetSetSpecificExtension.c)
 *     IoGetSilo @ 0x1404352E0 (IoGetSilo.c)
 *     IopSetFileObjectExtensionFlag @ 0x1404383F0 (IopSetFileObjectExtensionFlag.c)
 *     PsIsHostSilo @ 0x14043DF70 (PsIsHostSilo.c)
 *     IopCheckInitiatorHint @ 0x14044F064 (IopCheckInitiatorHint.c)
 *     PsAcquireSiloHardReference @ 0x14045F3C0 (PsAcquireSiloHardReference.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     SeCaptureSubjectContext @ 0x140858670 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 *     IopRetrieveTransactionParameters @ 0x14085A150 (IopRetrieveTransactionParameters.c)
 *     ObpAllocateObject @ 0x14085AAF0 (ObpAllocateObject.c)
 *     ObpCaptureObjectCreateInformation @ 0x14085C5F0 (ObpCaptureObjectCreateInformation.c)
 *     IopRetrieveTransactionParametersFromOpenPacket @ 0x140861C74 (IopRetrieveTransactionParametersFromOpenPacket.c)
 *     ObpRegisterObject @ 0x140AB24BC (ObpRegisterObject.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopAllocRealFileObject(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int8 a5,
        __int64 a6,
        _QWORD *a7,
        char a8,
        unsigned int a9)
{
  struct _KPRCB *CurrentPrcb; // rbx
  POBJECT_TYPE *v10; // r15
  _GENERAL_LOOKASIDE *P; // r14
  __int64 v13; // rdi
  int Information; // r14d
  int v15; // ecx
  struct _KPRCB *v16; // rdx
  _GENERAL_LOOKASIDE *v17; // rcx
  void *v18; // rcx
  struct _KPRCB *v19; // rdx
  _GENERAL_LOOKASIDE *v20; // rcx
  _QWORD *v21; // rdi
  __int64 v22; // rcx
  int v23; // ecx
  _QWORD *v24; // rbx
  LUID v26; // rbx
  __int64 v27; // rcx
  _DWORD *v28; // rdi
  _QWORD *v29; // rax
  struct _KPRCB *v30; // rdx
  _GENERAL_LOOKASIDE *v31; // rcx
  unsigned __int64 v32; // rax
  __int64 v33; // rdx
  _GENERAL_LOOKASIDE *L; // r14
  __int64 Type; // rcx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rbx
  _DWORD *v39; // rbx
  __int64 Silo; // rax
  __int64 v41; // rdx
  __int16 v42; // [rsp+40h] [rbp-89h] BYREF
  _QWORD *v43; // [rsp+48h] [rbp-81h] BYREF
  unsigned int v44; // [rsp+50h] [rbp-79h]
  PSLIST_ENTRY ListEntry[2]; // [rsp+58h] [rbp-71h] BYREF
  __int64 v46; // [rsp+68h] [rbp-61h] BYREF
  __int64 v47; // [rsp+70h] [rbp-59h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+78h] [rbp-51h] BYREF
  __int128 v49; // [rsp+98h] [rbp-31h]
  __int64 v50; // [rsp+A8h] [rbp-21h]
  int v51; // [rsp+B0h] [rbp-19h]
  int v52; // [rsp+B4h] [rbp-15h]
  LUID v53; // [rsp+B8h] [rbp-11h]
  int v54; // [rsp+C0h] [rbp-9h]

  CurrentPrcb = KeGetCurrentPrcb();
  v10 = IoFileObjectType;
  P = CurrentPrcb->PPLookasideList[4].P;
  v43 = a7;
  v42 = 0;
  v44 = a4;
  ++P->TotalAllocates;
  v50 = a3;
  v47 = a2;
  SubjectContext.ClientToken = (PACCESS_TOKEN)48;
  *(_QWORD *)&SubjectContext.ImpersonationLevel = 0LL;
  SubjectContext.ProcessAuditId = (PVOID)a4;
  SubjectContext.PrimaryToken = 0LL;
  v49 = 0LL;
  LOBYTE(v42) = 1;
  *(_OWORD *)ListEntry = 0LL;
  v46 = 0LL;
  v13 = (__int64)RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( v13
    || (++P->AllocateMisses,
        L = CurrentPrcb->PPLookasideList[4].L,
        ++L->TotalAllocates,
        (v13 = (__int64)RtlpInterlockedPopEntrySList(&L->ListHead)) != 0)
    || (Type = (unsigned int)L->Type, ++L->AllocateMisses, (v13 = guard_dispatch_icall_no_overrides(Type)) != 0) )
  {
    *(_DWORD *)v13 = CurrentPrcb->Number;
  }
  if ( !v13 )
  {
    Information = -1073741670;
LABEL_64:
    if ( !a8 )
      *(_QWORD *)a1 = 0LL;
    return (unsigned int)Information;
  }
  Information = ObpCaptureObjectCreateInformation(0, a5, (unsigned int)&SubjectContext, (unsigned int)ListEntry, v13, 0);
  if ( Information < 0 )
  {
    v30 = KeGetCurrentPrcb();
    v31 = v30->PPLookasideList[4].P;
    ++v31->TotalFrees;
    if ( LOWORD(v31->ListHead.Alignment) < v31->Depth
      || (++v31->FreeMisses,
          v31 = v30->PPLookasideList[4].L,
          ++v31->TotalFrees,
          LOWORD(v31->ListHead.Alignment) < v31->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v31->ListHead, (PSLIST_ENTRY)v13);
    }
    else
    {
      ++v31->FreeMisses;
      if ( (void (__stdcall *)(PVOID))v31->FreeEx == ExFreePool )
        ExFreePool((PVOID)v13);
      else
        guard_dispatch_icall_no_overrides(v13);
    }
    goto LABEL_64;
  }
  if ( (*(_DWORD *)v13 & (_DWORD)v10[9]) != 0 )
  {
    Information = -1073741811;
LABEL_9:
    if ( ListEntry[1] )
    {
      if ( WORD1(ListEntry[0]) == 248 )
      {
        v16 = KeGetCurrentPrcb();
        v17 = v16->PPLookasideList[5].P;
        ++v17->TotalFrees;
        if ( LOWORD(v17->ListHead.Alignment) < v17->Depth
          || (++v17->FreeMisses,
              v17 = v16->PPLookasideList[5].L,
              ++v17->TotalFrees,
              LOWORD(v17->ListHead.Alignment) < v17->Depth) )
        {
          RtlpInterlockedPushEntrySList(&v17->ListHead, ListEntry[1]);
        }
        else
        {
          ++v17->FreeMisses;
          if ( (void (__stdcall *)(PVOID))v17->FreeEx == ExFreePool )
            ExFreePool(ListEntry[1]);
          else
            guard_dispatch_icall_no_overrides(ListEntry[1]);
        }
      }
      else
      {
        ExFreePoolWithTag(ListEntry[1], 0);
      }
    }
    v18 = *(void **)(v13 + 32);
    if ( v18 )
    {
      if ( *(_BYTE *)(v13 + 16) <= 1u )
        ExFreePoolWithTag(v18, 0);
      *(_QWORD *)(v13 + 32) = 0LL;
    }
    v19 = KeGetCurrentPrcb();
    v20 = v19->PPLookasideList[4].P;
    ++v20->TotalFrees;
    if ( LOWORD(v20->ListHead.Alignment) < v20->Depth
      || (++v20->FreeMisses,
          v20 = v19->PPLookasideList[4].L,
          ++v20->TotalFrees,
          LOWORD(v20->ListHead.Alignment) < v20->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v20->ListHead, (PSLIST_ENTRY)v13);
    }
    else
    {
      ++v20->FreeMisses;
      if ( (void (__stdcall *)(PVOID))v20->FreeEx == ExFreePool )
        ExFreePool((PVOID)v13);
      else
        guard_dispatch_icall_no_overrides(v13);
    }
    goto LABEL_64;
  }
  if ( (*(_DWORD *)v13 & 0x10) != 0 )
  {
    v26 = SeCreatePermanentPrivilege;
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    SeCaptureSubjectContext(&SubjectContext);
    v51 = 1;
    v52 = 1;
    v53 = v26;
    v54 = 0;
    SeReleaseSubjectContext(&SubjectContext);
  }
  v15 = *((_DWORD *)v10 + 27);
  *(_DWORD *)(v13 + 20) = *((_DWORD *)v10 + 26);
  *(_DWORD *)(v13 + 24) = v15;
  Information = ObpAllocateObject(v13, a5, (_DWORD)v10, (unsigned int)ListEntry, 216, (__int64)&v46, (__int64)&v42);
  if ( Information < 0 )
    goto LABEL_9;
  v38 = v46;
  if ( ObpTraceFlags )
  {
    ObpRegisterObject(v46);
    ObpPushStackInfo(v38, 1, 1u, 0x746C6644u);
  }
  v39 = (_DWORD *)(v38 + 48);
  memset_0(v39, 0, 0xD8uLL);
  if ( a8 )
  {
    *((_QWORD *)v39 + 3) = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
    *((_QWORD *)v39 + 4) = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
    *((_WORD *)v39 + 44) = *(_WORD *)(*(_QWORD *)a1 + 88LL);
    *((_WORD *)v39 + 45) = *(_WORD *)(*(_QWORD *)a1 + 90LL);
    *((_QWORD *)v39 + 12) = *(_QWORD *)(*(_QWORD *)a1 + 96LL);
    v27 = *(_QWORD *)(*(_QWORD *)a1 + 208LL);
    if ( v27 )
      *((_QWORD *)v39 + 26) = v27;
    goto LABEL_30;
  }
  v21 = v43;
  if ( (*(_DWORD *)(a6 + 152) & 0x47) == 0 && PsIsHostSilo(v43[1]) )
  {
    v22 = *(_QWORD *)(a6 + 40);
    if ( !v22 )
      goto LABEL_23;
    Silo = IoGetSilo(v22);
    if ( PsIsHostSilo(Silo) )
      goto LABEL_23;
  }
  if ( (*(_DWORD *)(a6 + 152) & 2) != 0 )
  {
    Information = IopSetFileObjectExtensionFlag((__int64)v39, 1u);
    if ( Information < 0 )
      goto LABEL_30;
  }
  if ( (*(_DWORD *)(a6 + 152) & 1) != 0 )
  {
    v43 = 0LL;
    Information = IopGetSetSpecificExtension((__int64)v39, 1, 32LL, 1, &v43, 0LL);
    if ( Information < 0 )
      goto LABEL_30;
    *v43 = *(_QWORD *)(a6 + 176);
  }
  Information = IopRetrieveTransactionParametersFromOpenPacket(v47, a6, a9, v39);
  if ( Information >= 0 )
  {
    if ( (*(_DWORD *)(a6 + 152) & 0x40) == 0 && PsIsHostSilo(v21[1]) )
    {
      v36 = *(_QWORD *)(a6 + 40);
      if ( !v36 )
        goto LABEL_23;
      v37 = IoGetSilo(v36);
      if ( PsIsHostSilo(v37) )
        goto LABEL_23;
    }
    Information = 0;
    v28 = (_DWORD *)v21[1];
    if ( *(_QWORD *)(a6 + 40) && PsIsServerSilo((__int64)v28) )
      v28 = (_DWORD *)IoGetSilo(v41);
    if ( PsIsHostSilo((__int64)v28) )
      goto LABEL_23;
    v43 = 0LL;
    Information = PsAcquireSiloHardReference(v28);
    if ( Information >= 0 )
    {
      Information = IopGetSetSpecificExtension((__int64)v39, 7, 16LL, 1, &v43, 0LL);
      if ( Information >= 0 )
      {
        v29 = v43;
        *(_DWORD *)v43 = 16;
        v29[1] = v28;
        *((_DWORD *)v29 + 1) |= 1u;
        ObfReferenceObjectWithTag(v28, 0x70536F49u);
LABEL_23:
        if ( a5 )
        {
          if ( (*(_DWORD *)(a6 + 152) & 0x20) == 0
            || (*(_DWORD *)(v47 + 48) & 0x40000) == 0
            && (v32 = *(unsigned int *)(v47 + 72), (_DWORD)v32 != 8)
            && ((unsigned int)v32 > 0x35 || (v33 = 0x20000100100008LL, !_bittest64(&v33, v32)))
            || (Information = IopRetrieveTransactionParameters(v47, a6, a9, (__int64)v39), Information >= 0) )
          {
            if ( (KeGetCurrentThread()->MiscFlags & 0x400) == 0 && (*(_DWORD *)(a6 + 64) & 0x20000) != 0 )
              Information = IopCheckInitiatorHint((__int64)v39, *(_QWORD *)(a6 + 40));
          }
        }
        goto LABEL_30;
      }
      PsReleaseSiloHardReference(v28);
    }
  }
LABEL_30:
  *(_QWORD *)a1 = v39;
  if ( !*(_BYTE *)(a6 + 138) && !*(_BYTE *)(a6 + 137) )
  {
    if ( (*(_DWORD *)(a6 + 64) & 0x30) != 0 )
    {
      v23 = v39[20] | 2;
      v39[20] = v23;
      if ( (*(_DWORD *)(a6 + 64) & 0x10) != 0 )
        v39[20] = v23 | 4;
    }
    if ( (v39[20] & 2) != 0 )
    {
      KeInitializeEvent((PRKEVENT)(v39 + 32), SynchronizationEvent, 0);
      v39[28] = 0;
      *((_QWORD *)v39 + 13) = 0LL;
    }
    if ( (*(_DWORD *)(a6 + 64) & 8) != 0 )
      v39[20] |= 8u;
    if ( (*(_DWORD *)(a6 + 64) & 2) != 0 )
      v39[20] |= 0x10u;
    if ( (*(_DWORD *)(a6 + 64) & 4) != 0 )
      v39[20] |= 0x20u;
    if ( (*(_DWORD *)(a6 + 64) & 0x800) != 0 )
      v39[20] |= 0x100000u;
    if ( (*(_DWORD *)(a6 + 64) & 0x20000) != 0 )
      v39[20] |= 0x2000000u;
  }
  if ( (v44 & 0x40) == 0 )
    v39[20] |= 0x20000u;
  *v39 = 14155781;
  *((_QWORD *)v39 + 8) = *(_QWORD *)(a6 + 40);
  *((_QWORD *)v39 + 1) = v50;
  *((_QWORD *)v39 + 23) = 0LL;
  v24 = v39 + 48;
  v24[1] = v24;
  *v24 = v24;
  return (unsigned int)Information;
}
