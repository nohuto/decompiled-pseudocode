/*
 * XREFs of MiDeleteVad @ 0x140895840
 * Callers:
 *     MiFreeVadRange @ 0x14026731C (MiFreeVadRange.c)
 *     MiDeletePartialVad @ 0x1402675A0 (MiDeletePartialVad.c)
 *     MiCreateEnclave @ 0x1407F77F4 (MiCreateEnclave.c)
 *     MiDeleteInsertedCloneVads @ 0x1408009A4 (MiDeleteInsertedCloneVads.c)
 *     MiCleanVad @ 0x140895DDC (MiCleanVad.c)
 *     MiUnmapVad @ 0x140895E38 (MiUnmapVad.c)
 *     MiUnmapViewOfSection @ 0x140896E14 (MiUnmapViewOfSection.c)
 *     MiFreeToSubAllocatedRegion @ 0x1408D9778 (MiFreeToSubAllocatedRegion.c)
 *     MiCoalescePlaceholderAllocations @ 0x1408DA56C (MiCoalescePlaceholderAllocations.c)
 *     MiMapLockedPagesInUserSpace @ 0x1408DC1EC (MiMapLockedPagesInUserSpace.c)
 *     MiReserveUserMemory @ 0x140916A48 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1409173D0 (MiMapViewOfDataSection.c)
 *     MiMapViewOfPhysicalSection @ 0x140A0BD00 (MiMapViewOfPhysicalSection.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x140A59F24 (MiUnmapLockedPagesInUserSpace.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140A69CDC (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     MiDeleteVirtualAddresses @ 0x140266330 (MiDeleteVirtualAddresses.c)
 *     MiLocateLockedVadEvent @ 0x14026757C (MiLocateLockedVadEvent.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     MiIsVadLargePrivate @ 0x1402903A0 (MiIsVadLargePrivate.c)
 *     MiRemoveVad @ 0x1402907F8 (MiRemoveVad.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     MiGetProtoPteAddress @ 0x14030BEC0 (MiGetProtoPteAddress.c)
 *     PsGetSessionIdEx @ 0x14030CBE0 (PsGetSessionIdEx.c)
 *     MiUnmapViewSubsections @ 0x140337FB0 (MiUnmapViewSubsections.c)
 *     MiSetVadDeleted @ 0x140360BE0 (MiSetVadDeleted.c)
 *     MiManageSubsectionView @ 0x1403621F0 (MiManageSubsectionView.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     MiControlAreaRequiresCharge @ 0x140394370 (MiControlAreaRequiresCharge.c)
 *     MiLockAddressSpaceToo @ 0x1403C7D64 (MiLockAddressSpaceToo.c)
 *     MiReturnFullProcessCharges @ 0x1404234A0 (MiReturnFullProcessCharges.c)
 *     MiDereferenceControlArea @ 0x14042777C (MiDereferenceControlArea.c)
 *     MiReadVadFlags2 @ 0x14044307C (MiReadVadFlags2.c)
 *     MiFinishVadDeletion @ 0x1404438BC (MiFinishVadDeletion.c)
 *     MiDrainSystemAccessLog @ 0x140462A14 (MiDrainSystemAccessLog.c)
 *     MiDereferenceExtendInfo @ 0x14047FA5C (MiDereferenceExtendInfo.c)
 *     MiDecrementLargeSubsections @ 0x1404C22C0 (MiDecrementLargeSubsections.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1404C4F4C (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1404C9744 (MiLogPerfMemoryRangeEvent.c)
 *     MiInitPerfMemoryFlags @ 0x1404F7E3C (MiInitPerfMemoryFlags.c)
 *     MiRemoveUserPhysicalPagesView @ 0x140683FF8 (MiRemoveUserPhysicalPagesView.c)
 *     MiRemoveSharedCommitNode @ 0x140895560 (MiRemoveSharedCommitNode.c)
 *     MiFreeLargePageView @ 0x14099A530 (MiFreeLargePageView.c)
 *     MiDereferencePerSessionProtos @ 0x140A18828 (MiDereferencePerSessionProtos.c)
 *     MiDeleteEnclavePages @ 0x140B6FC18 (MiDeleteEnclavePages.c)
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
  __int64 v16; // r9
  int v17; // esi
  int v18; // ecx
  int v19; // ecx
  __int64 v20; // rcx
  int v21; // ecx
  char v22; // cl
  __int64 v23; // r8
  char v24; // al
  void *v25; // rcx
  __int64 *v26; // rdi
  __int64 *v27; // rsi
  volatile signed __int64 *v28; // rcx
  unsigned int v29; // eax
  unsigned __int64 v30; // rdx
  __int64 v31; // rdx
  unsigned __int64 LockedVadEvent; // rax
  int v33; // edx
  __int64 v34; // rcx
  unsigned __int8 v35; // rax^4
  unsigned int inited; // eax
  __int64 *v37; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v38; // [rsp+28h] [rbp-48h]
  struct _LIST_ENTRY **p_Blink; // [rsp+30h] [rbp-40h]
  __int128 v40; // [rsp+38h] [rbp-38h] BYREF
  __int128 v41; // [rsp+48h] [rbp-28h]
  __int128 v42; // [rsp+58h] [rbp-18h]
  __int64 v43; // [rsp+68h] [rbp-8h]
  _KPROCESS *Process; // [rsp+B0h] [rbp+40h]
  __int64 *v45; // [rsp+C8h] [rbp+58h] BYREF

  v43 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v4 = 0LL;
  v42 = 0LL;
  v5 = (unsigned __int64)P[33] << 32;
  v6 = (unsigned __int64)P[32] << 32;
  Process = KeGetCurrentThread()->ApcState.Process;
  v37 = 0LL;
  v45 = 0LL;
  p_Blink = &Process[2].ReadyListHead.Blink;
  v7 = (*((unsigned int *)P + 6) | v6) << 12;
  v8 = ((*((unsigned int *)P + 7) | v5) << 12) | 0xFFF;
  v10 = MiIsVadLargePrivate((__int64)P) ? 0x40 : 0;
  if ( (*(_DWORD *)(v9 + 48) & 0x200000) == 0 )
  {
    v25 = *(void **)(v9 + 128);
    if ( v25 )
    {
      ObfDereferenceObjectWithTag(v25, 0x63536D4Du);
      v11 = Process;
    }
  }
  v12 = *((_DWORD *)P + 12);
  if ( (v12 & 0x200000) != 0 && (v12 & 0xC000000) == 0x8000000 )
    MiDeleteEnclavePages(v11, P);
  if ( (P[48] & 0x70) == 0x30 )
    *((_QWORD *)&v42 + 1) = MiRemoveUserPhysicalPagesView((__int64)P);
  if ( (*((unsigned int *)P + 13) | ((unsigned __int64)P[34] << 32)) == 0x7FFFFFFFDLL )
  {
    v29 = v10;
    v10 |= 0x80u;
    if ( *((_QWORD *)P + 2) != -2LL )
      v10 = v29;
  }
  if ( v10 < 0x80 )
    MiSetVadDeleted((__int64)P);
  IsVadLargePrivate = MiIsVadLargePrivate((__int64)P);
  v17 = v15 | 0x800;
  if ( !IsVadLargePrivate )
    v17 = v15;
  if ( (*((_DWORD *)P + 12) & 0x4200000) == 0x4200000 )
    v17 |= 0x1000u;
  if ( v10 < 0x80 )
  {
    *(_QWORD *)&v42 = P;
    MiDeleteVirtualAddresses(v7, v8, v17, (__int64)&v40);
    if ( (v17 & 0x800) != 0 )
    {
      v30 = *((unsigned int *)P + 13) | ((unsigned __int64)P[34] << 32);
      v38 = v30;
      if ( v43 )
      {
        v31 = v43;
        v43 = 0LL;
        MiReturnFullProcessCharges((__int64)Process, v31);
        v30 = v38;
      }
      v15 = v41;
      v14 = v30 - v41;
      *((_DWORD *)P + 13) = v14;
      P[34] = BYTE4(v14);
      if ( v14 )
      {
        LockedVadEvent = MiLocateLockedVadEvent((__int64)P, 16);
        MiFreeLargePageView(Process, P, LockedVadEvent, (unsigned int)(v33 - 15));
        v15 = v41;
      }
      v34 = *((_QWORD *)&v40 + 1);
      v35 = BYTE12(v40);
      *((_DWORD *)P + 13) = DWORD2(v40);
      P[34] = v35;
      _InterlockedAdd64((volatile signed __int64 *)&Process[3].ProfileListHead, v34 - v15);
      *(_QWORD *)&v41 = 0LL;
    }
  }
  if ( (v17 & 2) != 0 )
  {
    v18 = *((_DWORD *)P + 12);
    v4 = **((_QWORD **)P + 9);
    if ( (v18 & 0x70) == 0x20 )
    {
      if ( (MiReadVadFlags2((__int64)P) & 1) != 0 )
        LOBYTE(v10) = v10 | 0x18;
    }
    else if ( *(_QWORD *)(v4 + 64) )
    {
      v19 = v18 & 0xF80;
      if ( v19 == 512 || v19 == 768 )
        _InterlockedDecrement((volatile signed __int32 *)(v4 + 92));
      MiGetProtoPteAddress((__int64)P, *((unsigned int *)P + 6) | ((unsigned __int64)P[32] << 32), 0, (__int64 *)&v37);
      if ( (MiReadVadFlags2((__int64)P) & 1) != 0 )
        LOBYTE(v10) = v10 | 0x20;
      MiGetProtoPteAddress(v20, *((unsigned int *)P + 7) | ((unsigned __int64)P[33] << 32), 0, (__int64 *)&v45);
    }
    if ( (v10 & 8) == 0 )
    {
      if ( (P[48] & 0x70) != 0x50 )
      {
        MiDrainSystemAccessLog((__int64)p_Blink, v14, v15, v16);
        v21 = *((_DWORD *)P + 12);
        if ( (v21 & 0x70) == 0x20 )
        {
          if ( (*(_DWORD *)(v4 + 56) & 0x8000000) != 0 )
            LOBYTE(v10) = v10 | 2;
          LOBYTE(v10) = v10 | 4;
        }
        else if ( (v21 & 0x200000) == 0 && !*(_QWORD *)(v4 + 64) )
        {
          MiGetProtoPteAddress(
            (__int64)P,
            *((unsigned int *)P + 6) | ((unsigned __int64)P[32] << 32),
            0,
            (__int64 *)&v37);
          MiGetProtoPteAddress(
            (__int64)P,
            *((unsigned int *)P + 7) | ((unsigned __int64)P[33] << 32),
            0,
            (__int64 *)&v45);
        }
      }
      v22 = v10 | 1;
      if ( *((__int64 *)P + 15) >= 0 )
        v22 = v10;
      LOBYTE(v10) = v22 | 8;
    }
  }
  MiLockAddressSpaceToo((__int64)Process, (__int64)P, a2);
  if ( (v10 & 0x80u) == 0 )
  {
    v23 = a2;
    if ( !a2 )
      v23 = 0LL;
    MiRemoveVad((__int64)P, 1, v23);
    if ( a2 )
    {
      v28 = (volatile signed __int64 *)(a2 + 40);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      {
        ExfTryToWakePushLock(v28);
        v28 = (volatile signed __int64 *)(a2 + 40);
      }
      KeAbPostRelease((ULONG_PTR)v28);
    }
  }
  *((_QWORD *)P + 1) = *((_QWORD *)&v40 + 1);
  *(_QWORD *)P = v41;
  if ( (v10 & 0x40) != 0 && (BYTE4(PerfGlobalGroupMask[0]) & 1) != 0 )
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
    MiRemoveSharedCommitNode(v4, (unsigned __int64)Process, 0);
    MiManageSubsectionView(*((__int64 **)P + 9), (_QWORD *)P + 12, 4);
  }
  v24 = a2 || (v10 & 0x80u) != 0;
  MiFinishVadDeletion(P, v7, v8, v24);
  if ( v4 )
  {
    if ( (v10 & 0x10) != 0 )
    {
      MiDereferenceControlArea(v4);
    }
    else
    {
      v26 = v37;
      v27 = v45;
      if ( v37 )
      {
        if ( (v10 & 0x20) != 0 )
          MiDecrementLargeSubsections(v37, v45);
      }
      MiUnmapViewSubsections(v4, (ULONG_PTR)v26, (__int64)v27);
    }
  }
}
