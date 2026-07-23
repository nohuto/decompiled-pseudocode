/*
 * XREFs of WheapAllocErrorRecord @ 0x140420434
 * Callers:
 *     WheaReportHwError @ 0x140420030 (WheaReportHwError.c)
 *     WheapReportBootError @ 0x14065A154 (WheapReportBootError.c)
 * Callees:
 *     WheapInitializeErrorRecordWrapper @ 0x14065A028 (WheapInitializeErrorRecordWrapper.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall WheapAllocErrorRecord(__int64 a1, _DWORD *a2)
{
  ULONG_PTR v4; // rcx
  __int64 v5; // rcx
  char v6; // r8
  unsigned int i; // edx
  char v8; // r8
  __int64 v9; // r11
  __int64 Pool2; // rax

  v4 = *(unsigned int *)(a1 + 32);
  *a2 = v4;
  if ( KeGetCurrentIrql() <= 2u )
  {
    Pool2 = ExAllocatePool2(0x40uLL, v4, *(_DWORD *)(a1 + 36));
    v9 = Pool2;
    if ( Pool2 )
    {
      WheapInitializeErrorRecordWrapper(Pool2, (unsigned int)*a2, a1);
      goto LABEL_9;
    }
LABEL_14:
    *a2 = 0;
    return v9;
  }
  v5 = *(_QWORD *)(a1 + 48);
  v6 = 0;
  for ( i = 0; i < *(_DWORD *)(a1 + 28); ++i )
  {
    if ( *(_DWORD *)(v5 + 28) != 1 && !_InterlockedCompareExchange((volatile signed __int32 *)(v5 + 28), 1, 0) )
    {
      v6 = 1;
      break;
    }
    v5 += *(unsigned int *)(v5 + 16);
  }
  v8 = -v6;
  v9 = v5 & -(__int64)(v8 != 0);
  if ( !v9 )
    goto LABEL_14;
  *(_DWORD *)((v5 & -(__int64)(v8 != 0)) + 0x18) = 1;
LABEL_9:
  *(_QWORD *)(v9 + 32) = a1;
  return v9;
}
