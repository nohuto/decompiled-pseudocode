/*
 * XREFs of Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline @ 0x140274C2C
 * Callers:
 *     ?xxxCreateWindowStation@@YAJPEAU_OBJECT_ATTRIBUTES@@DKPEAXKKPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGIW4tagWINDOWSTATIONFLAGS@@KPEAPEAUHWINSTA__@@@Z @ 0x14028A884 (-xxxCreateWindowStation@@YAJPEAU_OBJECT_ATTRIBUTES@@DKPEAXKKPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGI.c)
 * Callees:
 *     Feature_AgenticSessionNoBoostPolicy__private_IsEnabledFallback @ 0x140274C64 (Feature_AgenticSessionNoBoostPolicy__private_IsEnabledFallback.c)
 */

__int64 Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_AgenticSessionNoBoostPolicy__private_featureState & 0x10) != 0 )
    return Feature_AgenticSessionNoBoostPolicy__private_featureState & 1;
  else
    return Feature_AgenticSessionNoBoostPolicy__private_IsEnabledFallback(
             (unsigned int)Feature_AgenticSessionNoBoostPolicy__private_featureState,
             3LL);
}
