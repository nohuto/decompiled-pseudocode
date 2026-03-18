/*
 * XREFs of PrExtLogToRegistry @ 0x1404DA1F8
 * Callers:
 *     HalpMcUpdatePostUpdate @ 0x1404DA1E0 (HalpMcUpdatePostUpdate.c)
 * Callees:
 *     Feature_Microcode_Client_CD__private_IsEnabledDeviceUsageNoInline @ 0x140657BD8 (Feature_Microcode_Client_CD__private_IsEnabledDeviceUsageNoInline.c)
 *     MicrocodeLogRegistry @ 0x140658518 (MicrocodeLogRegistry.c)
 */

__int64 PrExtLogToRegistry()
{
  __int64 v0; // rcx

  v0 = (unsigned int)(MicrocodeRecordType - 1);
  if ( MicrocodeRecordType == 1 )
    return MicrocodeLogRegistry(v0);
  v0 = (unsigned int)(MicrocodeRecordType - 2);
  if ( MicrocodeRecordType == 2
    || MicrocodeRecordType == 13 && (unsigned int)Feature_Microcode_Client_CD__private_IsEnabledDeviceUsageNoInline() )
  {
    return MicrocodeLogRegistry(v0);
  }
  else
  {
    return 3221225659LL;
  }
}
