/*
 * XREFs of ?ndisIfUpdateL2MtuSizeAndNotify@@YAXPEAU_NDIS_IF_BLOCK@@K@Z @ 0x140147948
 * Callers:
 *     ?ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1401610C0 (-ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z.c)
 * Callees:
 *     ?ndisIfUpdateL2MtuSize@@YA_NPEAU_NDIS_IF_BLOCK@@K@Z @ 0x1400C8BDC (-ndisIfUpdateL2MtuSize@@YA_NPEAU_NDIS_IF_BLOCK@@K@Z.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1401606E0 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

void __fastcall ndisIfUpdateL2MtuSizeAndNotify(struct _NDIS_IF_BLOCK *a1, unsigned int a2)
{
  _DWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int *p_ifMtu; // [rsp+28h] [rbp-20h]
  int v5; // [rsp+30h] [rbp-18h]
  int v6; // [rsp+34h] [rbp-14h]

  if ( ndisIfUpdateL2MtuSize(a1, a2) )
  {
    v3[1] = 0;
    p_ifMtu = &a1->ifMtu;
    v3[0] = 1;
    v5 = 4;
    v6 = 544;
    ndisNsiNotifyClientInterfaceChange(a1, 0LL, v3, 1LL);
  }
}
