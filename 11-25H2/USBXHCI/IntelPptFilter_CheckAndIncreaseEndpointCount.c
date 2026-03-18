/*
 * XREFs of IntelPptFilter_CheckAndIncreaseEndpointCount @ 0x140084008
 * Callers:
 *     IntelPptFilter_FilterCommand @ 0x140084100 (IntelPptFilter_FilterCommand.c)
 *     IntelPptFilter_FilterEndpointConfigureCommand @ 0x1400842F8 (IntelPptFilter_FilterEndpointConfigureCommand.c)
 * Callees:
 *     WPP_RECORDER_SF_dD @ 0x14000D338 (WPP_RECORDER_SF_dD.c)
 */

char __fastcall IntelPptFilter_CheckAndIncreaseEndpointCount(__int64 a1, int a2)
{
  int v2; // eax
  int v4; // edi
  int v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+30h] [rbp-18h]

  v2 = *(_DWORD *)(a1 + 48);
  v4 = v2 + a2;
  if ( (unsigned int)(v2 + a2) > 0x40 )
    return 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = v2 + a2;
    v6 = *(_DWORD *)(a1 + 48);
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4u,
      0x10u,
      0xDu,
      (__int64)&WPP_0f3e6ee050e235607aa5f43a2d147c91_Traceguids,
      v6,
      v7);
  }
  *(_DWORD *)(a1 + 48) = v4;
  return 1;
}
