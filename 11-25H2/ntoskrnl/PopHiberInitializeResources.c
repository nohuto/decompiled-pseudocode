/*
 * XREFs of PopHiberInitializeResources @ 0x140746400
 * Callers:
 *     PopAllocateHiberContext @ 0x140ABEFAC (PopAllocateHiberContext.c)
 * Callees:
 *     RtlGetCompressionWorkSpaceSize @ 0x140393E20 (RtlGetCompressionWorkSpaceSize.c)
 *     PoSetHiberRange @ 0x140472260 (PoSetHiberRange.c)
 *     IoGetDumpStackTransferSizes @ 0x14058E2DC (IoGetDumpStackTransferSizes.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PopCalculateHiberFileSize @ 0x140745A88 (PopCalculateHiberFileSize.c)
 *     MmMarkHiberRange @ 0x1407DD8A0 (MmMarkHiberRange.c)
 *     MmAllocateDumpHibernateResources @ 0x140A9769C (MmAllocateDumpHibernateResources.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PopHiberInitializeResources(_QWORD *MemoryMap)
{
  __int64 v1; // r14
  size_t v3; // r15
  ULONG v4; // esi
  unsigned int v5; // r12d
  ULONG v6; // eax
  size_t v7; // rdi
  int v8; // r13d
  unsigned int v9; // esi
  unsigned __int64 v10; // rdi
  _QWORD *Pool2; // rdi
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
  unsigned __int64 v26; // [rsp+50h] [rbp-28h]
  unsigned __int64 v27; // [rsp+58h] [rbp-20h]
  size_t Size; // [rsp+60h] [rbp-18h]
  unsigned __int64 v29; // [rsp+68h] [rbp-10h]
  ULONG CompressBufferWorkSpaceSize; // [rsp+C0h] [rbp+48h] BYREF
  ULONG CompressFragmentWorkSpaceSize; // [rsp+C8h] [rbp+50h] BYREF
  unsigned int v32; // [rsp+D0h] [rbp+58h] BYREF
  int v33; // [rsp+D8h] [rbp+60h] BYREF

  v1 = (unsigned int)KeNumberProcessors_0;
  CompressBufferWorkSpaceSize = 0;
  v3 = 0LL;
  CompressFragmentWorkSpaceSize = 0;
  v22 = 0LL;
  v32 = 0;
  v33 = 0;
  v24 = 0LL;
  if ( (PopSimulate & 0x10000000) != 0 )
    goto LABEL_19;
  v4 = 0;
  v5 = 0;
  Size = 168LL * (unsigned int)KeNumberProcessors_0;
  v6 = CompressBufferWorkSpaceSize;
  while ( v5 < 5 )
  {
    if ( RtlGetCompressionWorkSpaceSize(
           *((_WORD *)qword_1400289B0 + v5),
           &CompressBufferWorkSpaceSize,
           &CompressFragmentWorkSpaceSize) < 0 )
      goto LABEL_19;
    v6 = CompressBufferWorkSpaceSize;
    if ( v4 <= CompressBufferWorkSpaceSize )
      v4 = CompressBufferWorkSpaceSize;
    if ( v4 <= CompressFragmentWorkSpaceSize )
      v4 = CompressFragmentWorkSpaceSize;
    ++v5;
  }
  v25 = (168 * v1 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  CompressBufferWorkSpaceSize = (v6 + 7) & 0xFFFFFFF8;
  v23 = (v4 + 7) & 0xFFFFFFF8;
  v7 = (unsigned int)v1 * v23 + ((Size + 4095) & 0xFFFFFFFFFFFFF000uLL);
  IoGetDumpStackTransferSizes(&v33, &v32);
  v8 = 16;
  v9 = v32 >> 12;
  if ( v32 >> 12 >= 0x10 )
  {
    if ( v9 > 0x100 )
      v9 = 256;
  }
  else
  {
    v9 = 16;
  }
  if ( PopHiberChecksummingEnabledReg )
  {
    v10 = (v7 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v24 = v10;
    PopCalculateHiberFileSize(&v22, 0LL);
    v3 = 2 * (v22 >> 9);
    v7 = v3 + v10;
  }
  v27 = (v7 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  LODWORD(v22) = (-4096 * v9) & (65668 * v1 - 1 + 69632 * v9);
  v29 = (unsigned int)v22 + v27;
  v26 = (v29 + (unsigned int)((_DWORD)v1 << 17) + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
  Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL);
  if ( !Pool2 )
    goto LABEL_19;
  DumpHibernateResources = MmAllocateDumpHibernateResources((unsigned int)((_DWORD)v1 << 16));
  if ( !DumpHibernateResources )
  {
    ExFreePoolWithTag(Pool2, 0x72626968u);
LABEL_19:
    Pool2 = qword_140F0AE18;
    LODWORD(v1) = 1;
    v8 = 1;
    v9 = 1;
    memset_0(qword_140F0AE18, 0, 0xA8uLL);
    v13 = 12288;
    Pool2[1] = xmmword_140F0AD88;
    v14 = (char *)qword_140F0AE10;
    goto LABEL_20;
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
  }
  MmMarkHiberRange(MemoryMap, DumpHibernateResources, (unsigned __int64)(unsigned int)(16 * v1) << 12);
  PoSetHiberRange(MemoryMap, 0x8000u, (char *)Pool2 + v25, v26 - v25, 0x72626968u);
  MemoryMap[41] = v26;
  MemoryMap[40] = Pool2;
  MemoryMap[42] = DumpHibernateResources;
  v13 = v22;
LABEL_20:
  PoSetHiberRange(MemoryMap, 0x8000u, qword_140F0AE10, 0x3000uLL, 0x72626968u);
  *((_DWORD *)MemoryMap + 72) = v1;
  MemoryMap[37] = Pool2;
  MemoryMap[38] = v14;
  *((_DWORD *)MemoryMap + 78) = v13;
  *((_DWORD *)MemoryMap + 79) = v8;
  *((_DWORD *)MemoryMap + 110) = v9;
}
