/*
 * XREFs of MiDeleteVad @ 0x1408E5390
 * Callers:
 *     MiFreeVadRange @ 0x1403CDBD8 (MiFreeVadRange.c)
 *     MiDeletePartialVad @ 0x1403CDE5C (MiDeletePartialVad.c)
 *     MiCreateEnclave @ 0x1407F7080 (MiCreateEnclave.c)
 *     MiDeleteInsertedCloneVads @ 0x140800264 (MiDeleteInsertedCloneVads.c)
 *     MiFreeToSubAllocatedRegion @ 0x1408DB54C (MiFreeToSubAllocatedRegion.c)
 *     MiCoalescePlaceholderAllocations @ 0x1408DC33C (MiCoalescePlaceholderAllocations.c)
 *     MiReserveUserMemory @ 0x1408DFE98 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1408E0820 (MiMapViewOfDataSection.c)
 *     MiUnmapViewOfSection @ 0x1408E4E04 (MiUnmapViewOfSection.c)
 *     MiCleanVad @ 0x1408E5224 (MiCleanVad.c)
 *     MiUnmapVad @ 0x1408E5280 (MiUnmapVad.c)
 *     MiMapLockedPagesInUserSpace @ 0x1409C3AE8 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x140A135A0 (MiMapViewOfPhysicalSection.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x140A61744 (MiUnmapLockedPagesInUserSpace.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140A7084C (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     MiUnmapViewSubsections @ 0x14020EC50 (MiUnmapViewSubsections.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     MiIsVadLargePrivate @ 0x14025FD90 (MiIsVadLargePrivate.c)
 *     MiRemoveVad @ 0x1402601E8 (MiRemoveVad.c)
 *     MiSetVadDeleted @ 0x1402B94A0 (MiSetVadDeleted.c)
 *     MiManageSubsectionView @ 0x1402BAAB0 (MiManageSubsectionView.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     MiGetProtoPteAddress @ 0x140301740 (MiGetProtoPteAddress.c)
 *     PsGetSessionIdEx @ 0x1403025D0 (PsGetSessionIdEx.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     MiDereferenceControlArea @ 0x14036F494 (MiDereferenceControlArea.c)
 *     MiDeleteVirtualAddresses @ 0x1403CC160 (MiDeleteVirtualAddresses.c)
 *     MiLocateLockedVadEvent @ 0x1403CDE38 (MiLocateLockedVadEvent.c)
 *     MiLockAddressSpaceToo @ 0x140405808 (MiLockAddressSpaceToo.c)
 *     MiControlAreaRequiresCharge @ 0x1404166A4 (MiControlAreaRequiresCharge.c)
 *     MiReturnFullProcessCharges @ 0x140430F60 (MiReturnFullProcessCharges.c)
 *     MiReadVadFlags2 @ 0x14044BF3C (MiReadVadFlags2.c)
 *     MiFinishVadDeletion @ 0x14044C9BC (MiFinishVadDeletion.c)
 *     MiDrainSystemAccessLog @ 0x140469AF0 (MiDrainSystemAccessLog.c)
 *     MiDereferenceExtendInfo @ 0x1404844BC (MiDereferenceExtendInfo.c)
 *     MiDecrementLargeSubsections @ 0x1404C8E10 (MiDecrementLargeSubsections.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1404CBAD0 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1404D0550 (MiLogPerfMemoryRangeEvent.c)
 *     MiInitPerfMemoryFlags @ 0x1404FA55C (MiInitPerfMemoryFlags.c)
 *     MiRemoveUserPhysicalPagesView @ 0x140682E08 (MiRemoveUserPhysicalPagesView.c)
 *     MiRemoveSharedCommitNode @ 0x1408E5960 (MiRemoveSharedCommitNode.c)
 *     MiFreeLargePageView @ 0x1409B0830 (MiFreeLargePageView.c)
 *     MiDereferencePerSessionProtos @ 0x140A24458 (MiDereferencePerSessionProtos.c)
 *     MiDeleteEnclavePages @ 0x140B6E178 (MiDeleteEnclavePages.c)
 */

