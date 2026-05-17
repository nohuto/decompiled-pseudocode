/*
 * XREFs of RtlIsEnclaveFeaturePresent @ 0x18011C1E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     Feature_Servicing_VBSEnclavesForArgon__private_IsEnabledDeviceUsageNoInline @ 0x1801470E4 (Feature_Servicing_VBSEnclavesForArgon__private_IsEnabledDeviceUsageNoInline.c)
 */

unsigned __int8 __fastcall RtlIsEnclaveFeaturePresent(unsigned int a1)
{
  int v2; // eax
  unsigned __int8 v3; // bl

  v2 = *(_DWORD *)(4 * ((unsigned __int64)a1 >> 8) + 0x7FFE036C);
  v3 = _bittest(&v2, a1 & 0x1F);
  if ( !(unsigned int)Feature_Servicing_VBSEnclavesForArgon__private_IsEnabledDeviceUsageNoInline()
    && (unsigned int)RtlGetCurrentServiceSessionId()
    && a1 == 8 )
  {
    return 0;
  }
  return v3;
}
