/*
 * XREFs of ?KiSelectIdealProcessorSetsForProcess@@YAXPEAU_KPROCESS@@PEAT_KI_PROCESS_CONCURRENCY_COUNT@@PEAU_KAFFINITY_EX@@PEAU_KI_IDEAL_PROCESSOR_SET_BREAKPOINTS@@@Z @ 0x14032AE68
 * Callers:
 *     KiStartIdealProcessorAssignmentBlock @ 0x14032AE3C (KiStartIdealProcessorAssignmentBlock.c)
 *     KeSetAffinityProcess @ 0x14032B26C (KeSetAffinityProcess.c)
 *     ?KiSetProcessConcurrencyCount@@YAXPEAU_KPROCESS@@T_KI_PROCESS_CONCURRENCY_COUNT@@PEAE@Z @ 0x14033997C (-KiSetProcessConcurrencyCount@@YAXPEAU_KPROCESS@@T_KI_PROCESS_CONCURRENCY_COUNT@@PEAE@Z.c)
 * Callees:
 *     ?KiSelectIdealProcessorSetForGroup@@YAXPEAU_GROUP_AFFINITY@@GK_KPEA_KPEAU_KI_IDEAL_PROCESSOR_SET_BREAKPOINTS@@@Z @ 0x14032AF90 (-KiSelectIdealProcessorSetForGroup@@YAXPEAU_GROUP_AFFINITY@@GK_KPEA_KPEAU_KI_IDEAL_PROCESSOR_SET.c)
 */

void __fastcall KiSelectIdealProcessorSetsForProcess(
        unsigned __int64 a1,
        union _KI_PROCESS_CONCURRENCY_COUNT *a2,
        struct _KAFFINITY_EX *a3,
        struct _KI_IDEAL_PROCESSOR_SET_BREAKPOINTS *a4)
{
  unsigned __int64 v5; // rcx
  unsigned int v6; // r14d
  _KI_PROCESS_CONCURRENCY_COUNT v7; // r13d
  unsigned __int16 v8; // di
  _KI_PROCESS_CONCURRENCY_COUNT v9; // ebx
  _KAFFINITY_EX *v10; // rax
  __int64 v11; // r12
  _KI_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK *v12; // rdx
  bool v13; // cf
  struct _KI_IDEAL_PROCESSOR_SET_BREAKPOINTS v14; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int64 v15; // [rsp+38h] [rbp-18h] BYREF
  struct _GROUP_AFFINITY v16; // [rsp+40h] [rbp-10h] BYREF
  struct _KI_IDEAL_PROCESSOR_SET_BREAKPOINTS v17; // [rsp+98h] [rbp+48h]

  v5 = 0LL;
  v6 = a2->AllFields >> 18;
  v7.AllFields = 0;
  v8 = 0;
  v14 = 0LL;
  v17.Low.AllFields = 0;
  if ( v6 < 2 )
    v6 = 2;
  v9.AllFields = 537133055;
  v17.High.AllFields = 537133055;
  if ( KiActiveGroups )
  {
    do
    {
      v10 = *(_KAFFINITY_EX **)(a1 + 80);
      v16 = 0LL;
      v15 = 0LL;
      v16.Group = v8;
      v11 = v8;
      if ( v8 < v10->Count )
        v5 = v10->Bitmap[v8];
      v12 = *(_KI_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK **)(a1 + 184);
      v16.Mask = v5;
      KiSelectIdealProcessorSetForGroup(&v16, v12->IdealProcessor[v8], v6, a1 >> 12, &v15, &v14);
      if ( v7.AllFields < v14.Low.AllFields )
        v7.0 = ($8E6286811530A1DBD1D5EF081D4511BD)v14.Low;
      if ( v9.AllFields > v14.High.AllFields )
        v9.0 = ($8E6286811530A1DBD1D5EF081D4511BD)v14.High;
      v13 = ++v8 < (unsigned __int16)KiActiveGroups;
      a3->Bitmap[v11] = v15;
      v5 = 0LL;
    }
    while ( v13 );
    v17 = (struct _KI_IDEAL_PROCESSOR_SET_BREAKPOINTS)__PAIR64__(v9.AllFields, v7.AllFields);
  }
  *a4 = v17;
}
