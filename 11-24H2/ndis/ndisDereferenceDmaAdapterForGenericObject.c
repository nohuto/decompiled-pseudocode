/*
 * XREFs of ndisDereferenceDmaAdapterForGenericObject @ 0x140092510
 * Callers:
 *     ?ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z @ 0x140049E20 (-ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisDereferenceDmaAdapterForGenericObject(PVOID P)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 22, 0xFFFFFFFF) == 1 )
  {
    (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)P + 5) + 8LL) + 8LL))();
    *((_QWORD *)P + 5) = 0LL;
    ExFreePoolWithTag(P, 0x6264444Eu);
  }
}
