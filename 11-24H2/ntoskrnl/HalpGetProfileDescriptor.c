/*
 * XREFs of HalpGetProfileDescriptor @ 0x1404B0FE4
 * Callers:
 *     HalpQueryProfileSource @ 0x1404BBCB0 (HalpQueryProfileSource.c)
 *     HalpRemoveProfileSourceFromList @ 0x140546088 (HalpRemoveProfileSourceFromList.c)
 *     EmonEnableMonitoringEnhanced @ 0x14055B260 (EmonEnableMonitoringEnhanced.c)
 *     EmonEnableMonitoringOriginal @ 0x14055B3C0 (EmonEnableMonitoringOriginal.c)
 *     EmonSetIntervalEnhanced @ 0x14055E730 (EmonSetIntervalEnhanced.c)
 *     EmonSetIntervalOriginal @ 0x14055E930 (EmonSetIntervalOriginal.c)
 *     Amd64EnableMonitoring @ 0x14056AFE0 (Amd64EnableMonitoring.c)
 *     Amd64SetInterval @ 0x14056C7D0 (Amd64SetInterval.c)
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
