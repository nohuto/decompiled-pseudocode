/*
 * XREFs of InitializeNvmeIceKeyTable @ 0x140069764
 * Callers:
 *     AddNvmeIceInterfaceToList @ 0x140069104 (AddNvmeIceInterfaceToList.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 */

__int64 __fastcall InitializeNvmeIceKeyTable(unsigned int *a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rax
  __int64 Pool; // rax

  *((_BYTE *)a1 + 8) &= ~1u;
  v2 = 0;
  *a1 = a2;
  v4 = *a1;
  a1[6] = 0;
  a1[7] = 0;
  *((_QWORD *)a1 + 4) = 0LL;
  if ( (unsigned __int64)(72 * v4) > 0xFFFFFFFF )
    return 3221225621LL;
  Pool = RaidAllocatePool(64LL, (unsigned int)(72 * v4), 1917018450LL, 0LL);
  *((_QWORD *)a1 + 2) = Pool;
  if ( !Pool )
    return 3221225626LL;
  if ( *a1 )
  {
    do
    {
      *(_DWORD *)(*((_QWORD *)a1 + 2) + 72LL * v2) = v2;
      ++v2;
    }
    while ( v2 < *a1 );
  }
  return 0LL;
}
