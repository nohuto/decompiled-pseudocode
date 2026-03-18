/*
 * XREFs of IntelPptFilter_DecreaseEndpointCount @ 0x14008408C
 * Callers:
 *     IntelPptFilter_FilterCommandCompletion @ 0x140084230 (IntelPptFilter_FilterCommandCompletion.c)
 *     IntelPptFilter_FilterEndpointConfigureCommand @ 0x1400842F8 (IntelPptFilter_FilterEndpointConfigureCommand.c)
 * Callees:
 *     WPP_RECORDER_SF_dD @ 0x14001BF58 (WPP_RECORDER_SF_dD.c)
 */

_UNKNOWN **__fastcall IntelPptFilter_DecreaseEndpointCount(__int64 a1, int a2)
{
  _UNKNOWN **result; // rax
  int *v4; // rbx
  int v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+30h] [rbp-18h]

  result = &WPP_RECORDER_INITIALIZED;
  v4 = (int *)(a1 + 48);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = *v4 - a2;
    v5 = *v4;
    result = (_UNKNOWN **)WPP_RECORDER_SF_dD(
                            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
                            4u,
                            0x10u,
                            0xCu,
                            (__int64)&WPP_0f3e6ee050e235607aa5f43a2d147c91_Traceguids,
                            v5,
                            v6);
  }
  *v4 -= a2;
  return result;
}
