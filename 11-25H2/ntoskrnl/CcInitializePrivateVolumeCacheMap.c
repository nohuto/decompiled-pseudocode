/*
 * XREFs of CcInitializePrivateVolumeCacheMap @ 0x1403A84A0
 * Callers:
 *     CcCreatePrivateVolumeCacheMap @ 0x1403A81B8 (CcCreatePrivateVolumeCacheMap.c)
 * Callees:
 *     CcInitializeQuickLWSThreadItem @ 0x1403A7F28 (CcInitializeQuickLWSThreadItem.c)
 *     CcInitializeNumaNodeForVolume @ 0x1403A8E0C (CcInitializeNumaNodeForVolume.c)
 *     CcForEachNumaNode @ 0x1403A9238 (CcForEachNumaNode.c)
 *     DbgPrintEx @ 0x1403A9690 (DbgPrintEx.c)
 *     KeQueryActiveProcessorCountEx @ 0x1403AE660 (KeQueryActiveProcessorCountEx.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PsCreateSystemThread @ 0x140A17730 (PsCreateSystemThread.c)
 *     MmGetNumberOfPhysicalPagesForPartitionObject @ 0x140A97414 (MmGetNumberOfPhysicalPagesForPartitionObject.c)
 *     ExAllocatePoolWithTag @ 0x140B62010 (ExAllocatePoolWithTag.c)
 */

