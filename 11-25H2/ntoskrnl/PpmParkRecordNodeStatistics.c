/*
 * XREFs of PpmParkRecordNodeStatistics @ 0x1403B1824
 * Callers:
 *     PpmCheckRecordAllUtility @ 0x1403B0FA0 (PpmCheckRecordAllUtility.c)
 * Callees:
 *     PpmPerfRecordMostActiveWorkloadClass @ 0x1403B0CE4 (PpmPerfRecordMostActiveWorkloadClass.c)
 *     PpmEventParkNodeRecordedStats @ 0x1403B1B08 (PpmEventParkNodeRecordedStats.c)
 *     PpmParkComputeSnapStatistics @ 0x14043AA20 (PpmParkComputeSnapStatistics.c)
 *     PpmEventParkNodeClassRecordedStats @ 0x1404CC858 (PpmEventParkNodeClassRecordedStats.c)
 */

__int64 PpmParkRecordNodeStatistics()
{
  unsigned __int64 v0; // rdx
  __int64 result; // rax
  unsigned __int16 v2; // si
  int v3; // r13d
  __int64 v4; // rcx
  unsigned __int8 v5; // r14
  unsigned __int8 v6; // bp
  __int64 v7; // rbx
  unsigned __int64 v8; // r11
  __int64 v9; // r8
  int j; // edi
  __int64 v11; // r9
  unsigned __int64 v12; // rdx
  int v13; // ecx
  unsigned __int64 v14; // rdx
  int v15; // ecx
  unsigned __int64 v16; // rax
  int v17; // ecx
  unsigned __int64 v18; // r9
  __int64 v19; // rax
  unsigned __int8 v20; // di
  __int64 v21; // rcx
  char *v22; // r14
  char *v23; // r15
  __int64 v24; // r12
  _BYTE *v25; // rbp
  int v26; // r8d
  int v27; // r9d
  unsigned __int8 i; // [rsp+80h] [rbp+8h]
  unsigned __int8 v29; // [rsp+88h] [rbp+10h]
  unsigned __int16 v30; // [rsp+90h] [rbp+18h]

  LODWORD(v0) = PpmCurrentProfile[0];
  result = dword_140F0B70C;
  v2 = 0;
  v3 = PpmCheckMakeupCount;
  v4 = 61LL * dword_140F0B70C;
  v30 = 0;
  v5 = BYTE5(PpmCurrentProfile[0][v4 + 22]);
  v6 = HIBYTE(PpmCurrentProfile[0][v4 + 22]);
  v29 = v5;
  for ( i = v6; v2 < (unsigned int)PpmParkNumNodes; v30 = v2 )
  {
    v7 = PpmParkNodes + 208LL * v2;
    v8 = *(_QWORD *)(v7 + 80) - *(_QWORD *)(v7 + 88);
    if ( v3 )
    {
      v0 = v8 % (unsigned int)(v3 + 1);
      v8 /= (unsigned int)(v3 + 1);
    }
    if ( v8 )
    {
      LODWORD(v9) = *(_DWORD *)(v7 + 104);
      for ( j = 0; j < (int)v9; LODWORD(v9) = *(_DWORD *)(v7 + 104) )
      {
        v11 = j++;
        *(_QWORD *)(*(_QWORD *)(v7 + 72) + 8 * v11) = *(_QWORD *)(*(_QWORD *)(v7 + 56) + 8 * v11)
                                                    - *(_QWORD *)(*(_QWORD *)(v7 + 64) + 8 * v11);
      }
      v12 = 0LL;
      v13 = v9 - 1;
      if ( (int)v9 - 1 >= 0 )
      {
        v9 = *(_QWORD *)(v7 + 72);
        do
        {
          v12 += *(_QWORD *)(v9 + 8LL * v13);
          if ( v12 >= v8 - v8 * v6 / 0x64 )
            break;
          --v13;
        }
        while ( v13 >= 0 );
      }
      *(_BYTE *)(v7 + 118) = v13;
      v14 = 0LL;
      v15 = *(_DWORD *)(v7 + 104) - 1;
      if ( v15 >= 0 )
      {
        v9 = *(_QWORD *)(v7 + 72);
        do
        {
          v14 += *(_QWORD *)(v9 + 8LL * v15);
          if ( v14 >= v8 - v8 * v5 / 0x64 )
            break;
          --v15;
        }
        while ( v15 >= 0 );
      }
      *(_BYTE *)(v7 + 116) = v15;
      if ( v15 <= 0 )
        LOBYTE(v16) = 0;
      else
        v16 = 100LL * *(_QWORD *)(*(_QWORD *)(v7 + 72) + 8LL * v15) / v8;
      *(_BYTE *)(v7 + 117) = v16;
      *(_QWORD *)(v7 + 88) += v8;
      v17 = *(_DWORD *)(v7 + 104);
      *(_QWORD *)(v7 + 96) = v8;
      while ( --v17 >= 0 )
      {
        v9 = *(_QWORD *)(v7 + 64);
        v18 = *(_QWORD *)(*(_QWORD *)(v7 + 72) + 8LL * v17);
        v19 = *(_QWORD *)(v9 + 8LL * v17);
        if ( v18 > v8 )
        {
          *(_QWORD *)(v9 + 8LL * v17) = v8 + v19;
          break;
        }
        *(_QWORD *)(v9 + 8LL * v17) = v18 + v19;
        v8 -= v18;
      }
      LOBYTE(v9) = *(_BYTE *)(v7 + 116);
      PpmEventParkNodeRecordedStats(
        *(unsigned __int16 *)(v7 + 4),
        *(_QWORD *)(v7 + 16),
        v9,
        v7 + 56,
        *(_BYTE *)(v7 + 118));
    }
    if ( *(_BYTE *)(v7 + 121) )
    {
      v20 = 0;
      if ( *(_BYTE *)(v7 + 11) )
      {
        do
        {
          LOBYTE(v0) = v29;
          v21 = *(_QWORD *)(v7 + 200) + 104LL * v20;
          v22 = (char *)(v21 + 96);
          v23 = (char *)(v21 + 98);
          v24 = v21 + 40;
          v25 = (_BYTE *)(v21 + 97);
          if ( (unsigned __int8)PpmParkComputeSnapStatistics(v3, v0, i, (int)v21 + 40, v21 + 97, v21 + 98, v21 + 96) )
          {
            LOBYTE(v26) = v20;
            LOBYTE(v27) = *v25;
            PpmEventParkNodeClassRecordedStats(
              *(unsigned __int16 *)(v7 + 4),
              *(_QWORD *)(v7 + 16),
              v26,
              v27,
              *v23,
              v24,
              *v22);
          }
          ++v20;
        }
        while ( v20 < *(_BYTE *)(v7 + 11) );
        v2 = v30;
        v6 = i;
        v5 = v29;
      }
    }
    PpmPerfRecordMostActiveWorkloadClass(v7);
    result = ++v2;
  }
  return result;
}
