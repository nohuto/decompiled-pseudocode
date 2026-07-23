/*
 * XREFs of MmManagePartitionMoveMemory @ 0x1407FD634
 * Callers:
 *     NtManagePartition @ 0x1408F6B10 (NtManagePartition.c)
 * Callees:
 *     PsDereferencePartition @ 0x14022B3F0 (PsDereferencePartition.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     KeGetIdealNodeNumberThread @ 0x140481B1C (KeGetIdealNodeNumberThread.c)
 *     MiHugePagesSupported @ 0x1404900F8 (MiHugePagesSupported.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1407FBE14 (MiAllocatePartitionPhysicalPages.c)
 *     MiFindSpecialPurposeMemoryTypeByPartition @ 0x1407FEA18 (MiFindSpecialPurposeMemoryTypeByPartition.c)
 *     MiSpecialPurposeMemoryChangePrepare @ 0x1407FF310 (MiSpecialPurposeMemoryChangePrepare.c)
 *     MiSpecialPurposeMemoryTypeDereference @ 0x1407FF594 (MiSpecialPurposeMemoryTypeDereference.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 */

__int64 __fastcall MmManagePartitionMoveMemory(ULONG **a1, ULONG **a2, __int64 a3, KPROCESSOR_MODE a4)
{
  ULONG *v4; // r15
  unsigned __int64 v5; // rdx
  ULONG *v7; // r14
  ULONG *v8; // r13
  unsigned int IdealNodeNumberThread; // ebx
  int v11; // edi
  int v12; // r8d
  bool v13; // zf
  bool v14; // zf
  bool v15; // zf
  int v16; // edx
  int PartitionPhysicalPages; // esi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp+40h] BYREF
  __int64 v20; // [rsp+78h] [rbp+48h] BYREF
  __int64 v21; // [rsp+80h] [rbp+50h] BYREF

  v4 = *a2;
  v5 = *(_QWORD *)a3;
  v7 = *a1;
  v8 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  if ( !v5 )
    return 0LL;
  IdealNodeNumberThread = *(_DWORD *)(a3 + 8);
  if ( IdealNodeNumberThread == -1 )
  {
    IdealNodeNumberThread = (unsigned __int16)KeGetIdealNodeNumberThread((__int64)KeGetCurrentThread());
  }
  else if ( IdealNodeNumberThread >= (unsigned __int16)KeNumberNodes )
  {
    return 3221225485LL;
  }
  v11 = *(_DWORD *)(a3 + 12);
  if ( (v11 & 0xFFFFF000) != 0 )
    return 3221225485LL;
  if ( (v11 & 0x400) != 0 )
  {
    if ( v4 != v7 || v5 != 0x40000 || (*(_DWORD *)(a3 + 12) & 0xA00) == 0x800 )
      return 3221225485LL;
  }
  else if ( (v11 & 0x800) != 0 )
  {
    return 3221225485LL;
  }
  v12 = *(_DWORD *)(a3 + 12) & 0x200;
  if ( (v11 & 0x200) != 0 )
  {
    if ( (v11 & 0x100) == 0 || (v11 & 0xFFFFF0F6) != 0 )
      return 3221225485LL;
    v13 = (v11 & 0x408) == 1032;
  }
  else
  {
    if ( (v11 & 0x400) == 0 )
      goto LABEL_21;
    if ( (v11 & 0xFFFFFA7E) != 0 )
      return 3221225485LL;
    v13 = (v11 & 0x180) == 0;
  }
  if ( v13 )
    return 3221225485LL;
LABEL_21:
  if ( (v11 & 0x12) != 0 )
  {
    v14 = (v11 & 0x1E0) == 0;
LABEL_23:
    if ( !v14 )
      return 3221225485LL;
    v15 = (v5 & 0x1FF) == 0;
    goto LABEL_30;
  }
  if ( (v11 & 0x60) != 0 )
  {
    v14 = (v11 & 0x180) == 0;
    goto LABEL_23;
  }
  if ( (v11 & 0x180) == 0 )
    goto LABEL_31;
  if ( !(unsigned int)MiHugePagesSupported() )
    return 3221225659LL;
  v15 = (*(_QWORD *)&v16 & 0x3FFFFLL) == 0;
LABEL_30:
  if ( !v15 )
    return 3221225485LL;
LABEL_31:
  if ( (v11 & 8) == 0 )
    goto LABEL_37;
  if ( v7 != &MiSystemPartition || v4 == &MiSystemPartition && !v12 )
    return 3221225485LL;
  if ( !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, a4) )
    return 3221225569LL;
LABEL_37:
  if ( (v7[1] & 0x80u) != 0 && (v7 != v4 || (v11 & 0xC00) == 0) )
    return 3221225659LL;
  if ( (v4[1] & 0x80u) == 0 )
    goto LABEL_54;
  if ( (v11 & 0xFFFFF008) != 0 )
    return 3221225659LL;
  if ( v7 != v4 )
  {
LABEL_52:
    PartitionPhysicalPages = MiSpecialPurposeMemoryChangePrepare(v7, v4 + 4410, &v20);
    if ( PartitionPhysicalPages < 0 )
      goto LABEL_55;
    v8 = v7;
    v7 = *(ULONG **)(v20 + 64);
    do
LABEL_54:
      PartitionPhysicalPages = MiAllocatePartitionPhysicalPages(
                                 v4,
                                 (__int64)v7,
                                 *(_QWORD *)a3,
                                 IdealNodeNumberThread,
                                 v11);
    while ( PartitionPhysicalPages == -1073740023 );
LABEL_55:
    if ( v20 )
      MiSpecialPurposeMemoryTypeDereference(v8, v20);
    goto LABEL_57;
  }
  BugCheckParameter2 = 0LL;
  if ( MiFindSpecialPurposeMemoryTypeByPartition(v7, &v21, &BugCheckParameter2) )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    CurrentThread = KeGetCurrentThread();
    v13 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v13 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    v7 = (ULONG *)v21;
    if ( (ULONG *)v21 == v4 )
      goto LABEL_54;
    goto LABEL_52;
  }
  PartitionPhysicalPages = -1073740640;
LABEL_57:
  if ( v21 )
    PsDereferencePartition(*(_QWORD *)(v21 + 184));
  return (unsigned int)PartitionPhysicalPages;
}
