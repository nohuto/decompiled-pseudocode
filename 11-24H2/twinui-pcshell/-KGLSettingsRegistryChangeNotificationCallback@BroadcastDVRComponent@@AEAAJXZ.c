/*
 * XREFs of ?KGLSettingsRegistryChangeNotificationCallback@BroadcastDVRComponent@@AEAAJXZ @ 0x1802BC6B0
 * Callers:
 *     ?StaticKGLSettingsRegistryChangeNotificationCallback@BroadcastDVRComponent@@CAXPEAXE@Z @ 0x1802237C0 (-StaticKGLSettingsRegistryChangeNotificationCallback@BroadcastDVRComponent@@CAXPEAXE@Z.c)
 * Callees:
 *     ?QueueNotifyGameBarForKGLUpdateIfNecessary@BroadcastDVRComponent@@AEAAJPEAK0@Z @ 0x180059574 (-QueueNotifyGameBarForKGLUpdateIfNecessary@BroadcastDVRComponent@@AEAAJPEAK0@Z.c)
 *     ?BroadcastDVRComponent_OneSettingsKGLDataNotification_OnExit@GameDVRTraceProvider@@SAXJJKK@Z @ 0x18021DF6C (-BroadcastDVRComponent_OneSettingsKGLDataNotification_OnExit@GameDVRTraceProvider@@SAXJJKK@Z.c)
 */

__int64 __fastcall BroadcastDVRComponent::KGLSettingsRegistryChangeNotificationCallback(BroadcastDVRComponent *this)
{
  BroadcastDVRComponent *v1; // rbx
  int v2; // edi
  unsigned int v4; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0;
  v4 = 0;
  v1 = this;
  v2 = BroadcastDVRComponent::QueueNotifyGameBarForKGLUpdateIfNecessary(this, &v5, &v4);
  LODWORD(v1) = RegNotifyChangeKeyValue(*((HKEY *)v1 + 51), 1, 0x10000004u, *((HANDLE *)v1 + 53), 1);
  GameDVRTraceProvider::BroadcastDVRComponent_OneSettingsKGLDataNotification_OnExit((int)v1, v2, v5, v4);
  return (unsigned int)v1;
}
