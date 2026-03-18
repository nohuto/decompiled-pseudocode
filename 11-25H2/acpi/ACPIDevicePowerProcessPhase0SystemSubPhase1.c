/*
 * XREFs of ACPIDevicePowerProcessPhase0SystemSubPhase1 @ 0x1400314A0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompleteGenericPhase @ 0x14001D4D0 (ACPIDeviceCompleteGenericPhase.c)
 *     AMLIResumeInterpreter @ 0x14002D894 (AMLIResumeInterpreter.c)
 *     WPP_RECORDER_SF_qqss @ 0x140033134 (WPP_RECORDER_SF_qqss.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase0SystemSubPhase1(__int64 a1)
{
  _QWORD *v1; // rax
  __int64 v3; // rdx
  const char *v4; // rcx
  const char *v5; // r8
  _UNKNOWN **v6; // rdx

  v1 = *(_QWORD **)(a1 + 40);
  if ( v1 )
  {
    v3 = v1[1];
    v4 = byte_140075488;
    v5 = byte_140075488;
    if ( (v3 & 0x200000000000LL) != 0 )
    {
      v4 = (const char *)v1[76];
      if ( (v3 & 0x400000000000LL) != 0 )
        v5 = (const char *)v1[77];
    }
    v6 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_qqss(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v6,
        10,
        54,
        (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
        a1,
        (char)v1,
        (__int64)v4,
        (__int64)v5);
    }
  }
  *(_DWORD *)(a1 + 212) = 0;
  if ( *(_DWORD *)(a1 + 104) == 1 )
    AMLIResumeInterpreter();
  ACPIDeviceCompleteGenericPhase(0LL, 0, 0LL, a1);
  return 0LL;
}
