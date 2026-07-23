/*
 * XREFs of MiMeasureDemandCoalesceTimeBounds @ 0x140C5BC6C
 * Callers:
 *     MiInitNucleus @ 0x140C51428 (MiInitNucleus.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x140218F60 (MiFreePagesFromMdl.c)
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x140313830 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140394410 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 MiMeasureDemandCoalesceTimeBounds()
{
  __int64 v0; // rbx
  unsigned int v1; // ebp
  ULONG_PTR PartitionNodePagesForMdl; // rax
  void *v3; // r14
  __int64 result; // rax
  unsigned __int64 v5; // r12
  unsigned __int8 CurrentIrql; // r14
  unsigned int i; // r15d
  ULONG64 v8; // r13
  __int64 v9; // r9
  unsigned __int64 v10; // r8
  unsigned int *v11; // r10
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  PVOID P; // [rsp+40h] [rbp-48h]
  unsigned __int64 QpcTimeStamp; // [rsp+48h] [rbp-40h] BYREF
  ULONG64 v17; // [rsp+50h] [rbp-38h]
  _DWORD v18[4]; // [rsp+58h] [rbp-30h] BYREF

  v0 = 0LL;
  v18[0] = 2;
  v18[1] = 40;
  v1 = 0;
  v18[2] = 100;
  while ( v1 < (unsigned __int16)KeNumberNodes )
  {
    PartitionNodePagesForMdl = MmAllocatePartitionNodePagesForMdlEx(0, -1, 0x10000LL, 0x10000LL, 1u, v1, 103, 0LL);
    v3 = (void *)PartitionNodePagesForMdl;
    if ( PartitionNodePagesForMdl )
    {
      MiFreePagesFromMdl(PartitionNodePagesForMdl, 0, 0, 0);
      ExFreePoolWithTag(v3, 0);
      break;
    }
    ++v1;
  }
  result = (unsigned __int16)KeNumberNodes;
  if ( v1 != (unsigned __int16)KeNumberNodes )
  {
    v5 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
    for ( i = 0; i < 0xA; ++i )
    {
      v17 = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
      P = (PVOID)MmAllocatePartitionNodePagesForMdlEx(0, -1, 0x10000LL, 0x10000LL, 1u, v1, 103, 0LL);
      v8 = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
      if ( !P )
        break;
      MiFreePagesFromMdl((ULONG_PTR)P, 0, 0, 0);
      ExFreePoolWithTag(P, 0);
      v5 += v8 - v17;
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
    if ( i == 10 )
    {
      v9 = 3LL;
      v10 = v5 / 0xA;
      if ( v5 / 0xA > 3 )
      {
        if ( v10 >= 0x64 )
          v10 = 100LL;
      }
      else
      {
        v10 = 3LL;
      }
      v11 = v18;
      do
      {
        v12 = *v11++;
        v13 = MiPageSizes[v0++];
        v14 = v10 * v12 * (v13 >> 4);
        result = 0x47AE147AE147AE15LL * v14;
        *(_QWORD *)&aCmfc[v0 * 8 + 4] = v14 / 0x64;
        --v9;
      }
      while ( v9 );
    }
  }
  return result;
}
