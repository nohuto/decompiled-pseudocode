/*
 * XREFs of RtlIsEnclaveFeaturePresent @ 0x14076DD4C
 * Callers:
 *     NtCreateEnclave @ 0x1407E7AD0 (NtCreateEnclave.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140311890 (PsIsCurrentThreadInServerSilo.c)
 *     Feature_Servicing_VBSEnclavesForArgon__private_IsEnabledDeviceUsageNoInline @ 0x1405DB288 (Feature_Servicing_VBSEnclavesForArgon__private_IsEnabledDeviceUsageNoInline.c)
 */

unsigned __int8 __fastcall RtlIsEnclaveFeaturePresent(unsigned int a1)
{
  int v2; // eax
  unsigned __int8 v3; // bl

  v2 = *(_DWORD *)(4 * ((unsigned __int64)a1 >> 8) - 0x87FFFFFFC94LL);
  v3 = _bittest(&v2, a1 & 0x1F);
  if ( !(unsigned int)Feature_Servicing_VBSEnclavesForArgon__private_IsEnabledDeviceUsageNoInline()
    && PsIsCurrentThreadInServerSilo()
    && a1 == 8 )
  {
    return 0;
  }
  return v3;
}
