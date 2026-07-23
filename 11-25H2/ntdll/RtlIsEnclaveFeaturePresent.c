/*
 * XREFs of RtlIsEnclaveFeaturePresent @ 0x18011C1E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     Feature_Servicing_VBSEnclavesForArgon__private_IsEnabledDeviceUsageNoInline @ 0x1801470E4 (Feature_Servicing_VBSEnclavesForArgon__private_IsEnabledDeviceUsageNoInline.c)
 */

BOOLEAN __cdecl RtlIsEnclaveFeaturePresent(ULONG FeatureMask)
{
  int v2; // eax
  BOOLEAN v3; // bl

  v2 = *(_DWORD *)(4 * ((unsigned __int64)FeatureMask >> 8) + 0x7FFE036C);
  v3 = _bittest(&v2, FeatureMask & 0x1F);
  if ( !(unsigned int)Feature_Servicing_VBSEnclavesForArgon__private_IsEnabledDeviceUsageNoInline()
    && RtlGetCurrentServiceSessionId()
    && FeatureMask == 8 )
  {
    return 0;
  }
  return v3;
}
