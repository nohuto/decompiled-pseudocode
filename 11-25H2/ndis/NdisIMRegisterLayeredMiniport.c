/*
 * XREFs of NdisIMRegisterLayeredMiniport @ 0x14009CC80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisIfEnsureNsiInitialized@@YAJXZ @ 0x1401737F0 (-ndisIfEnsureNsiInitialized@@YAJXZ.c)
 *     ?ndisRegisterMiniportDriver@@_Y2PAGENPNP@@AHPEAXPEAU_NDIS51_MINIPORT_CHARACTERISTICS@@IPEAPEAX@Z @ 0x14017B298 (-ndisRegisterMiniportDriver@@_Y2PAGENPNP@@AHPEAXPEAU_NDIS51_MINIPORT_CHARACTERISTICS@@IPEAPEAX@Z.c)
 */

NDIS_STATUS __stdcall NdisIMRegisterLayeredMiniport(
        NDIS_HANDLE NdisWrapperHandle,
        PNDIS_MINIPORT_CHARACTERISTICS MiniportCharacteristics,
        UINT CharacteristicsLength,
        PNDIS_HANDLE DriverHandle)
{
  struct _NDIS51_MINIPORT_CHARACTERISTICS *v6; // rbx
  NDIS_STATUS v8; // ebx
  char *v9; // rcx

  v6 = (struct _NDIS51_MINIPORT_CHARACTERISTICS *)MiniportCharacteristics;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(MiniportCharacteristics) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)MiniportCharacteristics,
      1,
      12,
      (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
      (char)NdisWrapperHandle);
  }
  ndisIfEnsureNsiInitialized();
  if ( v6->Ndis50Chars.MajorNdisVersion < 6u )
  {
    v8 = ndisRegisterMiniportDriver(NdisWrapperHandle, v6, CharacteristicsLength, DriverHandle);
    if ( !v8 )
    {
      v9 = (char *)*DriverHandle;
      *((_WORD *)v9 + 13) |= 1u;
      KeInitializeMutex((PRKMUTEX)(v9 + 416), 0xFFFFu);
    }
  }
  else
  {
    v8 = -1073676284;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xDu,
      (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
      (char)*DriverHandle,
      v8);
  return v8;
}
