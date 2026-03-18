/*
 * XREFs of KiSignalThreadForApc @ 0x140296870
 * Callers:
 *     KiSchedulerApc @ 0x140295D20 (KiSchedulerApc.c)
 *     KiResumeThread @ 0x14029646C (KiResumeThread.c)
 *     KiInsertDeferredPreemptionApc @ 0x14030C908 (KiInsertDeferredPreemptionApc.c)
 *     KiSuspendThread @ 0x140338B00 (KiSuspendThread.c)
 *     KiQueueTebUpdateApc @ 0x1403B1DEC (KiQueueTebUpdateApc.c)
 *     KeRequestTerminationThread @ 0x140479818 (KeRequestTerminationThread.c)
 *     KeTryToInsertQueueApc @ 0x1404CD418 (KeTryToInsertQueueApc.c)
 *     KiRequestSchedulerApcThread @ 0x1405C3044 (KiRequestSchedulerApcThread.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x140297BA0 (KiRequestSoftwareInterrupt.c)
 *     KiRemovePrcbWaitEntry @ 0x14031CEA0 (KiRemovePrcbWaitEntry.c)
 *     HalpInterruptSendIpi @ 0x14031FDE0 (HalpInterruptSendIpi.c)
 *     HalpDisableInterrupts @ 0x140320790 (HalpDisableInterrupts.c)
 *     KiSignalThread @ 0x140324240 (KiSignalThread.c)
 */

char __fastcall KiSignalThreadForApc(__int64 a1, __int64 a2, char a3, char a4)
{
  __int64 v4; // rbx
  __int64 v6; // rax
  char v7; // cl
  __int64 v8; // rdx
  char v9; // al
  __int64 v10; // rcx
  char v11; // al
  __int64 v12; // r8
  int v13; // edx
  char v14; // r9
  __int64 v15; // rax
  char v16; // cl
  struct _KPRCB *CurrentPrcb; // rax
  signed __int32 v19[8]; // [rsp+0h] [rbp-48h] BYREF
  _BYTE v20[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(a2 + 8);
  LODWORD(v6) = *(char *)(a2 + 80);
  v7 = *(_BYTE *)(a2 + 81);
  if ( (_DWORD)v6 == *(unsigned __int8 *)(v4 + 586) )
  {
    if ( v4 == *(_QWORD *)(a1 + 8) )
    {
      if ( !v7 )
      {
        LODWORD(v6) = *(_DWORD *)(v4 + 484);
        if ( !(_DWORD)v6 || !*(_QWORD *)(a2 + 48) && !WORD1(v6) )
        {
          *(_BYTE *)(v4 + 193) = 1;
          if ( a3 )
          {
            *(_OWORD *)&v20[4] = 0LL;
            if ( KiAmdTprLowerInterruptDelayDynamicWorkaround )
            {
              v11 = HalpDisableInterrupts(WORD1(v6), a2, KeGetCurrentPrcb());
              v13 = *(_DWORD *)(v12 + 168);
              v14 = v11;
              *(_DWORD *)(v12 + 168) = v13 | 2;
              if ( !v13 )
                __writemsr(0xC0010015, __readmsr(0xC0010015) | 0x100000000LL);
              if ( v14 )
                _enable();
            }
            *(_DWORD *)v20 = 5;
            LOBYTE(v6) = HalpInterruptSendIpi(v20, 31LL);
          }
          else
          {
            *(_DWORD *)(v4 + 116) |= 0x40u;
          }
        }
      }
    }
    else if ( v7 )
    {
      if ( (a4 & 1) == 0 )
      {
        LOBYTE(v6) = *(_BYTE *)(v4 + 388);
        if ( (_BYTE)v6 == 5 && *(_BYTE *)(v4 + 391) == 1 )
        {
          v16 = *(_BYTE *)(v4 + 112);
          LOBYTE(v6) = v16 & 7;
          if ( (v16 & 7) != 4 && (_BYTE)v6 != 3 )
          {
            LODWORD(v6) = *(_DWORD *)(v4 + 116);
            if ( (v6 & 0x10) != 0 || (*(_BYTE *)(v4 + 194) & 2) != 0 )
            {
              *(_BYTE *)(v4 + 112) = v16 | 0x40;
              LOBYTE(v6) = KiSignalThread(a1, v4, 192LL, 0LL);
              if ( (_BYTE)v6 )
                *(_BYTE *)(v4 + 194) |= 2u;
            }
          }
        }
      }
    }
    else
    {
      *(_BYTE *)(v4 + 193) = 1;
      _InterlockedOr(v19, 0);
      LOBYTE(v6) = *(_BYTE *)(v4 + 388);
      if ( (_BYTE)v6 == 2 )
      {
        if ( KeGetPcr()->Prcb.Number == (*(_DWORD *)(v4 + 536) & 0x7FFFFFFF) )
        {
          LOBYTE(a2) = 1;
          LOBYTE(v6) = KiRequestSoftwareInterrupt(0LL, a2);
        }
        else
        {
          CurrentPrcb = KeGetCurrentPrcb();
          *(_DWORD *)&v20[8] = *(_DWORD *)(v4 + 536) & 0x7FFFFFFF;
          *(_QWORD *)v20 = 6LL;
          ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
          *(_QWORD *)&v20[12] = 0LL;
          LOBYTE(v6) = HalpInterruptSendIpi(v20, 31LL);
        }
      }
      else if ( (a4 & 1) == 0
             && (_BYTE)v6 == 5
             && !*(_BYTE *)(v4 + 390)
             && !*(_WORD *)(v4 + 486)
             && (!*(_QWORD *)(a2 + 48) || !*(_WORD *)(v4 + 484) && !*(_BYTE *)(v4 + 192)) )
      {
        LODWORD(v6) = *(_BYTE *)(v4 + 112) & 7;
        if ( (_DWORD)v6 == 1 || (_DWORD)v6 == 4 )
        {
          v8 = *(_QWORD *)(v4 + 232);
          if ( v8 )
          {
            if ( (*(_BYTE *)v8 & 0x7F) == 0x15 )
            {
              v15 = (unsigned __int8)*(_DWORD *)(v4 + 540);
              *(_DWORD *)(v4 + 540) = v15;
              _InterlockedIncrement((volatile signed __int32 *)(v8 + 4 * v15 + 536));
            }
            else
            {
              _InterlockedIncrement((volatile signed __int32 *)(v8 + 40));
            }
          }
          KiRemovePrcbWaitEntry(v4);
          v9 = *(_BYTE *)(v4 + 388);
          if ( v9 == 1 )
          {
            *(_DWORD *)(v4 + 116) |= 2u;
          }
          else if ( v9 == 5 )
          {
            v10 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v4 + 436));
            if ( *(_BYTE *)(v4 + 391) )
              *(_QWORD *)(v4 + 1000) += v10;
            else
              *(_QWORD *)(v4 + 992) += v10;
          }
          *(_BYTE *)(v4 + 388) = 7;
          v6 = *(_QWORD *)(a1 + 11528);
          *(_QWORD *)(v4 + 216) = v6;
          *(_QWORD *)(a1 + 11528) = v4 + 216;
          *(_QWORD *)(v4 + 200) = 256LL;
          *(_QWORD *)(v4 + 976) = 0LL;
        }
        *(_BYTE *)(v4 + 112) |= 0x20u;
      }
    }
  }
  return v6;
}
