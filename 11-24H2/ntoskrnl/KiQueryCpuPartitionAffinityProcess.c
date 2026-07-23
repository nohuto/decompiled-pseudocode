/*
 * XREFs of KiQueryCpuPartitionAffinityProcess @ 0x14032B934
 * Callers:
 *     KiUpdateProcessAvailableCpuState @ 0x14032B848 (KiUpdateProcessAvailableCpuState.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KiAcquireCpuPartitionAssignmentLock @ 0x1402B9B18 (KiAcquireCpuPartitionAssignmentLock.c)
 *     KiReleaseCpuPartitionAssignmentLock @ 0x1402B9B64 (KiReleaseCpuPartitionAssignmentLock.c)
 *     KeOrAffinityEx2 @ 0x14032DDD0 (KeOrAffinityEx2.c)
 *     KiQueryCpuPartitionAffinity @ 0x1404F263C (KiQueryCpuPartitionAffinity.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall KiQueryCpuPartitionAffinityProcess(__int64 a1, unsigned __int16 *a2, char a3)
{
  __int64 v6; // rcx
  unsigned __int8 CurrentIrql; // bp
  _QWORD **v8; // r15
  _QWORD *v9; // rsi
  _QWORD *v10; // rbx
  __int64 result; // rax
  unsigned __int8 v12; // [rsp+60h] [rbp+18h] BYREF

  memset_0(a2 + 4, 0, 8LL * *a2);
  *a2 = 1;
  CurrentIrql = KeGetCurrentIrql();
  v12 = CurrentIrql;
  if ( !a3 )
  {
    KiAcquireCpuPartitionAssignmentLock(&v12);
    CurrentIrql = v12;
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
    return KiReleaseCpuPartitionAssignmentLock(CurrentIrql);
  return result;
}
