/*
 * XREFs of SdbpReleaseSearchDBContext @ 0x140AB0898
 * Callers:
 *     SdbpCheckKObject @ 0x14082BD7C (SdbpCheckKObject.c)
 *     SdbGetDatabaseMatch @ 0x140A75B28 (SdbGetDatabaseMatch.c)
 * Callees:
 *     SdbpFreeAppAttributes @ 0x1407F4928 (SdbpFreeAppAttributes.c)
 *     AslHashFree @ 0x1407FBC70 (AslHashFree.c)
 *     AslFree @ 0x14082AD34 (AslFree.c)
 */

void __fastcall SdbpReleaseSearchDBContext(__int64 a1)
{
  void *v1; // rdx
  _QWORD *v2; // rbx
  void *v3; // rdx
  _DWORD *v4; // rdx
  __int64 i; // rsi
  __int64 v6; // rdi
  __int64 v7; // rcx
  void *v8; // rdx
  void *v9; // rdx
  void *v10; // rdx
  void *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx

  if ( a1 )
  {
    v1 = *(void **)(a1 + 24);
    v2 = (_QWORD *)a1;
    if ( v1 )
    {
      AslFree(a1, v1);
      v2[3] = 0LL;
    }
    v3 = (void *)v2[8];
    if ( v3 )
    {
      AslFree(a1, v3);
      v2[8] = 0LL;
    }
    v4 = (_DWORD *)v2[9];
    if ( v4 )
    {
      for ( i = 0LL; (unsigned int)i < *v4; i = (unsigned int)(i + 1) )
      {
        a1 = 48 * i;
        v6 = (__int64)&v4[12 * i + 2];
        if ( v6 )
        {
          v7 = *(_QWORD *)(v6 + 16);
          if ( v7 )
          {
            AslHashFree(v7);
            *(_QWORD *)(v6 + 16) = 0LL;
          }
          a1 = *(_QWORD *)(v6 + 24);
          if ( a1 )
          {
            AslHashFree(a1);
            *(_QWORD *)(v6 + 24) = 0LL;
          }
          v8 = *(void **)(v6 + 40);
          if ( v8 )
          {
            AslFree(a1, v8);
            *(_OWORD *)(v6 + 32) = 0LL;
          }
        }
        v4 = (_DWORD *)v2[9];
      }
      AslFree(a1, v4);
      v2[9] = 0LL;
    }
    v9 = (void *)v2[4];
    if ( v9 )
    {
      AslFree(a1, v9);
      v2[4] = 0LL;
    }
    v10 = (void *)v2[5];
    if ( v10 )
    {
      AslFree(a1, v10);
      v2[5] = 0LL;
    }
    v11 = (void *)v2[6];
    if ( v11 )
    {
      AslFree(a1, v11);
      v2[6] = 0LL;
    }
    v12 = v2[11];
    if ( v12 )
    {
      SdbpFreeAppAttributes(v12);
      v2[11] = 0LL;
    }
    v13 = v2[12];
    if ( v13 )
    {
      SdbpFreeAppAttributes(v13);
      v2[12] = 0LL;
    }
  }
}
