/*
 * XREFs of ProcLibCapChange @ 0x140044B24
 * Callers:
 *     ProcLibOnD0StateChangeWorker @ 0x140004DE0 (ProcLibOnD0StateChangeWorker.c)
 *     PccCapWorker @ 0x14000F620 (PccCapWorker.c)
 *     AcpiTStateNotifyWorker @ 0x140033BF0 (AcpiTStateNotifyWorker.c)
 *     InitCpcStatesInternal @ 0x1400358D0 (InitCpcStatesInternal.c)
 *     PepUpdatePerformanceConstraintWorker @ 0x14003BEC0 (PepUpdatePerformanceConstraintWorker.c)
 *     ProcLibDeviceStart @ 0x1400408BC (ProcLibDeviceStart.c)
 *     AcpiPStateNotifyWorker @ 0x140044660 (AcpiPStateNotifyWorker.c)
 *     CpcGuaranteedNotifyWorker @ 0x140047164 (CpcGuaranteedNotifyWorker.c)
 * Callees:
 *     QueueCapTrace @ 0x140028340 (QueueCapTrace.c)
 */

BOOLEAN __fastcall ProcLibCapChange(__int64 a1, int a2, int a3, unsigned int a4)
{
  BOOLEAN result; // al
  __int64 v9; // rcx
  bool v10; // zf

  result = MEMORY[0xFFFFF78000000014];
  v9 = *(_QWORD *)(a1 + 744);
  if ( v9 )
  {
    if ( !a2 && !a3 && a4 == 100 )
    {
      result = MEMORY[0xFFFFF78000000014] - v9;
      *(_QWORD *)(a1 + 752) += MEMORY[0xFFFFF78000000014] - v9;
      *(_QWORD *)(a1 + 744) = 0LL;
    }
  }
  else if ( a2 || a3 || a4 < 0x64 )
  {
    v10 = *(_BYTE *)(a1 + 924) == 0;
    *(_QWORD *)(a1 + 744) = MEMORY[0xFFFFF78000000014];
    if ( v10 )
      result = QueueCapTrace(a1 + 776, 300);
    if ( !*(_BYTE *)(a1 + 1076) )
      result = QueueCapTrace(a1 + 928, 86400);
  }
  if ( a2 != *(_DWORD *)(a1 + 464) )
  {
    ++*(_DWORD *)(a1 + 760);
    *(_DWORD *)(a1 + 464) = a2;
  }
  if ( a3 != *(_DWORD *)(a1 + 512) )
  {
    ++*(_DWORD *)(a1 + 764);
    *(_DWORD *)(a1 + 512) = a3;
  }
  if ( a4 != *(_DWORD *)(a1 + 740) )
  {
    ++*(_DWORD *)(a1 + 768);
    *(_DWORD *)(a1 + 740) = a4;
  }
  return result;
}
