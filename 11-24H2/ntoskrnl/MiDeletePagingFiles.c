/*
 * XREFs of MiDeletePagingFiles @ 0x1407EF674
 * Callers:
 *     MiDeletePartitionResources @ 0x1407FC4B4 (MiDeletePartitionResources.c)
 *     MiShutdownSystem @ 0x140B64244 (MiShutdownSystem.c)
 * Callees:
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     MiDeletePagefile @ 0x1407EF4C8 (MiDeletePagefile.c)
 */

__int64 __fastcall MiDeletePagingFiles(__int64 a1)
{
  unsigned int v1; // eax
  __int64 v2; // rdi
  __int64 v3; // rsi
  char **v5; // r14
  __int64 v6; // rbp
  char *v7; // rcx

  v1 = *(_DWORD *)(a1 + 18520);
  v2 = 0LL;
  v3 = 0LL;
  if ( v1 )
  {
    v5 = (char **)(a1 + 18528);
    v6 = v1;
    do
    {
      v7 = *v5;
      if ( *v5 )
      {
        if ( (v7[172] & 0x50) == 0 )
        {
          v3 += *(unsigned int *)v7;
          v2 += 2LL;
        }
        MiDeletePagefile(v7, 1);
      }
      ++v5;
      --v6;
    }
    while ( v6 );
  }
  *(_DWORD *)(a1 + 18520) = 0;
  if ( v2 )
    MiReturnCommit(a1, v2, 0);
  return v3;
}
