/*
 * XREFs of KiRegisterProcessorWithCooperativeIdleSearchContext @ 0x1405C51A4
 * Callers:
 *     KiAssignCooperativeIdleSearchContexts @ 0x1405B32DC (KiAssignCooperativeIdleSearchContexts.c)
 *     KiReconfigureSubNodeSchedulingInformation @ 0x1405B473C (KiReconfigureSubNodeSchedulingInformation.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
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