char __fastcall CcInitializePrivateVolumeCacheMap(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  __int64 v4; // r13
  char v9; // r12
  _DWORD *v10; // r14
  bool v11; // zf
  _QWORD *v12; // rcx
  _QWORD *v13; // rdx
  __int64 v14; // r8
  unsigned __int64 NumberOfPhysicalPagesForPartitionObject; // rax
  UNICODE_STRING *ClientId; // r10
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r8
  int v20; // eax
  unsigned __int64 v21; // rax
  int v22; // eax
  unsigned __int64 v23; // rbx
  ULONG ActiveProcessorCount; // eax
  unsigned int v25; // edx
  __int64 v26; // rax
  __int64 v27; // r8
  unsigned int i; // ebx
  PVOID PoolWithTag; // rax
  struct _KTHREAD *CurrentThread; // r8
  const char *v31; // rcx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  char v34; // [rsp+B0h] [rbp+30h] BYREF

  v4 = *a3;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v9 = 0;
  v10 = 0LL;
  memset_0((void *)a2, 0, 0x680uLL);
  *(_DWORD *)(a2 + 1608) = CcAsyncLazywriteQueueDepthPerThread;
  v11 = CcEnableAsyncLazywrite == 0;
  *(_DWORD *)(a2 + 1612) = CcMaxAsyncLazywriteCompletionWorkers;
  *(_DWORD *)a2 = 109052661;
  *(_QWORD *)(a2 + 32) = a1;
  *(_DWORD *)(a2 + 1552) = 20;
  *(_DWORD *)(a2 + 1556) = 10;
  *(_QWORD *)(a2 + 8) = 1LL;
  if ( !v11 )
    *(_DWORD *)(a2 + 1616) |= 1u;
  if ( _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1296)) <= 1 )
    __fastfail(0xEu);
  *(_QWORD *)(a2 + 56) = a2 + 48;
  v12 = (_QWORD *)(a2 + 664);
  *(_QWORD *)(a2 + 48) = a2 + 48;
  *(_QWORD *)(a2 + 584) = a2 + 576;
  *(_QWORD *)(a2 + 576) = a2 + 576;
  *(_QWORD *)(a2 + 600) = a2 + 592;
  *(_QWORD *)(a2 + 592) = a2 + 592;
  *(_QWORD *)(a2 + 632) = a2 + 624;
  *(_QWORD *)(a2 + 624) = a2 + 624;
  *(_QWORD *)(a2 + 616) = a2 + 608;
  *(_QWORD *)(a2 + 608) = a2 + 608;
  *(_QWORD *)(a2 + 696) = a2 + 688;
  *(_QWORD *)(a2 + 688) = a2 + 688;
  *(_QWORD *)(a2 + 648) = a2 + 640;
  *(_QWORD *)(a2 + 640) = a2 + 640;
  *(_DWORD *)(a2 + 656) = 2048;
  v13 = *(_QWORD **)(a2 + 648);
  if ( *v13 != a2 + 640 )
    __fastfail(3u);
  *v12 = a2 + 640;
  *(_QWORD *)(a2 + 672) = v13;
  *v13 = v12;
  *(_QWORD *)(a2 + 648) = v12;
  *(_DWORD *)(a2 + 680) = 2048;
  if ( a4 )
  {
    v14 = *(_QWORD *)(a4 + 512);
    *(_QWORD *)(a2 + 40) = v14;
    *(_DWORD *)(a2 + 24) = *(_DWORD *)(*(_QWORD *)(a4 + 512) + 212LL);
    v10 = *(_DWORD **)(*(_QWORD *)(a4 + 512) + 16LL);
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v14 + 8)) <= 1 )
      __fastfail(0xEu);
  }
  *(_QWORD *)(a2 + 16) = v10;
  if ( v10 && v10[18] == 20 )
    *(_DWORD *)(a2 + 1616) |= 8u;
  *(_QWORD *)(a2 + 768) = 0LL;
  *(_QWORD *)(a2 + 792) = a2 + 784;
  *(_QWORD *)(a2 + 784) = a2 + 784;
  *(_QWORD *)(a2 + 1256) = a2 + 1248;
  *(_QWORD *)(a2 + 1248) = a2 + 1248;
  *(_QWORD *)(a2 + 1272) = a2 + 1264;
  *(_QWORD *)(a2 + 1264) = a2 + 1264;
  *(_QWORD *)(a2 + 1568) = a2 + 1560;
  *(_QWORD *)(a2 + 1560) = a2 + 1560;
  *(_WORD *)(a2 + 816) = 1;
  *(_BYTE *)(a2 + 818) = 6;
  *(_DWORD *)(a2 + 820) = 0;
  *(_QWORD *)(a2 + 832) = a2 + 824;
  *(_QWORD *)(a2 + 824) = a2 + 824;
  *(_WORD *)(a2 + 840) = 1;
  *(_BYTE *)(a2 + 842) = 6;
  *(_DWORD *)(a2 + 844) = 0;
  *(_QWORD *)(a2 + 856) = a2 + 848;
  *(_QWORD *)(a2 + 848) = a2 + 848;
  *(_WORD *)(a2 + 864) = 1;
  *(_BYTE *)(a2 + 866) = 6;
  *(_DWORD *)(a2 + 868) = 0;
  *(_QWORD *)(a2 + 880) = a2 + 872;
  *(_QWORD *)(a2 + 872) = a2 + 872;
  *(_WORD *)(a2 + 888) = 1;
  *(_BYTE *)(a2 + 890) = 6;
  *(_DWORD *)(a2 + 892) = 0;
  *(_QWORD *)(a2 + 904) = a2 + 896;
  *(_QWORD *)(a2 + 896) = a2 + 896;
  *(_WORD *)(a2 + 1176) = 0;
  *(_BYTE *)(a2 + 1178) = 6;
  *(_DWORD *)(a2 + 1180) = 0;
  *(_QWORD *)(a2 + 1192) = a2 + 1184;
  *(_QWORD *)(a2 + 1184) = a2 + 1184;
  *(_WORD *)(a2 + 1200) = 0;
  *(_BYTE *)(a2 + 1202) = 6;
  *(_DWORD *)(a2 + 1204) = 0;
  *(_QWORD *)(a2 + 1216) = a2 + 1208;
  *(_QWORD *)(a2 + 1208) = a2 + 1208;
  *(_WORD *)(a2 + 1576) = 1;
  *(_BYTE *)(a2 + 1578) = 6;
  *(_DWORD *)(a2 + 1580) = 0;
  *(_QWORD *)(a2 + 1592) = a2 + 1584;
  *(_QWORD *)(a2 + 1584) = a2 + 1584;
  *(_OWORD *)(a2 + 992) = 0LL;
  *(_QWORD *)(a2 + 1008) = 0LL;
  *(_OWORD *)(a2 + 1016) = 0LL;
  *(_OWORD *)(a2 + 1032) = 0LL;
  *(_OWORD *)(a2 + 1048) = 0LL;
  *(_QWORD *)(a2 + 1064) = 0LL;
  *(_OWORD *)(a2 + 1232) = 0LL;
  *(_DWORD *)(a2 + 1232) = 2;
  *(_QWORD *)(a2 + 1240) = a2;
  memset_0((void *)(a2 + 920), 0, 0x48uLL);
  *(_BYTE *)(a2 + 920) = 9;
  *(_DWORD *)(a2 + 924) = 0;
  *(_QWORD *)(a2 + 936) = a2 + 928;
  *(_QWORD *)(a2 + 928) = a2 + 928;
  *(_QWORD *)(a2 + 944) = 0LL;
  *(_DWORD *)(a2 + 980) = 0;
  *(_WORD *)(a2 + 976) = 0;
  *(_BYTE *)(a2 + 984) = 1;
  if ( CcEnableAsyncLazywrite && CcEnableAsyncLazywriteMulti )
    *(_DWORD *)(a2 + 1616) |= 2u;
  NumberOfPhysicalPagesForPartitionObject = MmGetNumberOfPhysicalPagesForPartitionObject(*(_QWORD *)(a1 + 8));
  v17 = NumberOfPhysicalPagesForPartitionObject;
  if ( (_BYTE)dword_140FC420C == (_BYTE)ClientId )
  {
    v21 = NumberOfPhysicalPagesForPartitionObject >> 3;
    *(_QWORD *)(a2 + 1016) = v21;
    *(_QWORD *)(a2 + 1032) = v21;
    *(_QWORD *)(a2 + 1024) = v21;
    v20 = 1;
  }
  else
  {
    v18 = NumberOfPhysicalPagesForPartitionObject >> 1;
    if ( (unsigned int)CcAzure_TopBottomDPTEqual < 2 )
      v19 = v18;
    else
      v19 = v17 >> 3;
    *(_QWORD *)(a2 + 1024) = v18;
    *(_QWORD *)(a2 + 1032) = v19;
    *(_QWORD *)(a2 + 1016) = v18;
    v20 = ExCriticalWorkerThreads - 1;
  }
  *(_DWORD *)(a2 + 800) = v20;
  *(_DWORD *)(a2 + 1064) = 10;
  *(_QWORD *)(a2 + 1048) = 10 * v17;
  v22 = ExCriticalWorkerThreads - 1;
  *(_QWORD *)(a2 + 1056) = ClientId;
  *(_DWORD *)(a2 + 776) = v22;
  *(_DWORD *)(a2 + 804) = CcMaxCachemapUninitWorkerThreads;
  v23 = (*(_QWORD *)(a2 + 1016) >> 1) + (*(_QWORD *)(a2 + 1016) >> 2);
  if ( CcAzure_LazyWriterPercentageOfNumProcs != (_DWORD)ClientId )
  {
    ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
    ClientId = 0LL;
    v25 = CcAzure_LazyWriterPercentageOfNumProcs * ActiveProcessorCount / 0x64;
    if ( *(_DWORD *)(a2 + 776) < v25 )
      *(_DWORD *)(a2 + 776) = v25;
  }
  *(_DWORD *)(a2 + 704) = (_DWORD)ClientId;
  *(_BYTE *)(a2 + 708) = (_BYTE)ClientId;
  *(_QWORD *)(a2 + 1152) = ClientId;
  ObjectAttributes.Length = 48;
  if ( v23 > 0xFFFFFFFF )
    LODWORD(v23) = -1;
  ObjectAttributes.RootDirectory = ClientId;
  *(_DWORD *)(a2 + 1040) = v23;
  *(_QWORD *)(a2 + 1112) = a2 + 1104;
  *(_QWORD *)(a2 + 1104) = a2 + 1104;
  *(_DWORD *)(a2 + 1168) = -1;
  v26 = *(_QWORD *)(a1 + 8);
  ObjectAttributes.Attributes = (unsigned int)ClientId;
  ObjectAttributes.ObjectName = ClientId;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( PsCreateSystemThread(
         (PHANDLE)(a2 + 1224),
         0x1FFFFFu,
         &ObjectAttributes,
         *(HANDLE *)(v26 + 128),
         (PCLIENT_ID)ClientId,
         CcQueueLazyWriteScanThreadForVolume,
         (PVOID)a2) >= 0 )
  {
    for ( i = 0; i < CcNumberNumaNodes; ++i )
    {
      if ( !(unsigned __int8)CcInitializeNumaNodeForVolume(a2, v4 + 400LL * i, v27, i) )
        goto LABEL_40;
      if ( *a3 )
        *a3 = 0LL;
    }
    if ( CcInitializeQuickLWSThreadItem((_QWORD *)a2) )
    {
      PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)1536, 8LL * (unsigned int)(*(_DWORD *)(a2 + 800) + 1), 0x70546343u);
      if ( PoolWithTag )
      {
        *(_QWORD *)(a2 + 1160) = 0LL;
        *(_QWORD *)(a2 + 1072) = PoolWithTag;
        v34 = 1;
        CcForEachNumaNode(CcInitializeAsyncReadForNodeHelper, a1, a2, &v34);
        if ( v34 )
        {
          if ( (*(_DWORD *)(a2 + 1616) & 1) == 0
            || (v34 = 1, CcForEachNumaNode(CcInitializeAsyncLazywriteForNodeHelper, a1, a2, &v34), v34) )
          {
            ++*(_DWORD *)(a2 + 4);
            v9 = 1;
            *(_BYTE *)(a2 + 1236) = 1;
          }
        }
      }
    }
  }
LABEL_40:
  CurrentThread = KeGetCurrentThread();
  v31 = "YES";
  if ( !v9 )
    v31 = "NO";
  DbgPrintEx(
    0x7Fu,
    2u,
    "[%04x:%04x]CcInitializePrivateVolumeCacheMap: VCM:%p(vid:%2lx), DO:%p, PVCM:%p, Success:%s -> DONE\n",
    LODWORD(CurrentThread[1].CycleTime),
    CurrentThread[1].CurrentRunTime,
    *(const void **)(a2 + 40),
    *(_DWORD *)(a2 + 24),
    v10,
    (const void *)a2,
    v31);
  return v9;
}
