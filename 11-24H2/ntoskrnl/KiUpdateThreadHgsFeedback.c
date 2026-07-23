/*
 * XREFs of KiUpdateThreadHgsFeedback @ 0x14036CDAC
 * Callers:
 *     KiRetireDpcList @ 0x1402824C0 (KiRetireDpcList.c)
 *     KeUpdateTotalCyclesCurrentThread @ 0x1403693A0 (KeUpdateTotalCyclesCurrentThread.c)
 *     KiReduceByEffectiveIdleSmtSet @ 0x140369BE0 (KiReduceByEffectiveIdleSmtSet.c)
 *     KiEndThreadAccountingPeriodEx @ 0x14036A690 (KiEndThreadAccountingPeriodEx.c)
 *     KiEndIdleCycleAccumulation @ 0x14036AA80 (KiEndIdleCycleAccumulation.c)
 *     KiEndThreadCycleAccumulation @ 0x14036B600 (KiEndThreadCycleAccumulation.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x14036C1B0 (KiCaptureTotalCyclesCurrentThread.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x14036D540 (KiUpdateTotalCyclesCurrentThread.c)
 *     KeQueryTotalCycleTimeThread @ 0x1403E03C0 (KeQueryTotalCycleTimeThread.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x1402DC510 (KiRequestSoftwareInterrupt.c)
 *     EtwTraceThreadFeedbackRead @ 0x14064C740 (EtwTraceThreadFeedbackRead.c)
 *     EtwTraceWorkloadClassUpdate @ 0x14064C8E8 (EtwTraceWorkloadClassUpdate.c)
 */

void __fastcall KiUpdateThreadHgsFeedback(struct _KPRCB *a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int8 CpuVendor; // al
  __int64 v12; // r8
  unsigned __int8 v13; // di
  unsigned __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned int v17; // eax
  __int64 v18; // r8
  unsigned __int16 v19; // cx
  unsigned int v20; // eax
  unsigned int v21; // eax

  if ( KiHgsPlusEnabled && (!a2 || *(_UNKNOWN **)(a2 + 544) != &KiInitialProcess) )
  {
    v7 = *(_QWORD *)(a2 + 1080) + a3;
    *(_QWORD *)(a2 + 1080) = v7;
    v8 = __rdtsc() - *(_QWORD *)(a2 + 1072);
    if ( v8 > qword_140FC53E8 || a4 )
    {
      v9 = __rdtsc();
      v10 = (unsigned __int64)HIDWORD(v9) << 32;
      *(_QWORD *)(a2 + 1080) = 0LL;
      *(_QWORD *)(a2 + 1072) = v9;
      if ( v8 > qword_140FC53E8 && v7 > qword_140FC53F8 )
      {
        CpuVendor = a1->CpuVendor;
        v12 = 0LL;
        v13 = 0;
        LOBYTE(v14) = 0;
        if ( CpuVendor == 2 )
        {
          v15 = __readmsr(0x17D2u);
          v10 = (unsigned __int64)HIDWORD(v15) << 32;
          v13 = v15;
          v14 = (unsigned __int64)v15 >> 63;
        }
        else
        {
          if ( CpuVendor != 1 )
          {
LABEL_12:
            if ( SBYTE4(xmmword_140FC6B50) < 0 )
              EtwTraceThreadFeedbackRead(a2, KeGetCurrentPrcb(), v12);
            if ( (_BYTE)v14 && v13 < (unsigned int)KiHgsPlusConfiguration )
            {
              v16 = *(unsigned __int8 *)(a2 + 517);
              *(_DWORD *)(a2 + 1088) = 0;
              if ( (_BYTE)v16 == v13 )
              {
                *(_QWORD *)(a2 + 1092) = 0LL;
                return;
              }
              v19 = *((_WORD *)&KiHgsPlusConfiguration + v16 + 38);
              v10 = *((unsigned __int16 *)&KiHgsPlusConfiguration + v13 + 38);
              if ( (unsigned __int16)v10 >= v19 )
              {
                *(_DWORD *)(a2 + 1092) = 0;
                if ( (unsigned __int16)v10 <= v19 )
                {
                  v18 = 2LL;
                }
                else
                {
                  v21 = *(_DWORD *)(a2 + 1096) + 1;
                  *(_DWORD *)(a2 + 1096) = v21;
                  if ( v21 < dword_140FC5410 )
                    return;
                  v18 = 4LL;
                }
                *(_DWORD *)(a2 + 1096) = 0;
              }
              else
              {
                v20 = *(_DWORD *)(a2 + 1092) + 1;
                *(_QWORD *)(a2 + 1092) = v20;
                if ( v20 < dword_140FC540C )
                  return;
                *(_DWORD *)(a2 + 1092) = 0;
                v18 = 8LL;
              }
              *(_BYTE *)(a2 + 517) = v13;
              if ( (WORD2(xmmword_140FC6B50) & 0x100) == 0 )
                goto LABEL_27;
              LOBYTE(v10) = v13;
            }
            else
            {
              v17 = *(_DWORD *)(a2 + 1088) + 1;
              *(_DWORD *)(a2 + 1088) = v17;
              if ( v17 < dword_140FC5400 )
                return;
              if ( dword_140FC5408 )
              {
                *(_BYTE *)(a2 + 517) = dword_140FC5404;
                LOBYTE(v10) = dword_140FC5404;
              }
              else
              {
                LOBYTE(v10) = byte_140FC544C;
                *(_BYTE *)(a2 + 517) = byte_140FC544C;
              }
              *(_QWORD *)(a2 + 1092) = 0LL;
              *(_DWORD *)(a2 + 1088) = 0;
              if ( (WORD2(xmmword_140FC6B50) & 0x100) == 0 )
                goto LABEL_27;
              v18 = 16LL;
            }
            EtwTraceWorkloadClassUpdate(a2, v10, v18);
LABEL_27:
            if ( !a4 )
            {
              a1->QuantumEnd = 1;
              KiRequestSoftwareInterrupt(a1, 2);
            }
            return;
          }
          v15 = __readmsr(0xC0000501);
          v10 = (unsigned __int64)HIDWORD(v15) << 32;
          v13 = v15 & 7;
          LOBYTE(v14) = v15 < 0;
        }
        v12 = v15;
        goto LABEL_12;
      }
    }
  }
}
