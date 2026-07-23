/*
 * XREFs of KsepValidateShimProviderAndData @ 0x14073D200
 * Callers:
 *     KseRegisterShimEx @ 0x14073CB20 (KseRegisterShimEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KsepValidateShimProviderAndData(unsigned __int64 a1, unsigned int *a2, __int64 a3)
{
  unsigned int i; // r9d
  __int64 v4; // r10
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  __int64 v7; // r10
  __int64 v8; // rax
  int v9; // edx
  __int64 v10; // r9
  __int64 v11; // rax
  int v12; // r8d
  unsigned __int64 v13; // rcx

  if ( a1 && a3 && a2 )
  {
    for ( i = 0; i < *a2; ++i )
    {
      v4 = 74LL * i;
      v5 = *(_QWORD *)&a2[v4 + 6];
      if ( a1 >= v5 )
      {
        v6 = v5 + a2[v4 + 8];
        if ( a1 < v6 )
        {
          v7 = *(_QWORD *)(a3 + 48);
          v8 = v7;
          if ( !v7 )
            return 0LL;
          v9 = 0;
          while ( v8 && *(_DWORD *)v8 != 4 )
          {
            v10 = *(_QWORD *)(v8 + 16);
            v11 = v10;
            if ( !v10 )
              return 0LL;
            v12 = 0;
            while ( v11 && *(_DWORD *)v11 != 2 )
            {
              v13 = *(_QWORD *)(v11 + 16);
              if ( !v13 || v13 < v5 && v13 >= v6 )
                return 0LL;
              v11 = v10 + 32LL * (unsigned int)++v12;
            }
            v8 = v7 + 24LL * (unsigned int)++v9;
          }
          return 1LL;
        }
      }
    }
  }
  return 0LL;
}
