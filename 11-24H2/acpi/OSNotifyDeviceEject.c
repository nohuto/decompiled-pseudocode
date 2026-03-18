/*
 * XREFs of OSNotifyDeviceEject @ 0x140063E20
 * Callers:
 *     NotifyHandler @ 0x140017F80 (NotifyHandler.c)
 *     OSNotifyDeviceCheck @ 0x140029BD4 (OSNotifyDeviceCheck.c)
 * Callees:
 *     ACPIBuildSynchronizationRequestInternal @ 0x140029D5C (ACPIBuildSynchronizationRequestInternal.c)
 *     WPP_RECORDER_SF_qs @ 0x14002AF70 (WPP_RECORDER_SF_qs.c)
 */

__int64 __fastcall OSNotifyDeviceEject(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // edx
  __int64 v6; // rcx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    dword_140088A00 = *(_DWORD *)(*(_QWORD *)a1 + 40LL);
    v5 = dword_140088A00;
    LOBYTE(v5) = 4;
    byte_140088A04 = 0;
    WPP_RECORDER_SF_qs(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      12,
      25,
      (__int64)&WPP_537052fec54a3dab9555f154ee754e1c_Traceguids,
      a1,
      (__int64)&dword_140088A00);
  }
  v6 = *(_QWORD *)(*(_QWORD *)a1 + 104LL);
  if ( v6 )
    ACPIBuildSynchronizationRequestInternal(
      v6,
      (__int64)ACPIBuildIssueNotifyDeviceEject,
      *(_QWORD *)(*(_QWORD *)a1 + 104LL),
      a4,
      1);
  return 0LL;
}
