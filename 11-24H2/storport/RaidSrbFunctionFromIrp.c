/*
 * XREFs of RaidSrbFunctionFromIrp @ 0x1400690E0
 * Callers:
 *     RaUnitCheckRemoveStateForDisabled @ 0x140069070 (RaUnitCheckRemoveStateForDisabled.c)
 *     NvmeNamespaceCheckRemoveState @ 0x1400FC1F4 (NvmeNamespaceCheckRemoveState.c)
 * Callees:
 *     <none>
 */

char __fastcall RaidSrbFunctionFromIrp(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 8LL);
  if ( *(_BYTE *)(v1 + 2) == 40 )
    return *(_BYTE *)(v1 + 20);
  else
    return *(_BYTE *)(v1 + 2);
}
