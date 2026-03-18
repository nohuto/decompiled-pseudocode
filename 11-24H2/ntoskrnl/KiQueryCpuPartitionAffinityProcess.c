/*
 * XREFs of KiQueryCpuPartitionAffinityProcess @ 0x140204354
 * Callers:
 *     KiUpdateProcessAvailableCpuState @ 0x140204268 (KiUpdateProcessAvailableCpuState.c)
 * Callees:
 *     KeOrAffinityEx2 @ 0x1402067F0 (KeOrAffinityEx2.c)
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     KiAcquireCpuPartitionAssignmentLock @ 0x14043A2D4 (KiAcquireCpuPartitionAssignmentLock.c)
 *     KiReleaseCpuPartitionAssignmentLock @ 0x14043A320 (KiReleaseCpuPartitionAssignmentLock.c)
 *     KiQueryCpuPartitionAffinity @ 0x1404F4D3C (KiQueryCpuPartitionAffinity.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall KiQueryCpuPartitionAffinityProcess(__int64 a1, unsigned __int16 *a2, char a3)
{
  __int64 v6; // rcx
  unsigned __int8 CurrentIrql; // bp
  _QWORD **v8; // r15
  _QWORD *v9; // rsi
  _QWORD *v10; // rbx
  __int64 result; // rax
  __int64 v12; // rcx
  unsigned __int8 v13; // [rsp+60h] [rbp+18h] BYREF

  memset_0(a2 + 4, 0, 8LL * *a2);
  *a2 = 1;
  CurrentIrql = KeGetCurrentIrql();
  v13 = CurrentIrql;
  if ( !a3 )
  {
    KiAcquireCpuPartitionAssignmentLock(&v13);
    CurrentIrql = v13;
  }
  v8 = (_QWORD **)(a1 + 432);
  v9 = *v8;
  if ( *v8 == v8 )
  {
    result = KiQueryCpuPartitionAffinity(v6, a2);
  }
  else
  {
    do
    {
      v10 = (_QWORD *)*(v9 - 3);
      v9 = (_QWORD *)*v9;
      KxAcquireSpinLock(v10 + 1);
      KeOrAffinityEx2(a2, *v10, a2);
      result = KxReleaseSpinLock(v10 + 1);
    }
    while ( v9 != v8 );
  }
  if ( !a3 )
  {
    LOBYTE(v12) = CurrentIrql;
    return KiReleaseCpuPartitionAssignmentLock(v12);
  }
  return result;
}
