/*
 * XREFs of KiRegisterProcessorWithCooperativeIdleSearchContext @ 0x1405C3680
 * Callers:
 *     KiAssignCooperativeIdleSearchContexts @ 0x1405B2148 (KiAssignCooperativeIdleSearchContexts.c)
 *     KiReconfigureSubNodeSchedulingInformation @ 0x1405B3514 (KiReconfigureSubNodeSchedulingInformation.c)
 * Callees:
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiRegisterProcessorWithCooperativeIdleSearchContext(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // si
  __int64 v7; // rcx
  unsigned __int8 v8; // al
  unsigned __int8 v9; // al
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(a2 + 209) + 536) = a3;
  v7 = *(_QWORD *)(a1 + 1048);
  if ( !v7 )
    *(_WORD *)(a1 + 1062) = *(unsigned __int8 *)(a2 + 208);
  *(_QWORD *)(a1 + 1048) = *(_QWORD *)(a2 + 200) | v7;
  v8 = *(_BYTE *)(a2 + 209);
  if ( v8 < *(_BYTE *)(a1 + 1060) )
    *(_BYTE *)(a1 + 1060) = v8;
  v9 = *(_BYTE *)(a2 + 209);
  if ( v9 > *(_BYTE *)(a1 + 1061) )
    *(_BYTE *)(a1 + 1061) = v9;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
