/*
 * XREFs of ACPIDevicePowerProcessPhase5DeviceSubPhase5 @ 0x14001D940
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompletePhase3Common @ 0x14001D478 (ACPIDeviceCompletePhase3Common.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x14001D4D0 (ACPIDeviceCompleteGenericPhase.c)
 *     WPP_RECORDER_SF_qqss @ 0x140033134 (WPP_RECORDER_SF_qqss.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5DeviceSubPhase5(__int64 a1)
{
  _QWORD *v1; // rdi
  char v3; // al
  const char *v4; // rcx
  const char *v5; // r8
  __int64 v6; // rdx
  _UNKNOWN **v7; // rdx
  __int64 v8; // rcx

  v1 = *(_QWORD **)(a1 + 40);
  v3 = 0;
  v4 = byte_140075488;
  v5 = byte_140075488;
  if ( v1 )
  {
    v6 = v1[1];
    v3 = (char)v1;
    if ( (v6 & 0x200000000000LL) != 0 )
    {
      v4 = (const char *)v1[76];
      if ( (v6 & 0x400000000000LL) != 0 )
        v5 = (const char *)v1[77];
    }
  }
  v7 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_qqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v7,
      10,
      82,
      (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
      a1,
      v3,
      (__int64)v4,
      (__int64)v5);
  }
  *(_DWORD *)(a1 + 212) = 8;
  v8 = *(_QWORD *)(a1 + 232);
  if ( (v8 & 9) == 9 && ((v8 & 2) != 0 || (v1[1] & 0x40) != 0) )
  {
    *(_OWORD *)(a1 + 216) = 0LL;
    *(_OWORD *)(a1 + 232) = 0LL;
    *(_QWORD *)(a1 + 248) = 0LL;
    ACPIDeviceCompleteGenericPhase(0LL, 0, 0LL, a1);
  }
  else
  {
    *(_DWORD *)(a1 + 256) = -1073741436;
    ACPIDeviceCompletePhase3Common((volatile signed __int32 *)(a1 + 208), 2);
  }
  return 0LL;
}
