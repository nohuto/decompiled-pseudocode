/*
 * XREFs of PpmParkComputeSnapStatistics @ 0x14042A6D0
 * Callers:
 *     PpmParkRecordNodeStatistics @ 0x140401FC4 (PpmParkRecordNodeStatistics.c)
 * Callees:
 *     <none>
 */

char __fastcall PpmParkComputeSnapStatistics(
        int a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        __int64 a4,
        _WORD *a5,
        _BYTE *a6,
        _WORD *a7)
{
  unsigned __int64 v8; // r11
  __int64 v9; // rsi
  __int64 v10; // rbp
  int v11; // r8d
  unsigned __int64 v12; // r10
  int i; // edi
  __int64 v14; // rax
  int v15; // edx
  unsigned __int64 j; // rcx
  int k; // ecx
  unsigned __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // r9
  __int64 v21; // rdx
  unsigned __int64 v22; // r8
  __int64 v23; // rcx

  v8 = *(_QWORD *)(a4 + 24) - *(_QWORD *)(a4 + 32);
  v9 = a3;
  v10 = a2;
  if ( a1 )
    v8 /= (unsigned int)(a1 + 1);
  if ( !v8 )
    return 0;
  v11 = *(_DWORD *)(a4 + 48);
  v12 = 0LL;
  for ( i = 0; i < v11; v11 = *(_DWORD *)(a4 + 48) )
  {
    v14 = i++;
    *(_QWORD *)(8 * v14 + *(_QWORD *)(a4 + 16)) = *(_QWORD *)(*(_QWORD *)a4 + 8 * v14)
                                                - *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8 * v14);
  }
  v15 = v11 - 1;
  for ( j = 0LL; v15 >= 0; --v15 )
  {
    j += *(_QWORD *)(*(_QWORD *)(a4 + 16) + 8LL * v15);
    if ( j >= v8 - v8 * v9 / 0x64 )
      break;
  }
  *a7 = v15;
  for ( k = *(_DWORD *)(a4 + 48) - 1; k >= 0; --k )
  {
    v12 += *(_QWORD *)(*(_QWORD *)(a4 + 16) + 8LL * k);
    if ( v12 >= v8 - v8 * v10 / 0x64 )
      break;
  }
  *a5 = k;
  if ( k <= 0 )
    LOBYTE(v18) = 0;
  else
    v18 = 100LL * *(_QWORD *)(*(_QWORD *)(a4 + 16) + 8LL * k) / v8;
  *a6 = v18;
  *(_QWORD *)(a4 + 32) += v8;
  v19 = *(_DWORD *)(a4 + 48);
  *(_QWORD *)(a4 + 40) = v8;
  while ( --v19 >= 0 )
  {
    v20 = *(_QWORD *)(a4 + 8);
    v21 = 8LL * v19;
    v22 = *(_QWORD *)(v21 + *(_QWORD *)(a4 + 16));
    v23 = *(_QWORD *)(v20 + v21);
    if ( v22 > v8 )
    {
      *(_QWORD *)(v20 + 8LL * v19) = v8 + v23;
      return 1;
    }
    *(_QWORD *)(v20 + 8LL * v19) = v22 + v23;
    v8 -= v22;
  }
  return 1;
}
