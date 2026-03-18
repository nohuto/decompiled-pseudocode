/*
 * XREFs of KiCpuPartitionCheckGenericDpc @ 0x1405BC29C
 * Callers:
 *     KeGenericCallDpcEx @ 0x140417AB0 (KeGenericCallDpcEx.c)
 *     KeSwapDirectoryTableBase @ 0x14045CCC0 (KeSwapDirectoryTableBase.c)
 *     KeGenericCallDpc @ 0x140495940 (KeGenericCallDpc.c)
 * Callees:
 *     KeIsEqualAffinityEx @ 0x14026BB80 (KeIsEqualAffinityEx.c)
 *     EtwTraceCpuPartitionGenericDpcViolation @ 0x1406417A0 (EtwTraceCpuPartitionGenericDpcViolation.c)
 */

__int64 __fastcall KiCpuPartitionCheckGenericDpc(__int64 a1)
{
  __int64 result; // rax

  result = KeIsEqualAffinityEx(*(unsigned __int16 **)KiSystemCpuPartition, &KeActiveProcessors.Count);
  if ( !(_DWORD)result )
    return EtwTraceCpuPartitionGenericDpcViolation(a1);
  return result;
}
