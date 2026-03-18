/*
 * XREFs of NtConvertBetweenAuxiliaryCounterAndPerformanceCounter @ 0x140A8E760
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x1408C0590 (ProbeForWrite.c)
 */

__int64 __fastcall NtConvertBetweenAuxiliaryCounterAndPerformanceCounter(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v6; // r14
  __int64 v7; // r9
  int v8; // ecx
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v11[4]; // [rsp+28h] [rbp-20h] BYREF

  v11[0] = 0LL;
  v10 = 0LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = *a2;
    v11[1] = *a2;
    ProbeForWrite(a3, 8uLL, 4u);
    if ( a4 )
      ProbeForWrite(a4, 8uLL, 4u);
    v8 = guard_dispatch_icall_no_overrides(v6, &v10, v11, v7);
    if ( v8 >= 0 )
    {
      *a3 = v10;
      if ( a4 )
        *a4 = v11[0];
    }
  }
  else
  {
    return (unsigned int)guard_dispatch_icall_no_overrides(*a2, a3, a4, a4);
  }
  return (unsigned int)v8;
}
