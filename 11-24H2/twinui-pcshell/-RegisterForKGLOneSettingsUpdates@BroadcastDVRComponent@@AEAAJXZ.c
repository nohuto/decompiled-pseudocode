/*
 * XREFs of ?RegisterForKGLOneSettingsUpdates@BroadcastDVRComponent@@AEAAJXZ @ 0x180062EFC
 * Callers:
 *     ?RegisterNotifications@BroadcastDVRComponent@@QEAAXXZ @ 0x180062D14 (-RegisterNotifications@BroadcastDVRComponent@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BroadcastDVRComponent::RegisterForKGLOneSettingsUpdates(
        PVOID Context,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  unsigned int Key; // eax
  HANDLE EventW; // rax
  const char *v8; // r9
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  Key = RegCreateKeyExW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\KGL\\OneSettings",
          0,
          0LL,
          0,
          0x20019u,
          0LL,
          (PHKEY)Context + 51,
          0LL);
  if ( Key )
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x366,
             (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
             (const char *)Key,
             a5);
  EventW = CreateEventW(0LL, 0, 1, 0LL);
  *((_QWORD *)Context + 53) = EventW;
  if ( EventW )
  {
    if ( RegisterWaitForSingleObject(
           (PHANDLE)Context + 52,
           EventW,
           BroadcastDVRComponent::StaticKGLSettingsRegistryChangeNotificationCallback,
           Context,
           0xFFFFFFFF,
           0) )
    {
      return 0LL;
    }
    v10 = 883LL;
  }
  else
  {
    v10 = 875LL;
  }
  return wil::details::in1diag3::Return_GetLastError(
           retaddr,
           (void *)v10,
           (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
           v8);
}
