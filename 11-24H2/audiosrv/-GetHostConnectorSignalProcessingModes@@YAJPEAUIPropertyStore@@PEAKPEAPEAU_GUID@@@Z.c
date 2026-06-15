/*
 * XREFs of ?GetHostConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@PEAKPEAPEAU_GUID@@@Z @ 0x18002A614
 * Callers:
 *     ?DiscoverConnectorCapabilities@CEndpointCharacteristics@@AEAAJXZ @ 0x1801339EC (-DiscoverConnectorCapabilities@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ?GetConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@1PEAKPEAPEAU_GUID@@@Z @ 0x180028F94 (-GetConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@1PEAKPEAPEAU_GUI.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 */

__int64 __fastcall GetHostConnectorSignalProcessingModes(
        struct IPropertyStore *a1,
        unsigned int *a2,
        struct _GUID **pv)
{
  struct _tagpropertykey v4; // [rsp+30h] [rbp-40h] BYREF
  struct _tagpropertykey v5; // [rsp+48h] [rbp-28h] BYREF

  *a2 = 0;
  *pv = 0LL;
  v5.pid = 1;
  v4.pid = 1;
  v5.fmtid.Data1 = 590439624;
  *(_DWORD *)&v5.fmtid.Data2 = 1283267372;
  *(_DWORD *)v5.fmtid.Data4 = 1907779772;
  *(_DWORD *)&v5.fmtid.Data4[4] = 1730509416;
  v4.fmtid.Data1 = -1702713381;
  *(_DWORD *)&v4.fmtid.Data2 = 1102331579;
  *(_DWORD *)v4.fmtid.Data4 = -1223116157;
  *(_DWORD *)&v4.fmtid.Data4[4] = -65530063;
  return GetConnectorSignalProcessingModes(a1, &v5, &v4, a2, pv);
}
