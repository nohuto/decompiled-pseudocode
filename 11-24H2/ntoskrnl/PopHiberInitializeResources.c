/*
 * XREFs of PopHiberInitializeResources @ 0x1407524BC
 * Callers:
 *     PopAllocateHiberContext @ 0x140AC688C (PopAllocateHiberContext.c)
 * Callees:
 *     PoSetHiberRange @ 0x1402649E0 (PoSetHiberRange.c)
 *     RtlGetCompressionWorkSpaceSize @ 0x14044A580 (RtlGetCompressionWorkSpaceSize.c)
 *     IoGetDumpStackTransferSizes @ 0x140591B0C (IoGetDumpStackTransferSizes.c)
 *     Feature_CrashDumpOneMBTransferSize__private_IsEnabledDeviceUsageNoInline @ 0x1405D3348 (Feature_CrashDumpOneMBTransferSize__private_IsEnabledDeviceUsageNoInline.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PopCalculateHiberFileSize @ 0x140751B58 (PopCalculateHiberFileSize.c)
 *     MmMarkHiberRange @ 0x1407ED740 (MmMarkHiberRange.c)
 *     MmAllocateDumpHibernateResources @ 0x140A9D1CC (MmAllocateDumpHibernateResources.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PopHiberInitializeResources(_QWORD *MemoryMap)
{
  __int64 v1; // r14
  size_t v3; // r15
  ULONG v4; // ebx
  USHORT *v5; // r12
  unsigned int i; // r13d
  __int64 v7; // r8
  __int64 v8; // r9
  size_t v9; // rsi
  unsigned int v10; // ebx
  int v11; // r13d
  unsigned __int64 v12; // rsi
  _QWORD *Pool2; // rsi
  __int64 DumpHibernateResources; // r12
  int v15; // r12d
  char *v16; // r15
  char *v17; // rcx
  unsigned int v18; // r8d
  unsigned int v19; // r9d
  _QWORD *v20; // rdx
  unsigned __int64 v21; // r10
  unsigned __int64 v22; // r11
  char *v23; // rax
  unsigned __int64 v24; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v25; // [rsp+38h] [rbp-40h]
  unsigned __int64 v26; // [rsp+40h] [rbp-38h]
  unsigned __int64 v27; // [rsp+48h] [rbp-30h]
  unsigned __int64 v28; // [rsp+50h] [rbp-28h]
  unsigned __int64 v29; // [rsp+58h] [rbp-20h]
  size_t Size; // [rsp+60h] [rbp-18h]
  unsigned __int64 v31; // [rsp+68h] [rbp-10h]
  ULONG CompressFragmentWorkSpaceSize; // [rsp+C0h] [rbp+48h] BYREF
  ULONG CompressBufferWorkSpaceSize; // [rsp+C8h] [rbp+50h] BYREF
  unsigned int v34; // [rsp+D0h] [rbp+58h] BYREF
  int v35; // [rsp+D8h] [rbp+60h] BYREF

  v1 = (unsigned int)KeNumberProcessors_0;
  v3 = 0LL;
  CompressBufferWorkSpaceSize = 0;
  CompressFragmentWorkSpaceSize = 0;
  v24 = 0LL;
  v34 = 0;
  v35 = 0;
  v26 = 0LL;
  if ( (PopSimulate & 0x10000000) == 0 )
  {
    v4 = 0;
    v5 = (USHORT *)qword_140028E98;
    Size = 168LL * (unsigned int)KeNumberProcessors_0;
    for ( i = 0; i < 5; ++i )
    {
      if ( RtlGetCompressionWorkSpaceSize(*v5, &CompressBufferWorkSpaceSize, &CompressFragmentWorkSpaceSize) < 0 )
        goto LABEL_21;
      if ( v4 <= CompressBufferWorkSpaceSize )
        v4 = CompressBufferWorkSpaceSize;
      if ( v4 <= CompressFragmentWorkSpaceSize )
        v4 = CompressFragmentWorkSpaceSize;
      ++v5;
    }
    v27 = (168 * v1 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    CompressBufferWorkSpaceSize = (CompressBufferWorkSpaceSize + 7) & 0xFFFFFFF8;
    v25 = (v4 + 7) & 0xFFFFFFF8;
    v9 = (unsigned int)v1 * v25 + ((Size + 4095) & 0xFFFFFFFFFFFFF000uLL);
    IoGetDumpStackTransferSizes(&v35, &v34, v7, v8);
    v10 = v34 >> 12;
    v11 = 16;
    if ( (unsigned int)Feature_CrashDumpOneMBTransferSize__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( !v10 )
        v10 = 1;
    }
    else if ( v10 < 0x10 )
    {
      v10 = 16;
LABEL_16:
      if ( PopHiberChecksummingEnabledReg )
      {
        v12 = (v9 + 4095) & 0xFFFFFFFFFFFFF000uLL;
        v26 = v12;
        PopCalculateHiberFileSize(&v24, 0LL);
        v3 = 2 * (v24 >> 9);
        v9 = v3 + v12;
      }
      v29 = (v9 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      LODWORD(v24) = (-4096 * v10) & (65668 * v1 - 1 + 69632 * v10);
      v31 = (unsigned int)v24 + v29;
      v28 = (v31 + (unsigned int)((_DWORD)v1 << 17) + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
      Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL);
      if ( !Pool2 )
        goto LABEL_21;
      DumpHibernateResources = MmAllocateDumpHibernateResources((unsigned int)((_DWORD)v1 << 16));
      if ( !DumpHibernateResources )
      {
        ExFreePoolWithTag(Pool2, 0x72626968u);
        goto LABEL_21;
      }
      if ( PopHiberChecksummingEnabledReg )
      {
        v17 = (char *)Pool2 + v26;
        MemoryMap[59] = v3;
        MemoryMap[58] = v17;
        memset_0(v17, 0, v3);
      }
      v16 = (char *)Pool2 + v29;
      memset_0(Pool2, 0, Size);
      v18 = 0;
      if ( (_DWORD)v1 )
      {
        v19 = v25;
        v20 = Pool2 + 1;
        v21 = v27;
        v22 = v31;
        do
        {
          v23 = (char *)&Pool2[0x4000 * v18] + v22;
          *(v20 - 1) = v23;
          v20[2] = v23 + 0x10000;
          *v20 = DumpHibernateResources + (v18 << 16);
          if ( v19 )
            v20[1] = (char *)Pool2 + v21 + v18 * v19;
          ++v18;
          v20 += 21;
        }
        while ( v18 < (unsigned int)v1 );
        v11 = 16;
      }
      MmMarkHiberRange(MemoryMap, DumpHibernateResources, (unsigned __int64)(unsigned int)(16 * v1) << 12);
      PoSetHiberRange(MemoryMap, 0x8000u, (char *)Pool2 + v27, v28 - v27, 0x72626968u);
      MemoryMap[41] = v28;
      MemoryMap[40] = Pool2;
      MemoryMap[42] = DumpHibernateResources;
      v15 = v24;
      goto LABEL_22;
    }
    if ( v10 > 0x100 )
      v10 = 256;
    goto LABEL_16;
  }
LABEL_21:
  Pool2 = qword_140F0ADF8;
  LODWORD(v1) = 1;
  v11 = 1;
  v10 = 1;
  memset_0(qword_140F0ADF8, 0, 0xA8uLL);
  v15 = 12288;
  Pool2[1] = xmmword_140F0AD68;
  v16 = (char *)qword_140F0ADF0;
LABEL_22:
  PoSetHiberRange(MemoryMap, 0x8000u, qword_140F0ADF0, 0x3000uLL, 0x72626968u);
  *((_DWORD *)MemoryMap + 72) = v1;
  MemoryMap[37] = Pool2;
  MemoryMap[38] = v16;
  *((_DWORD *)MemoryMap + 78) = v15;
  *((_DWORD *)MemoryMap + 79) = v11;
  *((_DWORD *)MemoryMap + 110) = v10;
}
