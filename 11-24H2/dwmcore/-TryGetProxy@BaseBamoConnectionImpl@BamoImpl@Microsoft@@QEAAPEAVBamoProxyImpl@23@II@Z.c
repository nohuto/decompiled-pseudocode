/*
 * XREFs of ?TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z @ 0x1802702C0
 * Callers:
 *     ?Register@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x1801A8A14 (-Register@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?DisposeProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I_N@Z @ 0x18026E620 (-DisposeProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I_N@Z.c)
 *     ?SetBootstrapProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I@Z @ 0x18026FAE0 (-SetBootstrapProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I@Z.c)
 *     ?Thunk_ClearProxyReady_5@?$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18026FE00 (-Thunk_ClearProxyReady_5@-$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_A.c)
 *     ?Thunk_MarkProxyReadyOnPropertiesRefreshed_5@?$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18026FF40 (-Thunk_MarkProxyReadyOnPropertiesRefreshed_5@-$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPee.c)
 *     ?Thunk_MarkProxyReady_5@?$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18026FFD0 (-Thunk_MarkProxyReady_5@-$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_Au.c)
 *     ?Unregister@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x180271080 (-Unregister@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?AddDataSource@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z @ 0x18027CF30 (-AddDataSource@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?RemoveDataSource@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z @ 0x18027D8AC (-RemoveDataSource@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?UpdateRestrictToProcessIds@BamoDataSourceProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x18027E124 (-UpdateRestrictToProcessIds@BamoDataSourceProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 * Callees:
 *     ?TryGetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z @ 0x18027025C (-TryGetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z.c)
 */

struct Microsoft::BamoImpl::BamoProxyImpl *__fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetProxy(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        __int64 a2,
        __int64 a3)
{
  struct Microsoft::BamoImpl::BamoProxyImpl *result; // rax

  result = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetItem(this, a2, a3);
  if ( result )
    return (struct Microsoft::BamoImpl::BamoProxyImpl *)(*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoProxyImpl *))(*(_QWORD *)result + 48LL))(result);
  return result;
}
