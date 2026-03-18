/*
 * XREFs of RtlCapabilityCheckForSingleSessionSku @ 0x140771940
 * Callers:
 *     PopPowerInformationInternal @ 0x140A1B29C (PopPowerInformationInternal.c)
 * Callees:
 *     RtlCapabilityCheck @ 0x140A09AE0 (RtlCapabilityCheck.c)
 *     RtlIsMultiSessionSku @ 0x140A09E70 (RtlIsMultiSessionSku.c)
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
