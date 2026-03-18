/*
 * XREFs of ACPIBuildProcessPowerResourcePhasePep @ 0x140059060
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteGeneric @ 0x14001FA50 (ACPIBuildCompleteGeneric.c)
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1400205DC (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 *     WPP_RECORDER_SF_Lqs @ 0x14005AAC4 (WPP_RECORDER_SF_Lqs.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 */

__int64 __fastcall ACPIBuildProcessPowerResourcePhasePep(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  int v5; // ebx

  v3 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 32) = 4;
  v5 = 0;
  if ( (*(_DWORD *)(v3 + 16) & 0x4000LL) == 0 )
  {
    _InterlockedOr64((volatile signed __int64 *)(v3 + 16), 0x4000uLL);
    v5 = AcpiNotifyPlExtDiscoverDeviceAsync(*(_QWORD *)(v3 + 32), (__int64)ACPIBuildDiscoverPowerNodeCompletion, a1);
    if ( v5 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lqs(WPP_GLOBAL_Control->DeviceExtension, 2, a3, 56);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lqs(WPP_GLOBAL_Control->DeviceExtension, 4, a3, 57);
  if ( v5 != 259 )
    ACPIBuildCompleteGeneric(0LL, v5, 0LL, a1);
  return (unsigned int)v5;
}
