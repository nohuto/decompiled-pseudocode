/*
 * XREFs of InitAcpi2CStates @ 0x14003EC1C
 * Callers:
 *     AcpiCStateNotifyWorker @ 0x14003E9A0 (AcpiCStateNotifyWorker.c)
 *     InitAcpiCStates @ 0x140046BB8 (InitAcpiCStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003CF8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1400050E8 (WPP_RECORDER_SF_D.c)
 *     AcpiEval_CST @ 0x14003F2EC (AcpiEval_CST.c)
 *     ValidateAcpiCStates @ 0x14003FB70 (ValidateAcpiCStates.c)
 */

__int64 __fastcall InitAcpi2CStates(__int64 a1, _QWORD *a2)
{
  int v4; // edx
  int v5; // ebx
  void *v6; // rsi
  void *v7; // rcx
  void *v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = 0LL;
  v5 = AcpiEval_CST(a1, &v9);
  if ( v5 < 0 )
  {
    if ( v5 == -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v4) = 4;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v4,
          2,
          10,
          (__int64)&WPP_ff5db5ce49003870a96aee4ed20ca55b_Traceguids);
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0xBu,
        (__int64)&WPP_ff5db5ce49003870a96aee4ed20ca55b_Traceguids,
        v5);
    }
  }
  else
  {
    v6 = v9;
    v5 = ValidateAcpiCStates(v9, *(_QWORD *)(a1 + 64));
    if ( v5 < 0 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 8u);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          3u,
          0xCu,
          (__int64)&WPP_ff5db5ce49003870a96aee4ed20ca55b_Traceguids,
          v5);
      v7 = v9;
    }
    else
    {
      v7 = 0LL;
      *a2 = v6;
      v5 = 0;
    }
    if ( v7 )
      ExFreePoolWithTag(v7, (ULONG)0);
  }
  return (unsigned int)v5;
}
