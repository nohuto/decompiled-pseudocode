/*
 * XREFs of NdisConvertNtStatusToNdisStatus @ 0x140057110
 * Callers:
 *     NdisOpenConfiguration @ 0x140076B10 (NdisOpenConfiguration.c)
 *     NdisLWMRegisterMiniportDriver @ 0x140093240 (NdisLWMRegisterMiniportDriver.c)
 *     ndisRegisterFilterTriageData @ 0x140098178 (ndisRegisterFilterTriageData.c)
 *     ndisRegisterFilterDriverTriageData @ 0x14009A1DC (ndisRegisterFilterDriverTriageData.c)
 *     ?ndisOidPreRcvFilterSetFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400AAD50 (-ndisOidPreRcvFilterSetFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisSetReceiveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_CAPABILITIES@@PEAU_NDIS_SRIOV_CAPABILITIES@@@Z @ 0x1400AB060 (-ndisSetReceiveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_.c)
 *     ?ndisXlateAddPacketPatternToWolPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1400B6274 (-ndisXlateAddPacketPatternToWolPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ndisRegisterCommonOpenTriageData @ 0x1400B8298 (ndisRegisterCommonOpenTriageData.c)
 *     ndisRegisterProtocolTriageData @ 0x1400B8354 (ndisRegisterProtocolTriageData.c)
 *     ?ndisSetTaskOffloadValidate@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400BF380 (-ndisSetTaskOffloadValidate@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_.c)
 *     ndisWdfOpenConfiguration @ 0x140136A1C (ndisWdfOpenConfiguration.c)
 *     NdisRegisterPoll @ 0x14014A2E0 (NdisRegisterPoll.c)
 *     ?ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14015BAD0 (-ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017BC40 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NdisConvertNtStatusToNdisStatus(int a1)
{
  __int64 result; // rax

  if ( a1 < 0 )
  {
    result = 3221291030LL;
    if ( a1 != -1073741789 )
      return (unsigned int)a1;
  }
  else
  {
    if ( a1 != 259 && a1 != 1076035585 )
      return 0;
    return (unsigned int)a1;
  }
  return result;
}
