/*
 * XREFs of InitAcpi2CStates @ 0x140024B88
 * Callers:
 *     InitAcpiCStates @ 0x140024CE4 (InitAcpiCStates.c)
 *     AcpiCStateNotifyWorker @ 0x1400272B0 (AcpiCStateNotifyWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003B54 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140003C68 (WPP_RECORDER_SF_.c)
 *     AcpiEval_CST @ 0x140027FB8 (AcpiEval_CST.c)
 *     ValidateAcpiCStates @ 0x14002F468 (ValidateAcpiCStates.c)
 */

__int64 __fastcall InitAcpi2CStates(__int64 a1, _QWORD *a2)
{
  int v4; // eax
  int v5; // edx
  int v6; // ebx
  void *v7; // rsi
  int v8; // edx
  void *v9; // rcx
  void *v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = 0LL;
  v4 = AcpiEval_CST(a1, &v11);
  v6 = v4;
  if ( v4 >= 0 )
  {
    v7 = v11;
    v6 = ValidateAcpiCStates(v11, *(_QWORD *)(a1 + 64));
    if ( v6 >= 0 )
    {
      v9 = 0LL;
      *a2 = v7;
      v6 = 0;
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 8u);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = 2;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v8,
          3,
          12,
          (__int64)&WPP_ff5db5ce49003870a96aee4ed20ca55b_Traceguids,
          v6);
      }
      v9 = v11;
    }
    if ( v9 )
      ExFreePoolWithTag(v9, (ULONG)0);
  }
  else if ( v4 == -1073741772 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 4;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v5,
        2,
        10,
        (__int64)&WPP_ff5db5ce49003870a96aee4ed20ca55b_Traceguids);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 3;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      3,
      11,
      (__int64)&WPP_ff5db5ce49003870a96aee4ed20ca55b_Traceguids,
      v4);
  }
  return (unsigned int)v6;
}
