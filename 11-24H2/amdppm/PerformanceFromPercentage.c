/*
 * XREFs of PerformanceFromPercentage @ 0x140002260
 * Callers:
 *     PerfControlCpc @ 0x1400019D0 (PerfControlCpc.c)
 *     PerfSelectionCppcRequestMsr @ 0x140002110 (PerfSelectionCppcRequestMsr.c)
 *     PerfSelectionCpc @ 0x140003740 (PerfSelectionCpc.c)
 *     PerfControlCpcHidden @ 0x1400068F0 (PerfControlCpcHidden.c)
 *     PerfControlCpcSingleRegister @ 0x140006A20 (PerfControlCpcSingleRegister.c)
 *     PerfControlCpcSingleRegisterHidden @ 0x140006CB0 (PerfControlCpcSingleRegisterHidden.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PerformanceFromPercentage(__int64 a1, unsigned int a2)
{
  if ( a2 == *(_DWORD *)(a1 + 100) )
    return *(_QWORD *)(a1 + 40);
  if ( a2 == 100 )
    return *(_QWORD *)(a1 + 48);
  if ( *(_BYTE *)(a1 + 131) && a2 == *(_DWORD *)(a1 + 116) )
    return *(_QWORD *)(a1 + 88);
  if ( a2 == *(_DWORD *)(a1 + 108) )
    return *(_QWORD *)(a1 + 56);
  if ( a2 == *(_DWORD *)(a1 + 112) )
    return *(_QWORD *)(a1 + 64);
  return (*(_QWORD *)(a1 + 48) * (unsigned __int64)a2 + 50) / 0x64;
}
