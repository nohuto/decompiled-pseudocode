/*
 * XREFs of CmpCreateKeyBody @ 0x14089EB50
 * Callers:
 *     CmpDoParseKey @ 0x140871670 (CmpDoParseKey.c)
 *     CmpStartSiloRegistryNamespace @ 0x1409E3800 (CmpStartSiloRegistryNamespace.c)
 * Callees:
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     PsGetCurrentThreadProcessId @ 0x140431FB0 (PsGetCurrentThreadProcessId.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     CmpRecordParseFailure @ 0x140849FA0 (CmpRecordParseFailure.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     ObpAllocateObject @ 0x14085AAF0 (ObpAllocateObject.c)
 *     ObpCaptureObjectCreateInformation @ 0x14085C5F0 (ObpCaptureObjectCreateInformation.c)
 *     CmpTransReferenceTransaction @ 0x140870E50 (CmpTransReferenceTransaction.c)
 *     CmpLockKcbExclusive @ 0x140874380 (CmpLockKcbExclusive.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14089F140 (CmpReferenceKeyControlBlockUnsafe.c)
 *     ObpFreeObjectNameBuffer @ 0x14089F1A0 (ObpFreeObjectNameBuffer.c)
 *     CmpIsKeyStackDeleted @ 0x140973050 (CmpIsKeyStackDeleted.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x14099C700 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     ObpRegisterObject @ 0x140AB24BC (ObpRegisterObject.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140BA92B0 (CmpUnlockKcb.c)
 */

