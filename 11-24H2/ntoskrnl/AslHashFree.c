/*
 * XREFs of AslHashFree @ 0x14080BF20
 * Callers:
 *     SdbpReleaseSearchDBContext @ 0x1409412B8 (SdbpReleaseSearchDBContext.c)
 *     SdbCloseDatabaseRead @ 0x140943898 (SdbCloseDatabaseRead.c)
 * Callees:
 *     AslFree @ 0x1409447E4 (AslFree.c)
 */

__int64 __fastcall AslHashFree(__int64 a1)
{
  int v2; // esi
  __int64 v3; // r14
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 result; // rax

  if ( a1 )
  {
    if ( *(_QWORD *)(a1 + 8) )
    {
      v2 = 0;
      if ( *(int *)a1 > 0 )
      {
        v3 = 0LL;
        do
        {
          v4 = *(_QWORD *)(v3 + *(_QWORD *)(a1 + 8));
          if ( v4 )
          {
            do
            {
              v5 = *(_QWORD *)(v4 + 16);
              AslFree(a1);
              v4 = v5;
            }
            while ( v5 );
          }
          ++v2;
          v3 += 8LL;
        }
        while ( v2 < *(_DWORD *)a1 );
      }
      AslFree(a1);
    }
    return AslFree(a1);
  }
  return result;
}
