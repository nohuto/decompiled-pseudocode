/*
 * XREFs of KiQueryCpuPartitionAffinityProcess @ 0x140267A84
 * Callers:
 *     KiUpdateProcessAvailableCpuState @ 0x140267998 (KiUpdateProcessAvailableCpuState.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KeOrAffinityEx2 @ 0x1402720D0 (KeOrAffinityEx2.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     KiAcquireCpuPartitionAssignmentLock @ 0x14036D244 (KiAcquireCpuPartitionAssignmentLock.c)
 *     KiReleaseCpuPartitionAssignmentLock @ 0x14036D290 (KiReleaseCpuPartitionAssignmentLock.c)
 *     KiQueryCpuPartitionAffinity @ 0x1404F0D2C (KiQueryCpuPartitionAffinity.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
