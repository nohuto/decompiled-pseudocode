/*
 * XREFs of KiGetProcessCpuSetMaskPointer @ 0x1404D3664
 * Callers:
 *     KeSetCpuSetsProcess @ 0x1405BD334 (KeSetCpuSetsProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetProcessCpuSetMaskPointer(__int64 a1, int a2, _DWORD *a3)
{
  if ( (*(_DWORD *)(a1 + 1532) & 0x80u) != 0 )
  {
    *a3 = (unsigned __int16)KiMaximumGroups;
    if ( a2 )
      return *(_QWORD *)(a1 + 1736);
    else
      return *(_QWORD *)(a1 + 1744);
  }
  else
  {
    *a3 = 1;
    return a1 + (-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFF8uLL) + 1744;
  }
}
