/*
 * XREFs of CcInitializePartition @ 0x14057A1B8
 * Callers:
 *     CcCreatePartition @ 0x140579AF0 (CcCreatePartition.c)
 * Callees:
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     ExAllocatePoolWithTagFromNode @ 0x140277180 (ExAllocatePoolWithTagFromNode.c)
 *     KeQueryActiveProcessorCountEx @ 0x140339940 (KeQueryActiveProcessorCountEx.c)
 *     CcForEachNumaNode @ 0x1404310C4 (CcForEachNumaNode.c)
 *     CcInitializePartitionVacbs @ 0x14057A840 (CcInitializePartitionVacbs.c)
 *     CcInitializeNumaNode @ 0x14057AF8C (CcInitializeNumaNode.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PsCreateSystemThread @ 0x1408F8C00 (PsCreateSystemThread.c)
 *     ExAllocatePoolWithTag @ 0x140B74010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

char __fastcall CcInitializePartition(char *StartContext, _QWORD *a2)
{
  char v3; // r12
  char *v4; // r14
  char *v6; // rsi
  _QWORD *v7; // rdx
  PVOID *v8; // rcx
  unsigned __int64 v9; // r8
  char *v10; // r9
  unsigned __int16 **v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  int v14; // eax
  int v15; // eax
  unsigned __int64 v16; // rbx
  bool v17; // zf
  void *v18; // r9
  char *PoolWithTag; // rax
  char *v20; // r15
  unsigned int i; // ebx
  PVOID v22; // rax
  __int64 v23; // rcx
  __int64 PoolWithTagFromNode; // rax
  __int64 *v25; // rcx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v3 = 0;
  v4 = 0LL;
  memset_0(StartContext, 0, 0x640uLL);
  *(_DWORD *)StartContext = 104858359;
  *((_QWORD *)StartContext + 1) = a2;
  v6 = StartContext + 96;
  *((_QWORD *)StartContext + 162) = 1LL;
  v7 = StartContext + 696;
  *((_QWORD *)StartContext + 3) = StartContext + 16;
  *((_QWORD *)StartContext + 2) = StartContext + 16;
  *((_QWORD *)StartContext + 5) = StartContext + 32;
  *((_QWORD *)StartContext + 4) = StartContext + 32;
  *((_QWORD *)StartContext + 11) = StartContext + 80;
  *((_QWORD *)StartContext + 10) = StartContext + 80;
  *((_QWORD *)StartContext + 13) = StartContext + 96;
  *((_QWORD *)StartContext + 12) = StartContext + 96;
  *((_QWORD *)StartContext + 15) = StartContext + 112;
  *((_QWORD *)StartContext + 14) = StartContext + 112;
  *((_QWORD *)StartContext + 83) = StartContext + 656;
  *((_QWORD *)StartContext + 82) = StartContext + 656;
  *((_QWORD *)StartContext + 81) = StartContext + 640;
  *((_QWORD *)StartContext + 80) = StartContext + 640;
  *((_QWORD *)StartContext + 91) = StartContext + 720;
  *((_QWORD *)StartContext + 90) = StartContext + 720;
  *((_QWORD *)StartContext + 85) = StartContext + 672;
  *((_QWORD *)StartContext + 84) = StartContext + 672;
  *((_DWORD *)StartContext + 172) = 2048;
  v8 = (PVOID *)*((_QWORD *)StartContext + 85);
  if ( *v8 != StartContext + 672 )
    goto LABEL_31;
  *v7 = StartContext + 672;
  *((_QWORD *)StartContext + 88) = v8;
  *v8 = v7;
  *((_QWORD *)StartContext + 85) = v7;
  *((_DWORD *)StartContext + 178) = 2048;
  *((_QWORD *)StartContext + 96) = 0LL;
  *((_QWORD *)StartContext + 104) = 0LL;
  *((_QWORD *)StartContext + 107) = StartContext + 848;
  *((_QWORD *)StartContext + 106) = StartContext + 848;
  *((_WORD *)StartContext + 440) = 1;
  StartContext[882] = 6;
  *((_DWORD *)StartContext + 221) = 0;
  *((_QWORD *)StartContext + 112) = StartContext + 888;
  *((_QWORD *)StartContext + 111) = StartContext + 888;
  *((_WORD *)StartContext + 452) = 1;
  StartContext[906] = 6;
  *((_DWORD *)StartContext + 227) = 0;
  *((_QWORD *)StartContext + 115) = StartContext + 912;
  *((_QWORD *)StartContext + 114) = StartContext + 912;
  *((_WORD *)StartContext + 464) = 1;
  StartContext[930] = 6;
  *((_DWORD *)StartContext + 233) = 0;
  *((_QWORD *)StartContext + 118) = StartContext + 936;
  *((_QWORD *)StartContext + 117) = StartContext + 936;
  *((_WORD *)StartContext + 476) = 1;
  StartContext[954] = 6;
  *((_DWORD *)StartContext + 239) = 0;
  *((_QWORD *)StartContext + 121) = StartContext + 960;
  *((_QWORD *)StartContext + 120) = StartContext + 960;
  *((_WORD *)StartContext + 652) = 0;
  StartContext[1306] = 6;
  *((_DWORD *)StartContext + 327) = 0;
  *((_QWORD *)StartContext + 165) = StartContext + 1312;
  *((_QWORD *)StartContext + 164) = StartContext + 1312;
  *((_WORD *)StartContext + 664) = 0;
  StartContext[1330] = 6;
  *((_DWORD *)StartContext + 333) = 0;
  *((_QWORD *)StartContext + 168) = StartContext + 1336;
  *((_QWORD *)StartContext + 167) = StartContext + 1336;
  *((_WORD *)StartContext + 28) = 0;
  StartContext[58] = 6;
  *((_DWORD *)StartContext + 15) = 0;
  *((_QWORD *)StartContext + 9) = StartContext + 64;
  *((_QWORD *)StartContext + 8) = StartContext + 64;
  *((_OWORD *)StartContext + 66) = 0LL;
  *((_QWORD *)StartContext + 134) = 0LL;
  *(_OWORD *)(StartContext + 1080) = 0LL;
  *(_OWORD *)(StartContext + 1096) = 0LL;
  *(_OWORD *)(StartContext + 1112) = 0LL;
  *((_QWORD *)StartContext + 141) = 0LL;
  *((_OWORD *)StartContext + 85) = 0LL;
  *((_DWORD *)StartContext + 340) = 1;
  *((_QWORD *)StartContext + 171) = StartContext;
  memset_0(StartContext + 984, 0, 0x48uLL);
  StartContext[984] = 9;
  *((_DWORD *)StartContext + 247) = 0;
  *((_QWORD *)StartContext + 125) = StartContext + 992;
  *((_QWORD *)StartContext + 124) = StartContext + 992;
  *((_QWORD *)StartContext + 126) = 0LL;
  *((_DWORD *)StartContext + 261) = 0;
  *((_WORD *)StartContext + 520) = 0;
  v11 = (unsigned __int16 **)*((_QWORD *)StartContext + 1);
  StartContext[1048] = 1;
  v12 = *(_QWORD *)(*((_QWORD *)qword_140E300C8 + **v11) + 18512LL);
  if ( (_BYTE)dword_140FC521C )
  {
    v13 = v12 >> 1;
    v10 = StartContext;
    if ( (unsigned int)CcAzure_TopBottomDPTEqual < 2 )
      v9 = v12 >> 1;
    else
      v9 = v12 >> 3;
    *((_QWORD *)StartContext + 136) = v13;
    *((_QWORD *)StartContext + 137) = v9;
    *((_QWORD *)StartContext + 135) = v13;
    v14 = ExCriticalWorkerThreads - 1;
  }
  else
  {
    *((_QWORD *)StartContext + 135) = v12 >> 3;
    *((_QWORD *)StartContext + 137) = v12 >> 3;
    *((_QWORD *)StartContext + 136) = v12 >> 3;
    v14 = 1;
  }
  *((_DWORD *)StartContext + 216) = v14;
  *((_DWORD *)StartContext + 282) = 10;
  *((_QWORD *)StartContext + 139) = 10 * v12;
  v15 = ExCriticalWorkerThreads - 1;
  *((_QWORD *)StartContext + 140) = 0LL;
  *((_DWORD *)StartContext + 210) = v15;
  *((_DWORD *)StartContext + 217) = CcMaxCachemapUninitWorkerThreads;
  v16 = (*((_QWORD *)StartContext + 135) >> 1) + (*((_QWORD *)StartContext + 135) >> 2);
  if ( CcAzure_LazyWriterPercentageOfNumProcs )
  {
    v12 = CcAzure_LazyWriterPercentageOfNumProcs * KeQueryActiveProcessorCountEx(0xFFFFu) / 0x64;
    if ( *((_DWORD *)StartContext + 210) < (unsigned int)v12 )
      *((_DWORD *)StartContext + 210) = v12;
  }
  StartContext[1294] = 0;
  *((_DWORD *)StartContext + 194) = 0;
  StartContext[780] = 0;
  *((_QWORD *)StartContext + 152) = 0LL;
  if ( v16 > 0xFFFFFFFF )
    LODWORD(v16) = -1;
  v17 = CcEnablePerVolumeLazyWriter == 0;
  *((_DWORD *)StartContext + 276) = v16;
  *((_QWORD *)StartContext + 147) = StartContext + 1168;
  *((_QWORD *)StartContext + 146) = StartContext + 1168;
  *((_QWORD *)StartContext + 155) = StartContext + 1232;
  *((_QWORD *)StartContext + 154) = StartContext + 1232;
  *((_QWORD *)StartContext + 157) = 0LL;
  *((_QWORD *)StartContext + 158) = 0LL;
  *((_DWORD *)StartContext + 318) = 32;
  *((_DWORD *)StartContext + 319) = 5;
  *((_DWORD *)StartContext + 322) = -1;
  *((_QWORD *)StartContext + 160) = 0LL;
  *((_QWORD *)StartContext + 191) = CcProcessDelayedDeletePVCM;
  *((_QWORD *)StartContext + 192) = StartContext;
  *((_QWORD *)StartContext + 189) = 0LL;
  *((_QWORD *)StartContext + 172) = 0LL;
  StartContext[1376] = 8;
  *((_QWORD *)StartContext + 174) = StartContext + 1384;
  *((_QWORD *)StartContext + 173) = StartContext + 1384;
  *((_QWORD *)StartContext + 175) = 0LL;
  *((_DWORD *)StartContext + 359) = 0;
  *((_WORD *)StartContext + 716) = 0;
  *((_QWORD *)StartContext + 183) = CcPVCMDelayedDeleteTimerDpc;
  *((_DWORD *)StartContext + 360) = 275;
  *((_QWORD *)StartContext + 184) = StartContext;
  *((_QWORD *)StartContext + 187) = 0LL;
  *((_QWORD *)StartContext + 182) = 0LL;
  if ( v17 )
  {
    v18 = (void *)a2[16];
    ObjectAttributes.Length = 48;
    memset(&ObjectAttributes.RootDirectory, 0, 20);
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( PsCreateSystemThread(
           (PHANDLE)StartContext + 169,
           0x1FFFFFu,
           &ObjectAttributes,
           v18,
           0LL,
           (PKSTART_ROUTINE)CcQueueLazyWriteScanThread,
           StartContext) < 0 )
      return v3;
    PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)1536, 400LL * (unsigned int)CcNumberNumaNodes, 0x754E6343u);
    v20 = PoolWithTag;
    if ( !PoolWithTag )
      return v3;
    v4 = PoolWithTag;
    for ( i = 0; i < CcNumberNumaNodes; ++i )
    {
      if ( !(unsigned __int8)CcInitializeNumaNode(StartContext, &v20[400 * i], v9, i) )
        goto LABEL_28;
      v4 = 0LL;
    }
  }
  if ( (unsigned __int8)CcInitializePartitionVacbs(StartContext, v12, v9, v10) )
  {
    v22 = ExAllocatePoolWithTag((POOL_TYPE)1536, 8LL * (unsigned int)(*((_DWORD *)StartContext + 216) + 1), 0x70546343u);
    if ( v22 )
    {
      v17 = CcEnablePerVolumeLazyWriter == 0;
      *((_QWORD *)StartContext + 142) = v22;
      if ( v17 )
      {
        *((_QWORD *)StartContext + 153) = 0LL;
        CcForEachNumaNode((__int64)CcInitializeAsyncReadForNodeHelper, (__int64)StartContext, 0LL);
        if ( !CcEnablePerVolumeLazyWriter )
          goto LABEL_27;
      }
      PoolWithTagFromNode = ExAllocatePoolWithTagFromNode(v23, 0x50uLL, 0x71576343uLL, 0x80000000uLL);
      if ( !PoolWithTagFromNode )
        goto LABEL_28;
      *(_DWORD *)(PoolWithTagFromNode + 36) = -1;
      *(_DWORD *)(PoolWithTagFromNode + 32) = 9;
      *(_QWORD *)(PoolWithTagFromNode + 56) = StartContext;
      *(_QWORD *)(PoolWithTagFromNode + 64) = 0LL;
      *(_QWORD *)(PoolWithTagFromNode + 72) = 0LL;
      *(_DWORD *)(PoolWithTagFromNode + 40) = 0;
      *(_QWORD *)(PoolWithTagFromNode + 16) = CcReapPrivateVolumeCachemapWorkerThread;
      *(_QWORD *)(PoolWithTagFromNode + 24) = PoolWithTagFromNode;
      *(_QWORD *)PoolWithTagFromNode = 0LL;
      v25 = (__int64 *)*((_QWORD *)StartContext + 13);
      if ( (char *)*v25 == v6 )
      {
        *(_QWORD *)PoolWithTagFromNode = v6;
        *(_QWORD *)(PoolWithTagFromNode + 8) = v25;
        *v25 = PoolWithTagFromNode;
        *((_QWORD *)StartContext + 13) = PoolWithTagFromNode;
LABEL_27:
        v3 = 1;
        StartContext[1364] = 1;
        DbgPrintEx(
          0x7Fu,
          2u,
          "CcInitializePartition: Initialized Partition=%p, PartitionObject=%p \n",
          StartContext,
          a2);
        goto LABEL_28;
      }
LABEL_31:
      __fastfail(3u);
    }
  }
LABEL_28:
  if ( v4 )
    ExFreePoolWithTag(v4, 0x754E6343u);
  return v3;
}
