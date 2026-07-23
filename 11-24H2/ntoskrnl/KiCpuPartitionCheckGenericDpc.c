/*
 * XREFs of KiCpuPartitionCheckGenericDpc @ 0x1405BD7FC
 * Callers:
 *     KeGenericCallDpcEx @ 0x140270AE8 (KeGenericCallDpcEx.c)
 *     KeSwapDirectoryTableBase @ 0x140450D1C (KeSwapDirectoryTableBase.c)
 *     KeGenericCallDpc @ 0x14048F660 (KeGenericCallDpc.c)
 * Callees:
 *     KeIsEqualAffinityEx @ 0x1403A3520 (KeIsEqualAffinityEx.c)
 *     EtwTraceCpuPartitionGenericDpcViolation @ 0x14064BD7C (EtwTraceCpuPartitionGenericDpcViolation.c)
 */

__int64 __fastcall KiCpuPartitionCheckGenericDpc(__int64 a1)
{
  __int64 result; // rax

  result = KeIsEqualAffinityEx(*(unsigned __int16 **)KiSystemCpuPartition, &KeActiveProcessors.Count);
  if ( !(_DWORD)result )
    return EtwTraceCpuPartitionGenericDpcViolation(a1);
  return result;
}
