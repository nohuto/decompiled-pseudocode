/*
 * XREFs of ProcLibCapChange @ 0x140040F98
 * Callers:
 *     ProcLibOnD0StateChangeWorker @ 0x1400037C0 (ProcLibOnD0StateChangeWorker.c)
 *     PccCapWorker @ 0x14000D9E0 (PccCapWorker.c)
 *     CpcGuaranteedNotifyWorker @ 0x140026164 (CpcGuaranteedNotifyWorker.c)
 *     AcpiTStateNotifyWorker @ 0x14002C590 (AcpiTStateNotifyWorker.c)
 *     ProcLibDeviceStart @ 0x14002EDF4 (ProcLibDeviceStart.c)
 *     InitCpcStatesInternal @ 0x140033390 (InitCpcStatesInternal.c)
 *     PepUpdatePerformanceConstraintWorker @ 0x14003C6B0 (PepUpdatePerformanceConstraintWorker.c)
 *     AcpiPStateNotifyWorker @ 0x140040E40 (AcpiPStateNotifyWorker.c)
 * Callees:
 *     QueueCapTrace @ 0x140030124 (QueueCapTrace.c)
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
