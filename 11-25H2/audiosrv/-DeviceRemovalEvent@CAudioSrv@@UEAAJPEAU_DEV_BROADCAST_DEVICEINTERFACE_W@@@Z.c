/*
 * XREFs of ?DeviceRemovalEvent@CAudioSrv@@UEAAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x180066210
 * Callers:
 *     <none>
 * Callees:
 *     ?KsNotifications_AudioInterfaceRemoval@@YAXPEBG@Z @ 0x180066260 (-KsNotifications_AudioInterfaceRemoval@@YAXPEBG@Z.c)
 *     ?MME_AudioInterfaceRemove@@YAJPEBG@Z @ 0x180066380 (-MME_AudioInterfaceRemove@@YAJPEBG@Z.c)
 */

__int64 __fastcall CAudioSrv::DeviceRemovalEvent(CAudioSrv *this, struct _DEV_BROADCAST_DEVICEINTERFACE_W *a2)
{
  wchar_t *dbcc_name; // rbx
  unsigned int v3; // edi
  unsigned int v4; // edi

  dbcc_name = a2->dbcc_name;
  v3 = MME_AudioInterfaceRemove(a2->dbcc_name);
  KsNotifications_AudioInterfaceRemoval(dbcc_name);
  v4 = v3 >> 31;
  if ( (int)FlushDeviceTopologyCache(dbcc_name) < 0 )
    return 1;
  return v4;
}
