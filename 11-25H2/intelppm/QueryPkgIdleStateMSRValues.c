/*
 * XREFs of QueryPkgIdleStateMSRValues @ 0x140002AC0
 * Callers:
 *     <none>
 * Callees:
 *     RefreshPkgIdleStateMSRValues @ 0x140002BB0 (RefreshPkgIdleStateMSRValues.c)
 */

__int64 __fastcall QueryPkgIdleStateMSRValues(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  __int64 v6; // rbx
  int refreshed; // r8d
  unsigned int v9; // r10d
  unsigned __int64 *v10; // r9
  unsigned __int64 v11; // r11
  unsigned __int64 v12; // rtt
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r11
  __int64 v15; // rax
  int v16; // ecx
  unsigned __int64 v17; // rax

  if ( a2 && *(_DWORD *)(a2 + 24) == 1 )
  {
    v6 = *(_QWORD *)(a2 + 48);
    refreshed = 0;
    *a3 = *(_DWORD *)(v6 + 24);
    if ( a4 )
    {
      refreshed = RefreshPkgIdleStateMSRValues(a1, 0LL, a2);
      if ( refreshed >= 0 )
      {
        v9 = 0;
        if ( *(_DWORD *)(v6 + 24) )
        {
          v10 = (unsigned __int64 *)(a4 + 16);
          do
          {
            *((_DWORD *)v10 - 4) = *(_DWORD *)(v6 + 40LL * v9 + 56);
            *(v10 - 1) = *(_QWORD *)(v6 + 8);
            v11 = *(_QWORD *)(v6 + 16);
            if ( v11 )
            {
              v12 = *(_QWORD *)(v6 + 40LL * v9 + 64);
              v13 = v12 / v11;
              v14 = 10000000 * (v12 % v11) / v11;
              v15 = 10000000 * v13;
              if ( is_mul_ok(v13, 0x989680uLL) )
              {
                v16 = 0;
              }
              else
              {
                v15 = -1LL;
                v16 = -1073741675;
              }
              v17 = v14 + v15;
              if ( v16 < 0 )
                v17 = 0LL;
            }
            else
            {
              v17 = 0LL;
            }
            *v10 = v17;
            ++v9;
            v10 += 3;
          }
          while ( v9 < *(_DWORD *)(v6 + 24) );
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)refreshed;
}
