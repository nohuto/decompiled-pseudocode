/*
 * XREFs of ?DestroyDeviceGraphManager@@YAXXZ @ 0x1800F5794
 * Callers:
 *     ?VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ @ 0x1800D092C (-VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void DestroyDeviceGraphManager(void)
{
  if ( g_ProcessSubmixManager )
  {
    (*(void (__fastcall **)(struct IProcessSubmixManager *))(*(_QWORD *)g_ProcessSubmixManager + 16LL))(g_ProcessSubmixManager);
    g_ProcessSubmixManager = 0LL;
  }
  if ( g_DeviceGraphManager )
  {
    (*(void (__fastcall **)(struct IDeviceGraphManager *))(*(_QWORD *)g_DeviceGraphManager + 16LL))(g_DeviceGraphManager);
    g_DeviceGraphManager = 0LL;
  }
}
