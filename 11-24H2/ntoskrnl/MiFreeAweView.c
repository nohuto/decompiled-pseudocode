/*
 * XREFs of MiFreeAweView @ 0x1406F3720
 * Callers:
 *     MiReleaseVadEventBlocks @ 0x14099A250 (MiReleaseVadEventBlocks.c)
 * Callees:
 *     MiReturnResident @ 0x140338A10 (MiReturnResident.c)
 *     MiDereferenceControlArea @ 0x14042777C (MiDereferenceControlArea.c)
 *     MiGetProcessPartition @ 0x1404329B0 (MiGetProcessPartition.c)
 *     MiComputeAweCharges @ 0x1406F37C8 (MiComputeAweCharges.c)
 *     MiFreeVadEventBitmapCharges @ 0x14099A3EC (MiFreeVadEventBitmapCharges.c)
 */

__int64 __fastcall MiFreeAweView(_QWORD *a1)
{
  __int64 v1; // rdi
  _QWORD *v3; // rcx
  __int64 ProcessPartition; // rax
  unsigned __int64 v5; // r8
  __int64 result; // rax

  v1 = a1[5];
  v3 = (_QWORD *)a1[4];
  if ( (*v3 != -2LL || v3[1] != -2LL || v3[2] != -2LL) && MiComputeAweCharges(v3, a1 + 1) )
  {
    ProcessPartition = MiGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
    MiReturnResident(ProcessPartition, v5);
  }
  if ( a1[7] )
    MiFreeVadEventBitmapCharges(KeGetCurrentThread()->ApcState.Process, a1);
  result = *(unsigned int *)(v1 + 8);
  if ( (result & 1) == 0 )
    return MiDereferenceControlArea(*(_QWORD *)(v1 + 40));
  return result;
}
