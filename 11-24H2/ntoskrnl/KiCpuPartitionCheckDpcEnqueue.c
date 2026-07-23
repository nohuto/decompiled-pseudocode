/*
 * XREFs of KiCpuPartitionCheckDpcEnqueue @ 0x1404F8698
 * Callers:
 *     KiInsertQueueDpc @ 0x140284920 (KiInsertQueueDpc.c)
 * Callees:
 *     KiCheckPrcbAffinityEx @ 0x140370D80 (KiCheckPrcbAffinityEx.c)
 *     EtwTraceCpuPartitionDpcSchedulingViolation @ 0x14064BCC0 (EtwTraceCpuPartitionDpcSchedulingViolation.c)
 */

void __fastcall KiCpuPartitionCheckDpcEnqueue(__int64 a1, __int64 a2, __int64 a3)
{
  _WORD *v4; // r10
  __int64 v5; // r11
  char v6; // al
  __int64 v7; // r11
  char v8; // r8

  if ( a3 != a2 && a1 != a3 + 33632 )
  {
    KiCheckPrcbAffinityEx(*(_WORD **)KiSystemCpuPartition, a2);
    v6 = KiCheckPrcbAffinityEx(v4, v5);
    if ( v8 != (v6 == 0) )
      EtwTraceCpuPartitionDpcSchedulingViolation(*(_QWORD *)(a1 + 24), *(unsigned int *)(v7 + 36));
  }
}
