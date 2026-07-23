/*
 * XREFs of PopHiberInitializeResources @ 0x1407507DC
 * Callers:
 *     PopAllocateHiberContext @ 0x140AC4284 (PopAllocateHiberContext.c)
 * Callees:
 *     RtlGetCompressionWorkSpaceSize @ 0x140376230 (RtlGetCompressionWorkSpaceSize.c)
 *     PoSetHiberRange @ 0x14046AD10 (PoSetHiberRange.c)
 *     IoGetDumpStackTransferSizes @ 0x14058EB2C (IoGetDumpStackTransferSizes.c)
 *     Feature_CrashDumpOneMBTransferSize__private_IsEnabledDeviceUsageNoInline @ 0x1405D0A68 (Feature_CrashDumpOneMBTransferSize__private_IsEnabledDeviceUsageNoInline.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PopCalculateHiberFileSize @ 0x14074FE78 (PopCalculateHiberFileSize.c)
 *     MmMarkHiberRange @ 0x1407EDD10 (MmMarkHiberRange.c)
 *     MmAllocateDumpHibernateResources @ 0x140A9873C (MmAllocateDumpHibernateResources.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PopHiberInitializeResources(_QWORD *MemoryMap)
{
  __int64 v1; // r14
  size_t v3; // r15
  ULONG v4; // ebx
  USHORT *v5; // r12
  unsigned int i; // r13d
  size_t v7; // rsi
  unsigned int v8; // ebx
  int v9; // r13d
  unsigned __int64 v10; // rsi
  _QWORD *Pool2; // rsi
  __int64 DumpHibernateResources; // r12
  int v13; // r12d
  char *v14; // r15
  char *v15; // rcx
  unsigned int v16; // r8d
  unsigned int v17; // r9d
  _QWORD *v18; // rdx
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // r11
  char *v21; // rax
  unsigned __int64 v22; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v23; // [rsp+38h] [rbp-40h]
  unsigned __int64 v24; // [rsp+40h] [rbp-38h]
  unsigned __int64 v25; // [rsp+48h] [rbp-30h]
  ULONG_PTR v26; // [rsp+50h] [rbp-28h]
  unsigned __int64 v27; // [rsp+58h] [rbp-20h]
  size_t Size; // [rsp+60h] [rbp-18h]
  unsigned __int64 v29; // [rsp+68h] [rbp-10h]
  ULONG CompressFragmentWorkSpaceSize; // [rsp+C0h] [rbp+48h] BYREF
  ULONG CompressBufferWorkSpaceSize; // [rsp+C8h] [rbp+50h] BYREF
  unsigned int v32; // [rsp+D0h] [rbp+58h] BYREF
  int v33; // [rsp+D8h] [rbp+60h] BYREF

  v1 = (unsigned int)KeNumberProcessors_0;
  v3 = 0LL;
  CompressBufferWorkSpaceSize = 0;
  CompressFragmentWorkSpaceSize = 0;
  v22 = 0LL;
  v32 = 0;
  v33 = 0;
  v24 = 0LL;
  if ( (PopSimulate & 0x10000000) == 0 )
  {
    v4 = 0;
    v5 = (USHORT *)qword_140029310;
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
    v25 = (168 * v1 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    CompressBufferWorkSpaceSize = (CompressBufferWorkSpaceSize + 7) & 0xFFFFFFF8;
    v23 = (v4 + 7) & 0xFFFFFFF8;
    v7 = (unsigned int)v1 * v23 + ((Size + 4095) & 0xFFFFFFFFFFFFF000uLL);
    IoGetDumpStackTransferSizes(&v33, &v32);
    v8 = v32 >> 12;
    v9 = 16;
    if ( (unsigned int)Feature_CrashDumpOneMBTransferSize__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( !v8 )
        v8 = 1;
    }
    else if ( v8 < 0x10 )
    {
      v8 = 16;
LABEL_16:
      if ( PopHiberChecksummingEnabledReg )
      {
        v10 = (v7 + 4095) & 0xFFFFFFFFFFFFF000uLL;
        v24 = v10;
        PopCalculateHiberFileSize(&v22, 0LL);
        v3 = 2 * (v22 >> 9);
        v7 = v3 + v10;
      }
      v27 = (v7 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      LODWORD(v22) = (-4096 * v8) & (65668 * v1 - 1 + 69632 * v8);
      v29 = (unsigned int)v22 + v27;
      v26 = (v29 + (unsigned int)((_DWORD)v1 << 17) + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
      Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL, v26, 0x72626968u);
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
        v15 = (char *)Pool2 + v24;
        MemoryMap[59] = v3;
        MemoryMap[58] = v15;
        memset_0(v15, 0, v3);
      }
      v14 = (char *)Pool2 + v27;
      memset_0(Pool2, 0, Size);
      v16 = 0;
      if ( (_DWORD)v1 )
      {
        v17 = v23;
        v18 = Pool2 + 1;
        v19 = v25;
        v20 = v29;
        do
        {
          v21 = (char *)&Pool2[0x4000 * v16] + v20;
          *(v18 - 1) = v21;
          v18[2] = v21 + 0x10000;
          *v18 = DumpHibernateResources + (v16 << 16);
          if ( v17 )
            v18[1] = (char *)Pool2 + v19 + v16 * v17;
          ++v16;
          v18 += 21;
        }
        while ( v16 < (unsigned int)v1 );
        v9 = 16;
      }
      MmMarkHiberRange(MemoryMap, DumpHibernateResources, (unsigned __int64)(unsigned int)(16 * v1) << 12);
      PoSetHiberRange(MemoryMap, 0x8000u, (char *)Pool2 + v25, v26 - v25, 0x72626968u);
      MemoryMap[41] = v26;
      MemoryMap[40] = Pool2;
      MemoryMap[42] = DumpHibernateResources;
      v13 = v22;
      goto LABEL_22;
    }
    if ( v8 > 0x100 )
      v8 = 256;
    goto LABEL_16;
  }
LABEL_21:
  Pool2 = qword_140F0BC38;
  LODWORD(v1) = 1;
  v9 = 1;
  v8 = 1;
  memset_0(qword_140F0BC38, 0, 0xA8uLL);
  v13 = 12288;
  Pool2[1] = xmmword_140F0BBA8;
  v14 = (char *)qword_140F0BC30;
LABEL_22:
  PoSetHiberRange(MemoryMap, 0x8000u, qword_140F0BC30, 0x3000uLL, 0x72626968u);
  *((_DWORD *)MemoryMap + 72) = v1;
  MemoryMap[37] = Pool2;
  MemoryMap[38] = v14;
  *((_DWORD *)MemoryMap + 78) = v13;
  *((_DWORD *)MemoryMap + 79) = v9;
  *((_DWORD *)MemoryMap + 110) = v8;
}
