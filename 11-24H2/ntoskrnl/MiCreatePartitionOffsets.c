/*
 * XREFs of MiCreatePartitionOffsets @ 0x1407ECACC
 * Callers:
 *     MmCreatePartition @ 0x1407FD07C (MmCreatePartition.c)
 *     MiCreatePfnDatabase @ 0x140C51020 (MiCreatePfnDatabase.c)
 * Callees:
 *     MiComputePartitionHugeIoSpaceSize @ 0x140670D18 (MiComputePartitionHugeIoSpaceSize.c)
 *     MiFreeCachedKernelShadowStackEntryCount @ 0x140681050 (MiFreeCachedKernelShadowStackEntryCount.c)
 */

__int64 __fastcall MiCreatePartitionOffsets(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r10
  int v5; // ecx
  __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  __int64 v8; // r11
  unsigned __int64 v9; // rdx
  unsigned int v10; // ecx
  int *v11; // rbx
  unsigned int i; // r10d
  int v13; // eax
  int v14; // eax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rcx

  v2 = (unsigned __int16)KeNumberNodes;
  v5 = dword_140E2DD0C * (unsigned __int16)KeNumberNodes;
  if ( a1 )
    a1[891] = a2;
  v6 = 8LL * (unsigned int)(4 * v5);
  if ( a1 )
    a1[2046] = v6 + a2;
  v7 = (16LL * (unsigned int)(2 * v5) + v6 + 63) & 0xFFFFFFFFFFFFFFC0uLL;
  if ( a1 )
    a1[2] = v7 + a2;
  v8 = v2;
  v9 = 57216 * v2 + v7;
  if ( a1 )
    a1[2045] = v9 + a2;
  v10 = dword_140E2FFE0;
  if ( !dword_140E2FFE0 )
  {
    v11 = dword_140E2DD00;
    for ( i = 0; i <= 3; ++i )
    {
      v13 = 8;
      if ( i != 3 )
        v13 = 16;
      v14 = *v11++ * v13;
      v10 += (unsigned __int8)MmNumberOfChannels * v14;
    }
    dword_140E2FFE0 = v10;
  }
  v15 = 88 * v8 * v10 + v9;
  if ( a1 )
    a1[2082] = v15 + a2;
  v16 = MiComputePartitionHugeIoSpaceSize();
  if ( v18 )
    *(_QWORD *)(v18 + 448) = ((v17 + v16 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + v19;
  v20 = MiFreeCachedKernelShadowStackEntryCount();
  return v21 + 32 * v20;
}
