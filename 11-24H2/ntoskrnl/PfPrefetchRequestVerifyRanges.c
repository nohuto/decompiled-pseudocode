/*
 * XREFs of PfPrefetchRequestVerifyRanges @ 0x1409363A4
 * Callers:
 *     PfPrefetchRequestVerify @ 0x140934C2C (PfPrefetchRequestVerify.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfPrefetchRequestVerifyRanges(__int64 a1, _DWORD *a2, unsigned int *a3, int a4)
{
  unsigned int v4; // r10d
  unsigned int v6; // eax
  unsigned int v9; // r8d
  int v10; // r10d
  unsigned int v11; // ecx
  unsigned int v12; // eax
  __int64 v13; // rbx
  unsigned int v14; // r10d
  unsigned int v15; // r11d
  __int64 v16; // rbx
  unsigned __int64 v17; // rcx
  unsigned int i; // r8d
  unsigned __int64 v19; // r9
  __int64 v20; // rax

  v4 = *a3;
  v6 = a3[2];
  if ( *a3 )
  {
    if ( v6 )
    {
      if ( v4 > a2[8] )
      {
        return 22000LL;
      }
      else
      {
        v9 = a2[6];
        v10 = 16 * v4;
        if ( v6 >= v9 )
        {
          v11 = a2[7];
          if ( v6 < v11 || !v10 )
          {
            v12 = v10 + v6;
            if ( v12 >= v9 && v12 <= v11 && (v12 & 7) == 0 )
            {
              v13 = a3[2];
              v14 = 0;
              v15 = *a3;
              v16 = a1 + v13;
              v17 = 0LL;
              for ( i = 0; i < v15; ++i )
              {
                v19 = *(_QWORD *)(v16 + 16LL * i);
                if ( v19 < v17 )
                  return 24000LL;
                if ( ((a4 - 1) & (unsigned int)v19) != 0 )
                  return 24500LL;
                v20 = *(unsigned int *)(v16 + 16LL * i + 8);
                v17 = v19 + v20;
                if ( v19 + v20 < v19 )
                  return 24750LL;
                if ( !(_DWORD)v20 )
                  return 25000LL;
                if ( v14 + ((unsigned int)v20 >> 12) + 2 < v14 )
                  return 26000LL;
                v14 += ((unsigned int)v20 >> 12) + 2;
              }
              return 0LL;
            }
          }
        }
        return 23000LL;
      }
    }
    else
    {
      return 21000LL;
    }
  }
  else
  {
    if ( !v6 )
      return 0LL;
    return 20000LL;
  }
}
