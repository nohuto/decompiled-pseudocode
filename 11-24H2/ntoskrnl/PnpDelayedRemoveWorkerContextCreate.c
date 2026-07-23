/*
 * XREFs of PnpDelayedRemoveWorkerContextCreate @ 0x14072172C
 * Callers:
 *     PnpChainDereferenceComplete @ 0x140A83D94 (PnpChainDereferenceComplete.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

_QWORD *__fastcall PnpDelayedRemoveWorkerContextCreate(__int64 a1)
{
  _QWORD *result; // rax
  __int64 v3; // r8
  __int64 v4; // rcx

  result = (_QWORD *)ExAllocatePool2(0x40uLL, 0x20uLL, 0x54706E50u);
  v3 = 0LL;
  if ( result )
  {
    result[2] = a1;
    result[1] = *(_QWORD *)(a1 + 56);
    v4 = *(_QWORD *)(a1 + 56);
    if ( v4 )
      v3 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL);
    *result = v3;
  }
  return result;
}
