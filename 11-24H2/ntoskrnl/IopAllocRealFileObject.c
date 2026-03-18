/*
 * XREFs of IopAllocRealFileObject @ 0x14089A9B0
 * Callers:
 *     IopParseDevice @ 0x14089F880 (IopParseDevice.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x1403407AC (ObpPushStackInfo.c)
 *     PsIsServerSilo @ 0x140349B68 (PsIsServerSilo.c)
 *     PsReleaseSiloHardReference @ 0x1403C4750 (PsReleaseSiloHardReference.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     IopGetSetSpecificExtension @ 0x140426ED0 (IopGetSetSpecificExtension.c)
 *     IoGetSilo @ 0x140431AC0 (IoGetSilo.c)
 *     IopSetFileObjectExtensionFlag @ 0x140434650 (IopSetFileObjectExtensionFlag.c)
 *     PsIsHostSilo @ 0x14043E2E0 (PsIsHostSilo.c)
 *     IopCheckInitiatorHint @ 0x1404503E8 (IopCheckInitiatorHint.c)
 *     PsAcquireSiloHardReference @ 0x14045E580 (PsAcquireSiloHardReference.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B3890 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     SeReleaseSubjectContext @ 0x14084D7E0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14084D8F0 (SeCaptureSubjectContext.c)
 *     IopRetrieveTransactionParameters @ 0x140899830 (IopRetrieveTransactionParameters.c)
 *     ObpAllocateObject @ 0x14089B290 (ObpAllocateObject.c)
 *     ObpCaptureObjectCreateInformation @ 0x14089CCA0 (ObpCaptureObjectCreateInformation.c)
 *     IopRetrieveTransactionParametersFromOpenPacket @ 0x140A13E40 (IopRetrieveTransactionParametersFromOpenPacket.c)
 *     ObpRegisterObject @ 0x140AB735C (ObpRegisterObject.c)
 *     ExFreePool @ 0x140B72CB0 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  struct _KPRCB *CurrentPrcb; // r14
  POBJECT_TYPE *v10; // r13
  _GENERAL_LOOKASIDE *P; // rbx
  __int64 v13; // rdi
  _GENERAL_LOOKASIDE *L; // rbx
  __int64 v15; // r9
  __int64 Size; // rdx
  __int64 Tag; // r8
  __int64 Type; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int Information; // r14d
  int v22; // ecx
  struct _KPRCB *v23; // rdx
  _GENERAL_LOOKASIDE *v24; // rcx
  void *v25; // rcx
  struct _KPRCB *v26; // rdx
  _GENERAL_LOOKASIDE *v27; // rcx
  _QWORD *v28; // rdi
  __int64 v29; // rcx
  int v30; // ecx
  _QWORD *v31; // rbx
  LUID v33; // rbx
  __int64 v34; // rcx
  _DWORD *v35; // rdi
  _QWORD *v36; // rax
  struct _KPRCB *v37; // rdx
  _GENERAL_LOOKASIDE *v38; // rcx
  unsigned __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rbx
  _DWORD *v44; // rbx
  __int64 Silo; // rax
  __int64 v46; // rdx
  __int16 v47; // [rsp+40h] [rbp-89h] BYREF
  _QWORD *v48; // [rsp+48h] [rbp-81h] BYREF
  unsigned int v49; // [rsp+50h] [rbp-79h]
  PSLIST_ENTRY ListEntry[2]; // [rsp+58h] [rbp-71h] BYREF
  __int64 v51; // [rsp+68h] [rbp-61h] BYREF
  __int64 v52; // [rsp+70h] [rbp-59h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+78h] [rbp-51h] BYREF
  __int128 v54; // [rsp+98h] [rbp-31h]
  __int64 v55; // [rsp+A8h] [rbp-21h]
  int v56; // [rsp+B0h] [rbp-19h]
  int v57; // [rsp+B4h] [rbp-15h]
  LUID v58; // [rsp+B8h] [rbp-11h]
  int v59; // [rsp+C0h] [rbp-9h]

  CurrentPrcb = KeGetCurrentPrcb();
  v10 = IoFileObjectType;
  P = CurrentPrcb->PPLookasideList[4].P;
  v48 = a7;
  v47 = 0;
  v49 = a4;
  ++P->TotalAllocates;
  v55 = a3;
  v52 = a2;
  SubjectContext.ClientToken = (PACCESS_TOKEN)48;
  *(_QWORD *)&SubjectContext.ImpersonationLevel = 0LL;
  SubjectContext.ProcessAuditId = (PVOID)a4;
  SubjectContext.PrimaryToken = 0LL;
  v54 = 0LL;
  LOBYTE(v47) = 1;
  *(_OWORD *)ListEntry = 0LL;
  v51 = 0LL;
  v13 = (__int64)RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( v13 )
    goto LABEL_4;
  ++P->AllocateMisses;
  L = CurrentPrcb->PPLookasideList[4].L;
  ++L->TotalAllocates;
  v13 = (__int64)RtlpInterlockedPopEntrySList(&L->ListHead);
  if ( v13
    || (Size = L->Size,
        Tag = L->Tag,
        Type = (unsigned int)L->Type,
        ++L->AllocateMisses,
        (v13 = guard_dispatch_icall_no_overrides(Type, Size, Tag, v15)) != 0) )
  {
LABEL_4:
    *(_DWORD *)v13 = CurrentPrcb->Number;
  }
  if ( !v13 )
  {
    Information = -1073741670;
LABEL_66:
    if ( !a8 )
      *(_QWORD *)a1 = 0LL;
    return (unsigned int)Information;
  }
  Information = ObpCaptureObjectCreateInformation(0, a5, (unsigned int)&SubjectContext, (unsigned int)ListEntry, v13, 0);
  if ( Information < 0 )
  {
    v37 = KeGetCurrentPrcb();
    v38 = v37->PPLookasideList[4].P;
    ++v38->TotalFrees;
    if ( LOWORD(v38->ListHead.Alignment) < v38->Depth
      || (++v38->FreeMisses,
          v38 = v37->PPLookasideList[4].L,
          ++v38->TotalFrees,
          LOWORD(v38->ListHead.Alignment) < v38->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v38->ListHead, (PSLIST_ENTRY)v13);
    }
    else
    {
      ++v38->FreeMisses;
      if ( (void (__stdcall *)(PVOID))v38->FreeEx == ExFreePool )
        ExFreePool((PVOID)v13);
      else
        guard_dispatch_icall_no_overrides(v13, v37, v19, v20);
    }
    goto LABEL_66;
  }
  if ( (*(_DWORD *)v13 & (_DWORD)v10[9]) != 0 )
  {
    Information = -1073741811;
LABEL_11:
    if ( ListEntry[1] )
    {
      if ( WORD1(ListEntry[0]) == 248 )
      {
        v23 = KeGetCurrentPrcb();
        v24 = v23->PPLookasideList[5].P;
        ++v24->TotalFrees;
        if ( LOWORD(v24->ListHead.Alignment) < v24->Depth
          || (++v24->FreeMisses,
              v24 = v23->PPLookasideList[5].L,
              ++v24->TotalFrees,
              LOWORD(v24->ListHead.Alignment) < v24->Depth) )
        {
          RtlpInterlockedPushEntrySList(&v24->ListHead, ListEntry[1]);
        }
        else
        {
          ++v24->FreeMisses;
          if ( (void (__stdcall *)(PVOID))v24->FreeEx == ExFreePool )
            ExFreePool(ListEntry[1]);
          else
            guard_dispatch_icall_no_overrides(ListEntry[1], v23, v19, v20);
        }
      }
      else
      {
        ExFreePoolWithTag(ListEntry[1], 0);
      }
    }
    v25 = *(void **)(v13 + 32);
    if ( v25 )
    {
      if ( *(_BYTE *)(v13 + 16) <= 1u )
        ExFreePoolWithTag(v25, 0);
      *(_QWORD *)(v13 + 32) = 0LL;
    }
    v26 = KeGetCurrentPrcb();
    v27 = v26->PPLookasideList[4].P;
    ++v27->TotalFrees;
    if ( LOWORD(v27->ListHead.Alignment) < v27->Depth
      || (++v27->FreeMisses,
          v27 = v26->PPLookasideList[4].L,
          ++v27->TotalFrees,
          LOWORD(v27->ListHead.Alignment) < v27->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v27->ListHead, (PSLIST_ENTRY)v13);
    }
    else
    {
      ++v27->FreeMisses;
      if ( (void (__stdcall *)(PVOID))v27->FreeEx == ExFreePool )
        ExFreePool((PVOID)v13);
      else
        guard_dispatch_icall_no_overrides(v13, v26, v19, v20);
    }
    goto LABEL_66;
  }
  if ( (*(_DWORD *)v13 & 0x10) != 0 )
  {
    v33 = SeCreatePermanentPrivilege;
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    SeCaptureSubjectContext(&SubjectContext);
    v56 = 1;
    v57 = 1;
    v58 = v33;
    v59 = 0;
    SeReleaseSubjectContext(&SubjectContext);
  }
  v22 = *((_DWORD *)v10 + 27);
  *(_DWORD *)(v13 + 20) = *((_DWORD *)v10 + 26);
  *(_DWORD *)(v13 + 24) = v22;
  Information = ObpAllocateObject(v13, a5, (_DWORD)v10, (unsigned int)ListEntry, 216, (__int64)&v51, (__int64)&v47);
  if ( Information < 0 )
    goto LABEL_11;
  v43 = v51;
  if ( ObpTraceFlags )
  {
    ObpRegisterObject(v51);
    ObpPushStackInfo(v43, 1, 1u, 0x746C6644u);
  }
  v44 = (_DWORD *)(v43 + 48);
  memset_0(v44, 0, 0xD8uLL);
  if ( a8 )
  {
    *((_QWORD *)v44 + 3) = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
    *((_QWORD *)v44 + 4) = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
    *((_WORD *)v44 + 44) = *(_WORD *)(*(_QWORD *)a1 + 88LL);
    *((_WORD *)v44 + 45) = *(_WORD *)(*(_QWORD *)a1 + 90LL);
    *((_QWORD *)v44 + 12) = *(_QWORD *)(*(_QWORD *)a1 + 96LL);
    v34 = *(_QWORD *)(*(_QWORD *)a1 + 208LL);
    if ( v34 )
      *((_QWORD *)v44 + 26) = v34;
    goto LABEL_32;
  }
  v28 = v48;
  if ( (*(_DWORD *)(a6 + 152) & 0x47) == 0 && PsIsHostSilo(v48[1]) )
  {
    v29 = *(_QWORD *)(a6 + 40);
    if ( !v29 )
      goto LABEL_25;
    Silo = IoGetSilo(v29);
    if ( PsIsHostSilo(Silo) )
      goto LABEL_25;
  }
  if ( (*(_DWORD *)(a6 + 152) & 2) != 0 )
  {
    Information = IopSetFileObjectExtensionFlag((__int64)v44, 1u);
    if ( Information < 0 )
      goto LABEL_32;
  }
  if ( (*(_DWORD *)(a6 + 152) & 1) != 0 )
  {
    v48 = 0LL;
    Information = IopGetSetSpecificExtension((__int64)v44, 1, 32LL, 1, &v48, 0LL);
    if ( Information < 0 )
      goto LABEL_32;
    *v48 = *(_QWORD *)(a6 + 176);
  }
  Information = IopRetrieveTransactionParametersFromOpenPacket(v52, a6, a9, v44);
  if ( Information >= 0 )
  {
    if ( (*(_DWORD *)(a6 + 152) & 0x40) == 0 && PsIsHostSilo(v28[1]) )
    {
      v41 = *(_QWORD *)(a6 + 40);
      if ( !v41 )
        goto LABEL_25;
      v42 = IoGetSilo(v41);
      if ( PsIsHostSilo(v42) )
        goto LABEL_25;
    }
    Information = 0;
    v35 = (_DWORD *)v28[1];
    if ( *(_QWORD *)(a6 + 40) && PsIsServerSilo((__int64)v35) )
      v35 = (_DWORD *)IoGetSilo(v46);
    if ( PsIsHostSilo((__int64)v35) )
      goto LABEL_25;
    v48 = 0LL;
    Information = PsAcquireSiloHardReference(v35);
    if ( Information >= 0 )
    {
      Information = IopGetSetSpecificExtension((__int64)v44, 7, 16LL, 1, &v48, 0LL);
      if ( Information >= 0 )
      {
        v36 = v48;
        *(_DWORD *)v48 = 16;
        v36[1] = v35;
        *((_DWORD *)v36 + 1) |= 1u;
        ObfReferenceObjectWithTag(v35, 0x70536F49u);
LABEL_25:
        if ( a5 )
        {
          if ( (*(_DWORD *)(a6 + 152) & 0x20) == 0
            || (*(_DWORD *)(v52 + 48) & 0x40000) == 0
            && (v39 = *(unsigned int *)(v52 + 72), (_DWORD)v39 != 8)
            && ((unsigned int)v39 > 0x35 || (v40 = 0x20000100100008LL, !_bittest64(&v40, v39)))
            || (Information = IopRetrieveTransactionParameters(v52, a6, a9, (__int64)v44), Information >= 0) )
          {
            if ( (KeGetCurrentThread()->MiscFlags & 0x400) == 0 && (*(_DWORD *)(a6 + 64) & 0x20000) != 0 )
              Information = IopCheckInitiatorHint((__int64)v44, *(_QWORD *)(a6 + 40));
          }
        }
        goto LABEL_32;
      }
      PsReleaseSiloHardReference(v35);
    }
  }
LABEL_32:
  *(_QWORD *)a1 = v44;
  if ( !*(_BYTE *)(a6 + 138) && !*(_BYTE *)(a6 + 137) )
  {
    if ( (*(_DWORD *)(a6 + 64) & 0x30) != 0 )
    {
      v30 = v44[20] | 2;
      v44[20] = v30;
      if ( (*(_DWORD *)(a6 + 64) & 0x10) != 0 )
        v44[20] = v30 | 4;
    }
    if ( (v44[20] & 2) != 0 )
    {
      KeInitializeEvent((PRKEVENT)(v44 + 32), SynchronizationEvent, 0);
      v44[28] = 0;
      *((_QWORD *)v44 + 13) = 0LL;
    }
    if ( (*(_DWORD *)(a6 + 64) & 8) != 0 )
      v44[20] |= 8u;
    if ( (*(_DWORD *)(a6 + 64) & 2) != 0 )
      v44[20] |= 0x10u;
    if ( (*(_DWORD *)(a6 + 64) & 4) != 0 )
      v44[20] |= 0x20u;
    if ( (*(_DWORD *)(a6 + 64) & 0x800) != 0 )
      v44[20] |= 0x100000u;
    if ( (*(_DWORD *)(a6 + 64) & 0x20000) != 0 )
      v44[20] |= 0x2000000u;
  }
  if ( (v49 & 0x40) == 0 )
    v44[20] |= 0x20000u;
  *v44 = 14155781;
  *((_QWORD *)v44 + 8) = *(_QWORD *)(a6 + 40);
  *((_QWORD *)v44 + 1) = v55;
  *((_QWORD *)v44 + 23) = 0LL;
  v31 = v44 + 48;
  v31[1] = v31;
  *v31 = v31;
  return (unsigned int)Information;
}
