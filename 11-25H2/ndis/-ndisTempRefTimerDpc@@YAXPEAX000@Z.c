/*
 * XREFs of ?ndisTempRefTimerDpc@@YAXPEAX000@Z @ 0x14005B870
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F080 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z @ 0x14005ABD0 (-ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z.c)
 */

void __fastcall ndisTempRefTimerDpc(
        PVOID SystemSpecific1,
        struct _NDIS_MINIPORT_BLOCK *FunctionContext,
        PVOID SystemSpecific2,
        PVOID SystemSpecific3)
{
  struct _NDIS_MINIPORT_AOAC *AoAc; // rbx

  AoAc = FunctionContext->AoAc;
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)AoAc);
  if ( *((_BYTE *)AoAc + 280) == 1 )
  {
    ndisDereferenceMiniport(FunctionContext, 2u);
  }
  else
  {
    *((_BYTE *)AoAc + 280) = 1;
    ndisScheduleWorkItemInternal((struct _NDIS_WORK_ITEM *)((char *)AoAc + 200));
  }
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)AoAc);
}
