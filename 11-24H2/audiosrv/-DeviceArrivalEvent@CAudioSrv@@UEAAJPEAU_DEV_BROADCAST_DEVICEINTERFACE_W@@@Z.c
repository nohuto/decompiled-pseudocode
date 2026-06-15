/*
 * XREFs of ?DeviceArrivalEvent@CAudioSrv@@UEAAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x1800672A0
 * Callers:
 *     <none>
 * Callees:
 *     ?KsNotifications_AudioInterfaceArrival@@YAXPEBG@Z @ 0x180067310 (-KsNotifications_AudioInterfaceArrival@@YAXPEBG@Z.c)
 *     ?MME_AudioInterfaceArrival@@YAJPEBG@Z @ 0x18006744C (-MME_AudioInterfaceArrival@@YAJPEBG@Z.c)
 */

__int64 __fastcall CAudioSrv::DeviceArrivalEvent(CAudioSrv *this, struct _DEV_BROADCAST_DEVICEINTERFACE_W *a2)
{
  wchar_t *dbcc_name; // rbx
  unsigned int v3; // edi

  dbcc_name = a2->dbcc_name;
  v3 = (unsigned int)MME_AudioInterfaceArrival((const unsigned __int16 *)this) >> 31;
  if ( (int)FlushDeviceTopologyCache(dbcc_name) < 0 )
    v3 = 1;
  KsNotifications_AudioInterfaceArrival(dbcc_name);
  if ( (int)FlushDeviceTopologyCache(dbcc_name) < 0 )
    return 1;
  return v3;
}
