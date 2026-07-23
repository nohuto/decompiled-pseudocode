/*
 * XREFs of HalpCollectProfileCorruptionStatus @ 0x140542D74
 * Callers:
 *     HalpQueryProfileInformation @ 0x140AB79E4 (HalpQueryProfileInformation.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     HalpCollectSamplingProfileCorruptionStatus @ 0x14054323C (HalpCollectSamplingProfileCorruptionStatus.c)
 */

__int64 __fastcall HalpCollectProfileCorruptionStatus(unsigned int **a1, __int64 a2, unsigned int *a3)
{
  unsigned int v4; // r10d
  unsigned int *v6; // r8
  unsigned int v7; // edx
  __int64 v8; // rbp
  unsigned int v9; // eax
  _DWORD *v10; // rdi
  __int64 v11; // rsi
  unsigned int **v12; // rbx
  __int64 v13; // r9
  int v14; // ecx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v16; // rdx
  int v17; // ecx
  int v18; // ecx
  __int64 v19; // r8
  __int64 v20; // rcx
  bool v21; // al
  char v22; // al

  v4 = a2;
  if ( (unsigned int)a2 < 8 )
  {
    *a3 = 8;
    return 3221225476LL;
  }
  v6 = *a1;
  if ( *a1 == (unsigned int *)&HalpSampleProfilingCounters )
    return HalpCollectSamplingProfileCorruptionStatus(a1, a2, a3);
  v7 = v6[5];
  v8 = v6[4];
  v9 = 16 * v7 + 24;
  *a3 = v9;
  if ( v4 < v9 )
    return 3221225476LL;
  *((_DWORD *)a1 + 4) = v7;
  *((_DWORD *)a1 + 2) = v8;
  if ( v7 )
  {
    v10 = v6 + 10;
    v11 = v7;
    v12 = a1 + 4;
    do
    {
      v13 = (unsigned int)v10[3];
      v14 = v10[4];
      if ( (_DWORD)v13 == -1 )
      {
        *((_WORD *)v12 + 2) = 256;
        *(_DWORD *)v12 = *v10;
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
      }
      else
      {
        v16 = *(_QWORD *)(KiProcessorBlock[v8] + 88);
        if ( v14 )
        {
          v17 = v14 - 1;
          if ( v17 )
          {
            v18 = v17 - 99;
            if ( v18 )
            {
              if ( v18 == 1 )
                v16 += 72LL;
              else
                v16 = 0LL;
            }
            else
            {
              v16 += 48LL;
            }
          }
          else
          {
            v16 += 24LL;
          }
        }
        v19 = *(_QWORD *)(v16 + 16);
        v20 = v19 + 48 * v13;
        v21 = *(_DWORD *)(v20 + 24) == 1 && *(_DWORD *)(v20 + 36) == *v10;
        *((_BYTE *)v12 + 5) = v21;
        if ( !v21 )
          goto LABEL_28;
        *(_DWORD *)v12 = *(_DWORD *)(v20 + 36);
        v22 = *(_BYTE *)(v19 + 48 * v13 + 40);
        *((_BYTE *)v12 + 4) = v22;
        if ( !v22 )
        {
          *(v12 - 1) = 0LL;
          goto LABEL_28;
        }
        PerformanceCounter = *(LARGE_INTEGER *)(v19 + 48 * v13 + 8);
      }
      *(v12 - 1) = (unsigned int *)PerformanceCounter.QuadPart;
LABEL_28:
      v12 += 2;
      v10 += 10;
      --v11;
    }
    while ( v11 );
  }
  return 0LL;
}
