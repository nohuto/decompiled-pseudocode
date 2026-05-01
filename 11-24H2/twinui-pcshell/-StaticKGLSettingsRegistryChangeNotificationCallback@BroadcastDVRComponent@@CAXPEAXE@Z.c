/*
 * XREFs of ?StaticKGLSettingsRegistryChangeNotificationCallback@BroadcastDVRComponent@@CAXPEAXE@Z @ 0x1802237C0
 * Callers:
 *     <none>
 * Callees:
 *     ?BroadcastDVRComponent_OneSettingsKGLDataNotification_OnEntry@GameDVRTraceProvider@@SAXXZ @ 0x1802237E4 (-BroadcastDVRComponent_OneSettingsKGLDataNotification_OnEntry@GameDVRTraceProvider@@SAXXZ.c)
 */

void __fastcall BroadcastDVRComponent::StaticKGLSettingsRegistryChangeNotificationCallback(BroadcastDVRComponent *a1)
{
  GameDVRTraceProvider::BroadcastDVRComponent_OneSettingsKGLDataNotification_OnEntry();
  BroadcastDVRComponent::KGLSettingsRegistryChangeNotificationCallback(a1);
}
