/*
 * XREFs of ?ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z @ 0x1400DE9EC
 * Callers:
 *     ?ndisIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z @ 0x1400DDFA8 (-ndisIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_CA.c)
 *     ?ndisOidPreIovBarResources@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E0230 (-ndisOidPreIovBarResources@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovEnumVPorts@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E1200 (-ndisOidPreIovEnumVPorts@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovFreeVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E1660 (-ndisOidPreIovFreeVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovGetVFVendorDeviceId@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E1800 (-ndisOidPreIovGetVFVendorDeviceId@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovReadVFConfigBlock@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E2210 (-ndisOidPreIovReadVFConfigBlock@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovReadVFConfigSpace@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E23A0 (-ndisOidPreIovReadVFConfigSpace@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovResetVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E2530 (-ndisOidPreIovResetVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovSetVFPowerState@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E2680 (-ndisOidPreIovSetVFPowerState@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovVFParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E27D0 (-ndisOidPreIovVFParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovWriteVFConfigBlock@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E2EB0 (-ndisOidPreIovWriteVFConfigBlock@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovWriteVFConfigSpace@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E3020 (-ndisOidPreIovWriteVFConfigSpace@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ndisSriovInterfaceGetDeviceLocation @ 0x14014BC90 (ndisSriovInterfaceGetDeviceLocation.c)
 * Callees:
 *     <none>
 */

_LIST_ENTRY *__fastcall ndisIovFindVFByVFId(struct _NDIS_MINIPORT_BLOCK *a1, unsigned __int16 a2)
{
  __int64 v2; // r8
  _LIST_ENTRY *i; // rax

  v2 = 0LL;
  for ( i = a1->VFList.Flink; i != &a1->VFList; i = i->Flink )
  {
    if ( WORD1(i[107].Blink) == a2 )
      return i;
    if ( WORD1(i[107].Blink) > a2 )
      return (_LIST_ENTRY *)v2;
  }
  return (_LIST_ENTRY *)v2;
}
