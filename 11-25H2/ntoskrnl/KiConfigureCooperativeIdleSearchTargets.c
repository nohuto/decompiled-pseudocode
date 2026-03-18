/*
 * XREFs of KiConfigureCooperativeIdleSearchTargets @ 0x1405B2A94
 * Callers:
 *     KiInitializeDynamicProcessorDpc @ 0x140B47620 (KiInitializeDynamicProcessorDpc.c)
 *     KiConfigureAllSchedulingInformation @ 0x140C16E18 (KiConfigureAllSchedulingInformation.c)
 * Callees:
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiConfigureCooperativeIdleSearchContextTargets @ 0x1405B2998 (KiConfigureCooperativeIdleSearchContextTargets.c)
 */

__int64 KiConfigureCooperativeIdleSearchTargets()
{
  unsigned __int8 CurrentIrql; // di
  __int64 i; // rbx
  unsigned int v2; // ebp
  __int64 v3; // r14
  _QWORD *v4; // rsi
  __int64 v5; // r8
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  for ( i = 0LL; (unsigned int)i < (unsigned int)KeNumberProcessors_0; i = (unsigned int)(i + 1) )
  {
    v2 = 0;
    v3 = KiProcessorBlock[i];
    v4 = (_QWORD *)(v3 + 37896);
    do
    {
      v5 = v4[2];
      if ( v5 && v5 == *v4 )
        KiConfigureCooperativeIdleSearchContextTargets(v3, v2, v5);
      ++v2;
      ++v4;
    }
    while ( v2 < 2 );
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
