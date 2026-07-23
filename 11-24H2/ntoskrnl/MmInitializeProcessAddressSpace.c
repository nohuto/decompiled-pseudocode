/*
 * XREFs of MmInitializeProcessAddressSpace @ 0x14091A9E8
 * Callers:
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 *     MiInitializeBootProcess @ 0x140C50588 (MiInitializeBootProcess.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     MiAllowWorkingSetExpansion @ 0x1402F2680 (MiAllowWorkingSetExpansion.c)
 *     MiGetSharedVm @ 0x140404E90 (MiGetSharedVm.c)
 *     ExInitializeAutoExpandPushLock @ 0x140438B70 (ExInitializeAutoExpandPushLock.c)
 *     InitializeSListHead @ 0x140454D40 (InitializeSListHead.c)
 *     MiInitializeProcessPageTableCommitmentBitMaps @ 0x1404853B8 (MiInitializeProcessPageTableCommitmentBitMaps.c)
 *     MiInitializeWorkingSetList @ 0x1404A0B1C (MiInitializeWorkingSetList.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PsSessionCreate @ 0x1406F53F8 (PsSessionCreate.c)
 *     MiInitializeLockedPagesTracking @ 0x1407E7F80 (MiInitializeLockedPagesTracking.c)
 *     MiInsertProcessVads @ 0x14091A6A0 (MiInsertProcessVads.c)
 *     MiInitializeVadBitMap @ 0x14091A74C (MiInitializeVadBitMap.c)
 *     MiComputeProcessUserVa @ 0x14091AEC4 (MiComputeProcessUserVa.c)
 *     MiMapProcessExecutable @ 0x14091B024 (MiMapProcessExecutable.c)
 *     MiAllocateProcessVads @ 0x14091B168 (MiAllocateProcessVads.c)
 *     MiInitializeProcessTopDownEntropy @ 0x14091B89C (MiInitializeProcessTopDownEntropy.c)
 *     MiInitializeProcessBottomUpEntropy @ 0x14091B960 (MiInitializeProcessBottomUpEntropy.c)
 *     MiReferenceCfgVad @ 0x140A91CA0 (MiReferenceCfgVad.c)
 *     MiReturnProcessVads @ 0x140AB7BB4 (MiReturnProcessVads.c)
 *     MiCloneProcessAddressSpace @ 0x140AB879C (MiCloneProcessAddressSpace.c)
 */

