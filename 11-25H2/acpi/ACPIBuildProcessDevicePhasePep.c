/*
 * XREFs of ACPIBuildProcessDevicePhasePep @ 0x140020340
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x14001E4C0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIBuildCompleteGeneric @ 0x14001FA50 (ACPIBuildCompleteGeneric.c)
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1400205DC (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhasePep(__int64 a1)
{
  __int64 v1; // rbx
  const char *v2; // rsi
  int v4; // edi
  char v5; // dl
  const char *v6; // rax
  __int64 v7; // rcx
  __int64 v9; // rax
  const char *v10; // rdx
  const char *v11; // rcx

  v1 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 32) = 4;
  v2 = byte_140075488;
  v4 = 0;
  if ( (*(_DWORD *)(v1 + 1120) & 0x2000000) == 0 )
  {
    _InterlockedOr64((volatile signed __int64 *)(v1 + 1120), 0x2000000uLL);
    v4 = AcpiNotifyPlExtDiscoverDeviceAsync(*(_QWORD *)(v1 + 760), ACPIBuildDiscoverDeviceCompletion, a1);
    if ( v4 < 0 )
    {
      v9 = *(_QWORD *)(v1 + 8);
      v10 = byte_140075488;
      v11 = byte_140075488;
      if ( (v9 & 0x200000000000LL) != 0 )
      {
        v10 = *(const char **)(v1 + 608);
        if ( (v9 & 0x400000000000LL) != 0 )
          v11 = *(const char **)(v1 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Lqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          6u,
          0x1Du,
          (__int64)&WPP_a066bce47e7f3a3d1099cda73e5d7dd3_Traceguids,
          v4,
          v1,
          v10,
          v11);
    }
  }
  v5 = 0;
  v6 = byte_140075488;
  if ( v1 )
  {
    v7 = *(_QWORD *)(v1 + 8);
    v5 = v1;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v2 = *(const char **)(v1 + 608);
      if ( (v7 & 0x400000000000LL) != 0 )
        v6 = *(const char **)(v1 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x1Eu,
      (__int64)&WPP_a066bce47e7f3a3d1099cda73e5d7dd3_Traceguids,
      v4,
      v5,
      v2,
      v6);
  if ( v4 == 259 )
    return 0;
  else
    ACPIBuildCompleteGeneric(0LL, v4, 0LL, a1);
  return (unsigned int)v4;
}
