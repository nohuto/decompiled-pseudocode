/*
 * XREFs of EtwpCovSampProfileInterrupt @ 0x140650630
 * Callers:
 *     <none>
 * Callees:
 *     EtwpCovSampCaptureSample @ 0x140650444 (EtwpCovSampCaptureSample.c)
 */

char __fastcall EtwpCovSampProfileInterrupt(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // r8
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // r9
  unsigned int v7; // ecx
  __int64 v8; // r9
  __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  int v11; // edi
  int v12; // r9d
  int v13; // r11d
  int v14; // r9d
  int v15; // eax
  unsigned int v16; // r10d
  int v17; // r10d
  unsigned int v18; // eax
  int v19; // edx
  volatile signed __int32 *v20; // rcx
  bool v21; // cc
  unsigned __int64 v22; // rcx

  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread != CurrentPrcb->IdleThread || CurrentPrcb->NestingLevel > 1u )
  {
    v5 = *(_QWORD *)(a2 + 8);
    v6 = (unsigned int)v5;
    LODWORD(v5) = ((unsigned int)v5 >> 13) & 0x3FFFF;
    _BitScanReverse(&v7, v5);
    v8 = (v6 >> 4) & 0x1FF;
    v9 = (unsigned int)v5 ^ (1 << v7);
    CurrentThread = (struct _KTHREAD *)*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v7 - 2);
    v10 = (*((_QWORD *)&CurrentThread->Header.WaitListHead.Flink + v9) + 8 * v8 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
    v11 = *(_DWORD *)(v10 + 0x90);
    if ( !v11 )
    {
LABEL_15:
      v22 = *(_QWORD *)(a1 + 360);
      _InterlockedAdd((volatile signed __int32 *)(v10 + 320), 1u);
      LOBYTE(CurrentThread) = EtwpCovSampCaptureSample(v22, 0x50000002u);
      return (char)CurrentThread;
    }
    v12 = *(_DWORD *)(((*((_QWORD *)&CurrentThread->Header.WaitListHead.Flink + v9) + 8 * v8 + 15) & 0xFFFFFFFFFFFFFFF0uLL)
                    + 0xA4);
    v13 = MEMORY[0xFFFFF78000000320];
    LODWORD(CurrentThread) = MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v10 + 148);
    if ( (unsigned int)CurrentThread <= *(_DWORD *)(v10 + 152) )
    {
      v17 = *(_DWORD *)(v10 + 176);
      v20 = (volatile signed __int32 *)(v10 + 168);
    }
    else
    {
      *(_DWORD *)(v10 + 148) = MEMORY[0xFFFFF78000000320];
      v14 = v11 + v12;
      v15 = *(_DWORD *)(v10 + 156);
      if ( v14 <= v15 )
        v15 = v14;
      *(_DWORD *)(v10 + 164) = v15;
      v12 = v15;
      v16 = (unsigned int)(*(_DWORD *)(v10 + 172) + *(_DWORD *)(v10 + 160)) >> 1;
      *(_DWORD *)(v10 + 172) = v16;
      *(_DWORD *)(v10 + 160) = 0;
      if ( v16 >= 2 * v11 )
      {
        v18 = v16 / (v11 + 1);
        *(_DWORD *)(v10 + 176) = v18;
        v17 = v18;
        v19 = 16777619 * (v13 ^ *(_DWORD *)(v10 + 180));
        *(_DWORD *)(v10 + 180) = v19;
        *(_DWORD *)(v10 + 168) = v19 & (2 * v18);
      }
      else
      {
        *(_DWORD *)(v10 + 176) = 1;
        v17 = 1;
        *(_DWORD *)(v10 + 168) = 1;
      }
      LOBYTE(CurrentThread) = 24;
      v20 = (volatile signed __int32 *)(v10 + 168);
    }
    _InterlockedAdd((volatile signed __int32 *)(v10 + 160), 1u);
    if ( v12 > 0 )
    {
      LODWORD(CurrentThread) = _InterlockedExchangeAdd(v20, 0xFFFFFFFF);
      v21 = (int)CurrentThread <= 1;
      LOBYTE(CurrentThread) = (_BYTE)CurrentThread - 1;
      if ( v21 )
      {
        *(_DWORD *)(v10 + 164) = v12 - 1;
        *(_DWORD *)(v10 + 168) = v17;
        goto LABEL_15;
      }
    }
  }
  return (char)CurrentThread;
}
