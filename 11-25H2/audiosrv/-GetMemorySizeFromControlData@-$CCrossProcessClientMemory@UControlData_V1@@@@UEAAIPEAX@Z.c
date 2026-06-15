/*
 * XREFs of ?GetMemorySizeFromControlData@?$CCrossProcessClientMemory@UControlData_V1@@@@UEAAIPEAX@Z @ 0x18015CE40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCrossProcessClientMemory<ControlData_V1>::GetMemorySizeFromControlData(__int64 a1, __int64 a2)
{
  return *(unsigned int *)(a2 + 4);
}
