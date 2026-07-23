/*
 * XREFs of MiApplyCrossPartitionCharges @ 0x14026B298
 * Callers:
 *     MiGetCrossPartitionCharges @ 0x140269C84 (MiGetCrossPartitionCharges.c)
 *     MiApplyCrossPartitionCharges @ 0x14026B298 (MiApplyCrossPartitionCharges.c)
 * Callees:
 *     MiApplyCrossPartitionCharges @ 0x14026B298 (MiApplyCrossPartitionCharges.c)
 *     MiConvertCrossPartitionChargeTypeToAggregate @ 0x1404C84F0 (MiConvertCrossPartitionChargeTypeToAggregate.c)
 */

__int64 __fastcall MiApplyCrossPartitionCharges(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rsi
  __int64 v7; // rax
  __int64 result; // rax
  unsigned int v9; // eax
  __int64 v10; // r8

  v4 = 32LL * a2;
  v5 = *(_QWORD *)(v4 + a1 + 2472);
  v6 = v5 + a3;
  if ( v5 + a3 > v5 && v6 <= *(_QWORD *)(v4 + a1 + 2496) )
  {
    if ( a2 >= 7
      || (v9 = MiConvertCrossPartitionChargeTypeToAggregate((unsigned int)a2),
          result = MiApplyCrossPartitionCharges(a1, v9, v10),
          (int)result >= 0) )
    {
      *(_QWORD *)(v4 + a1 + 2472) = v6;
      if ( v6 > *(_QWORD *)(v4 + a1 + 2488) )
        *(_QWORD *)(v4 + a1 + 2488) = v6;
      return 0LL;
    }
  }
  else
  {
    v7 = *(_QWORD *)(v4 + a1 + 2480);
    if ( v7 != -1 )
      *(_QWORD *)(v4 + a1 + 2480) = v7 + 1;
    return 3221225773LL;
  }
  return result;
}
