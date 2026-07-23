/*
 * XREFs of EtwpCoverageSamplerReadyThread @ 0x140650B74
 * Callers:
 *     EtwTraceReadyThread @ 0x1402C9340 (EtwTraceReadyThread.c)
 * Callees:
 *     EtwpCovSampCaptureSample @ 0x140650444 (EtwpCovSampCaptureSample.c)
 */

char __fastcall EtwpCoverageSamplerReadyThread(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v3; // rax
  unsigned __int64 v4; // r9
  unsigned int v5; // ecx
  __int64 v6; // r9
  __int64 v7; // rdx
  unsigned __int64 v8; // r11
  int v9; // edi
  int v10; // r9d
  int v11; // ebx
  int v12; // r9d
  int v13; // eax
  unsigned int v14; // r10d
  int v15; // r10d
  unsigned int v16; // eax
  int v17; // edx
  volatile signed __int32 *v18; // rcx
  bool v19; // cc

  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)qword_140EFEFA8 != CurrentThread && *(_QWORD *)qword_140EFEFA8 != a1 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentThread = KeGetCurrentThread();
    if ( CurrentThread != CurrentPrcb->IdleThread || CurrentPrcb->NestingLevel > 1u )
    {
      v3 = *(_QWORD *)(qword_140EFEFA8 + 8);
      v4 = (unsigned int)v3;
      LODWORD(v3) = ((unsigned int)v3 >> 13) & 0x3FFFF;
      _BitScanReverse(&v5, v3);
      v6 = (v4 >> 4) & 0x1FF;
      v7 = (unsigned int)v3 ^ (1 << v5);
      CurrentThread = (struct _KTHREAD *)*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v5 - 2);
      v8 = (*((_QWORD *)&CurrentThread->Header.WaitListHead.Flink + v7) + 8 * v6 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
      v9 = *(_DWORD *)(v8 + 0xE0);
      if ( !v9 )
      {
LABEL_17:
        _InterlockedAdd((volatile signed __int32 *)(v8 + 328), 1u);
        LOBYTE(CurrentThread) = EtwpCovSampCaptureSample(0LL, 0x30000008u);
        return (char)CurrentThread;
      }
      v10 = *(_DWORD *)(((*((_QWORD *)&CurrentThread->Header.WaitListHead.Flink + v7) + 8 * v6 + 15) & 0xFFFFFFFFFFFFFFF0uLL)
                      + 0xF4);
      v11 = MEMORY[0xFFFFF78000000320];
      LODWORD(CurrentThread) = MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v8 + 228);
      if ( (unsigned int)CurrentThread <= *(_DWORD *)(v8 + 232) )
      {
        v15 = *(_DWORD *)(v8 + 256);
        v18 = (volatile signed __int32 *)(v8 + 248);
      }
      else
      {
        *(_DWORD *)(v8 + 228) = MEMORY[0xFFFFF78000000320];
        v12 = v9 + v10;
        v13 = *(_DWORD *)(v8 + 236);
        if ( v12 <= v13 )
          v13 = v12;
        *(_DWORD *)(v8 + 244) = v13;
        v10 = v13;
        v14 = (unsigned int)(*(_DWORD *)(v8 + 252) + *(_DWORD *)(v8 + 240)) >> 1;
        *(_DWORD *)(v8 + 252) = v14;
        *(_DWORD *)(v8 + 240) = 0;
        if ( v14 >= 2 * v9 )
        {
          v16 = v14 / (v9 + 1);
          *(_DWORD *)(v8 + 256) = v16;
          v15 = v16;
          v17 = 16777619 * (v11 ^ *(_DWORD *)(v8 + 260));
          *(_DWORD *)(v8 + 260) = v17;
          *(_DWORD *)(v8 + 248) = v17 & (2 * v16);
        }
        else
        {
          *(_DWORD *)(v8 + 256) = 1;
          v15 = 1;
          *(_DWORD *)(v8 + 248) = 1;
        }
        LOBYTE(CurrentThread) = 24;
        v18 = (volatile signed __int32 *)(v8 + 248);
      }
      _InterlockedAdd((volatile signed __int32 *)(v8 + 240), 1u);
      if ( v10 > 0 )
      {
        LODWORD(CurrentThread) = _InterlockedExchangeAdd(v18, 0xFFFFFFFF);
        v19 = (int)CurrentThread <= 1;
        LOBYTE(CurrentThread) = (_BYTE)CurrentThread - 1;
        if ( v19 )
        {
          *(_DWORD *)(v8 + 244) = v10 - 1;
          *(_DWORD *)(v8 + 248) = v15;
          goto LABEL_17;
        }
      }
    }
  }
  return (char)CurrentThread;
}
