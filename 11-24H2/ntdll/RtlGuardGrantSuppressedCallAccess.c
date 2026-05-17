/*
 * XREFs of RtlGuardGrantSuppressedCallAccess @ 0x180003C34
 * Callers:
 *     AVrfCallAPILookupCallback @ 0x1800DE5CC (AVrfCallAPILookupCallback.c)
 * Callees:
 *     RtlGuardIsExportSuppressedAddress @ 0x180003BFC (RtlGuardIsExportSuppressedAddress.c)
 *     RtlpGuardGrantSuppressedCallAccess @ 0x180003CAC (RtlpGuardGrantSuppressedCallAccess.c)
 *     LdrControlFlowGuardEnforced @ 0x180009CF0 (LdrControlFlowGuardEnforced.c)
 *     RtlpGuardIsSuppressedAddress @ 0x1800ECD20 (RtlpGuardIsSuppressedAddress.c)
 */

__int64 __fastcall RtlGuardGrantSuppressedCallAccess(__int64 a1, unsigned int a2, _DWORD *a3)
{
  __int64 result; // rax

  if ( (unsigned int)LdrControlFlowGuardEnforced() )
  {
    if ( ((a2 & 4) == 0 || RtlGuardIsExportSuppressedAddress(a1) == 1)
      && ((a2 & 1) == 0 || (unsigned __int8)RtlpGuardIsSuppressedAddress(a1) == 1) )
    {
      *a3 = 1;
      return RtlpGuardGrantSuppressedCallAccess(a1, a2);
    }
    result = 3221225485LL;
  }
  else
  {
    result = 0LL;
  }
  *a3 = 0;
  return result;
}
