/*
 * XREFs of RaInitializeUniqueTagging @ 0x1401B1E5C
 * Callers:
 *     RaidAdapterStartMiniport @ 0x1400430C0 (RaidAdapterStartMiniport.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 */

__int64 __fastcall RaInitializeUniqueTagging(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v3; // r14
  PVOID *Pool; // rsi
  unsigned int v5; // ebx
  __int64 i; // rdi
  __int64 v7; // rax
  PVOID *v8; // rdi

  v1 = g_MaximumProcessorCount;
  v3 = (unsigned int)g_MaximumProcessorCount;
  Pool = (PVOID *)RaidAllocatePool(72LL, 8LL * (unsigned int)g_MaximumProcessorCount, 1297375570LL, *(_QWORD *)(a1 + 8));
  if ( Pool )
  {
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= v1 )
      {
        *(_BYTE *)(a1 + 111) |= 4u;
        *(_QWORD *)(a1 + 6168) = Pool;
        return 0;
      }
      v7 = RaidAllocatePool(72LL, 8LL, 1297375570LL, *(_QWORD *)(a1 + 8));
      Pool[i] = (PVOID)v7;
      if ( !v7 )
        break;
      *(_WORD *)(v7 + 4) = i;
      *(_QWORD *)Pool[i] |= 0xFFFFFFFFuLL;
    }
    v5 = -1073741670;
    if ( v1 )
    {
      v8 = Pool;
      do
      {
        if ( *v8 )
        {
          ExFreePoolWithTag(*v8, 0x4D546152u);
          *v8 = 0LL;
        }
        ++v8;
        --v3;
      }
      while ( v3 );
    }
    ExFreePoolWithTag(Pool, 0x4D546152u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
