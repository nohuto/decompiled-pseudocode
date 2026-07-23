/*
 * XREFs of IopAllocRealFileObject @ 0x1408A3050
 * Callers:
 *     IopParseDevice @ 0x1408A7F20 (IopParseDevice.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     PsReleaseSiloHardReference @ 0x1403B3310 (PsReleaseSiloHardReference.c)
 *     PsIsServerSilo @ 0x1403C35A8 (PsIsServerSilo.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     IopGetSetSpecificExtension @ 0x14041AD50 (IopGetSetSpecificExtension.c)
 *     IoGetSilo @ 0x140424000 (IoGetSilo.c)
 *     IopSetFileObjectExtensionFlag @ 0x1404278D0 (IopSetFileObjectExtensionFlag.c)
 *     PsIsHostSilo @ 0x1404329D0 (PsIsHostSilo.c)
 *     IopCheckInitiatorHint @ 0x140445658 (IopCheckInitiatorHint.c)
 *     PsAcquireSiloHardReference @ 0x140453640 (PsAcquireSiloHardReference.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     IopRetrieveTransactionParameters @ 0x1408A1ED0 (IopRetrieveTransactionParameters.c)
 *     ObpAllocateObject @ 0x1408A3930 (ObpAllocateObject.c)
 *     ObpCaptureObjectCreateInformation @ 0x1408A5340 (ObpCaptureObjectCreateInformation.c)
 *     IopRetrieveTransactionParametersFromOpenPacket @ 0x140A0C5A0 (IopRetrieveTransactionParametersFromOpenPacket.c)
 *     ObpRegisterObject @ 0x140AB162C (ObpRegisterObject.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  __int64 Size; // rdx
  __int64 Type; // rcx
  int Information; // r14d
  int v18; // ecx
  struct _KPRCB *v19; // rdx
  _GENERAL_LOOKASIDE *v20; // rcx
  void *v21; // rcx
  struct _KPRCB *v22; // rdx
  _GENERAL_LOOKASIDE *v23; // rcx
  _QWORD *v24; // rdi
  __int64 v25; // rcx
  int v26; // ecx
  _QWORD *v27; // rbx
  LUID v29; // rbx
  __int64 v30; // rcx
  _DWORD *v31; // rdi
  _QWORD *v32; // rax
  struct _KPRCB *v33; // rdx
  _GENERAL_LOOKASIDE *v34; // rcx
  unsigned __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rbx
  _DWORD *v40; // rbx
  __int64 Silo; // rax
  __int64 v42; // rdx
  __int16 v43; // [rsp+40h] [rbp-89h] BYREF
  _QWORD *v44; // [rsp+48h] [rbp-81h] BYREF
  unsigned int v45; // [rsp+50h] [rbp-79h]
  PSLIST_ENTRY ListEntry[2]; // [rsp+58h] [rbp-71h] BYREF
  __int64 v47; // [rsp+68h] [rbp-61h] BYREF
  __int64 v48; // [rsp+70h] [rbp-59h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+78h] [rbp-51h] BYREF
  __int128 v50; // [rsp+98h] [rbp-31h]
  __int64 v51; // [rsp+A8h] [rbp-21h]
  int v52; // [rsp+B0h] [rbp-19h]
  int v53; // [rsp+B4h] [rbp-15h]
  LUID v54; // [rsp+B8h] [rbp-11h]
  int v55; // [rsp+C0h] [rbp-9h]

  CurrentPrcb = KeGetCurrentPrcb();
  v10 = IoFileObjectType;
  P = CurrentPrcb->PPLookasideList[4].P;
  v44 = a7;
  v43 = 0;
  v45 = a4;
  ++P->TotalAllocates;
  v51 = a3;
  v48 = a2;
  SubjectContext.ClientToken = (PACCESS_TOKEN)48;
  *(_QWORD *)&SubjectContext.ImpersonationLevel = 0LL;
  SubjectContext.ProcessAuditId = (PVOID)a4;
  SubjectContext.PrimaryToken = 0LL;
  v50 = 0LL;
  LOBYTE(v43) = 1;
  *(_OWORD *)ListEntry = 0LL;
  v47 = 0LL;
  v13 = (__int64)RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( v13 )
    goto LABEL_4;
  ++P->AllocateMisses;
  L = CurrentPrcb->PPLookasideList[4].L;
  ++L->TotalAllocates;
  v13 = (__int64)RtlpInterlockedPopEntrySList(&L->ListHead);
  if ( v13
    || (Size = L->Size,
        Type = (unsigned int)L->Type,
        ++L->AllocateMisses,
        (v13 = guard_dispatch_icall_no_overrides(Type, Size)) != 0) )
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
    v33 = KeGetCurrentPrcb();
    v34 = v33->PPLookasideList[4].P;
    ++v34->TotalFrees;
    if ( LOWORD(v34->ListHead.Alignment) < v34->Depth
      || (++v34->FreeMisses,
          v34 = v33->PPLookasideList[4].L,
          ++v34->TotalFrees,
          LOWORD(v34->ListHead.Alignment) < v34->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v34->ListHead, (PSLIST_ENTRY)v13);
    }
    else
    {
      ++v34->FreeMisses;
      if ( (void (__stdcall *)(PVOID))v34->FreeEx == ExFreePool )
        ExFreePool((PVOID)v13);
      else
        guard_dispatch_icall_no_overrides(v13, v33);
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
        v19 = KeGetCurrentPrcb();
        v20 = v19->PPLookasideList[5].P;
        ++v20->TotalFrees;
        if ( LOWORD(v20->ListHead.Alignment) < v20->Depth
          || (++v20->FreeMisses,
              v20 = v19->PPLookasideList[5].L,
              ++v20->TotalFrees,
              LOWORD(v20->ListHead.Alignment) < v20->Depth) )
        {
          RtlpInterlockedPushEntrySList(&v20->ListHead, ListEntry[1]);
        }
        else
        {
          ++v20->FreeMisses;
          if ( (void (__stdcall *)(PVOID))v20->FreeEx == ExFreePool )
            ExFreePool(ListEntry[1]);
          else
            guard_dispatch_icall_no_overrides(ListEntry[1], v19);
        }
      }
      else
      {
        ExFreePoolWithTag(ListEntry[1], 0);
      }
    }
    v21 = *(void **)(v13 + 32);
    if ( v21 )
    {
      if ( *(_BYTE *)(v13 + 16) <= 1u )
        ExFreePoolWithTag(v21, 0);
      *(_QWORD *)(v13 + 32) = 0LL;
    }
    v22 = KeGetCurrentPrcb();
    v23 = v22->PPLookasideList[4].P;
    ++v23->TotalFrees;
    if ( LOWORD(v23->ListHead.Alignment) < v23->Depth
      || (++v23->FreeMisses,
          v23 = v22->PPLookasideList[4].L,
          ++v23->TotalFrees,
          LOWORD(v23->ListHead.Alignment) < v23->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v23->ListHead, (PSLIST_ENTRY)v13);
    }
    else
    {
      ++v23->FreeMisses;
      if ( (void (__stdcall *)(PVOID))v23->FreeEx == ExFreePool )
        ExFreePool((PVOID)v13);
      else
        guard_dispatch_icall_no_overrides(v13, v22);
    }
    goto LABEL_66;
  }
  if ( (*(_DWORD *)v13 & 0x10) != 0 )
  {
    v29 = SeCreatePermanentPrivilege;
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    SeCaptureSubjectContext(&SubjectContext);
    v52 = 1;
    v53 = 1;
    v54 = v29;
    v55 = 0;
    SeReleaseSubjectContext(&SubjectContext);
  }
  v18 = *((_DWORD *)v10 + 27);
  *(_DWORD *)(v13 + 20) = *((_DWORD *)v10 + 26);
  *(_DWORD *)(v13 + 24) = v18;
  Information = ObpAllocateObject(v13, a5, (_DWORD)v10, (unsigned int)ListEntry, 216, (__int64)&v47, (__int64)&v43);
  if ( Information < 0 )
    goto LABEL_11;
  v39 = v47;
  if ( ObpTraceFlags )
  {
    ObpRegisterObject(v47);
    ObpPushStackInfo(v39, 1, 1u, 0x746C6644u);
  }
  v40 = (_DWORD *)(v39 + 48);
  memset_0(v40, 0, 0xD8uLL);
  if ( a8 )
  {
    *((_QWORD *)v40 + 3) = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
    *((_QWORD *)v40 + 4) = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
    *((_WORD *)v40 + 44) = *(_WORD *)(*(_QWORD *)a1 + 88LL);
    *((_WORD *)v40 + 45) = *(_WORD *)(*(_QWORD *)a1 + 90LL);
    *((_QWORD *)v40 + 12) = *(_QWORD *)(*(_QWORD *)a1 + 96LL);
    v30 = *(_QWORD *)(*(_QWORD *)a1 + 208LL);
    if ( v30 )
      *((_QWORD *)v40 + 26) = v30;
    goto LABEL_32;
  }
  v24 = v44;
  if ( (*(_DWORD *)(a6 + 152) & 0x47) == 0 && PsIsHostSilo(v44[1]) )
  {
    v25 = *(_QWORD *)(a6 + 40);
    if ( !v25 )
      goto LABEL_25;
    Silo = IoGetSilo(v25);
    if ( PsIsHostSilo(Silo) )
      goto LABEL_25;
  }
  if ( (*(_DWORD *)(a6 + 152) & 2) != 0 )
  {
    Information = IopSetFileObjectExtensionFlag((__int64)v40, 1u);
    if ( Information < 0 )
      goto LABEL_32;
  }
  if ( (*(_DWORD *)(a6 + 152) & 1) != 0 )
  {
    v44 = 0LL;
    Information = IopGetSetSpecificExtension((__int64)v40, 1, 0x20u, 1, &v44, 0LL);
    if ( Information < 0 )
      goto LABEL_32;
    *v44 = *(_QWORD *)(a6 + 176);
  }
  Information = IopRetrieveTransactionParametersFromOpenPacket(v48, a6, a9, v40);
  if ( Information >= 0 )
  {
    if ( (*(_DWORD *)(a6 + 152) & 0x40) == 0 && PsIsHostSilo(v24[1]) )
    {
      v37 = *(_QWORD *)(a6 + 40);
      if ( !v37 )
        goto LABEL_25;
      v38 = IoGetSilo(v37);
      if ( PsIsHostSilo(v38) )
        goto LABEL_25;
    }
    Information = 0;
    v31 = (_DWORD *)v24[1];
    if ( *(_QWORD *)(a6 + 40) && PsIsServerSilo((__int64)v31) )
      v31 = (_DWORD *)IoGetSilo(v42);
    if ( PsIsHostSilo((__int64)v31) )
      goto LABEL_25;
    v44 = 0LL;
    Information = PsAcquireSiloHardReference(v31);
    if ( Information >= 0 )
    {
      Information = IopGetSetSpecificExtension((__int64)v40, 7, 0x10u, 1, &v44, 0LL);
      if ( Information >= 0 )
      {
        v32 = v44;
        *(_DWORD *)v44 = 16;
        v32[1] = v31;
        *((_DWORD *)v32 + 1) |= 1u;
        ObfReferenceObjectWithTag(v31, 0x70536F49u);
LABEL_25:
        if ( a5 )
        {
          if ( (*(_DWORD *)(a6 + 152) & 0x20) == 0
            || (*(_DWORD *)(v48 + 48) & 0x40000) == 0
            && (v35 = *(unsigned int *)(v48 + 72), (_DWORD)v35 != 8)
            && ((unsigned int)v35 > 0x35 || (v36 = 0x20000100100008LL, !_bittest64(&v36, v35)))
            || (Information = IopRetrieveTransactionParameters(v48, a6, a9, (__int64)v40), Information >= 0) )
          {
            if ( (KeGetCurrentThread()->MiscFlags & 0x400) == 0 && (*(_DWORD *)(a6 + 64) & 0x20000) != 0 )
              Information = IopCheckInitiatorHint((__int64)v40, *(_QWORD *)(a6 + 40));
          }
        }
        goto LABEL_32;
      }
      PsReleaseSiloHardReference(v31);
    }
  }
LABEL_32:
  *(_QWORD *)a1 = v40;
  if ( !*(_BYTE *)(a6 + 138) && !*(_BYTE *)(a6 + 137) )
  {
    if ( (*(_DWORD *)(a6 + 64) & 0x30) != 0 )
    {
      v26 = v40[20] | 2;
      v40[20] = v26;
      if ( (*(_DWORD *)(a6 + 64) & 0x10) != 0 )
        v40[20] = v26 | 4;
    }
    if ( (v40[20] & 2) != 0 )
    {
      KeInitializeEvent((PRKEVENT)(v40 + 32), SynchronizationEvent, 0);
      v40[28] = 0;
      *((_QWORD *)v40 + 13) = 0LL;
    }
    if ( (*(_DWORD *)(a6 + 64) & 8) != 0 )
      v40[20] |= 8u;
    if ( (*(_DWORD *)(a6 + 64) & 2) != 0 )
      v40[20] |= 0x10u;
    if ( (*(_DWORD *)(a6 + 64) & 4) != 0 )
      v40[20] |= 0x20u;
    if ( (*(_DWORD *)(a6 + 64) & 0x800) != 0 )
      v40[20] |= 0x100000u;
    if ( (*(_DWORD *)(a6 + 64) & 0x20000) != 0 )
      v40[20] |= 0x2000000u;
  }
  if ( (v45 & 0x40) == 0 )
    v40[20] |= 0x20000u;
  *v40 = 14155781;
  *((_QWORD *)v40 + 8) = *(_QWORD *)(a6 + 40);
  *((_QWORD *)v40 + 1) = v51;
  *((_QWORD *)v40 + 23) = 0LL;
  v27 = v40 + 48;
  v27[1] = v27;
  *v27 = v27;
  return (unsigned int)Information;
}
