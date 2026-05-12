/*
 * XREFs of StorUpdateIoGatewayWaterMarks @ 0x140067C6C
 * Callers:
 *     RaidAdapterCompleteInitialization @ 0x140037B0C (RaidAdapterCompleteInitialization.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorUpdateIoGatewayWaterMarks(_DWORD *a1)
{
  bool v1; // zf
  __int64 result; // rax

  v1 = FeatureFixKcsanRacyAccessV2 == 0;
  result = (unsigned int)a1[34];
  a1[8] = result;
  if ( !v1 )
    result = (unsigned int)a1[34];
  a1[7] = result;
  return result;
}
