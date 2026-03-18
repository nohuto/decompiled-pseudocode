/*
 * XREFs of MiInitializePartitionSpecialPurposeMemoryCallout @ 0x140682F30
 * Callers:
 *     <none>
 * Callees:
 *     MiInitializePartitionSpecialPurposeMemory @ 0x1407EE544 (MiInitializePartitionSpecialPurposeMemory.c)
 */

void __fastcall MiInitializePartitionSpecialPurposeMemoryCallout(_DWORD *Parameter)
{
  Parameter[4] = MiInitializePartitionSpecialPurposeMemory(*(_QWORD *)Parameter, *((_QWORD *)Parameter + 1));
}
