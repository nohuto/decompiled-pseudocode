/*
 * XREFs of ?UninitializeEndpointCharacteristicsCache@@YAJXZ @ 0x180138BF4
 * Callers:
 *     ?VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ @ 0x1800D092C (-VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 UninitializeEndpointCharacteristicsCache(void)
{
  if ( g_pEndpointCharacteristicsCache )
  {
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)g_pEndpointCharacteristicsCache + 32LL))(g_pEndpointCharacteristicsCache);
    if ( g_pEndpointCharacteristicsCache )
    {
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)g_pEndpointCharacteristicsCache + 16LL))(g_pEndpointCharacteristicsCache);
      g_pEndpointCharacteristicsCache = 0LL;
    }
  }
  return 0LL;
}
