/*
 * XREFs of PrExtApplyPatch @ 0x1404D1CF4
 * Callers:
 *     HalpMcUpdateMicrocode @ 0x1404D1C2C (HalpMcUpdateMicrocode.c)
 * Callees:
 *     Feature_Microcode_Client_CD__private_IsEnabledDeviceUsageNoInline @ 0x140663E98 (Feature_Microcode_Client_CD__private_IsEnabledDeviceUsageNoInline.c)
 *     MicrocodeUpdate @ 0x140664918 (MicrocodeUpdate.c)
 */

__int64 PrExtApplyPatch()
{
  PVOID v0; // rdi

  v0 = McMicrocodePatchRecord;
  if ( MicrocodeRecordType == 1
    || MicrocodeRecordType == 2
    || MicrocodeRecordType == 13 && (unsigned int)Feature_Microcode_Client_CD__private_IsEnabledDeviceUsageNoInline() )
  {
    return MicrocodeUpdate(v0);
  }
  else
  {
    return 3221225659LL;
  }
}
