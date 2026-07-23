/*
 * XREFs of SdbpReleaseSearchDBContext @ 0x1409412B8
 * Callers:
 *     SdbGetDatabaseMatch @ 0x1409410B0 (SdbGetDatabaseMatch.c)
 *     SdbpCheckKObject @ 0x1409413E0 (SdbpCheckKObject.c)
 * Callees:
 *     SdbpFreeAppAttributes @ 0x140804CBC (SdbpFreeAppAttributes.c)
 *     AslHashFree @ 0x14080BF20 (AslHashFree.c)
 *     AslFree @ 0x1409447E4 (AslFree.c)
 */

void __fastcall SdbpReleaseSearchDBContext(__int64 a1)
{
  _QWORD *v1; // rbx
  _DWORD *v2; // rdx
  __int64 i; // rsi
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  if ( a1 )
  {
    v1 = (_QWORD *)a1;
    if ( *(_QWORD *)(a1 + 24) )
    {
      AslFree(a1);
      v1[3] = 0LL;
    }
    if ( v1[8] )
    {
      AslFree(a1);
      v1[8] = 0LL;
    }
    v2 = (_DWORD *)v1[9];
    if ( v2 )
    {
      for ( i = 0LL; (unsigned int)i < *v2; i = (unsigned int)(i + 1) )
      {
        a1 = 48 * i;
        v4 = (__int64)&v2[12 * i + 2];
        if ( v4 )
        {
          v5 = *(_QWORD *)(v4 + 16);
          if ( v5 )
          {
            AslHashFree(v5);
            *(_QWORD *)(v4 + 16) = 0LL;
          }
          a1 = *(_QWORD *)(v4 + 24);
          if ( a1 )
          {
            AslHashFree(a1);
            *(_QWORD *)(v4 + 24) = 0LL;
          }
          if ( *(_QWORD *)(v4 + 40) )
          {
            AslFree(a1);
            *(_OWORD *)(v4 + 32) = 0LL;
          }
        }
        v2 = (_DWORD *)v1[9];
      }
      AslFree(a1);
      v1[9] = 0LL;
    }
    if ( v1[4] )
    {
      AslFree(a1);
      v1[4] = 0LL;
    }
    if ( v1[5] )
    {
      AslFree(a1);
      v1[5] = 0LL;
    }
    if ( v1[6] )
    {
      AslFree(a1);
      v1[6] = 0LL;
    }
    v6 = v1[11];
    if ( v6 )
    {
      SdbpFreeAppAttributes(v6);
      v1[11] = 0LL;
    }
    v7 = v1[12];
    if ( v7 )
    {
      SdbpFreeAppAttributes(v7);
      v1[12] = 0LL;
    }
  }
}
