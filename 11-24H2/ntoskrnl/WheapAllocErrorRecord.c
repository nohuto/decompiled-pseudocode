/*
 * XREFs of WheapAllocErrorRecord @ 0x14042E704
 * Callers:
 *     WheaReportHwError @ 0x14042E300 (WheaReportHwError.c)
 *     WheapReportBootError @ 0x14065BA34 (WheapReportBootError.c)
 * Callees:
 *     WheapInitializeErrorRecordWrapper @ 0x14065B908 (WheapInitializeErrorRecordWrapper.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall WheapAllocErrorRecord(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rcx
  char v5; // r8
  unsigned int i; // edx
  char v7; // r8
  __int64 v8; // r11
  __int64 Pool2; // rax

  *a2 = *(_DWORD *)(a1 + 32);
  if ( KeGetCurrentIrql() <= 2u )
  {
    Pool2 = ExAllocatePool2(0x40uLL);
    v8 = Pool2;
    if ( Pool2 )
    {
      WheapInitializeErrorRecordWrapper(Pool2, (unsigned int)*a2, a1);
      goto LABEL_9;
    }
LABEL_14:
    *a2 = 0;
    return v8;
  }
  v4 = *(_QWORD *)(a1 + 48);
  v5 = 0;
  for ( i = 0; i < *(_DWORD *)(a1 + 28); ++i )
  {
    if ( *(_DWORD *)(v4 + 28) != 1 && !_InterlockedCompareExchange((volatile signed __int32 *)(v4 + 28), 1, 0) )
    {
      v5 = 1;
      break;
    }
    v4 += *(unsigned int *)(v4 + 16);
  }
  v7 = -v5;
  v8 = v4 & -(__int64)(v7 != 0);
  if ( !v8 )
    goto LABEL_14;
  *(_DWORD *)((v4 & -(__int64)(v7 != 0)) + 0x18) = 1;
LABEL_9:
  *(_QWORD *)(v8 + 32) = a1;
  return v8;
}
