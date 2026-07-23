/*
 * XREFs of ?KiSetProcessConcurrencyCount@@YAXPEAU_KPROCESS@@T_KI_PROCESS_CONCURRENCY_COUNT@@PEAE@Z @ 0x14033997C
 * Callers:
 *     ?KiUpdateProcessConcurrencyCounts@@YAXXZ @ 0x1403396B0 (-KiUpdateProcessConcurrencyCounts@@YAXXZ.c)
 *     KeSetExpectedConcurrencyCountProcess @ 0x1405BDC84 (KeSetExpectedConcurrencyCountProcess.c)
 * Callees:
 *     ?KiSelectIdealProcessorSetsForProcess@@YAXPEAU_KPROCESS@@PEAT_KI_PROCESS_CONCURRENCY_COUNT@@PEAU_KAFFINITY_EX@@PEAU_KI_IDEAL_PROCESSOR_SET_BREAKPOINTS@@@Z @ 0x14032AE68 (-KiSelectIdealProcessorSetsForProcess@@YAXPEAU_KPROCESS@@PEAT_KI_PROCESS_CONCURRENCY_COUNT@@PEAU.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x14039FF30 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     ExGenRandom @ 0x14040A540 (ExGenRandom.c)
 *     ?KiAdaptThreadIdealProcessorForProcessIdealSetChange@@YAXPEAU_KPROCESS@@PEAU_KTHREAD@@PEAU_KAFFINITY_EX@@2PEAE3PEAK@Z @ 0x1404A092C (-KiAdaptThreadIdealProcessorForProcessIdealSetChange@@YAXPEAU_KPROCESS@@PEAU_KTHREAD@@PEAU_KAFFI.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall KiSetProcessConcurrencyCount(
        struct _KPROCESS *a1,
        union _KI_PROCESS_CONCURRENCY_COUNT a2,
        unsigned __int8 *a3)
{
  _KI_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK *IdealProcessorAssignmentBlock; // rsi
  unsigned __int8 v7; // di
  struct _KPROCESS *i; // rbx
  unsigned __int8 v9; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int8 v10[7]; // [rsp+41h] [rbp-BFh] BYREF
  union _KI_PROCESS_CONCURRENCY_COUNT v11; // [rsp+48h] [rbp-B8h] BYREF
  struct _KI_IDEAL_PROCESSOR_SET_BREAKPOINTS v12; // [rsp+50h] [rbp-B0h] BYREF
  struct _KAFFINITY_EX v13; // [rsp+60h] [rbp-A0h] BYREF

  v11.0 = a2.0;
  memset_0(&v13.8, 0, sizeof(v13.8));
  IdealProcessorAssignmentBlock = a1->IdealProcessorAssignmentBlock;
  v7 = 0;
  v10[0] = 0;
  v9 = 0;
  v12 = 0LL;
  IdealProcessorAssignmentBlock->ExpectedConcurrencyCount = a2;
  if ( IdealProcessorAssignmentBlock->Breakpoints.Low.AllFields > a2.AllFields
    || IdealProcessorAssignmentBlock->Breakpoints.High.AllFields < a2.AllFields )
  {
    *(_QWORD *)&v13.Count = 2097184LL;
    memset_0(&v13.8, 0, sizeof(v13.8));
    KiSelectIdealProcessorSetsForProcess((unsigned __int64)a1, &v11, &v13, &v12);
    if ( !KeHeteroSystem )
    {
      v11.AllFields = ExGenRandom(1LL);
      for ( i = (struct _KPROCESS *)a1->ThreadListHead.Flink;
            i != (struct _KPROCESS *)&a1->ThreadListHead;
            i = *(struct _KPROCESS **)&i->Header.Lock )
      {
        KiAdaptThreadIdealProcessorForProcessIdealSetChange(
          a1,
          (struct _KTHREAD *)&i[-2].ActiveGroupsMask,
          &IdealProcessorAssignmentBlock->IdealProcessorSets,
          &v13,
          v10,
          &v9,
          (unsigned int *)&v11);
        v7 |= v9;
      }
    }
    KiCopyAffinityEx(
      &IdealProcessorAssignmentBlock->IdealProcessorSets,
      IdealProcessorAssignmentBlock->IdealProcessorSets.Size,
      &v13);
    IdealProcessorAssignmentBlock->Breakpoints = v12;
    v7 &= (KiCacheAwareScheduling & 0x10) != 0;
  }
  *a3 = v7;
}
