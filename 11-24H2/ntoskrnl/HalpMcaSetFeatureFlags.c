/*
 * XREFs of HalpMcaSetFeatureFlags @ 0x140B4E454
 * Callers:
 *     HalpInitializeMce @ 0x140B4DC24 (HalpInitializeMce.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x140478774 (HalpGetCpuVendor.c)
 *     HalpCpuID @ 0x1404932E0 (HalpCpuID.c)
 *     HalpIsCmciImplemented @ 0x140B4E334 (HalpIsCmciImplemented.c)
 */

char HalpMcaSetFeatureFlags()
{
  unsigned __int64 v0; // rax
  signed __int32 v2[8]; // [rsp+0h] [rbp-30h] BYREF
  int v3; // [rsp+40h] [rbp+10h] BYREF
  unsigned int v4; // [rsp+48h] [rbp+18h] BYREF
  int v5; // [rsp+50h] [rbp+20h] BYREF

  v3 = 0;
  v4 = 0;
  v5 = 0;
  LOBYTE(v0) = HalpGetCpuVendor();
  if ( (_BYTE)v0 == 2 )
  {
    HalpMceBroadcast = 1;
    if ( !HalpIsCmciImplemented() )
      HalpMcaPollForCmc = 1;
    v0 = __readmsr(0x179u);
    if ( (v0 & 0x1000000) != 0 )
      HalpMcaRecoverySupported = 1;
    if ( (v0 & 0x4000000) != 0 )
      HalpMcaExtendedLoggingSupported = 1;
  }
  else
  {
    if ( (_BYTE)v0 != 1 )
      goto LABEL_17;
    HalpCpuID(0x80000000, &v4, &v3, &v3, &v3);
    if ( v4 >= 0x80000007 )
    {
      HalpCpuID(0x80000007, &v3, &v5, &v3, &v3);
      if ( (v5 & 2) != 0 )
        HalpMcaRecoverySupported = 1;
      if ( (v5 & 1) != 0 )
        HalpMcaOverflowRecoverySupported = 1;
      if ( (v5 & 8) != 0 )
        HalpMcaScalableRasSupported = 1;
    }
    LOBYTE(v0) = HalpIsCmciImplemented();
    if ( !(_BYTE)v0 )
LABEL_17:
      HalpMcaPollForCmc = 1;
  }
  HalpMcaBanksValidOnBoot = 1;
  HalpMcaMiscImplemented = 1;
  _InterlockedOr(v2, 0);
  return v0;
}
