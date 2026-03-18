/*
 * XREFs of MiDeleteVad @ 0x1408B4F54
 * Callers:
 *     MiDeletePartialVad @ 0x1402A3A10 (MiDeletePartialVad.c)
 *     MiFreeVadRange @ 0x1402A45F8 (MiFreeVadRange.c)
 *     MiCreateEnclave @ 0x1407E71F0 (MiCreateEnclave.c)
 *     MiDeleteInsertedCloneVads @ 0x1407F03A4 (MiDeleteInsertedCloneVads.c)
 *     MiUnmapViewOfSection @ 0x1408B4494 (MiUnmapViewOfSection.c)
 *     MiCleanVad @ 0x1408B4DF0 (MiCleanVad.c)
 *     MiUnmapVad @ 0x1408B4E4C (MiUnmapVad.c)
 *     MiMapViewOfPhysicalSection @ 0x1408B6998 (MiMapViewOfPhysicalSection.c)
 *     MiFreeToSubAllocatedRegion @ 0x1408F63EC (MiFreeToSubAllocatedRegion.c)
 *     MiCoalescePlaceholderAllocations @ 0x1408F71CC (MiCoalescePlaceholderAllocations.c)
 *     MiMapLockedPagesInUserSpace @ 0x1408F8DEC (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfDataSection @ 0x1408FEC20 (MiMapViewOfDataSection.c)
 *     MiReserveUserMemory @ 0x1409012DC (MiReserveUserMemory.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x140A5FDD0 (MiUnmapLockedPagesInUserSpace.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140A7248C (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     MiUnmapViewSubsections @ 0x14022EE90 (MiUnmapViewSubsections.c)
 *     MiGetProtoPteAddress @ 0x1402454D0 (MiGetProtoPteAddress.c)
 *     PsGetSessionIdEx @ 0x140246440 (PsGetSessionIdEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     MiFinishVadDeletion @ 0x1402A3AE0 (MiFinishVadDeletion.c)
 *     MiLocateLockedVadEvent @ 0x1402A57D4 (MiLocateLockedVadEvent.c)
 *     MiControlAreaRequiresCharge @ 0x1402A673C (MiControlAreaRequiresCharge.c)
 *     MiRemoveVad @ 0x1402A7E14 (MiRemoveVad.c)
 *     MiIsVadLargePrivate @ 0x1402A82E0 (MiIsVadLargePrivate.c)
 *     MiSetVadDeleted @ 0x14031F8D0 (MiSetVadDeleted.c)
 *     MiManageSubsectionView @ 0x1403200E0 (MiManageSubsectionView.c)
 *     MiDeleteVirtualAddresses @ 0x140383D40 (MiDeleteVirtualAddresses.c)
 *     MiDrainSystemAccessLog @ 0x1403C3E1C (MiDrainSystemAccessLog.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     MiLockAddressSpaceToo @ 0x1403D7EA4 (MiLockAddressSpaceToo.c)
 *     MiReturnFullProcessCharges @ 0x140434620 (MiReturnFullProcessCharges.c)
 *     MiReadVadFlags2 @ 0x140455FA8 (MiReadVadFlags2.c)
 *     MiDereferenceControlArea @ 0x14046FD68 (MiDereferenceControlArea.c)
 *     MiDereferenceExtendInfo @ 0x140483CAC (MiDereferenceExtendInfo.c)
 *     MiDecrementLargeSubsections @ 0x1404C8190 (MiDecrementLargeSubsections.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1404CBB78 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1404D05B4 (MiLogPerfMemoryRangeEvent.c)
 *     MiInitPerfMemoryFlags @ 0x1404F8094 (MiInitPerfMemoryFlags.c)
 *     MiRemoveUserPhysicalPagesView @ 0x1406775E8 (MiRemoveUserPhysicalPagesView.c)
 *     MiRemoveSharedCommitNode @ 0x1408B5520 (MiRemoveSharedCommitNode.c)
 *     MiDereferencePerSessionProtos @ 0x140A1D1D8 (MiDereferencePerSessionProtos.c)
 *     MiFreeLargePageView @ 0x140A9CC88 (MiFreeLargePageView.c)
 *     MiDeleteEnclavePages @ 0x140B5F0CC (MiDeleteEnclavePages.c)
 */

