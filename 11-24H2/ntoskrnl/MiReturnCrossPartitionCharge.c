/*
 * XREFs of MiReturnCrossPartitionCharge @ 0x1404CF2A4
 * Callers:
 *     MiReturnCrossPartitionCharges @ 0x14020F5E4 (MiReturnCrossPartitionCharges.c)
 *     MiGetCrossPartitionCharges @ 0x14036E19C (MiGetCrossPartitionCharges.c)
 *     MiReturnCrossPartitionCharge @ 0x1404CF2A4 (MiReturnCrossPartitionCharge.c)
 * Callees:
 *     MiReturnCrossPartitionCharge @ 0x1404CF2A4 (MiReturnCrossPartitionCharge.c)
 *     MiConvertCrossPartitionChargeTypeToAggregate @ 0x1404CF324 (MiConvertCrossPartitionChargeTypeToAggregate.c)
 */

__int64 __fastcall MiReturnCrossPartitionCharge(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // r9
  __int64 v6; // rcx
  unsigned int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r10
  _QWORD *v11; // rax

  v4 = 32LL * a2;
  v5 = 7LL;
  v6 = *(_QWORD *)(v4 + a1 + 2472) - a3;
  *(_QWORD *)(v4 + a1 + 2472) = v6;
  if ( a2 >= 7 )
  {
    if ( v6 || (*(_DWORD *)(a1 + 4) & 1) == 0 )
    {
      return 0LL;
    }
    else
    {
      v11 = (_QWORD *)(a1 + 2696);
      while ( v5 < 9 )
      {
        if ( *v11 )
          return 0LL;
        ++v5;
        v11 += 4;
      }
      return 1LL;
    }
  }
  else
  {
    v7 = MiConvertCrossPartitionChargeTypeToAggregate((unsigned int)a2);
    return MiReturnCrossPartitionCharge(v9, v7, v8);
  }
}
