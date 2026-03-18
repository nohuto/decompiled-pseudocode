/*
 * XREFs of CmpCreateKeyBody @ 0x14083E100
 * Callers:
 *     CmpDoParseKey @ 0x14086E7B0 (CmpDoParseKey.c)
 *     CmpStartSiloRegistryNamespace @ 0x1409E2450 (CmpStartSiloRegistryNamespace.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ObpPushStackInfo @ 0x1403407AC (ObpPushStackInfo.c)
 *     PsGetCurrentThreadProcessId @ 0x1404296F0 (PsGetCurrentThreadProcessId.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B3890 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ObpFreeObjectNameBuffer @ 0x14083E740 (ObpFreeObjectNameBuffer.c)
 *     CmpRecordParseFailure @ 0x140845C40 (CmpRecordParseFailure.c)
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
 *     CmpLockKcbExclusive @ 0x140870470 (CmpLockKcbExclusive.c)
 *     CmpTransReferenceTransaction @ 0x140879088 (CmpTransReferenceTransaction.c)
 *     ObpAllocateObject @ 0x14089B290 (ObpAllocateObject.c)
 *     ObpCaptureObjectCreateInformation @ 0x14089CCA0 (ObpCaptureObjectCreateInformation.c)
 *     CmpIsKeyStackDeleted @ 0x140988420 (CmpIsKeyStackDeleted.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x14099E750 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     ObpRegisterObject @ 0x140AB735C (ObpRegisterObject.c)
 *     ExFreePool @ 0x140B72CB0 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140BB92C0 (CmpUnlockKcb.c)
 */

