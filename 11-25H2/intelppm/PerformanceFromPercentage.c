/*
 * XREFs of PerformanceFromPercentage @ 0x140001A00
 * Callers:
 *     PerfSelectionCpc @ 0x140001570 (PerfSelectionCpc.c)
 *     PerfControlCpc @ 0x1400015F0 (PerfControlCpc.c)
 *     PerfControlCpcHidden @ 0x1400090C0 (PerfControlCpcHidden.c)
 *     PerfControlCpcSingleRegister @ 0x1400091F0 (PerfControlCpcSingleRegister.c)
 *     PerfControlCpcSingleRegisterHidden @ 0x140009480 (PerfControlCpcSingleRegisterHidden.c)
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
