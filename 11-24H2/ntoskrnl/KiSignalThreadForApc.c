/*
 * XREFs of KiSignalThreadForApc @ 0x1402DD8B0
 * Callers:
 *     KiInsertDeferredPreemptionApc @ 0x1402DB968 (KiInsertDeferredPreemptionApc.c)
 *     KiResumeThread @ 0x1402DD2DC (KiResumeThread.c)
 *     KiSuspendThread @ 0x1402DE060 (KiSuspendThread.c)
 *     KiSchedulerApc @ 0x1402E00D0 (KiSchedulerApc.c)
 *     KiQueueTebUpdateApc @ 0x1403A05FC (KiQueueTebUpdateApc.c)
 *     KeRequestTerminationThread @ 0x1404750A8 (KeRequestTerminationThread.c)
 *     KeTryToInsertQueueApc @ 0x1404C67E8 (KeTryToInsertQueueApc.c)
 *     KiRequestSchedulerApcThread @ 0x1405C0614 (KiRequestSchedulerApcThread.c)
 * Callees:
 *     KiRemovePrcbWaitEntry @ 0x1402C5A30 (KiRemovePrcbWaitEntry.c)
 *     HalpInterruptSendIpi @ 0x1402C8970 (HalpInterruptSendIpi.c)
 *     HalpDisableInterrupts @ 0x1402C9320 (HalpDisableInterrupts.c)
 *     KiSignalThread @ 0x1402CCDD0 (KiSignalThread.c)
 *     KiRequestSoftwareInterrupt @ 0x1402DC510 (KiRequestSoftwareInterrupt.c)
 */

void __fastcall KiSignalThreadForApc(__int64 a1, __int64 a2, char a3, char a4)
{
  __int64 v4; // rbx
  char v6; // cl
  char v7; // al
  int v8; // eax
  __int64 v9; // rdx
  char v10; // al
  __int64 v11; // rcx
  bool v12; // al
  __int64 v13; // r8
  int v14; // edx
  bool v15; // r9
  __int64 v16; // rax
  char v17; // cl
  struct _KPRCB *CurrentPrcb; // rax
  signed __int32 v19[8]; // [rsp+0h] [rbp-48h] BYREF
  _BYTE v20[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(a2 + 8);
  v6 = *(_BYTE *)(a2 + 81);
  if ( *(char *)(a2 + 80) == *(unsigned __int8 *)(v4 + 586) )
  {
    if ( v4 == *(_QWORD *)(a1 + 8) )
    {
      if ( !v6 && (!*(_DWORD *)(v4 + 484) || !*(_QWORD *)(a2 + 48) && !HIWORD(*(_DWORD *)(v4 + 484))) )
      {
        *(_BYTE *)(v4 + 193) = 1;
        if ( a3 )
        {
          *(_OWORD *)&v20[4] = 0LL;
          if ( KiAmdTprLowerInterruptDelayDynamicWorkaround )
          {
            v12 = HalpDisableInterrupts();
            v14 = *(_DWORD *)(v13 + 168);
            v15 = v12;
            *(_DWORD *)(v13 + 168) = v14 | 2;
            if ( !v14 )
              __writemsr(0xC0010015, __readmsr(0xC0010015) | 0x100000000LL);
            if ( v15 )
              _enable();
          }
          *(_DWORD *)v20 = 5;
          HalpInterruptSendIpi((unsigned int *)v20, 0x1Fu);
        }
        else
        {
          *(_DWORD *)(v4 + 116) |= 0x40u;
        }
      }
    }
    else if ( v6 )
    {
      if ( (a4 & 1) == 0 && *(_BYTE *)(v4 + 388) == 5 && *(_BYTE *)(v4 + 391) == 1 )
      {
        v17 = *(_BYTE *)(v4 + 112);
        if ( (v17 & 7) != 4
          && (v17 & 7) != 3
          && ((*(_DWORD *)(v4 + 116) & 0x10) != 0 || (*(_BYTE *)(v4 + 194) & 2) != 0) )
        {
          *(_BYTE *)(v4 + 112) = v17 | 0x40;
          if ( KiSignalThread(a1, v4, 192LL, 0LL) )
            *(_BYTE *)(v4 + 194) |= 2u;
        }
      }
    }
    else
    {
      *(_BYTE *)(v4 + 193) = 1;
      _InterlockedOr(v19, 0);
      v7 = *(_BYTE *)(v4 + 388);
      if ( v7 == 2 )
      {
        if ( KeGetPcr()->Prcb.Number == (*(_DWORD *)(v4 + 536) & 0x7FFFFFFF) )
        {
          KiRequestSoftwareInterrupt(0LL, 1);
        }
        else
        {
          CurrentPrcb = KeGetCurrentPrcb();
          *(_DWORD *)&v20[8] = *(_DWORD *)(v4 + 536) & 0x7FFFFFFF;
          *(_QWORD *)v20 = 6LL;
          ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
          *(_QWORD *)&v20[12] = 0LL;
          HalpInterruptSendIpi((unsigned int *)v20, 0x1Fu);
        }
      }
      else if ( (a4 & 1) == 0
             && v7 == 5
             && !*(_BYTE *)(v4 + 390)
             && !*(_WORD *)(v4 + 486)
             && (!*(_QWORD *)(a2 + 48) || !*(_WORD *)(v4 + 484) && !*(_BYTE *)(v4 + 192)) )
      {
        v8 = *(_BYTE *)(v4 + 112) & 7;
        if ( v8 == 1 || v8 == 4 )
        {
          v9 = *(_QWORD *)(v4 + 232);
          if ( v9 )
          {
            if ( (*(_BYTE *)v9 & 0x7F) == 0x15 )
            {
              v16 = (unsigned __int8)*(_DWORD *)(v4 + 540);
              *(_DWORD *)(v4 + 540) = v16;
              _InterlockedIncrement((volatile signed __int32 *)(v9 + 4 * v16 + 536));
            }
            else
            {
              _InterlockedIncrement((volatile signed __int32 *)(v9 + 40));
            }
          }
          KiRemovePrcbWaitEntry((_QWORD *)v4);
          v10 = *(_BYTE *)(v4 + 388);
          if ( v10 == 1 )
          {
            *(_DWORD *)(v4 + 116) |= 2u;
          }
          else if ( v10 == 5 )
          {
            v11 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v4 + 436));
            if ( *(_BYTE *)(v4 + 391) )
              *(_QWORD *)(v4 + 1000) += v11;
            else
              *(_QWORD *)(v4 + 992) += v11;
          }
          *(_BYTE *)(v4 + 388) = 7;
          *(_QWORD *)(v4 + 216) = *(_QWORD *)(a1 + 11528);
          *(_QWORD *)(a1 + 11528) = v4 + 216;
          *(_QWORD *)(v4 + 200) = 256LL;
          *(_QWORD *)(v4 + 976) = 0LL;
        }
        *(_BYTE *)(v4 + 112) |= 0x20u;
      }
    }
  }
}