__int64 __fastcall MmInitializeProcessAddressSpace(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR a2,
        __int64 a3,
        _DWORD *a4,
        char a5)
{
  __int64 v9; // rbx
  __int64 v10; // rsi
  _QWORD *ProcessVads; // r15
  int inserted; // ebx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rsi
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int128 v20; // xmm1
  __int64 v21; // r15
  __int128 v22; // xmm0
  __int128 *v23; // rax
  __int128 v24; // xmm1
  __int128 v25; // xmm1
  __int64 v26; // rax
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  _QWORD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // r9
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v34; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v35; // [rsp+28h] [rbp-D8h]
  __int64 v36; // [rsp+30h] [rbp-D0h]
  __int64 v37; // [rsp+38h] [rbp-C8h]
  __int128 v38; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v39; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v40; // [rsp+60h] [rbp-A0h]
  __int128 v41; // [rsp+70h] [rbp-90h]
  _OWORD v42[3]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE Src[224]; // [rsp+B0h] [rbp-50h] BYREF

  memset(v42, 0, sizeof(v42));
  memset_0(Src, 0, 0xD8uLL);
  v9 = BugCheckParameter1 + 1024;
  v37 = BugCheckParameter1 + 1024;
  v10 = *(_QWORD *)MiGetSharedVm(BugCheckParameter1 + 1024);
  ExInitializeAutoExpandPushLock((_QWORD *)(v10 + 856), 1);
  ProcessVads = 0LL;
  if ( a2 )
  {
    v17 = *(_QWORD *)(a2 + 1040) + 768LL;
    memmove(Src, (const void *)v17, 0xD8uLL);
    v18 = *(_QWORD *)(v17 + 216);
    v19 = 2LL;
    v20 = *(_OWORD *)(v17 + 432);
    v21 = *(_QWORD *)(v17 + 296);
    v38 = *(_OWORD *)(v17 + 416);
    v22 = *(_OWORD *)(v17 + 448);
    v35 = v18;
    v23 = &v39;
    v39 = v20;
    v24 = *(_OWORD *)(v17 + 464);
    v36 = v21;
    ProcessVads = 0LL;
    v40 = v22;
    v41 = v24;
    do
    {
      *(_QWORD *)v23 = 0LL;
      v23 += 2;
      --v19;
    }
    while ( v19 );
    v9 = BugCheckParameter1 + 1024;
  }
  else
  {
    v35 = 0LL;
    v36 = 0LL;
    memset_0(&v38, 0, 0x40uLL);
  }
  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v42);
  *(_QWORD *)(BugCheckParameter1 + 600) = 0LL;
  *(_QWORD *)(BugCheckParameter1 + 608) = 0LL;
  *(_QWORD *)(BugCheckParameter1 + 1368) = 0LL;
  if ( (MmTrackLockedPages & 1) != 0 && (MmTrackLockedPages & 0x10000000) == 0 )
    MiInitializeLockedPagesTracking(BugCheckParameter1);
  inserted = MiInitializeWorkingSetList(v9, v10 - 256, 0LL, 0LL);
  if ( inserted < 0 )
    goto LABEL_16;
  v15 = *(_QWORD *)(BugCheckParameter1 + 1040) + 768LL;
  *(_DWORD *)(*(_QWORD *)(BugCheckParameter1 + 1040) + 1000LL) = 1;
  MiInitializeProcessPageTableCommitmentBitMaps(BugCheckParameter1);
  _InterlockedOr((volatile signed __int32 *)(BugCheckParameter1 + 500), 0x400u);
  v34 = 0LL;
  inserted = MiComputeProcessUserVa(BugCheckParameter1, a2, a3, &v34);
  if ( inserted < 0 )
    goto LABEL_16;
  if ( !a2 && (*(_DWORD *)(BugCheckParameter1 + 1532) & 1) == 0 )
  {
    ProcessVads = (_QWORD *)MiAllocateProcessVads(BugCheckParameter1, v34);
    if ( !ProcessVads )
    {
      inserted = -1073741670;
      goto LABEL_16;
    }
  }
  InitializeSListHead((PSLIST_HEADER)(v15 + 304));
  if ( !a2 )
  {
    MiInitializeProcessBottomUpEntropy(BugCheckParameter1);
    MiInitializeProcessTopDownEntropy(BugCheckParameter1);
    inserted = MiInitializeVadBitMap();
    if ( inserted < 0 )
    {
      MiReturnProcessVads(ProcessVads);
      goto LABEL_16;
    }
  }
  inserted = MiInsertProcessVads(BugCheckParameter1, ProcessVads);
  if ( inserted < 0 )
    goto LABEL_16;
  if ( a3 )
  {
    if ( (*(_BYTE *)(BugCheckParameter1 + 368) & 1) == 0 )
      inserted = MiMapProcessExecutable(BugCheckParameter1, a3, a4);
    goto LABEL_15;
  }
  *(_BYTE *)(v15 + 293) |= 4u;
  if ( (*(_DWORD *)(BugCheckParameter1 + 1532) & 1) != 0 && !a2 )
  {
LABEL_15:
    MiAllowWorkingSetExpansion(v37);
    goto LABEL_16;
  }
  *a4 &= ~0x10u;
  if ( !a2 )
  {
    KiUnstackDetachProcess((__int64)v42, 0, v13, v14);
    return 0;
  }
  if ( (*(_BYTE *)(a2 + 368) & 1) != 0 )
  {
    inserted = -1073741595;
    goto LABEL_16;
  }
  *(_QWORD *)(BugCheckParameter1 + 824) = *(_QWORD *)(a2 + 824);
  *(_DWORD *)(BugCheckParameter1 + 832) = *(_DWORD *)(a2 + 832);
  *(_WORD *)(BugCheckParameter1 + 836) = *(_WORD *)(a2 + 836);
  *(_BYTE *)(BugCheckParameter1 + 838) = *(_BYTE *)(a2 + 838);
  *(_QWORD *)(BugCheckParameter1 + 872) = *(_QWORD *)(a2 + 872);
  memmove((void *)v15, Src, 0xD8uLL);
  v25 = v39;
  v26 = v35;
  *(_OWORD *)(v15 + 416) = v38;
  *(_QWORD *)(v15 + 216) = v26;
  v27 = v40;
  *(_OWORD *)(v15 + 432) = v25;
  v28 = v41;
  *(_OWORD *)(v15 + 448) = v27;
  *(_OWORD *)(v15 + 464) = v28;
  inserted = MiInitializeVadBitMap();
  if ( inserted < 0 )
  {
LABEL_16:
    KiUnstackDetachProcess((__int64)v42, 0, v13, v14);
    return (unsigned int)inserted;
  }
  v29 = *(_QWORD **)(a2 + 784);
  if ( v29 && *v29 )
    **(_QWORD **)(BugCheckParameter1 + 784) = *v29;
  if ( (*a4 & 0x80u) == 0 )
    inserted = 0;
  else
    inserted = PsSessionCreate();
  if ( (a5 & 1) != 0 )
    v30 = v36 + 1;
  else
    v30 = 0LL;
  *(_QWORD *)(v15 + 296) = v30;
  *(_QWORD *)(v15 + 272) = v15 + 264;
  *(_QWORD *)(v15 + 264) = v15 + 264;
  *(_BYTE *)(v15 + 293) |= 2u;
  KiUnstackDetachProcess((__int64)v42, 0, v13, v14);
  if ( inserted >= 0 )
  {
    inserted = MiCloneProcessAddressSpace(a2, BugCheckParameter1);
    if ( inserted >= 0 )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v42);
      CurrentThread = KeGetCurrentThread();
      if ( *((_QWORD *)&v40 + 1) )
        MiReferenceCfgVad(CurrentThread, v40, 1LL);
      if ( *((_QWORD *)&v38 + 1) )
        MiReferenceCfgVad(CurrentThread, v38, 0LL);
      KiUnstackDetachProcess((__int64)v42, 0, v31, v32);
    }
  }
  MiAllowWorkingSetExpansion(v37);
  return (unsigned int)inserted;
}
