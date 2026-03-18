/*
 * XREFs of RtlCapabilityCheckForSingleSessionSku @ 0x140780B90
 * Callers:
 *     PopPowerInformationInternal @ 0x140AC4A30 (PopPowerInformationInternal.c)
 * Callees:
 *     RtlIsMultiSessionSku @ 0x1409113D0 (RtlIsMultiSessionSku.c)
 *     RtlCapabilityCheck @ 0x140A62840 (RtlCapabilityCheck.c)
 */

__int64 __fastcall RtlCapabilityCheckForSingleSessionSku(
        HANDLE ExistingTokenHandle,
        PCUNICODE_STRING String2,
        _BYTE *a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( a3 )
  {
    if ( (unsigned __int8)RtlIsMultiSessionSku() )
      *a3 = 0;
    else
      return (unsigned int)RtlCapabilityCheck(ExistingTokenHandle, String2);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
