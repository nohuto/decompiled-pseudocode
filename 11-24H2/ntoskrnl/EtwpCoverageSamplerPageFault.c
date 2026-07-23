/*
 * XREFs of EtwpCoverageSamplerPageFault @ 0x140650998
 * Callers:
 *     EtwTracePageFault @ 0x140260AD0 (EtwTracePageFault.c)
 * Callees:
 *     KeLeaveGuardedRegion @ 0x140362BA0 (KeLeaveGuardedRegion.c)
 *     EtwpCovSampCaptureSample @ 0x140650444 (EtwpCovSampCaptureSample.c)
 */

void __fastcall EtwpCoverageSamplerPageFault(unsigned __int64 a1, unsigned __int64 a2, char a3)
{
  __int64 v4; // rcx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v6; // r9
  unsigned int v7; // ecx
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // rdi
  int v12; // esi
  int v13; // r9d
  int v14; // r11d
  int v15; // r9d
  int v16; // eax
  unsigned int v17; // r10d
  int v18; // r10d
  unsigned int v19; // eax
  int v20; // edx
  volatile signed __int32 *v21; // rcx

  if ( a3 )
  {
    v4 = qword_140EFEFA8;
    if ( a1 - 1 <= 0xFFFF7FFFFFFFFFFEuLL && a2 < 0xFFFF800000000000uLL )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      v6 = (unsigned int)*(_QWORD *)(v4 + 8);
      LODWORD(CurrentThread) = ((unsigned int)v6 >> 13) & 0x3FFFF;
      _BitScanReverse(&v7, (unsigned int)CurrentThread);
      v8 = (v6 >> 4) & 0x1FF;
      v9 = (unsigned int)CurrentThread ^ (1 << v7);
      v10 = *((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v7 - 2);
      v11 = (*(_QWORD *)(v10 + 8 * v9 + 8) + 8 * v8 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
      v12 = *(_DWORD *)(v11 + 0x108);
      if ( v12 )
      {
        v13 = *(_DWORD *)(((*(_QWORD *)(v10 + 8 * v9 + 8) + 8 * v8 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 0x11C);
        v14 = MEMORY[0xFFFFF78000000320];
        if ( (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v11 + 268)) <= *(_DWORD *)(v11 + 272) )
        {
          v18 = *(_DWORD *)(v11 + 296);
          v21 = (volatile signed __int32 *)(v11 + 288);
        }
        else
        {
          *(_DWORD *)(v11 + 268) = MEMORY[0xFFFFF78000000320];
          v15 = v12 + v13;
          v16 = *(_DWORD *)(v11 + 276);
          if ( v15 <= v16 )
            v16 = v15;
          *(_DWORD *)(v11 + 284) = v16;
          v13 = v16;
          v17 = (unsigned int)(*(_DWORD *)(v11 + 292) + *(_DWORD *)(v11 + 280)) >> 1;
          *(_DWORD *)(v11 + 292) = v17;
          *(_DWORD *)(v11 + 280) = 0;
          if ( v17 >= 2 * v12 )
          {
            v19 = v17 / (v12 + 1);
            *(_DWORD *)(v11 + 296) = v19;
            v18 = v19;
            v20 = 16777619 * (v14 ^ *(_DWORD *)(v11 + 300));
            *(_DWORD *)(v11 + 300) = v20;
            *(_DWORD *)(v11 + 288) = v20 & (2 * v19);
          }
          else
          {
            v18 = 1;
            *(_DWORD *)(v11 + 296) = 1;
            *(_DWORD *)(v11 + 288) = 1;
          }
          v21 = (volatile signed __int32 *)(v11 + 288);
        }
        _InterlockedIncrement((volatile signed __int32 *)(v11 + 280));
        if ( v13 <= 0 || _InterlockedDecrement(v21) > 0 )
        {
          KeLeaveGuardedRegion();
          return;
        }
        *(_DWORD *)(v11 + 284) = v13 - 1;
        *(_DWORD *)(v11 + 288) = v18;
      }
      KeLeaveGuardedRegion();
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 332));
      EtwpCovSampCaptureSample(a1, 0x50000010u);
    }
  }
}
