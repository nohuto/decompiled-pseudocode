/*
 * XREFs of NtCreateWaitCompletionPacket @ 0x14083B1F0
 * Callers:
 *     <none>
 * Callees:
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ObpFreeObjectNameBuffer @ 0x14083AD40 (ObpFreeObjectNameBuffer.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     ObInsertObjectEx @ 0x140853900 (ObInsertObjectEx.c)
 *     ObpAllocateObject @ 0x1408A3930 (ObpAllocateObject.c)
 *     ObpCaptureObjectCreateInformation @ 0x1408A5340 (ObpCaptureObjectCreateInformation.c)
 *     ObpRegisterObject @ 0x140AB162C (ObpRegisterObject.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtCreateWaitCompletionPacket(
        PHANDLE WaitCompletionPacketHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  __int64 v4; // r14
  KPROCESSOR_MODE PreviousMode; // r12
  __int64 v6; // rcx
  POBJECT_TYPE v7; // r15
  struct _KPRCB *CurrentPrcb; // rsi
  _GENERAL_LOOKASIDE *P; // rdi
  int v10; // edx
  int v11; // ecx
  __int64 v12; // rbx
  _GENERAL_LOOKASIDE *L; // rdi
  int v14; // edx
  NTSTATUS Information; // edi
  unsigned int DefaultNonPagedPoolCharge; // ecx
  void *v17; // rcx
  struct _KPRCB *v18; // rdx
  _GENERAL_LOOKASIDE *v19; // rcx
  void (__stdcall *FreeEx)(PVOID); // rdx
  __int64 v22; // [rsp+48h] [rbp-70h] BYREF
  __int64 v23[3]; // [rsp+50h] [rbp-68h] BYREF
  _OWORD v24[5]; // [rsp+68h] [rbp-50h] BYREF
  int v25; // [rsp+D0h] [rbp+18h]

  v25 = (int)ObjectAttributes;
  v23[0] = 0LL;
  v4 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)WaitCompletionPacketHandle < 0x7FFFFFFF0000LL )
      v6 = (__int64)WaitCompletionPacketHandle;
    *(_QWORD *)v6 = *(_QWORD *)v6;
  }
  v7 = IopWaitCompletionPacketObjectType;
  v24[0] = 0LL;
  v22 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[4].P;
  ++P->TotalAllocates;
  v12 = (__int64)RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( !v12 )
  {
    ++P->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[4].L;
    ++L->TotalAllocates;
    v12 = (__int64)RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( !v12 )
    {
      ++L->AllocateMisses;
      v12 = guard_dispatch_icall_no_overrides((unsigned int)L->Type, L->Size);
    }
  }
  if ( v12 )
  {
    *(_DWORD *)v12 = CurrentPrcb->Number;
    LOBYTE(v10) = PreviousMode;
    LOBYTE(v11) = PreviousMode;
    Information = ObpCaptureObjectCreateInformation(v11, v10, v25, (unsigned int)v24, v12, 0);
    if ( Information < 0 )
    {
LABEL_19:
      v18 = KeGetCurrentPrcb();
      v19 = v18->PPLookasideList[4].P;
      ++v19->TotalFrees;
      if ( LOWORD(v19->ListHead.Alignment) < v19->Depth
        || (++v19->FreeMisses,
            v19 = v18->PPLookasideList[4].L,
            ++v19->TotalFrees,
            LOWORD(v19->ListHead.Alignment) < v19->Depth) )
      {
        RtlpInterlockedPushEntrySList(&v19->ListHead, (PSLIST_ENTRY)v12);
      }
      else
      {
        ++v19->FreeMisses;
        FreeEx = (void (__stdcall *)(PVOID))v19->FreeEx;
        if ( FreeEx == ExFreePool )
          ExFreePool((PVOID)v12);
        else
          guard_dispatch_icall_no_overrides(v12, FreeEx);
      }
      goto LABEL_21;
    }
    if ( (*(_DWORD *)v12 & v7->TypeInfo.InvalidAttributes) != 0 )
    {
      Information = -1073741811;
      goto LABEL_13;
    }
    if ( (*(_DWORD *)v12 & 0x10) != 0 && !SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, PreviousMode) )
    {
      Information = -1073741727;
      goto LABEL_13;
    }
    DefaultNonPagedPoolCharge = v7->TypeInfo.DefaultNonPagedPoolCharge;
    *(_DWORD *)(v12 + 20) = v7->TypeInfo.DefaultPagedPoolCharge;
    *(_DWORD *)(v12 + 24) = DefaultNonPagedPoolCharge;
    LOBYTE(v14) = PreviousMode;
    Information = ObpAllocateObject(v12, v14, (_DWORD)v7, (unsigned int)v24, 112, (__int64)&v22, 0LL);
    if ( Information < 0 )
    {
LABEL_13:
      if ( *((_QWORD *)&v24[0] + 1) )
        ObpFreeObjectNameBuffer((__int64)v24);
      v17 = *(void **)(v12 + 32);
      if ( v17 )
      {
        if ( *(_BYTE *)(v12 + 16) <= 1u )
          ExFreePoolWithTag(v17, 0);
        *(_QWORD *)(v12 + 32) = 0LL;
      }
      goto LABEL_19;
    }
    if ( ObpTraceFlags )
    {
      ObpRegisterObject(v22);
      ObpPushStackInfo(v22, 1, 1u, 0x746C6644u);
    }
    v4 = v22 + 48;
  }
  else
  {
    Information = -1073741670;
  }
LABEL_21:
  if ( Information >= 0 )
  {
    *(_QWORD *)(v4 + 96) = 0LL;
    *(_BYTE *)(v4 + 104) = 0;
    *(_BYTE *)(v4 + 105) = 0;
    *(_QWORD *)(v4 + 88) = 0LL;
    Information = ObInsertObjectEx((PVOID)v4, 0, 0LL, (__int64)v23);
    if ( Information >= 0 )
      *WaitCompletionPacketHandle = (HANDLE)v23[0];
  }
  return Information;
}
