/*
 * XREFs of KiCpuPartitionCheckGenericDpc @ 0x1405C01CC
 * Callers:
 *     KeGenericCallDpcEx @ 0x140414C8C (KeGenericCallDpcEx.c)
 *     KeSwapDirectoryTableBase @ 0x14045B984 (KeSwapDirectoryTableBase.c)
 *     KeGenericCallDpc @ 0x140494DA0 (KeGenericCallDpc.c)
 * Callees:
 *     KeIsEqualAffinityEx @ 0x1403C8980 (KeIsEqualAffinityEx.c)
 *     EtwTraceCpuPartitionGenericDpcViolation @ 0x14064D76C (EtwTraceCpuPartitionGenericDpcViolation.c)
 */

__int64 __fastcall KiCpuPartitionCheckGenericDpc(__int64 a1)
{
  __int64 result; // rax

  result = KeIsEqualAffinityEx(*(unsigned __int16 **)KiSystemCpuPartition, &KeActiveProcessors.Count);
  if ( !(_DWORD)result )
    return EtwTraceCpuPartitionGenericDpcViolation(a1);
  return result;
}
