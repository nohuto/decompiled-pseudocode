/*
 * XREFs of RtlpMuiRegLoadRegistryInfo @ 0x180087080
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrint @ 0x1800586D0 (DbgPrint.c)
 *     RtlpSetProcUserMachineLangList @ 0x18005D1B0 (RtlpSetProcUserMachineLangList.c)
 *     RtlpMuiRegLoadLicInformation @ 0x180086A64 (RtlpMuiRegLoadLicInformation.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x1800871E0 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlpLoadLanguageConfigList @ 0x18008C150 (RtlpLoadLanguageConfigList.c)
 *     _RtlpMuiRegLoadInstalled @ 0x180120B18 (_RtlpMuiRegLoadInstalled.c)
 */

__int64 __fastcall RtlpMuiRegLoadRegistryInfo(__int64 a1, __int16 a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a1 )
    return 3221225485LL;
  if ( (a2 & 0x800) != 0 )
  {
    result = RtlpMuiRegLoadLicInformation(a1);
    if ( (int)result < 0 )
    {
      DbgPrint("*** RtlpMuiRegLoadLicInformation failed with status %x", result);
      result = 0LL;
    }
  }
  if ( (a2 & 1) != 0 )
    result = RtlpMuiRegLoadInstalled(a1);
  if ( (int)result >= 0 )
  {
    if ( (a2 & 4) == 0
      || (RtlpMuiRegFreeRegistryInfo(a1, 4LL), result = RtlpLoadLanguageConfigList(4u), (int)result >= 0) )
    {
      if ( (a2 & 8) == 0
        || (RtlpMuiRegFreeRegistryInfo(a1, 8LL), result = RtlpLoadLanguageConfigList(8u), (int)result >= 0) )
      {
        if ( (a2 & 0x20) != 0 )
        {
          RtlpMuiRegFreeRegistryInfo(a1, 32LL);
          result = RtlpSetProcUserMachineLangList(a1, 1u);
        }
        if ( (int)result >= 0 )
        {
          if ( (a2 & 0x10) == 0
            || (RtlpMuiRegFreeRegistryInfo(a1, 16LL), result = RtlpSetProcUserMachineLangList(a1, 0), (int)result >= 0) )
          {
            if ( (a2 & 0x200) != 0 )
              return 0LL;
          }
        }
      }
    }
  }
  return result;
}
