/*
 * XREFs of HalpPmuReservedResourcesProcessorCallback @ 0x1405435E8
 * Callers:
 *     EmonAllocateResources @ 0x14055848C (EmonAllocateResources.c)
 *     EmonReleaseProfileResourcesInternal @ 0x14055AFD4 (EmonReleaseProfileResourcesInternal.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     KeSetTargetProcessorDpcEx @ 0x1403B30A0 (KeSetTargetProcessorDpcEx.c)
 *     KeGetProcessorNumberFromIndex @ 0x1403B3140 (KeGetProcessorNumberFromIndex.c)
 *     KeEnumerateNextProcessor @ 0x140405FA0 (KeEnumerateNextProcessor.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpPmuReservedResourcesProcessorCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int ProcessorNumberFromIndex; // ebx
  int v5; // esi
  unsigned __int8 CurrentIrql; // r14
  __int64 v10; // rcx
  __int64 v11; // rdi
  unsigned __int16 *v13[2]; // [rsp+28h] [rbp-38h] BYREF
  __int16 v14; // [rsp+38h] [rbp-28h]
  int v15; // [rsp+3Ah] [rbp-26h]
  __int16 v16; // [rsp+3Eh] [rbp-22h]
  _QWORD v17[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v18; // [rsp+50h] [rbp-10h]
  ULONG ProcIndex; // [rsp+A0h] [rbp+40h] BYREF
  int SystemArgument1; // [rsp+A8h] [rbp+48h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+B0h] [rbp+50h] BYREF

  v17[0] = a2;
  v15 = 0;
  ProcessorNumberFromIndex = 0;
  v16 = 0;
  v5 = 0;
  ProcIndex = 0;
  ProcNumber = 0;
  v18 = 0LL;
  v17[1] = a3;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags != (unsigned __int8)v18 )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  SystemArgument1 = 0;
  v14 = 0;
  v13[1] = *(unsigned __int16 **)(a1 + 8);
  v13[0] = (unsigned __int16 *)a1;
  while ( !(unsigned int)KeEnumerateNextProcessor(&ProcIndex, v13) )
  {
    v10 = ProcIndex;
    if ( ProcIndex == KeGetPcr()->Prcb.Number )
    {
      ProcessorNumberFromIndex = guard_dispatch_icall_no_overrides(a3);
      if ( ProcessorNumberFromIndex < 0 )
        break;
    }
    else
    {
      v11 = a4 + 80LL * ProcIndex;
      *(_QWORD *)(v11 + 72) = HalpPmuProcessorCallbackDpcRoutine;
      *(_QWORD *)(v11 + 80) = v17;
      *(_DWORD *)(v11 + 48) = 275;
      *(_QWORD *)(v11 + 104) = 0LL;
      *(_QWORD *)(v11 + 64) = 0LL;
      *(_BYTE *)(a4 + 80 * v10 + 49) = 3;
      ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(v10, &ProcNumber);
      if ( ProcessorNumberFromIndex < 0 )
        break;
      KeSetTargetProcessorDpcEx((PKDPC)(v11 + 48), &ProcNumber);
      ++v5;
      KeInsertQueueDpc((PRKDPC)(v11 + 48), &SystemArgument1, 0LL);
    }
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  while ( SystemArgument1 != v5 )
    _mm_pause();
  if ( ProcessorNumberFromIndex >= 0 && (int)v18 < 0 )
    return (unsigned int)v18;
  return (unsigned int)ProcessorNumberFromIndex;
}
