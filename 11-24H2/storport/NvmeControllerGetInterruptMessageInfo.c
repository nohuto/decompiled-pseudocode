/*
 * XREFs of NvmeControllerGetInterruptMessageInfo @ 0x1400EDF04
 * Callers:
 *     NvmeControllerInitPhase2 @ 0x1400EFCD4 (NvmeControllerInitPhase2.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     NvmeControllerGetMSIInfo @ 0x1400EEB70 (NvmeControllerGetMSIInfo.c)
 */

__int64 __fastcall NvmeControllerGetInterruptMessageInfo(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v2; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  unsigned int v6; // ebp
  void *v7; // rcx
  __int64 Pool; // rax
  unsigned int i; // r10d
  __int64 v10; // r8
  __int64 v11; // r9
  _OWORD v13[2]; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0;
  v13[0] = 0LL;
  v2 = *(_QWORD *)(a1 + 128);
  v4 = 0LL;
  if ( !v2 )
    return 3221225701LL;
  v5 = *(_QWORD *)(v2 + 584);
  if ( !v5 || !*(_QWORD *)(v5 + 120) || !*(_QWORD *)(v5 + 128) )
    return 3221225701LL;
  if ( (unsigned int)(*(_DWORD *)(a1 + 904) - 2) <= 1 )
  {
    v6 = 0;
    if ( (int)NvmeControllerGetMSIInfo(a1, 0LL, v13) < 0 )
      goto LABEL_15;
    do
    {
      if ( v6 )
      {
        if ( v4 == *((_QWORD *)&v13[0] + 1) && *(_DWORD *)(a1 + 904) != 3 )
          *(_DWORD *)(a1 + 904) = 2;
      }
      else
      {
        v4 = *((_QWORD *)&v13[0] + 1);
      }
      ++v6;
    }
    while ( (int)NvmeControllerGetMSIInfo(a1, v6, v13) >= 0 );
    if ( !v6 )
    {
LABEL_15:
      v6 = 1;
      *(_DWORD *)(a1 + 904) = 1;
    }
  }
  else
  {
    v6 = 1;
  }
  *(_DWORD *)(a1 + 908) = v6;
  v7 = *(void **)(a1 + 912);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0x54496152u);
    *(_QWORD *)(a1 + 912) = 0LL;
  }
  Pool = RaidAllocatePool(
           72LL,
           32LL * *(unsigned int *)(a1 + 908),
           1414095186LL,
           *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL));
  *(_QWORD *)(a1 + 912) = Pool;
  if ( Pool )
  {
    for ( i = 0;
          i < *(_DWORD *)(a1 + 908);
          *(_OWORD *)(*(_QWORD *)(a1 + 912) + v10 + 8) = *(_OWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 128)
                                                                                           + 584LL)
                                                                               + 128LL)
                                                                   + 8 * v11) )
    {
      v10 = 32LL * i;
      v11 = 2LL * i;
      *(_DWORD *)(v10 + *(_QWORD *)(a1 + 912)) = i++;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v1;
}
