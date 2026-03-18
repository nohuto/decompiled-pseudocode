/*
 * XREFs of KiUpdateThreadHgsFeedback @ 0x14028C900
 * Callers:
 *     KiCaptureTotalCyclesCurrentThread @ 0x14028BCF0 (KiCaptureTotalCyclesCurrentThread.c)
 *     KiEndThreadCycleAccumulation @ 0x14028CBB0 (KiEndThreadCycleAccumulation.c)
 *     KiEndIdleCycleAccumulation @ 0x14028D760 (KiEndIdleCycleAccumulation.c)
 *     KiEndThreadAccountingPeriodEx @ 0x14028E2F0 (KiEndThreadAccountingPeriodEx.c)
 *     KeUpdateTotalCyclesCurrentThread @ 0x14028E760 (KeUpdateTotalCyclesCurrentThread.c)
 *     KiReduceByEffectiveIdleSmtSet @ 0x140318A40 (KiReduceByEffectiveIdleSmtSet.c)
 *     KiRetireDpcList @ 0x1403192F0 (KiRetireDpcList.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x14031AFA0 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiSwapThread @ 0x14031CEE0 (KiSwapThread.c)
 *     KeQueryTotalCycleTimeThread @ 0x1403E5570 (KeQueryTotalCycleTimeThread.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x1402F3D40 (KiRequestSoftwareInterrupt.c)
 *     EtwTraceThreadFeedbackRead @ 0x140642170 (EtwTraceThreadFeedbackRead.c)
 *     EtwTraceWorkloadClassUpdate @ 0x140642318 (EtwTraceWorkloadClassUpdate.c)
 */

void __fastcall KiUpdateThreadHgsFeedback(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rcx
  char v9; // al
  __int64 v10; // r8
  unsigned __int8 v11; // si
  unsigned __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned __int16 v18; // cx
  unsigned int v19; // eax
  unsigned int v20; // eax

  if ( KiHgsPlusEnabled && (!a2 || *(_UNKNOWN **)(a2 + 544) != &KiInitialProcess) )
  {
    v7 = a3 + *(_QWORD *)(a2 + 1080);
    *(_QWORD *)(a2 + 1080) = v7;
    v8 = __rdtsc() - *(_QWORD *)(a2 + 1072);
    if ( v8 > qword_140FC43C8 || a4 )
    {
      *(_QWORD *)(a2 + 1080) = 0LL;
      *(_QWORD *)(a2 + 1072) = __rdtsc();
      if ( v8 > qword_140FC43C8 && v7 > qword_140FC43D8 )
      {
        v9 = *(_BYTE *)(a1 + 141);
        v10 = 0LL;
        v11 = 0;
        LOBYTE(v12) = 0;
        if ( v9 == 2 )
        {
          v13 = __readmsr(0x17D2u);
          v11 = v13;
          v12 = (unsigned __int64)v13 >> 63;
        }
        else
        {
          if ( v9 != 1 )
          {
LABEL_12:
            if ( SBYTE4(xmmword_140FC5B10) < 0 )
              EtwTraceThreadFeedbackRead(a2, KeGetCurrentPrcb(), v10);
            if ( (_BYTE)v12 && v11 < (unsigned int)KiHgsPlusConfiguration )
            {
              v14 = *(unsigned __int8 *)(a2 + 517);
              *(_DWORD *)(a2 + 1088) = 0;
              if ( (_BYTE)v14 == v11 )
              {
                *(_QWORD *)(a2 + 1092) = 0LL;
                return;
              }
              v18 = *((_WORD *)&KiHgsPlusConfiguration + v14 + 38);
              v16 = *((unsigned __int16 *)&KiHgsPlusConfiguration + v11 + 38);
              if ( (unsigned __int16)v16 >= v18 )
              {
                *(_DWORD *)(a2 + 1092) = 0;
                if ( (unsigned __int16)v16 <= v18 )
                {
                  v17 = 2LL;
                }
                else
                {
                  v20 = *(_DWORD *)(a2 + 1096) + 1;
                  *(_DWORD *)(a2 + 1096) = v20;
                  if ( v20 < dword_140FC43F0 )
                    return;
                  v17 = 4LL;
                }
                *(_DWORD *)(a2 + 1096) = 0;
              }
              else
              {
                v19 = *(_DWORD *)(a2 + 1092) + 1;
                *(_QWORD *)(a2 + 1092) = v19;
                if ( v19 < dword_140FC43EC )
                  return;
                *(_DWORD *)(a2 + 1092) = 0;
                v17 = 8LL;
              }
              *(_BYTE *)(a2 + 517) = v11;
              if ( (WORD2(xmmword_140FC5B10) & 0x100) == 0 )
                goto LABEL_28;
              v16 = v11;
            }
            else
            {
              v15 = *(_DWORD *)(a2 + 1088) + 1;
              *(_DWORD *)(a2 + 1088) = v15;
              if ( v15 < dword_140FC43E0 )
                return;
              if ( dword_140FC43E8 )
              {
                *(_BYTE *)(a2 + 517) = dword_140FC43E4;
                v16 = (unsigned __int8)dword_140FC43E4;
              }
              else
              {
                v16 = (unsigned __int8)byte_140FC442C;
                *(_BYTE *)(a2 + 517) = byte_140FC442C;
              }
              *(_QWORD *)(a2 + 1092) = 0LL;
              *(_DWORD *)(a2 + 1088) = 0;
              if ( (WORD2(xmmword_140FC5B10) & 0x100) == 0 )
                goto LABEL_28;
              v17 = 16LL;
            }
            EtwTraceWorkloadClassUpdate(a2, v16, v17);
LABEL_28:
            if ( !a4 )
            {
              LOBYTE(v16) = 2;
              *(_BYTE *)(a1 + 14521) = 1;
              KiRequestSoftwareInterrupt(a1, v16);
            }
            return;
          }
          v13 = __readmsr(0xC0000501);
          v11 = v13 & 7;
          LOBYTE(v12) = v13 < 0;
        }
        v10 = v13;
        goto LABEL_12;
      }
    }
  }
}
