/*
 * XREFs of CmpCreateKeyBody @ 0x14083A700
 * Callers:
 *     CmpDoParseKey @ 0x140872AE0 (CmpDoParseKey.c)
 *     CmpStartSiloRegistryNamespace @ 0x1409DC200 (CmpStartSiloRegistryNamespace.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     PsGetCurrentThreadProcessId @ 0x14041D840 (PsGetCurrentThreadProcessId.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObpFreeObjectNameBuffer @ 0x14083AD40 (ObpFreeObjectNameBuffer.c)
 *     CmpRecordParseFailure @ 0x140841F00 (CmpRecordParseFailure.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     CmpLockKcbExclusive @ 0x1408747A0 (CmpLockKcbExclusive.c)
 *     CmpTransReferenceTransaction @ 0x14087D3B8 (CmpTransReferenceTransaction.c)
 *     ObpAllocateObject @ 0x1408A3930 (ObpAllocateObject.c)
 *     ObpCaptureObjectCreateInformation @ 0x1408A5340 (ObpCaptureObjectCreateInformation.c)
 *     CmpIsKeyStackDeleted @ 0x140970C00 (CmpIsKeyStackDeleted.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x140987400 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     ObpRegisterObject @ 0x140AB162C (ObpRegisterObject.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140BBB2C0 (CmpUnlockKcb.c)
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
  __int64 Size; // rdx
  __int64 Type; // rcx
  int Information; // esi
  int v21; // ecx
  void *v22; // rcx
  struct _KPRCB *v23; // rdx
  _GENERAL_LOOKASIDE *v24; // rcx
  unsigned __int64 CurrentThreadProcessId; // rax
  ULONG_PTR v26; // r10
  ULONG_PTR v27; // r13
  __int64 *v28; // rdi
  int v29; // r9d
  unsigned int v30; // ecx
  char v31; // di
  bool v32; // dl
  __int64 v34; // rax
  __int64 **v35; // rcx
  struct _KPRCB *v36; // rdx
  _GENERAL_LOOKASIDE *v37; // rcx
  __int64 v38; // rbx
  int v39; // eax
  void (__stdcall *v40)(PVOID); // rdx
  void (__stdcall *FreeEx)(PVOID); // rdx
  __int64 v42; // rax
  ULONG_PTR v43; // rcx
  char IsKeyStackDeleted; // al
  __int16 v45; // [rsp+40h] [rbp-78h] BYREF
  ULONG_PTR v46; // [rsp+48h] [rbp-70h]
  __int64 v47; // [rsp+50h] [rbp-68h] BYREF
  ULONG_PTR v48; // [rsp+58h] [rbp-60h]
  __int128 v49; // [rsp+68h] [rbp-50h] BYREF

  v8 = BugCheckParameter2;
  v46 = 0LL;
  v9 = 0LL;
  v48 = 0LL;
  v12 = _InterlockedIncrement64((volatile signed __int64 *)BugCheckParameter2);
  if ( !v12 )
    KeBugCheckEx(0x51u, 0x24uLL, BugCheckParameter2, 0LL, 0LL);
  if ( v12 == 1 )
    KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
  if ( a4 )
  {
    if ( *(_QWORD *)(a4 + 56) )
    {
      v46 = *(_QWORD *)(a4 + 56);
      v39 = CmpTransReferenceTransaction(v46);
      Information = v39;
      if ( v39 < 0 )
      {
        CmpRecordParseFailure(a3, 131840LL, (unsigned int)v39);
LABEL_75:
        CmpDereferenceKeyControlBlockUnsafe(v8);
        v26 = 0LL;
        goto LABEL_43;
      }
    }
    else
    {
      v48 = a4 + 88;
    }
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v14 = CmKeyObjectType;
  v45 = 0;
  v47 = 0LL;
  P = CurrentPrcb->PPLookasideList[4].P;
  LOBYTE(v45) = 1;
  v49 = 0LL;
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
        Type = (unsigned int)L->Type,
        ++L->AllocateMisses,
        (v16 = guard_dispatch_icall_no_overrides(Type, Size)) != 0) )
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
    v31 = 1;
    v27 = v46;
    goto LABEL_40;
  }
  Information = ObpCaptureObjectCreateInformation(a2, a2, 0, (unsigned int)&v49, v16, 0);
  if ( Information < 0 )
  {
    v36 = KeGetCurrentPrcb();
    v37 = v36->PPLookasideList[4].P;
    ++v37->TotalFrees;
    if ( LOWORD(v37->ListHead.Alignment) < v37->Depth
      || (++v37->FreeMisses,
          v37 = v36->PPLookasideList[4].L,
          ++v37->TotalFrees,
          LOWORD(v37->ListHead.Alignment) < v37->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v37->ListHead, (PSLIST_ENTRY)v16);
    }
    else
    {
      ++v37->FreeMisses;
      FreeEx = (void (__stdcall *)(PVOID))v37->FreeEx;
      if ( FreeEx == ExFreePool )
        ExFreePool((PVOID)v16);
      else
        guard_dispatch_icall_no_overrides(v16, FreeEx);
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
  v21 = *((_DWORD *)v14 + 27);
  *(_DWORD *)(v16 + 20) = *((_DWORD *)v14 + 26);
  *(_DWORD *)(v16 + 24) = v21;
  Information = ObpAllocateObject(v16, a2, (_DWORD)v14, (unsigned int)&v49, 112, (__int64)&v47, (__int64)&v45);
  if ( Information < 0 )
  {
LABEL_14:
    if ( *((_QWORD *)&v49 + 1) )
      ObpFreeObjectNameBuffer(&v49);
    v22 = *(void **)(v16 + 32);
    if ( v22 )
    {
      if ( *(_BYTE *)(v16 + 16) <= 1u )
        ExFreePoolWithTag(v22, 0);
      *(_QWORD *)(v16 + 32) = 0LL;
    }
    v23 = KeGetCurrentPrcb();
    v24 = v23->PPLookasideList[4].P;
    ++v24->TotalFrees;
    if ( LOWORD(v24->ListHead.Alignment) < v24->Depth
      || (++v24->FreeMisses,
          v24 = v23->PPLookasideList[4].L,
          ++v24->TotalFrees,
          LOWORD(v24->ListHead.Alignment) < v24->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v24->ListHead, (PSLIST_ENTRY)v16);
    }
    else
    {
      ++v24->FreeMisses;
      v40 = (void (__stdcall *)(PVOID))v24->FreeEx;
      if ( v40 == ExFreePool )
        ExFreePool((PVOID)v16);
      else
        guard_dispatch_icall_no_overrides(v16, v40);
    }
    goto LABEL_53;
  }
  v38 = v47;
  if ( ObpTraceFlags )
  {
    ObpRegisterObject(v47);
    ObpPushStackInfo(v38, 1, 1u, 0x746C6644u);
  }
  v9 = (ULONG_PTR *)(v38 + 48);
  memset_0(v9, 0, 0x70uLL);
  v8 = BugCheckParameter2;
  *((_WORD *)v9 + 25) = *(_WORD *)(a3 + 20);
  v9[1] = BugCheckParameter2;
  CurrentThreadProcessId = PsGetCurrentThreadProcessId();
  v26 = 0LL;
  v9[3] = CurrentThreadProcessId;
  *((_WORD *)v9 + 2) = 0;
  *((_DWORD *)v9 + 24) = -1;
  if ( (*(_DWORD *)(BugCheckParameter2 + 184) & 0x400000) != 0 )
  {
    v42 = *(int *)(BugCheckParameter2 + 96);
    *(_DWORD *)v9 = v42;
    *(_QWORD *)(a3 + 56) = v42;
  }
  else
  {
    *(_DWORD *)v9 = 1803104306;
  }
  if ( a4 )
  {
    v27 = 0LL;
    v9[7] = v46;
    v9[8] = v48;
  }
  else
  {
    v27 = v46;
  }
  v9[10] = (ULONG_PTR)(v9 + 9);
  v9[9] = (ULONG_PTR)(v9 + 9);
  if ( (*(_DWORD *)(a3 + 24) & 0x10) != 0 )
    *((_WORD *)v9 + 24) |= 0x10u;
  if ( (a5 & 2) == 0 || (*(_DWORD *)(BugCheckParameter2 + 184) & 0x400000) != 0 )
  {
LABEL_39:
    v31 = 0;
    Information = 0;
    v32 = (*(_DWORD *)(BugCheckParameter2 + 184) & 0x400000) != 0;
    *a7 = v9;
    v9 = 0LL;
    *a8 = v32;
  }
  else
  {
    v28 = (__int64 *)(v9 + 4);
    v29 = 0;
    if ( (a5 & 1) == 0 )
      goto LABEL_33;
    do
    {
      while ( 1 )
      {
        v29 = 2;
LABEL_33:
        v9[5] = (ULONG_PTR)(v9 + 4);
        v30 = 0;
        *v28 = (__int64)v28;
        while ( v30 < 4 )
        {
          if ( !_InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v9[1] + 8LL * v30 + 136),
                  (signed __int64)v9,
                  0LL) )
            goto LABEL_38;
          ++v30;
        }
        if ( v29 )
        {
          v34 = v9[1] + 120;
          v35 = *(__int64 ***)(v9[1] + 128);
          if ( *v35 != (__int64 *)v34 )
            __fastfail(3u);
          *v28 = v34;
          v9[5] = (ULONG_PTR)v35;
          *v35 = v28;
          *(_QWORD *)(v34 + 8) = v28;
LABEL_38:
          *((_WORD *)v9 + 24) |= 0x40u;
          goto LABEL_39;
        }
        v43 = v9[1];
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v43 + 48), 1LL, 17LL) != 17 )
          break;
        *(_QWORD *)(v43 + 56) = KeGetCurrentThread();
      }
      CmpUnlockKcb(v9[1]);
      CmpLockKcbExclusive(v9[1]);
      if ( (*(_DWORD *)(v9[1] + 8) & 0x20000) != 0 )
        break;
      IsKeyStackDeleted = CmpIsKeyStackDeleted(a6, a4);
      v26 = 0LL;
    }
    while ( !IsKeyStackDeleted );
    Information = -1073741444;
    CmpRecordParseFailure(a3, 132352LL, 3221225852LL);
    v26 = 0LL;
    v31 = 1;
  }
LABEL_40:
  if ( v27 )
  {
    ObfDereferenceObject((PVOID)(v27 & 0xFFFFFFFFFFFFFFFEuLL));
    v26 = 0LL;
  }
  if ( v31 )
    goto LABEL_75;
LABEL_43:
  if ( v9 )
  {
    v9[1] = v26;
    ObfDereferenceObject(v9);
  }
  return (unsigned int)Information;
}
