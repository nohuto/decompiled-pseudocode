/*
 * XREFs of ?ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z @ 0x1400E5BFC
 * Callers:
 *     ?ndisIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z @ 0x1400E51B8 (-ndisIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_CA.c)
 *     ?ndisOidPreIovBarResources@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E7440 (-ndisOidPreIovBarResources@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovEnumVPorts@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E8410 (-ndisOidPreIovEnumVPorts@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovFreeVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E8870 (-ndisOidPreIovFreeVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovGetVFVendorDeviceId@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E8A10 (-ndisOidPreIovGetVFVendorDeviceId@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovReadVFConfigBlock@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E9420 (-ndisOidPreIovReadVFConfigBlock@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovReadVFConfigSpace@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E95B0 (-ndisOidPreIovReadVFConfigSpace@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovResetVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E9740 (-ndisOidPreIovResetVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovSetVFPowerState@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E9890 (-ndisOidPreIovSetVFPowerState@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovVFParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E99E0 (-ndisOidPreIovVFParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovWriteVFConfigBlock@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400EA0C0 (-ndisOidPreIovWriteVFConfigBlock@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovWriteVFConfigSpace@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400EA230 (-ndisOidPreIovWriteVFConfigSpace@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ndisSriovInterfaceGetDeviceLocation @ 0x140156960 (ndisSriovInterfaceGetDeviceLocation.c)
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