void __fastcall MiDeleteVad(unsigned __int8 *P, __int64 a2)
{
  __int64 v4; // r13
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // r12
  __int64 v7; // r12
  __int64 v8; // r14
  __int64 v9; // rcx
  unsigned int v10; // ebx
  _KPROCESS *v11; // r8
  int v12; // eax
  BOOL IsVadLargePrivate; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // esi
  int v17; // ecx
  int v18; // ecx
  __int64 v19; // rcx
  int v20; // ecx
  char v21; // cl
  __int64 v22; // r8
  char v23; // al
  void *v24; // rcx
  unsigned __int64 *v25; // rdi
  unsigned __int64 *v26; // rsi
  volatile signed __int64 *v27; // rcx
  unsigned int v28; // eax
  unsigned __int64 v29; // rdx
  __int64 v30; // rdx
  unsigned __int64 LockedVadEvent; // rax
  int v32; // edx
  __int64 v33; // rcx
  unsigned __int8 v34; // rax^4
  unsigned int inited; // eax
  unsigned __int64 *v36; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v37; // [rsp+28h] [rbp-48h]
  struct _LIST_ENTRY **p_Blink; // [rsp+30h] [rbp-40h]
  __int128 v39; // [rsp+38h] [rbp-38h] BYREF
  __int128 v40; // [rsp+48h] [rbp-28h]
  __int128 v41; // [rsp+58h] [rbp-18h]
  __int64 v42; // [rsp+68h] [rbp-8h]
  _KPROCESS *Process; // [rsp+B0h] [rbp+40h]
  unsigned __int64 *v44; // [rsp+C8h] [rbp+58h] BYREF

  v42 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v4 = 0LL;
  v41 = 0LL;
  v5 = (unsigned __int64)P[33] << 32;
  v6 = (unsigned __int64)P[32] << 32;
  Process = KeGetCurrentThread()->ApcState.Process;
  v36 = 0LL;
  v44 = 0LL;
  p_Blink = &Process[2].ReadyListHead.Blink;
  v7 = (*((unsigned int *)P + 6) | v6) << 12;
  v8 = ((*((unsigned int *)P + 7) | v5) << 12) | 0xFFF;
  v10 = MiIsVadLargePrivate((__int64)P) ? 0x40 : 0;
  if ( (*(_DWORD *)(v9 + 48) & 0x200000) == 0 )
  {
    v24 = *(void **)(v9 + 128);
    if ( v24 )
    {
      ObfDereferenceObjectWithTag(v24, 0x63536D4Du);
      v11 = Process;
    }
  }
  v12 = *((_DWORD *)P + 12);
  if ( (v12 & 0x200000) != 0 && (v12 & 0xC000000) == 0x8000000 )
    MiDeleteEnclavePages(v11, P);
  if ( (P[48] & 0x70) == 0x30 )
    *((_QWORD *)&v41 + 1) = MiRemoveUserPhysicalPagesView((__int64)P);
  if ( (*((unsigned int *)P + 13) | ((unsigned __int64)P[34] << 32)) == 0x7FFFFFFFDLL )
  {
    v28 = v10;
    v10 |= 0x80u;
    if ( *((_QWORD *)P + 2) != -2LL )
      v10 = v28;
  }
  if ( v10 < 0x80 )
    MiSetVadDeleted((__int64)P);
  IsVadLargePrivate = MiIsVadLargePrivate((__int64)P);
  v16 = v15 | 0x800;
  if ( !IsVadLargePrivate )
    v16 = v15;
  if ( (*((_DWORD *)P + 12) & 0x4200000) == 0x4200000 )
    v16 |= 0x1000u;
  if ( v10 < 0x80 )
  {
    *(_QWORD *)&v41 = P;
    MiDeleteVirtualAddresses(v7, v8, v16, (__int64)&v39);
    if ( (v16 & 0x800) != 0 )
    {
      v29 = *((unsigned int *)P + 13) | ((unsigned __int64)P[34] << 32);
      v37 = v29;
      if ( v42 )
      {
        v30 = v42;
        v42 = 0LL;
        MiReturnFullProcessCharges((__int64)Process, v30);
        v29 = v37;
      }
      v15 = v40;
      v14 = v29 - v40;
      *((_DWORD *)P + 13) = v14;
      P[34] = BYTE4(v14);
      if ( v14 )
      {
        LockedVadEvent = MiLocateLockedVadEvent((__int64)P, 16);
        MiFreeLargePageView(Process, P, LockedVadEvent, (unsigned int)(v32 - 15));
        v15 = v40;
      }
      v33 = *((_QWORD *)&v39 + 1);
      v34 = BYTE12(v39);
      *((_DWORD *)P + 13) = DWORD2(v39);
      P[34] = v34;
      _InterlockedAdd64((volatile signed __int64 *)&Process[3].ProfileListHead, v33 - v15);
      *(_QWORD *)&v40 = 0LL;
    }
  }
  if ( (v16 & 2) != 0 )
  {
    v17 = *((_DWORD *)P + 12);
    v4 = **((_QWORD **)P + 9);
    if ( (v17 & 0x70) == 0x20 )
    {
      if ( (MiReadVadFlags2((__int64)P) & 1) != 0 )
        LOBYTE(v10) = v10 | 0x18;
    }
    else if ( *(_QWORD *)(v4 + 64) )
    {
      v18 = v17 & 0xF80;
      if ( v18 == 512 || v18 == 768 )
        _InterlockedDecrement((volatile signed __int32 *)(v4 + 92));
      MiGetProtoPteAddress((__int64)P, *((unsigned int *)P + 6) | ((unsigned __int64)P[32] << 32), 0, &v36);
      if ( (MiReadVadFlags2((__int64)P) & 1) != 0 )
        LOBYTE(v10) = v10 | 0x20;
      MiGetProtoPteAddress(v19, *((unsigned int *)P + 7) | ((unsigned __int64)P[33] << 32), 0, &v44);
    }
    if ( (v10 & 8) == 0 )
    {
      if ( (P[48] & 0x70) != 0x50 )
      {
        MiDrainSystemAccessLog((__int64)p_Blink, v14, v15);
        v20 = *((_DWORD *)P + 12);
        if ( (v20 & 0x70) == 0x20 )
        {
          if ( (*(_DWORD *)(v4 + 56) & 0x8000000) != 0 )
            LOBYTE(v10) = v10 | 2;
          LOBYTE(v10) = v10 | 4;
        }
        else if ( (v20 & 0x200000) == 0 && !*(_QWORD *)(v4 + 64) )
        {
          MiGetProtoPteAddress((__int64)P, *((unsigned int *)P + 6) | ((unsigned __int64)P[32] << 32), 0, &v36);
          MiGetProtoPteAddress((__int64)P, *((unsigned int *)P + 7) | ((unsigned __int64)P[33] << 32), 0, &v44);
        }
      }
      v21 = v10 | 1;
      if ( *((__int64 *)P + 15) >= 0 )
        v21 = v10;
      LOBYTE(v10) = v21 | 8;
    }
  }
  MiLockAddressSpaceToo((__int64)Process, (__int64)P, a2);
  if ( (v10 & 0x80u) == 0 )
  {
    v22 = a2;
    if ( !a2 )
      v22 = 0LL;
    MiRemoveVad((__int64)P, 1, v22);
    if ( a2 )
    {
      v27 = (volatile signed __int64 *)(a2 + 40);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      {
        ExfTryToWakePushLock(v27);
        v27 = (volatile signed __int64 *)(a2 + 40);
      }
      KeAbPostRelease((ULONG_PTR)v27);
    }
  }
  *((_QWORD *)P + 1) = *((_QWORD *)&v39 + 1);
  *(_QWORD *)P = v40;
  if ( (v10 & 0x40) != 0 && (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
  {
    inited = MiInitPerfMemoryFlags(0, 13);
    MiLogPerfMemoryRangeEvent(
      v7,
      LODWORD(Process[1].Header.WaitListHead.Flink),
      inited,
      (*((unsigned int *)P + 7) | ((unsigned __int64)P[33] << 32))
    - (*((unsigned int *)P + 6) | ((unsigned __int64)P[32] << 32))
    + 1);
  }
  if ( (v10 & 1) != 0 )
    MiDereferenceExtendInfo((__int64)P, v4);
  if ( (v10 & 8) != 0 )
  {
    if ( (v10 & 2) != 0 )
    {
      PsGetSessionIdEx((__int64)Process);
      MiDereferencePerSessionProtos(v4);
    }
    if ( (v10 & 4) != 0 && (MiControlAreaRequiresCharge(v4, 0) & 0xFFFFFFFD) == 0 )
      MiReturnCrossPartitionControlAreaCharges(v4);
    MiRemoveSharedCommitNode(v4, Process, 0LL);
    MiManageSubsectionView(*((__int64 **)P + 9), (_QWORD *)P + 12, 4);
  }
  v23 = a2 || (v10 & 0x80u) != 0;
  MiFinishVadDeletion(P, v7, v8, v23);
  if ( v4 )
  {
    if ( (v10 & 0x10) != 0 )
    {
      MiDereferenceControlArea(v4);
    }
    else
    {
      v25 = v36;
      v26 = v44;
      if ( v36 )
      {
        if ( (v10 & 0x20) != 0 )
          MiDecrementLargeSubsections((__int64 *)v36, (__int64 *)v44);
      }
      MiUnmapViewSubsections(v4, (ULONG_PTR)v25, (__int64)v26);
    }
  }
}
