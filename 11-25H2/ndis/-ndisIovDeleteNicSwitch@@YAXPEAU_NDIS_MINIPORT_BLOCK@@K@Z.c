/*
 * XREFs of ?ndisIovDeleteNicSwitch@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1400E567C
 * Callers:
 *     ?ndisIovDeleteDefaultNicSwitch@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140090610 (-ndisIovDeleteDefaultNicSwitch@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisOidPostIovDeleteNicSwitch@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E6B90 (-ndisOidPostIovDeleteNicSwitch@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14005A650 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x140097870 (-ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisIovDeleteNicSwitch(struct _NDIS_MINIPORT_BLOCK *a1, unsigned int a2)
{
  _LIST_ENTRY *SwitchBySwitchId; // rbx
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *Blink; // rax
  KIRQL v6; // dl
  KIRQL NewIrql; // [rsp+40h] [rbp+18h] BYREF

  NewIrql = 0;
  SwitchBySwitchId = ndisIovFindSwitchBySwitchId(a1, a2);
  if ( SwitchBySwitchId )
  {
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
    Flink = SwitchBySwitchId->Flink;
    if ( SwitchBySwitchId->Flink->Blink != SwitchBySwitchId
      || (Blink = SwitchBySwitchId->Blink, Blink->Flink != SwitchBySwitchId) )
    {
      __fastfail(3u);
    }
    v6 = NewIrql;
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    --a1->NumSwitches;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v6);
    ExFreePoolWithTag(SwitchBySwitchId, 0);
  }
}