__int64 __fastcall CmpCreateKeyBody(
        ULONG_PTR BugCheckParameter2,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        ULONG_PTR **a7,
        bool *a8)
{
  ULONG_PTR v8; // rbp
  ULONG_PTR *v9; // rbx
  signed __int64 v12; // rax
  struct _KPRCB *CurrentPrcb; // rbp
  POBJECT_TYPE *v14; // r13
  _GENERAL_LOOKASIDE *P; // rsi
  __int64 v16; // rdi
  _GENERAL_LOOKASIDE *L; // rsi
  __int64 v18; // r9
  __int64 Size; // rdx
  __int64 Tag; // r8
  __int64 Type; // rcx
  int Information; // esi
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // ecx
  void *v26; // rcx
  struct _KPRCB *v27; // rdx
  _GENERAL_LOOKASIDE *v28; // rcx
  unsigned __int64 CurrentThreadProcessId; // rax
  ULONG_PTR v30; // r10
  ULONG_PTR v31; // r13
  __int64 *v32; // rdi
  int v33; // r9d
  unsigned int v34; // ecx
  char v35; // di
  bool v36; // dl
  __int64 v38; // rax
  __int64 **v39; // rcx
  struct _KPRCB *v40; // rdx
  _GENERAL_LOOKASIDE *v41; // rcx
  __int64 v42; // rbx
  int v43; // eax
  void (__stdcall *v44)(PVOID); // rdx
  void (__stdcall *FreeEx)(PVOID); // rdx
  __int64 v46; // rax
  ULONG_PTR v47; // rcx
  char IsKeyStackDeleted; // al
  __int16 v49; // [rsp+40h] [rbp-78h] BYREF
  ULONG_PTR v50; // [rsp+48h] [rbp-70h]
  __int64 v51; // [rsp+50h] [rbp-68h] BYREF
  ULONG_PTR v52; // [rsp+58h] [rbp-60h]
  __int128 v53; // [rsp+68h] [rbp-50h] BYREF

  v8 = BugCheckParameter2;
  v50 = 0LL;
  v9 = 0LL;
  v52 = 0LL;
  v12 = _InterlockedIncrement64((volatile signed __int64 *)BugCheckParameter2);
  if ( !v12 )
    KeBugCheckEx(0x51u, 0x24uLL, BugCheckParameter2, 0LL, 0LL);
  if ( v12 == 1 )
    KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
  if ( a4 )
  {
    if ( *(_QWORD *)(a4 + 56) )
    {
      v50 = *(_QWORD *)(a4 + 56);
      v43 = CmpTransReferenceTransaction(v50);
      Information = v43;
      if ( v43 < 0 )
      {
        CmpRecordParseFailure(a3, 131840LL, (unsigned int)v43);
LABEL_75:
        CmpDereferenceKeyControlBlockUnsafe(v8);
        v30 = 0LL;
        goto LABEL_43;
      }
    }
    else
    {
      v52 = a4 + 88;
    }
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v14 = CmKeyObjectType;
  v49 = 0;
  v51 = 0LL;
  P = CurrentPrcb->PPLookasideList[4].P;
  LOBYTE(v49) = 1;
  v53 = 0LL;
  ++P->TotalAllocates;
  v16 = (__int64)RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( v16 )
    goto LABEL_8;
  ++P->AllocateMisses;
  L = CurrentPrcb->PPLookasideList[4].L;
  ++L->TotalAllocates;
  v16 = (__int64)RtlpInterlockedPopEntrySList(&L->ListHead);
  if ( v16
    || (Size = L->Size,
        Tag = L->Tag,
        Type = (unsigned int)L->Type,
        ++L->AllocateMisses,
        (v16 = guard_dispatch_icall_no_overrides(Type, Size, Tag, v18)) != 0) )
  {
LABEL_8:
    *(_DWORD *)v16 = CurrentPrcb->Number;
  }
  if ( !v16 )
  {
    Information = -1073741670;
LABEL_53:
    CmpRecordParseFailure(a3, 132096LL, (unsigned int)Information);
    v8 = BugCheckParameter2;
    v35 = 1;
    v31 = v50;
    goto LABEL_40;
  }
  Information = ObpCaptureObjectCreateInformation(a2, a2, 0, (unsigned int)&v53, v16, 0);
  if ( Information < 0 )
  {
    v40 = KeGetCurrentPrcb();
    v41 = v40->PPLookasideList[4].P;
    ++v41->TotalFrees;
    if ( LOWORD(v41->ListHead.Alignment) < v41->Depth
      || (++v41->FreeMisses,
          v41 = v40->PPLookasideList[4].L,
          ++v41->TotalFrees,
          LOWORD(v41->ListHead.Alignment) < v41->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v41->ListHead, (PSLIST_ENTRY)v16);
    }
    else
    {
      ++v41->FreeMisses;
      FreeEx = (void (__stdcall *)(PVOID))v41->FreeEx;
      if ( FreeEx == ExFreePool )
        ExFreePool((PVOID)v16);
      else
        guard_dispatch_icall_no_overrides(v16, FreeEx, v23, v24);
    }
    goto LABEL_53;
  }
  if ( (*(_DWORD *)v16 & (_DWORD)v14[9]) != 0 )
  {
    Information = -1073741811;
    goto LABEL_14;
  }
  if ( (*(_DWORD *)v16 & 0x10) != 0 && !SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, a2) )
  {
    Information = -1073741727;
    goto LABEL_14;
  }
  v25 = *((_DWORD *)v14 + 27);
  *(_DWORD *)(v16 + 20) = *((_DWORD *)v14 + 26);
  *(_DWORD *)(v16 + 24) = v25;
  Information = ObpAllocateObject(v16, a2, (_DWORD)v14, (unsigned int)&v53, 112, (__int64)&v51, (__int64)&v49);
  if ( Information < 0 )
  {
LABEL_14:
    if ( *((_QWORD *)&v53 + 1) )
      ObpFreeObjectNameBuffer(&v53);
    v26 = *(void **)(v16 + 32);
    if ( v26 )
    {
      if ( *(_BYTE *)(v16 + 16) <= 1u )
        ExFreePoolWithTag(v26, 0);
      *(_QWORD *)(v16 + 32) = 0LL;
    }
    v27 = KeGetCurrentPrcb();
    v28 = v27->PPLookasideList[4].P;
    ++v28->TotalFrees;
    if ( LOWORD(v28->ListHead.Alignment) < v28->Depth
      || (++v28->FreeMisses,
          v28 = v27->PPLookasideList[4].L,
          ++v28->TotalFrees,
          LOWORD(v28->ListHead.Alignment) < v28->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v28->ListHead, (PSLIST_ENTRY)v16);
    }
    else
    {
      ++v28->FreeMisses;
      v44 = (void (__stdcall *)(PVOID))v28->FreeEx;
      if ( v44 == ExFreePool )
        ExFreePool((PVOID)v16);
      else
        guard_dispatch_icall_no_overrides(v16, v44, v23, v24);
    }
    goto LABEL_53;
  }
  v42 = v51;
  if ( ObpTraceFlags )
  {
    ObpRegisterObject(v51);
    ObpPushStackInfo(v42, 1, 1u, 0x746C6644u);
  }
  v9 = (ULONG_PTR *)(v42 + 48);
  memset_0(v9, 0, 0x70uLL);
  v8 = BugCheckParameter2;
  *((_WORD *)v9 + 25) = *(_WORD *)(a3 + 20);
  v9[1] = BugCheckParameter2;
  CurrentThreadProcessId = PsGetCurrentThreadProcessId();
  v30 = 0LL;
  v9[3] = CurrentThreadProcessId;
  *((_WORD *)v9 + 2) = 0;
  *((_DWORD *)v9 + 24) = -1;
  if ( (*(_DWORD *)(BugCheckParameter2 + 184) & 0x400000) != 0 )
  {
    v46 = *(int *)(BugCheckParameter2 + 96);
    *(_DWORD *)v9 = v46;
    *(_QWORD *)(a3 + 56) = v46;
  }
  else
  {
    *(_DWORD *)v9 = 1803104306;
  }
  if ( a4 )
  {
    v31 = 0LL;
    v9[7] = v50;
    v9[8] = v52;
  }
  else
  {
    v31 = v50;
  }
  v9[10] = (ULONG_PTR)(v9 + 9);
  v9[9] = (ULONG_PTR)(v9 + 9);
  if ( (*(_DWORD *)(a3 + 24) & 0x10) != 0 )
    *((_WORD *)v9 + 24) |= 0x10u;
  if ( (a5 & 2) == 0 || (*(_DWORD *)(BugCheckParameter2 + 184) & 0x400000) != 0 )
  {
LABEL_39:
    v35 = 0;
    Information = 0;
    v36 = (*(_DWORD *)(BugCheckParameter2 + 184) & 0x400000) != 0;
    *a7 = v9;
    v9 = 0LL;
    *a8 = v36;
  }
  else
  {
    v32 = (__int64 *)(v9 + 4);
    v33 = 0;
    if ( (a5 & 1) == 0 )
      goto LABEL_33;
    do
    {
      while ( 1 )
      {
        v33 = 2;
LABEL_33:
        v9[5] = (ULONG_PTR)(v9 + 4);
        v34 = 0;
        *v32 = (__int64)v32;
        while ( v34 < 4 )
        {
          if ( !_InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v9[1] + 8LL * v34 + 136),
                  (signed __int64)v9,
                  0LL) )
            goto LABEL_38;
          ++v34;
        }
        if ( v33 )
        {
          v38 = v9[1] + 120;
          v39 = *(__int64 ***)(v9[1] + 128);
          if ( *v39 != (__int64 *)v38 )
            __fastfail(3u);
          *v32 = v38;
          v9[5] = (ULONG_PTR)v39;
          *v39 = v32;
          *(_QWORD *)(v38 + 8) = v32;
LABEL_38:
          *((_WORD *)v9 + 24) |= 0x40u;
          goto LABEL_39;
        }
        v47 = v9[1];
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v47 + 48), 1LL, 17LL) != 17 )
          break;
        *(_QWORD *)(v47 + 56) = KeGetCurrentThread();
      }
      CmpUnlockKcb(v9[1]);
      CmpLockKcbExclusive(v9[1]);
      if ( (*(_DWORD *)(v9[1] + 8) & 0x20000) != 0 )
        break;
      IsKeyStackDeleted = CmpIsKeyStackDeleted(a6, a4);
      v30 = 0LL;
    }
    while ( !IsKeyStackDeleted );
    Information = -1073741444;
    CmpRecordParseFailure(a3, 132352LL, 3221225852LL);
    v30 = 0LL;
    v35 = 1;
  }
LABEL_40:
  if ( v31 )
  {
    ObfDereferenceObject((PVOID)(v31 & 0xFFFFFFFFFFFFFFFEuLL));
    v30 = 0LL;
  }
  if ( v35 )
    goto LABEL_75;
LABEL_43:
  if ( v9 )
  {
    v9[1] = v30;
    ObfDereferenceObject(v9);
  }
  return (unsigned int)Information;
}
