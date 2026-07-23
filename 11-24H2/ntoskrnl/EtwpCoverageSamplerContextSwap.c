/*
 * XREFs of EtwpCoverageSamplerContextSwap @ 0x140650808
 * Callers:
 *     KiSwapThread @ 0x1402D60C0 (KiSwapThread.c)
 *     EtwTraceContextSwap @ 0x140415C40 (EtwTraceContextSwap.c)
 * Callees:
 *     EtwpCovSampCaptureSample @ 0x140650444 (EtwpCovSampCaptureSample.c)
 */

void __fastcall EtwpCoverageSamplerContextSwap(_KTHREAD *a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // r9
  unsigned int v3; // ecx
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rax
  unsigned __int64 v7; // r11
  int v8; // edi
  int v9; // r9d
  int v10; // ebx
  int v11; // r9d
  int v12; // eax
  unsigned int v13; // r10d
  int v14; // r10d
  unsigned int v15; // eax
  int v16; // edx
  volatile signed __int32 *v17; // rcx

  if ( a1 && a1 != *(_KTHREAD **)qword_140EFEFA8 && a1 != KeGetCurrentPrcb()->IdleThread )
  {
    v1 = *(_QWORD *)(qword_140EFEFA8 + 8);
    v2 = (unsigned int)v1;
    LODWORD(v1) = ((unsigned int)v1 >> 13) & 0x3FFFF;
    _BitScanReverse(&v3, v1);
    v4 = (v2 >> 4) & 0x1FF;
    v5 = (unsigned int)v1 ^ (1 << v3);
    v6 = *((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v3 - 2);
    v7 = (*(_QWORD *)(v6 + 8 * v5 + 8) + 8 * v4 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
    v8 = *(_DWORD *)(v7 + 0xB8);
    if ( !v8 )
    {
LABEL_16:
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 324));
      EtwpCovSampCaptureSample(0LL, 0x50000004u);
      return;
    }
    v9 = *(_DWORD *)(((*(_QWORD *)(v6 + 8 * v5 + 8) + 8 * v4 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 0xCC);
    v10 = MEMORY[0xFFFFF78000000320];
    if ( (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v7 + 188)) <= *(_DWORD *)(v7 + 192) )
    {
      v14 = *(_DWORD *)(v7 + 216);
      v17 = (volatile signed __int32 *)(v7 + 208);
    }
    else
    {
      *(_DWORD *)(v7 + 188) = MEMORY[0xFFFFF78000000320];
      v11 = v8 + v9;
      v12 = *(_DWORD *)(v7 + 196);
      if ( v11 <= v12 )
        v12 = v11;
      *(_DWORD *)(v7 + 204) = v12;
      v9 = v12;
      v13 = (unsigned int)(*(_DWORD *)(v7 + 212) + *(_DWORD *)(v7 + 200)) >> 1;
      *(_DWORD *)(v7 + 212) = v13;
      *(_DWORD *)(v7 + 200) = 0;
      if ( v13 >= 2 * v8 )
      {
        v15 = v13 / (v8 + 1);
        *(_DWORD *)(v7 + 216) = v15;
        v14 = v15;
        v16 = 16777619 * (v10 ^ *(_DWORD *)(v7 + 220));
        *(_DWORD *)(v7 + 220) = v16;
        *(_DWORD *)(v7 + 208) = v16 & (2 * v15);
      }
      else
      {
        v14 = 1;
        *(_DWORD *)(v7 + 216) = 1;
        *(_DWORD *)(v7 + 208) = 1;
      }
      v17 = (volatile signed __int32 *)(v7 + 208);
    }
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 200));
    if ( v9 > 0 && _InterlockedExchangeAdd(v17, 0xFFFFFFFF) <= 1 )
    {
      *(_DWORD *)(v7 + 204) = v9 - 1;
      *(_DWORD *)(v7 + 208) = v14;
      goto LABEL_16;
    }
  }
}
