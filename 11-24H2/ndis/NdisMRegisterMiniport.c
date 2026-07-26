/*
 * XREFs of NdisMRegisterMiniport @ 0x1400940A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     ?ndisIfEnsureNsiInitialized@@YAJXZ @ 0x140167070 (-ndisIfEnsureNsiInitialized@@YAJXZ.c)
 *     ?ndisRegisterMiniportDriver@@_Y2PAGENPNP@@AHPEAXPEAU_NDIS51_MINIPORT_CHARACTERISTICS@@IPEAPEAX@Z @ 0x140170298 (-ndisRegisterMiniportDriver@@_Y2PAGENPNP@@AHPEAXPEAU_NDIS51_MINIPORT_CHARACTERISTICS@@IPEAPEAX@Z.c)
 */

NDIS_STATUS __stdcall NdisMRegisterMiniport(
        NDIS_HANDLE NdisWrapperHandle,
        PNDIS_MINIPORT_CHARACTERISTICS MiniportCharacteristics,
        UINT CharacteristicsLength)
{
  char v3; // si
  struct _NDIS51_MINIPORT_CHARACTERISTICS *v5; // rdi
  NDIS_STATUS v7; // ebx
  int v8; // eax
  char v10[4]; // [rsp+30h] [rbp-28h]
  void *v11; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v11 = 0LL;
  v5 = (struct _NDIS51_MINIPORT_CHARACTERISTICS *)MiniportCharacteristics;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(MiniportCharacteristics) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)MiniportCharacteristics,
      1,
      10,
      (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
      (char)NdisWrapperHandle);
  }
  ndisIfEnsureNsiInitialized();
  if ( CharacteristicsLength >= 0x70 )
  {
    if ( v5->Ndis50Chars.MajorNdisVersion < 6u )
    {
      v8 = ndisRegisterMiniportDriver(NdisWrapperHandle, v5, CharacteristicsLength, &v11);
      v3 = (char)v11;
      v7 = v8;
    }
    else
    {
      v7 = -1073676284;
    }
  }
  else
  {
    v7 = -1073676283;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v10 = v7;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xBu,
      (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
      v3,
      *(_DWORD *)v10);
  }
  return v7;
}
