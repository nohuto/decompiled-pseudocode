/*
 * XREFs of HalpPmuReservedResourcesProcessorCallback @ 0x140545ED8
 * Callers:
 *     EmonAllocateResources @ 0x14055AD8C (EmonAllocateResources.c)
 *     EmonReleaseProfileResourcesInternal @ 0x14055D8D4 (EmonReleaseProfileResourcesInternal.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     KeSetTargetProcessorDpcEx @ 0x140352B60 (KeSetTargetProcessorDpcEx.c)
 *     KeGetProcessorNumberFromIndex @ 0x1403B41E0 (KeGetProcessorNumberFromIndex.c)
 *     KeEnumerateNextProcessor @ 0x14040D4F0 (KeEnumerateNextProcessor.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpPmuReservedResourcesProcessorCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int ProcessorNumberFromIndex; // ebx
  int v5; // esi
  unsigned __int8 CurrentIrql; // r14
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rdi
  unsigned __int16 *v16[2]; // [rsp+28h] [rbp-38h] BYREF
  __int16 v17; // [rsp+38h] [rbp-28h]
  int v18; // [rsp+3Ah] [rbp-26h]
  __int16 v19; // [rsp+3Eh] [rbp-22h]
  _QWORD v20[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v21; // [rsp+50h] [rbp-10h]
  ULONG ProcIndex; // [rsp+A0h] [rbp+40h] BYREF
  int SystemArgument1; // [rsp+A8h] [rbp+48h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+B0h] [rbp+50h] BYREF

  v20[0] = a2;
  v18 = 0;
  ProcessorNumberFromIndex = 0;
  v19 = 0;
  v5 = 0;
  ProcIndex = 0;
  ProcNumber = 0;
  v21 = 0LL;
  v20[1] = a3;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags != (unsigned __int8)v21 )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  SystemArgument1 = 0;
  v17 = 0;
  v16[1] = *(unsigned __int16 **)(a1 + 8);
  v16[0] = (unsigned __int16 *)a1;
  while ( !(unsigned int)KeEnumerateNextProcessor(&ProcIndex, v16) )
  {
    v13 = ProcIndex;
    if ( ProcIndex == KeGetPcr()->Prcb.Number )
    {
      ProcessorNumberFromIndex = guard_dispatch_icall_no_overrides(a3, v10, v11, v12);
      if ( ProcessorNumberFromIndex < 0 )
        break;
    }
    else
    {
      v14 = a4 + 80LL * ProcIndex;
      *(_QWORD *)(v14 + 72) = HalpPmuProcessorCallbackDpcRoutine;
      *(_QWORD *)(v14 + 80) = v20;
      *(_DWORD *)(v14 + 48) = 275;
      *(_QWORD *)(v14 + 104) = 0LL;
      *(_QWORD *)(v14 + 64) = 0LL;
      *(_BYTE *)(a4 + 80 * v13 + 49) = 3;
      ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(v13, &ProcNumber);
      if ( ProcessorNumberFromIndex < 0 )
        break;
      KeSetTargetProcessorDpcEx((PKDPC)(v14 + 48), &ProcNumber);
      ++v5;
      KeInsertQueueDpc((PRKDPC)(v14 + 48), &SystemArgument1, 0LL);
    }
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  while ( SystemArgument1 != v5 )
    _mm_pause();
  if ( ProcessorNumberFromIndex >= 0 && (int)v21 < 0 )
    return (unsigned int)v21;
  return (unsigned int)ProcessorNumberFromIndex;
}
