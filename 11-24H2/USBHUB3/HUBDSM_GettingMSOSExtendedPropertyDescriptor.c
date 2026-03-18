/*
 * XREFs of HUBDSM_GettingMSOSExtendedPropertyDescriptor @ 0x140022E90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x14000A83C (HUBSM_AddEvent.c)
 *     HUBDTX_GetMsOsFeatureDescriptor @ 0x14002B970 (HUBDTX_GetMsOsFeatureDescriptor.c)
 */

__int64 __fastcall HUBDSM_GettingMSOSExtendedPropertyDescriptor(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  int MsOsFeatureDescriptor; // eax
  __int64 v6; // [rsp+28h] [rbp-10h]

  v3 = *(_QWORD *)(a1 + 960);
  MsOsFeatureDescriptor = HUBDTX_GetMsOsFeatureDescriptor(
                            v3,
                            1,
                            a3,
                            5,
                            *(_QWORD *)(v3 + 2120),
                            *(unsigned int *)(v3 + 1740));
  if ( MsOsFeatureDescriptor < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v6) = MsOsFeatureDescriptor;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
        2u,
        5u,
        0x66u,
        (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids,
        v6);
    }
    HUBSM_AddEvent(v3 + 512, 4004);
  }
  return 1000LL;
}
