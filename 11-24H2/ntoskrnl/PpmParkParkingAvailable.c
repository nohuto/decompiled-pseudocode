/*
 * XREFs of PpmParkParkingAvailable @ 0x140A6B7A0
 * Callers:
 *     PpmParkRegisterParking @ 0x1405D72D0 (PpmParkRegisterParking.c)
 *     PpmParkRegisterParkingEx @ 0x1405E1218 (PpmParkRegisterParkingEx.c)
 *     PpmCheckReInit @ 0x140A6B620 (PpmCheckReInit.c)
 *     PpmParkApplyForcedMask @ 0x140AC893C (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x140AC8B58 (PpmParkClearForcedMask.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140371960 (KeIsEmptyAffinityEx.c)
 *     Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline @ 0x1405B2224 (Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline.c)
 */

unsigned __int8 PpmParkParkingAvailable()
{
  unsigned __int8 result; // al
  unsigned __int8 v1; // bl
  unsigned int v2; // ebp
  __int64 v3; // rdi
  unsigned int v4; // r14d
  __int64 v5; // rsi
  unsigned __int16 v6; // ax

  if ( PpmParkNumNodes == 1 && KeGetCurrentPrcb()->LogicalProcessorsPerCore == *(unsigned __int16 *)(PpmParkNodes + 10) )
    return 0;
  v1 = 0;
  v2 = 0;
  if ( !PpmParkNumNodes )
    goto LABEL_10;
  do
  {
    v3 = PpmParkNodes + 1296LL * v2;
    if ( *(_WORD *)(v3 + 1168) || *(_WORD *)(v3 + 1172) )
      goto LABEL_9;
    if ( (unsigned int)Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( !(unsigned int)KeIsEmptyAffinityEx((unsigned __int16 *)(v3 + 312)) )
        goto LABEL_9;
    }
    else if ( *(_QWORD *)(v3 + 24) )
    {
      goto LABEL_9;
    }
    if ( !(unsigned int)KeIsEmptyAffinityEx(&PpmPerfCoreParkingMask.Count) )
    {
LABEL_9:
      v1 = 1;
      break;
    }
    v4 = 0;
    if ( !*(_BYTE *)(v3 + 12) )
      goto LABEL_25;
    while ( 1 )
    {
      v5 = *(_QWORD *)(v3 + 1288) + 640LL * v4;
      if ( *(_WORD *)v5 )
        break;
LABEL_22:
      if ( ++v4 >= *(unsigned __int8 *)(v3 + 12) )
        goto LABEL_25;
    }
    v6 = *(_WORD *)(v5 + 4);
    if ( *(_WORD *)(v5 + 2) >= v6 && v6 >= *(_WORD *)v5 )
    {
      if ( (unsigned int)Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( !(unsigned int)KeIsEmptyAffinityEx((unsigned __int16 *)(v5 + 304)) )
          v1 = 1;
      }
      else if ( *(_QWORD *)(v5 + 32) )
      {
        v1 = 1;
      }
      goto LABEL_22;
    }
    v1 = 1;
LABEL_25:
    ++v2;
  }
  while ( v2 < PpmParkNumNodes );
LABEL_10:
  result = v1;
  PpmIsParkingEnabled = v1;
  return result;
}
