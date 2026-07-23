/*
 * XREFs of IopCancelPendingEject @ 0x1407318D4
 * Callers:
 *     PnpProcessRelation @ 0x140A54854 (PnpProcessRelation.c)
 * Callees:
 *     IoFreeIrp @ 0x1402C30B0 (IoFreeIrp.c)
 *     IoCancelIrp @ 0x140408D50 (IoCancelIrp.c)
 */

void __fastcall IopCancelPendingEject(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 72) && !_InterlockedExchange((volatile __int32 *)(a1 + 80), 1) )
  {
    IoCancelIrp(*(PIRP *)(a1 + 72));
    if ( _InterlockedExchange((volatile __int32 *)(a1 + 80), 2) == 3 )
      IoFreeIrp(*(PIRP *)(a1 + 72));
  }
}
