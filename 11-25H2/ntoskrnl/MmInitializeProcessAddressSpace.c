/*
 * XREFs of MmInitializeProcessAddressSpace @ 0x140904AC8
 * Callers:
 *     PspAllocateProcess @ 0x1409BE78C (PspAllocateProcess.c)
 *     MiInitializeBootProcess @ 0x140C3D150 (MiInitializeBootProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     MiGetSharedVm @ 0x14040A910 (MiGetSharedVm.c)
 *     ExInitializeAutoExpandPushLock @ 0x140441FA0 (ExInitializeAutoExpandPushLock.c)
 *     InitializeSListHead @ 0x140460EA0 (InitializeSListHead.c)
 *     MiInitializeProcessPageTableCommitmentBitMaps @ 0x14048AC98 (MiInitializeProcessPageTableCommitmentBitMaps.c)
 *     MiAllowWorkingSetExpansion @ 0x14048E998 (MiAllowWorkingSetExpansion.c)
 *     MiInitializeWorkingSetList @ 0x1404A791C (MiInitializeWorkingSetList.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PsSessionCreate @ 0x1406EBB94 (PsSessionCreate.c)
 *     MiInitializeLockedPagesTracking @ 0x1407D7AF8 (MiInitializeLockedPagesTracking.c)
 *     MiComputeProcessUserVa @ 0x140904FA4 (MiComputeProcessUserVa.c)
 *     MiInsertProcessVads @ 0x140905110 (MiInsertProcessVads.c)
 *     MiMapProcessExecutable @ 0x1409051BC (MiMapProcessExecutable.c)
 *     MiAllocateProcessVads @ 0x140905300 (MiAllocateProcessVads.c)
 *     MiInitializeProcessTopDownEntropy @ 0x1409054EC (MiInitializeProcessTopDownEntropy.c)
 *     MiInitializeProcessBottomUpEntropy @ 0x1409055B0 (MiInitializeProcessBottomUpEntropy.c)
 *     MiInitializeVadBitMap @ 0x140A35738 (MiInitializeVadBitMap.c)
 *     MiReferenceCfgVad @ 0x140A9ED54 (MiReferenceCfgVad.c)
 *     MiCloneProcessAddressSpace @ 0x140AB962C (MiCloneProcessAddressSpace.c)
 *     MiReturnProcessVads @ 0x140ABC98C (MiReturnProcessVads.c)
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
  void *ProcessVads; // r15
  int inserted; // ebx
  __int64 v13; // rsi
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int128 v18; // xmm1
  __int64 v19; // r15
  __int128 v20; // xmm0
  __int128 *v21; // rax
  __int128 v22; // xmm1
  __int128 v23; // xmm1
  __int64 v24; // rax
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  _QWORD *v27; // rax
  __int64 v28; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v30; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v31; // [rsp+28h] [rbp-D8h]
  __int64 v32; // [rsp+30h] [rbp-D0h]
  __int64 v33; // [rsp+38h] [rbp-C8h]
  __int128 v34; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v35; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v36; // [rsp+60h] [rbp-A0h]
  __int128 v37; // [rsp+70h] [rbp-90h]
  _OWORD v38[3]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE Src[224]; // [rsp+B0h] [rbp-50h] BYREF

  memset(v38, 0, sizeof(v38));
  memset_0(Src, 0, 0xD8uLL);
  v9 = BugCheckParameter1 + 1024;
  v33 = BugCheckParameter1 + 1024;
  v10 = *(_QWORD *)MiGetSharedVm(BugCheckParameter1 + 1024);
  ExInitializeAutoExpandPushLock((_QWORD *)(v10 + 856), 1);
  ProcessVads = 0LL;
  if ( a2 )
  {
    v15 = *(_QWORD *)(a2 + 1040) + 768LL;
    memmove(Src, (const void *)v15, 0xD8uLL);
    v16 = *(_QWORD *)(v15 + 216);
    v17 = 2LL;
    v18 = *(_OWORD *)(v15 + 432);
    v19 = *(_QWORD *)(v15 + 296);
    v34 = *(_OWORD *)(v15 + 416);
    v20 = *(_OWORD *)(v15 + 448);
    v31 = v16;
    v21 = &v35;
    v35 = v18;
    v22 = *(_OWORD *)(v15 + 464);
    v32 = v19;
    ProcessVads = 0LL;
    v36 = v20;
    v37 = v22;
    do
    {
      *(_QWORD *)v21 = 0LL;
      v21 += 2;
      --v17;
    }
    while ( v17 );
    v9 = BugCheckParameter1 + 1024;
  }
  else
  {
    v31 = 0LL;
    v32 = 0LL;
    memset_0(&v34, 0, 0x40uLL);
  }
  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v38);
  *(_QWORD *)(BugCheckParameter1 + 600) = 0LL;
  *(_QWORD *)(BugCheckParameter1 + 608) = 0LL;
  *(_QWORD *)(BugCheckParameter1 + 1368) = 0LL;
  if ( (MmTrackLockedPages & 1) != 0 && (MmTrackLockedPages & 0x10000000) == 0 )
    MiInitializeLockedPagesTracking(BugCheckParameter1);
  inserted = MiInitializeWorkingSetList(v9, v10 - 256, 0, 0LL);
  if ( inserted < 0 )
    goto LABEL_16;
  v13 = *(_QWORD *)(BugCheckParameter1 + 1040) + 768LL;
  *(_DWORD *)(*(_QWORD *)(BugCheckParameter1 + 1040) + 1000LL) = 1;
  MiInitializeProcessPageTableCommitmentBitMaps(BugCheckParameter1);
  _InterlockedOr((volatile signed __int32 *)(BugCheckParameter1 + 500), 0x400u);
  v30 = 0LL;
  inserted = MiComputeProcessUserVa(BugCheckParameter1, a2, a3, &v30);
  if ( inserted < 0 )
    goto LABEL_16;
  if ( !a2 && (*(_DWORD *)(BugCheckParameter1 + 1532) & 1) == 0 )
  {
    ProcessVads = (void *)MiAllocateProcessVads(BugCheckParameter1, v30);
    if ( !ProcessVads )
    {
      inserted = -1073741670;
      goto LABEL_16;
    }
  }
  InitializeSListHead((PSLIST_HEADER)(v13 + 304));
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
  *(_BYTE *)(v13 + 293) |= 4u;
  if ( (*(_DWORD *)(BugCheckParameter1 + 1532) & 1) != 0 && !a2 )
  {
LABEL_15:
    MiAllowWorkingSetExpansion(v33);
    goto LABEL_16;
  }
  *a4 &= ~0x10u;
  if ( !a2 )
  {
    KiUnstackDetachProcess((__int64)v38, 0LL);
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
  memmove((void *)v13, Src, 0xD8uLL);
  v23 = v35;
  v24 = v31;
  *(_OWORD *)(v13 + 416) = v34;
  *(_QWORD *)(v13 + 216) = v24;
  v25 = v36;
  *(_OWORD *)(v13 + 432) = v23;
  v26 = v37;
  *(_OWORD *)(v13 + 448) = v25;
  *(_OWORD *)(v13 + 464) = v26;
  inserted = MiInitializeVadBitMap();
  if ( inserted < 0 )
  {
LABEL_16:
    KiUnstackDetachProcess((__int64)v38, 0LL);
    return (unsigned int)inserted;
  }
  v27 = *(_QWORD **)(a2 + 784);
  if ( v27 && *v27 )
    **(_QWORD **)(BugCheckParameter1 + 784) = *v27;
  if ( (*a4 & 0x80u) == 0 )
    inserted = 0;
  else
    inserted = PsSessionCreate();
  if ( (a5 & 1) != 0 )
    v28 = v32 + 1;
  else
    v28 = 0LL;
  *(_QWORD *)(v13 + 296) = v28;
  *(_QWORD *)(v13 + 272) = v13 + 264;
  *(_QWORD *)(v13 + 264) = v13 + 264;
  *(_BYTE *)(v13 + 293) |= 2u;
  KiUnstackDetachProcess((__int64)v38, 0LL);
  if ( inserted >= 0 )
  {
    inserted = MiCloneProcessAddressSpace(a2, BugCheckParameter1);
    if ( inserted >= 0 )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v38);
      CurrentThread = KeGetCurrentThread();
      if ( *((_QWORD *)&v36 + 1) )
        MiReferenceCfgVad(CurrentThread, v36, 1LL);
      if ( *((_QWORD *)&v34 + 1) )
        MiReferenceCfgVad(CurrentThread, v34, 0LL);
      KiUnstackDetachProcess((__int64)v38, 0LL);
    }
  }
  MiAllowWorkingSetExpansion(v33);
  return (unsigned int)inserted;
}
