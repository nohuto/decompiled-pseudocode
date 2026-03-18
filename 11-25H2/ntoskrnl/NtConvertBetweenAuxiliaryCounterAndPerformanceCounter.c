/*
 * XREFs of NtConvertBetweenAuxiliaryCounterAndPerformanceCounter @ 0x140A89740
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 */

__int64 __fastcall NtConvertBetweenAuxiliaryCounterAndPerformanceCounter(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v6; // r14
  int v7; // ecx

  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = *a2;
    ProbeForWrite(a3, 8uLL, 4u);
    if ( a4 )
      ProbeForWrite(a4, 8uLL, 4u);
    v7 = guard_dispatch_icall_no_overrides(v6);
    if ( v7 >= 0 )
    {
      *a3 = 0LL;
      if ( a4 )
        *a4 = 0LL;
    }
  }
  else
  {
    return (unsigned int)guard_dispatch_icall_no_overrides(*a2);
  }
  return (unsigned int)v7;
}
