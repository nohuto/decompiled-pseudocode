/*
 * XREFs of RtlpInitializeLangRegistryInfo @ 0x1800F97E0
 * Callers:
 *     RtlpSetPreferredUILanguages @ 0x180140750 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18007CD08 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 */

__int64 __fastcall RtlpInitializeLangRegistryInfo(_QWORD *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a1 )
    return 3221225485LL;
  if ( !*a1 )
    return RtlpMuiRegCreateAndLoadRegistryInfo(a1);
  return result;
}
