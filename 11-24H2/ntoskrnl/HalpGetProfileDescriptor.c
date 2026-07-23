/*
 * XREFs of HalpGetProfileDescriptor @ 0x1404AB874
 * Callers:
 *     HalpQueryProfileSource @ 0x1404B6BC0 (HalpQueryProfileSource.c)
 *     HalpRemoveProfileSourceFromList @ 0x140543948 (HalpRemoveProfileSourceFromList.c)
 *     EmonEnableMonitoringEnhanced @ 0x140558E90 (EmonEnableMonitoringEnhanced.c)
 *     EmonEnableMonitoringOriginal @ 0x140558FF0 (EmonEnableMonitoringOriginal.c)
 *     EmonSetIntervalEnhanced @ 0x14055C360 (EmonSetIntervalEnhanced.c)
 *     EmonSetIntervalOriginal @ 0x14055C560 (EmonSetIntervalOriginal.c)
 *     Amd64EnableMonitoring @ 0x140568470 (Amd64EnableMonitoring.c)
 *     Amd64SetInterval @ 0x140569C60 (Amd64SetInterval.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpGetProfileDescriptor(int a1, __int64 a2, _QWORD *a3)
{
  __int64 *i; // rax

  for ( i = (__int64 *)HalpProfileSourceDescriptorListHead; ; i = (__int64 *)*i )
  {
    if ( i == &HalpProfileSourceDescriptorListHead )
      return 3221225659LL;
    if ( *((_DWORD *)i - 2) == a1 )
      break;
  }
  *a3 = i - 1;
  return 0LL;
}