__int64 __fastcall CmpCreateKeyBody(
        ULONG_PTR a1,
        char a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        ULONG_PTR **a7,
        bool *a8)
{
  ULONG_PTR v11; // rbp
  ULONG_PTR *v12; // rbx
  struct _KPRCB *CurrentPrcb; // rbp
  POBJECT_TYPE *v14; // r13
  _GENERAL_LOOKASIDE *P; // rsi
  __int64 v16; // rdi
  int Information; // esi
  int v18; // ecx
  void *v19; // rcx
  struct _KPRCB *v20; // rdx
  _GENERAL_LOOKASIDE *v21; // rcx
  __int64 v22; // r13
  __int64 *v23; // rdi
  int v24; // r9d
  unsigned int v25; // ecx
  char v26; // di
  bool v27; // dl
  __int64 v29; // rax
  __int64 **v30; // rcx
  struct _KPRCB *v31; // rdx
  _GENERAL_LOOKASIDE *v32; // rcx
  _GENERAL_LOOKASIDE *L; // rsi
  __int64 Type; // rcx
  ULONG_PTR v35; // rax
  __int64 v36; // rbx
  int v37; // eax
  __int64 v38; // rax
  ULONG_PTR v39; // rcx
  __int16 v40; // [rsp+40h] [rbp-78h] BYREF
  __int64 v41; // [rsp+48h] [rbp-70h]
  __int64 v42; // [rsp+50h] [rbp-68h] BYREF
  ULONG_PTR v43; // [rsp+58h] [rbp-60h]
  _OWORD v44[5]; // [rsp+68h] [rbp-50h] BYREF

  v41 = 0LL;
  v43 = 0LL;
  v11 = a1;
  v12 = 0LL;
  CmpReferenceKeyControlBlockUnsafe(a1);
  if ( a4 )
  {
    if ( *(_QWORD *)(a4 + 56) )
    {
      v41 = *(_QWORD *)(a4 + 56);
      v37 = CmpTransReferenceTransaction(v41);
      Information = v37;
      if ( v37 < 0 )
      {
        CmpRecordParseFailure(a3, 131840, v37);
LABEL_71:
        CmpDereferenceKeyControlBlockUnsafe(v11);
        goto LABEL_39;
      }
    }
    else
    {
      v43 = a4 + 88;
    }
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v14 = CmKeyObjectType;
  v40 = 0;
  v42 = 0LL;
  P = CurrentPrcb->PPLookasideList[4].P;
  LOBYTE(v40) = 1;
  v44[0] = 0LL;
  ++P->TotalAllocates;
  v16 = (__int64)RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( v16
    || (++P->AllocateMisses,
        L = CurrentPrcb->PPLookasideList[4].L,
        ++L->TotalAllocates,
        (v16 = (__int64)RtlpInterlockedPopEntrySList(&L->ListHead)) != 0)
    || (Type = (unsigned int)L->Type, ++L->AllocateMisses, (v16 = guard_dispatch_icall_no_overrides(Type)) != 0) )
  {
    *(_DWORD *)v16 = CurrentPrcb->Number;
  }
  if ( !v16 )
  {
    Information = -1073741670;
LABEL_49:
    CmpRecordParseFailure(a3, 132096, Information);
    v11 = a1;
    v22 = v41;
    v26 = 1;
    goto LABEL_36;
  }
  Information = ObpCaptureObjectCreateInformation(a2, a2, 0LL, v44, v16, 0);
  if ( Information < 0 )
  {
    v31 = KeGetCurrentPrcb();
    v32 = v31->PPLookasideList[4].P;
    ++v32->TotalFrees;
    if ( LOWORD(v32->ListHead.Alignment) < v32->Depth
      || (++v32->FreeMisses,
          v32 = v31->PPLookasideList[4].L,
          ++v32->TotalFrees,
          LOWORD(v32->ListHead.Alignment) < v32->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v32->ListHead, (PSLIST_ENTRY)v16);
    }
    else
    {
      ++v32->FreeMisses;
      if ( (void (__stdcall *)(PVOID))v32->FreeEx == ExFreePool )
        ExFreePool((PVOID)v16);
      else
        guard_dispatch_icall_no_overrides(v16);
    }
    goto LABEL_49;
  }
  if ( (*(_DWORD *)v16 & (_DWORD)v14[9]) != 0 )
  {
    Information = -1073741811;
    goto LABEL_9;
  }
  if ( (*(_DWORD *)v16 & 0x10) != 0 && !SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, a2) )
  {
    Information = -1073741727;
    goto LABEL_9;
  }
  v18 = *((_DWORD *)v14 + 27);
  *(_DWORD *)(v16 + 20) = *((_DWORD *)v14 + 26);
  *(_DWORD *)(v16 + 24) = v18;
  Information = ObpAllocateObject((_DWORD *)v16, a2, (__int64)v14, v44, 112, &v42, &v40);
  if ( Information < 0 )
  {
LABEL_9:
    if ( *((_QWORD *)&v44[0] + 1) )
      ObpFreeObjectNameBuffer(v44);
    v19 = *(void **)(v16 + 32);
    if ( v19 )
    {
      if ( *(_BYTE *)(v16 + 16) <= 1u )
        ExFreePoolWithTag(v19, 0);
      *(_QWORD *)(v16 + 32) = 0LL;
    }
    v20 = KeGetCurrentPrcb();
    v21 = v20->PPLookasideList[4].P;
    ++v21->TotalFrees;
    if ( LOWORD(v21->ListHead.Alignment) < v21->Depth
      || (++v21->FreeMisses,
          v21 = v20->PPLookasideList[4].L,
          ++v21->TotalFrees,
          LOWORD(v21->ListHead.Alignment) < v21->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v21->ListHead, (PSLIST_ENTRY)v16);
    }
    else
    {
      ++v21->FreeMisses;
      if ( (void (__stdcall *)(PVOID))v21->FreeEx == ExFreePool )
        ExFreePool((PVOID)v16);
      else
        guard_dispatch_icall_no_overrides(v16);
    }
    goto LABEL_49;
  }
  v36 = v42;
  if ( ObpTraceFlags )
  {
    ObpRegisterObject(v42);
    ObpPushStackInfo(v36, 1, 1u, 0x746C6644u);
  }
  v12 = (ULONG_PTR *)(v36 + 48);
  memset_0(v12, 0, 0x70uLL);
  v11 = a1;
  *((_WORD *)v12 + 25) = *(_WORD *)(a3 + 20);
  v12[1] = a1;
  v12[3] = PsGetCurrentThreadProcessId();
  *((_WORD *)v12 + 2) = 0;
  *((_DWORD *)v12 + 24) = -1;
  if ( (*(_DWORD *)(a1 + 184) & 0x400000) != 0 )
  {
    v38 = *(int *)(a1 + 96);
    *(_DWORD *)v12 = v38;
    *(_QWORD *)(a3 + 56) = v38;
  }
  else
  {
    *(_DWORD *)v12 = 1803104306;
  }
  v22 = v41;
  if ( a4 )
  {
    v35 = v43;
    v12[7] = v41;
    v22 = 0LL;
    v12[8] = v35;
  }
  v12[10] = (ULONG_PTR)(v12 + 9);
  v12[9] = (ULONG_PTR)(v12 + 9);
  if ( (*(_DWORD *)(a3 + 24) & 0x10) != 0 )
    *((_WORD *)v12 + 24) |= 0x10u;
  if ( (a5 & 2) == 0 || (*(_DWORD *)(a1 + 184) & 0x400000) != 0 )
  {
LABEL_35:
    v26 = 0;
    Information = 0;
    v27 = (*(_DWORD *)(a1 + 184) & 0x400000) != 0;
    *a7 = v12;
    v12 = 0LL;
    *a8 = v27;
  }
  else
  {
    v23 = (__int64 *)(v12 + 4);
    v24 = 0;
    if ( (a5 & 1) != 0 )
      goto LABEL_28;
    while ( 1 )
    {
      v12[5] = (ULONG_PTR)(v12 + 4);
      v25 = 0;
      *v23 = (__int64)v23;
      while ( v25 < 4 )
      {
        if ( !_InterlockedCompareExchange64(
                (volatile signed __int64 *)(v12[1] + 8LL * v25 + 136),
                (signed __int64)v12,
                0LL) )
          goto LABEL_34;
        ++v25;
      }
      if ( v24 )
      {
        v29 = v12[1] + 120;
        v30 = *(__int64 ***)(v12[1] + 128);
        if ( *v30 != (__int64 *)v29 )
          __fastfail(3u);
        *v23 = v29;
        v12[5] = (ULONG_PTR)v30;
        *v30 = v23;
        *(_QWORD *)(v29 + 8) = v23;
LABEL_34:
        *((_WORD *)v12 + 24) |= 0x40u;
        goto LABEL_35;
      }
      v39 = v12[1];
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v39 + 48), 1LL, 17LL) == 17 )
      {
        *(_QWORD *)(v39 + 56) = KeGetCurrentThread();
        goto LABEL_28;
      }
      CmpUnlockKcb(v12[1]);
      CmpLockKcbExclusive(v12[1]);
      if ( (*(_DWORD *)(v12[1] + 8) & 0x20000) != 0 || (unsigned __int8)CmpIsKeyStackDeleted(a6, a4) )
        break;
LABEL_28:
      v24 = 2;
    }
    Information = -1073741444;
    CmpRecordParseFailure(a3, 132352, -1073741444);
    v26 = 1;
  }
LABEL_36:
  if ( v22 )
    ObfDereferenceObject((PVOID)(v22 & 0xFFFFFFFFFFFFFFFEuLL));
  if ( v26 )
    goto LABEL_71;
LABEL_39:
  if ( v12 )
  {
    v12[1] = 0LL;
    ObfDereferenceObject(v12);
  }
  return (unsigned int)Information;
}
