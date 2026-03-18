/*
 * XREFs of Feature_29159638__private_IsEnabledDeviceUsage @ 0x1C00D5C90
 * Callers:
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x1C002EB40 (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C003019C (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     ?PrivateRelease@CResourceMarshaler@DirectComposition@@AEAA_KXZ @ 0x1C00D5B4C (-PrivateRelease@CResourceMarshaler@DirectComposition@@AEAA_KXZ.c)
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C020B74C (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     Feature_29159638__private_IsEnabledFallback @ 0x1C00D5CC8 (Feature_29159638__private_IsEnabledFallback.c)
 */

__int64 Feature_29159638__private_IsEnabledDeviceUsage()
{
  if ( (Feature_29159638__private_featureState & 0x10) != 0 )
    return Feature_29159638__private_featureState & 1;
  else
    return Feature_29159638__private_IsEnabledFallback((unsigned int)Feature_29159638__private_featureState, 3LL);
}
