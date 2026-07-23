/*
 * XREFs of PspQueryProcessAccountingInformationCallback @ 0x14085EBE0
 * Callers:
 *     PspCallJobHierarchyCallbacks @ 0x14085D828 (PspCallJobHierarchyCallbacks.c)
 * Callees:
 *     PoEnergyEstimationEnabled @ 0x140440E80 (PoEnergyEstimationEnabled.c)
 *     PsAddProcessEnergyValues @ 0x1404E5EF8 (PsAddProcessEnergyValues.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PsQueryStatisticsProcess @ 0x14085E140 (PsQueryStatisticsProcess.c)
 *     PspAddAccountingValues @ 0x14085EB2C (PspAddAccountingValues.c)
 *     PsQueryProcessEnergyValues @ 0x14085EE30 (PsQueryProcessEnergyValues.c)
 */

__int64 __fastcall PspQueryProcessAccountingInformationCallback(__int64 a1, __int64 a2)
{
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  _BYTE v7[448]; // [rsp+20h] [rbp-1D8h] BYREF

  memset_0(v7, 0, 0x1B8uLL);
  if ( (*(_DWORD *)(a1 + 496) & 2) == 0 )
  {
    PsQueryStatisticsProcess((_QWORD *)a1, (_QWORD *)a2);
    PspAddAccountingValues((_QWORD *)(a2 + 104), (char *)a2);
    *(_DWORD *)(a2 + 248) += *(_DWORD *)(a1 + 1028);
    v5 = *(_QWORD **)(a1 + 1592);
    if ( v5 )
    {
      *(_QWORD *)(a2 + 208) += *v5;
      *(_QWORD *)(a2 + 216) += v5[1];
      *(_QWORD *)(a2 + 224) += v5[2];
      *(_QWORD *)(a2 + 232) += v5[3];
      *(_QWORD *)(a2 + 240) += v5[4];
    }
    v6 = *(_QWORD **)(a1 + 2032);
    if ( v6 )
    {
      *(_QWORD *)(a2 + 696) = *v6;
      *(_QWORD *)(a2 + 704) = *(_QWORD *)(*(_QWORD *)(a1 + 2032) + 8LL);
    }
    if ( PoEnergyEstimationEnabled() )
    {
      PsQueryProcessEnergyValues(a1, v7);
      PsAddProcessEnergyValues((_QWORD *)(a2 + 256), (__int64)v7);
    }
  }
  return 0LL;
}
