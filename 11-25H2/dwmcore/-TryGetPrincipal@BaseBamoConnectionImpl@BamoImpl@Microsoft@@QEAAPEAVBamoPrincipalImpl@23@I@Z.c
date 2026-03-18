/*
 * XREFs of ?TryGetPrincipal@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoPrincipalImpl@23@I@Z @ 0x18025A920
 * Callers:
 *     ?AckProxyReference@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I_N@Z @ 0x1802301B0 (-AckProxyReference@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I_N@Z.c)
 *     ?ProxyDisposed@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I@Z @ 0x180279CD0 (-ProxyDisposed@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I@Z.c)
 *     ?RequestDisposeProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I@Z @ 0x180279EA0 (-RequestDisposeProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I@Z.c)
 *     ?Thunk_ClearPrincipalReady_5@?$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18027A4A0 (-Thunk_ClearPrincipalReady_5@-$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovid.c)
 *     ?Thunk_MarkPrincipalReadyOnPropertiesRefreshed_5@?$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18027A5B0 (-Thunk_MarkPrincipalReadyOnPropertiesRefreshed_5@-$IBamoPeer_dataprovider_AutoBamos_Receive@VBam.c)
 * Callees:
 *     ?IsPendingRemovalFromItemTable@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEBA_NI@Z @ 0x1801D0DE0 (-IsPendingRemovalFromItemTable@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEBA_NI@Z.c)
 *     ?TryGetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z @ 0x18027A96C (-TryGetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z.c)
 */

struct Microsoft::BamoImpl::BamoPrincipalImpl *__fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetPrincipal(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        int a2)
{
  unsigned int v2; // edx
  unsigned int *v3; // rcx
  struct Microsoft::BamoImpl::ConversationItem *Item; // rax

  if ( Microsoft::BamoImpl::BaseBamoConnectionImpl::IsPendingRemovalFromItemTable(this, a2) )
    return 0LL;
  Item = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetItem(
           (Microsoft::BamoImpl::BaseBamoConnectionImpl *)v3,
           v3[7],
           v2);
  if ( !Item )
    return 0LL;
  else
    return (struct Microsoft::BamoImpl::BamoPrincipalImpl *)(*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::ConversationItem *))(*(_QWORD *)Item + 40LL))(Item);
}
