/*
 * XREFs of MmAllocateMemoryRanges @ 0x1407DB290
 * Callers:
 *     IopLiveDumpAllocateIoSpaceRanges @ 0x140595D3C (IopLiveDumpAllocateIoSpaceRanges.c)
 *     MiAllocateUserPhysicalRanges @ 0x140AB09C0 (MiAllocateUserPhysicalRanges.c)
 * Callees:
 *     MiInitializePageColorBase @ 0x14023A610 (MiInitializePageColorBase.c)
 *     PsDereferencePartition @ 0x140302710 (PsDereferencePartition.c)
 *     MiPartitionObjectToPartition @ 0x1404156EC (MiPartitionObjectToPartition.c)
 *     MmGetNextNode @ 0x140433CC0 (MmGetNextNode.c)
 *     MiGetNextPageColor @ 0x1404432AC (MiGetNextPageColor.c)
 *     MiGetHugeRange @ 0x1406645A4 (MiGetHugeRange.c)
 *     MiReleaseMemoryRuns @ 0x140665C0C (MiReleaseMemoryRuns.c)
 *     MiAddRun @ 0x1407DAED4 (MiAddRun.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmAllocateMemoryRanges(ULONG_PTR a1)
{
  unsigned __int64 v1; // r15
  bool v2; // zf
  unsigned int v4; // ecx
  int v5; // eax
  int v6; // r13d
  unsigned int v7; // ebx
  int v8; // r12d
  ULONG *v9; // rax
  __int64 v10; // rdi
  int v11; // r14d
  unsigned int NextPageColor; // eax
  int HugeRange; // eax
  __int64 v14; // rdi
  unsigned int NextNode; // eax
  __int64 v16; // rdi
  __int64 v18; // [rsp+20h] [rbp-30h] BYREF
  __int64 v19; // [rsp+28h] [rbp-28h]
  __int64 *v20; // [rsp+30h] [rbp-20h]
  __int128 v21; // [rsp+38h] [rbp-18h] BYREF
  PVOID P; // [rsp+48h] [rbp-8h]
  char v23; // [rsp+90h] [rbp+40h] BYREF
  __int64 v24; // [rsp+98h] [rbp+48h] BYREF
  ULONG *v25; // [rsp+A0h] [rbp+50h]

  v1 = 0LL;
  v2 = *(_DWORD *)a1 == 1;
  v19 = 0LL;
  v23 = 0;
  v21 = 0LL;
  P = 0LL;
  if ( !v2 )
    return 3221225485LL;
  v4 = *(_DWORD *)(a1 + 4);
  if ( v4 >= 8 || !*(_QWORD *)(a1 + 16) )
    return 3221225485LL;
  v5 = *(_DWORD *)(a1 + 32);
  v6 = (unsigned __int16)KeNumberNodes;
  if ( v5 >= 0 )
    v6 = 1;
  v7 = v5 & 0x7FFFFFFF;
  if ( v5 >= 0 )
    v7 = *(_DWORD *)(a1 + 32);
  if ( v7 >= (unsigned __int16)KeNumberNodes )
    return 3221225485LL;
  if ( KeGetCurrentIrql() )
    return 3221225485LL;
  if ( (v4 & 1) == 0 )
    return 3221225485LL;
  if ( *(_QWORD *)(a1 + 24) != 0x40000000LL )
    return 3221225485LL;
  v8 = (v4 & 2) != 0 ? 0x30 : 0;
  v9 = MiPartitionObjectToPartition(*(ULONG ***)(a1 + 8), 0, &v23);
  v25 = v9;
  if ( !v9 )
    return 3221225485LL;
  v10 = *((_QWORD *)v9 + 2) + 57216LL * v7;
  MiInitializePageColorBase(0LL, 0, v7 + 1, (__int64)&v18);
  LODWORD(v24) = 0;
  v18 = v10 + 15216;
  v11 = 0;
  while ( v1 < *(_QWORD *)(a1 + 16) )
  {
    NextPageColor = MiGetNextPageColor((__int64)&v18);
    HugeRange = MiGetHugeRange((__int64)v25, NextPageColor, v8 + 4096);
    v14 = HugeRange & 0x3FFFFF;
    if ( (HugeRange & 0x3FFFFF) != 0 )
    {
      v11 = MiAddRun(a1, (__int64 *)&v21, HugeRange);
      if ( v11 < 0 )
      {
        v19 = 0LL;
        v24 = v14 << 30;
        v20 = &v24;
        v18 = 1LL;
        MiReleaseMemoryRuns(a1, &v18, 0);
LABEL_23:
        if ( (*(_DWORD *)(a1 + 4) & 4) != 0 )
        {
          if ( (_QWORD)v21 )
            v11 = 0;
        }
        else
        {
          MiReleaseMemoryRuns(a1, (__int64 *)&v21, 0);
        }
        break;
      }
    }
    else
    {
      if ( !--v6 )
      {
        v11 = -1073741670;
        goto LABEL_23;
      }
      NextNode = MmGetNextNode(v7, (int *)&v24);
      v16 = *((_QWORD *)v25 + 2) + 57216LL * NextNode;
      MiInitializePageColorBase(0LL, 0, NextNode + 1, (__int64)&v18);
      --v1;
      v18 = v16 + 15216;
    }
    ++v1;
  }
  if ( v23 )
    PsDereferencePartition(*((_QWORD *)v25 + 23));
  if ( v11 >= 0 )
  {
    *(_QWORD *)(a1 + 48) = P;
    *(_QWORD *)(a1 + 40) = v21;
    return 0LL;
  }
  else
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
    return 3221225626LL;
  }
}
