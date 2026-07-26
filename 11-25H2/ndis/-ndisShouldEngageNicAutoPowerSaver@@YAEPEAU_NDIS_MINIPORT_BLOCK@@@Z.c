/*
 * XREFs of ?ndisShouldEngageNicAutoPowerSaver@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14007A630
 * Callers:
 *     ?ndisSubmitIdleRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x14007A3D0 (-ndisSubmitIdleRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qDL @ 0x140027200 (WPP_RECORDER_SF_qDL.c)
 *     ?ndisAoAcIsControlPathAoAcNicReferencePresent@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14009B0B8 (-ndisAoAcIsControlPathAoAcNicReferencePresent@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

unsigned __int8 __fastcall ndisShouldEngageNicAutoPowerSaver(struct _NDIS_MINIPORT_BLOCK *a1)
{
  char v1; // bl
  int v2; // edx

  v1 = (char)a1;
  if ( !a1->AoAc
    || (a1->PnPFlags & 0x60) != 0x60
    || (unsigned int)(a1->DeviceCaps.DeviceWake - 2) > 2
    || (a1->PMHardwareCapabilities.Flags & 4) == 0
    || ndisAoAcIsControlPathAoAcNicReferencePresent(a1) )
  {
    return 0;
  }
  if ( ndisIsScreenOnNapsEnabled == 1 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v2) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v2,
        15,
        41,
        (struct _GUID *)&WPP_0da1f7415b08391dc91ed9194dfe6793_Traceguids,
        v1);
    }
    return 1;
  }
  if ( !ndisLowPowerEpoch && !ndisConnectedStandby )
    return 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
    return 1;
  WPP_RECORDER_SF_qDL(
    *((_QWORD *)WPP_GLOBAL_Control + 8),
    v2,
    0xFu,
    0x2Au,
    (struct _GUID *)&WPP_0da1f7415b08391dc91ed9194dfe6793_Traceguids,
    v1,
    ndisLowPowerEpoch,
    ndisConnectedStandby);
  return 1;
}