__int64 __fastcall MiDeleteVad(__int64 a1, __int64 a2)
{
  __int64 v4; // r14
  __int64 v5; // rcx
  _KPROCESS *Process; // r13
  unsigned int v7; // ebx
  void *v8; // rcx
  BOOL IsVadLargePrivate; // eax
  int v10; // r8d
  unsigned int v11; // r9d
  int v12; // ecx
  int v13; // r15d
  int v14; // ecx
  int v15; // ecx
  __int64 v16; // rcx
  int v17; // ecx
  char v18; // cl
  __int64 v19; // rdi
  char v20; // r9
  __int64 result; // rax
  unsigned __int64 *v22; // rdi
  int v23; // eax
  __int64 v24; // rdx
  unsigned __int64 v25; // rdi
  unsigned int SessionId; // eax
  __int64 v27; // rdx
  __int64 v28; // rdi
  unsigned __int64 LockedVadEvent; // rax
  int v30; // edx
  __int64 v31; // rcx
  char v32; // rax^4
  unsigned int inited; // eax
  unsigned __int64 *v34; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v35; // [rsp+28h] [rbp-48h]
  __int128 v36; // [rsp+30h] [rbp-40h] BYREF
  __int128 v37; // [rsp+40h] [rbp-30h]
  __int128 v38; // [rsp+50h] [rbp-20h]
  __int64 v39; // [rsp+60h] [rbp-10h]
  __int64 v40; // [rsp+B0h] [rbp+40h]
  unsigned __int64 *v41; // [rsp+C8h] [rbp+58h] BYREF

  v39 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v4 = 0LL;
  v38 = 0LL;
  v5 = *(unsigned __int8 *)(a1 + 32);
  v34 = 0LL;
  v41 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v40 = (*(unsigned int *)(a1 + 24) | (unsigned __int64)(v5 << 32)) << 12;
  v35 = ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) << 12) | 0xFFF;
  v7 = MiIsVadLargePrivate(a1) ? 0x40 : 0;
  if ( (*(_DWORD *)(a1 + 48) & 0x200000) == 0 )
  {
    v8 = *(void **)(a1 + 128);
    if ( v8 )
      ObfDereferenceObjectWithTag(v8, 0x63536D4Du);
  }
  if ( (*(_DWORD *)(a1 + 48) & 0xC200000) == 0x8200000 )
    MiDeleteEnclavePages(Process, a1);
  if ( (*(_BYTE *)(a1 + 48) & 0x70) == 0x30 )
    *((_QWORD *)&v38 + 1) = MiRemoveUserPhysicalPagesView(a1);
  if ( (*(unsigned int *)(a1 + 52) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 32)) == 0x7FFFFFFFDLL
    && *(_QWORD *)(a1 + 16) == -2LL )
  {
    v7 |= 0x80u;
  }
  if ( v7 < 0x80 )
    MiSetVadDeleted(a1);
  IsVadLargePrivate = MiIsVadLargePrivate(a1);
  v12 = v10 | 0x800;
  if ( !IsVadLargePrivate )
    v12 = v10;
  v13 = v12 | 0x1000;
  if ( (*(_DWORD *)(a1 + 48) & 0x4200000) != 0x4200000 )
    v13 = v12;
  if ( v7 < v11 )
  {
    *(_QWORD *)&v38 = a1;
    MiDeleteVirtualAddresses(v40, v35, v13, (__int64)&v36);
    if ( (v13 & 0x800) != 0 )
    {
      v24 = v39;
      v25 = *(unsigned int *)(a1 + 52) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 32);
      if ( v39 )
      {
        v39 = 0LL;
        MiReturnFullProcessCharges((__int64)Process, v24);
      }
      v27 = v37;
      v28 = v25 - v37;
      *(_DWORD *)(a1 + 52) = v28;
      *(_BYTE *)(a1 + 34) = BYTE4(v28);
      if ( v28 )
      {
        LockedVadEvent = MiLocateLockedVadEvent(a1, 16);
        MiFreeLargePageView(Process, a1, LockedVadEvent, (unsigned int)(v30 - 15));
        v27 = v37;
      }
      v31 = *((_QWORD *)&v36 + 1);
      v32 = BYTE12(v36);
      *(_DWORD *)(a1 + 52) = DWORD2(v36);
      *(_BYTE *)(a1 + 34) = v32;
      _InterlockedAdd64((volatile signed __int64 *)&Process[3].ProfileListHead, v31 - v27);
      *(_QWORD *)&v37 = 0LL;
    }
  }
  if ( (v13 & 2) != 0 )
  {
    v14 = *(_DWORD *)(a1 + 48);
    v4 = **(_QWORD **)(a1 + 72);
    if ( (v14 & 0x70) == 0x20 )
    {
      if ( (MiReadVadFlags2(a1) & 1) != 0 )
        LOBYTE(v7) = v7 | 0x18;
    }
    else if ( *(_QWORD *)(v4 + 64) )
    {
      v15 = v14 & 0xF80;
      if ( v15 == 512 || v15 == 768 )
        _InterlockedAdd((volatile signed __int32 *)(v4 + 92), 0xFFFFFFFF);
      MiGetProtoPteAddress(
        a1,
        *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32),
        0,
        &v34);
      if ( (MiReadVadFlags2(a1) & 1) != 0 )
        LOBYTE(v7) = v7 | 0x20;
      MiGetProtoPteAddress(
        v16,
        *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32),
        0,
        &v41);
    }
    if ( (v7 & 8) == 0 )
    {
      if ( (*(_BYTE *)(a1 + 48) & 0x70) != 0x50 )
      {
        MiDrainSystemAccessLog((__int64)&Process[2].ReadyListHead.Blink);
        v17 = *(_DWORD *)(a1 + 48);
        if ( (v17 & 0x70) == 0x20 )
        {
          if ( (*(_DWORD *)(v4 + 56) & 0x8000000) != 0 )
            LOBYTE(v7) = v7 | 2;
          LOBYTE(v7) = v7 | 4;
        }
        else if ( (v17 & 0x200000) == 0 && !*(_QWORD *)(v4 + 64) )
        {
          MiGetProtoPteAddress(
            a1,
            *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32),
            0,
            &v34);
          MiGetProtoPteAddress(
            a1,
            *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32),
            0,
            &v41);
        }
      }
      v18 = v7 | 1;
      if ( *(__int64 *)(a1 + 120) >= 0 )
        v18 = v7;
      LOBYTE(v7) = v18 | 8;
    }
  }
  MiLockAddressSpaceToo((__int64)Process, a1, a2);
  if ( (v7 & 0x80u) == 0 )
  {
    MiRemoveVad(a1, 1, a2 & -(__int64)(a2 != 0));
    if ( a2 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 40));
      KeAbPostRelease(a2 + 40);
    }
  }
  *(_QWORD *)(a1 + 8) = *((_QWORD *)&v36 + 1);
  *(_QWORD *)a1 = v37;
  if ( (v7 & 0x40) != 0 && (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
  {
    inited = MiInitPerfMemoryFlags(0, 13);
    v19 = v40;
    MiLogPerfMemoryRangeEvent(
      v40,
      LODWORD(Process[1].Header.WaitListHead.Flink),
      inited,
      (*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32))
    - (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32))
    + 1);
  }
  else
  {
    v19 = v40;
  }
  if ( (v7 & 1) != 0 )
    MiDereferenceExtendInfo(a1, v4);
  if ( (v7 & 8) != 0 )
  {
    if ( (v7 & 2) != 0 )
    {
      SessionId = PsGetSessionIdEx((__int64)Process);
      MiDereferencePerSessionProtos(v4, SessionId);
    }
    if ( (v7 & 4) != 0 )
    {
      v23 = MiControlAreaRequiresCharge(v4, 0);
      if ( !v23 || v23 == 2 )
        MiReturnCrossPartitionControlAreaCharges(v4);
    }
    MiRemoveSharedCommitNode(v4, Process, 0LL);
    MiManageSubsectionView(*(__int64 **)(a1 + 72), (_QWORD *)(a1 + 96), 4);
  }
  v20 = 0;
  if ( a2 || (v7 & 0x80u) != 0 )
    v20 = 1;
  result = MiFinishVadDeletion((_DWORD *)a1, v19, v35, v20);
  if ( v4 )
  {
    if ( (v7 & 0x10) != 0 )
    {
      return MiDereferenceControlArea(v4);
    }
    else
    {
      v22 = v34;
      if ( v34 )
      {
        if ( (v7 & 0x20) != 0 )
          MiDecrementLargeSubsections((__int64 *)v34, (__int64 *)v41);
      }
      return MiUnmapViewSubsections(v4, (ULONG_PTR)v22, (__int64)v41);
    }
  }
  return result;
}
