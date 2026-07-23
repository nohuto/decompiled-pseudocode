/*
 * XREFs of HalpPmuReservedResourcesProcessorCallback @ 0x140543798
 * Callers:
 *     EmonAllocateResources @ 0x1405589BC (EmonAllocateResources.c)
 *     EmonReleaseProfileResourcesInternal @ 0x14055B504 (EmonReleaseProfileResourcesInternal.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KeSetTargetProcessorDpcEx @ 0x1403703F0 (KeSetTargetProcessorDpcEx.c)
 *     KeGetProcessorNumberFromIndex @ 0x140370900 (KeGetProcessorNumberFromIndex.c)
 *     KeEnumerateNextProcessor @ 0x140405740 (KeEnumerateNextProcessor.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpPmuReservedResourcesProcessorCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int ProcessorNumberFromIndex; // ebx
  int v5; // esi
  unsigned __int8 CurrentIrql; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  unsigned __int16 *v14[2]; // [rsp+28h] [rbp-38h] BYREF
  __int16 v15; // [rsp+38h] [rbp-28h]
  int v16; // [rsp+3Ah] [rbp-26h]
  __int16 v17; // [rsp+3Eh] [rbp-22h]
  _QWORD v18[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v19; // [rsp+50h] [rbp-10h]
  ULONG ProcIndex; // [rsp+A0h] [rbp+40h] BYREF
  int SystemArgument1; // [rsp+A8h] [rbp+48h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+B0h] [rbp+50h] BYREF

  v18[0] = a2;
  v16 = 0;
  ProcessorNumberFromIndex = 0;
  v17 = 0;
  v5 = 0;
  ProcIndex = 0;
  ProcNumber = 0;
  v19 = 0LL;
  v18[1] = a3;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags != (unsigned __int8)v19 )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  SystemArgument1 = 0;
  v15 = 0;
  v14[1] = *(unsigned __int16 **)(a1 + 8);
  v14[0] = (unsigned __int16 *)a1;
  while ( !(unsigned int)KeEnumerateNextProcessor(&ProcIndex, v14) )
  {
    v11 = ProcIndex;
    if ( ProcIndex == KeGetPcr()->Prcb.Number )
    {
      ProcessorNumberFromIndex = guard_dispatch_icall_no_overrides(a3, v10);
      if ( ProcessorNumberFromIndex < 0 )
        break;
    }
    else
    {
      v12 = a4 + 80LL * ProcIndex;
      *(_QWORD *)(v12 + 72) = HalpPmuProcessorCallbackDpcRoutine;
      *(_QWORD *)(v12 + 80) = v18;
      *(_DWORD *)(v12 + 48) = 275;
      *(_QWORD *)(v12 + 104) = 0LL;
      *(_QWORD *)(v12 + 64) = 0LL;
      *(_BYTE *)(a4 + 80 * v11 + 49) = 3;
      ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(v11, &ProcNumber);
      if ( ProcessorNumberFromIndex < 0 )
        break;
      KeSetTargetProcessorDpcEx((PKDPC)(v12 + 48), &ProcNumber);
      ++v5;
      KeInsertQueueDpc((PRKDPC)(v12 + 48), &SystemArgument1, 0LL);
    }
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  while ( SystemArgument1 != v5 )
    _mm_pause();
  if ( ProcessorNumberFromIndex >= 0 && (int)v19 < 0 )
    return (unsigned int)v19;
  return (unsigned int)ProcessorNumberFromIndex;
}
