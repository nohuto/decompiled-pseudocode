/*
 * XREFs of ?ndisStackExpansionInitializeSubsystem@@YAJXZ @ 0x1400C4A60
 * Callers:
 *     DriverEntry @ 0x14018B234 (DriverEntry.c)
 * Callees:
 *     ?ndisAllocatePerProcessorSlot@@YAPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z @ 0x14004E910 (-ndisAllocatePerProcessorSlot@@YAPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z.c)
 *     ?ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z @ 0x1401394B4 (-ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z.c)
 */

__int64 __fastcall ndisStackExpansionInitializeSubsystem(
        __int64 a1,
        __int64 a2,
        unsigned __int8 (*a3)(void *, const struct KnobDescriptor *, unsigned __int64 *))
{
  ULONG ActiveProcessorCount; // ebx
  ULONG *Pool2; // rax
  ULONG *v5; // rdi
  ULONG v7; // ebp
  char *v8; // r14
  struct _KDPC *v9; // rsi
  void *v10; // [rsp+20h] [rbp-28h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+50h] [rbp+8h] BYREF

  ndisRegisterKnobs(&stru_1400F4CA0, 1uLL, a3, 0LL, v10);
  qword_14011D048 = (__int64)ndisAllocatePerProcessorSlot(0x78457453u);
  qword_14011D040 = (__int64)ndisAllocatePerProcessorSlot(0x78457453u);
  if ( !qword_14011D040 )
    return 3221225626LL;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  Pool2 = (ULONG *)ExAllocatePool2(64LL, ((unsigned __int64)ActiveProcessorCount << 6) + 72, 538985550LL);
  v5 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  v7 = 0;
  *Pool2 = ActiveProcessorCount;
  if ( ActiveProcessorCount )
  {
    v8 = 0LL;
    v9 = (struct _KDPC *)(Pool2 + 2);
    do
    {
      ProcNumber = 0;
      KeGetProcessorNumberFromIndex(v7, &ProcNumber);
      KeInitializeDpc(v9, (PKDEFERRED_ROUTINE)ndisStackExpansionDpc, v8);
      KeSetTargetProcessorDpcEx(v9, &ProcNumber);
      KeInsertQueueDpc(v9, v5, 0LL);
      ++v7;
      ++v8;
      ++v9;
    }
    while ( v7 < ActiveProcessorCount );
  }
  return 0LL;
}
