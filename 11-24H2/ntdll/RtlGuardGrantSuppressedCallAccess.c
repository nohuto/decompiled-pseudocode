/*
 * XREFs of RtlGuardGrantSuppressedCallAccess @ 0x1800E7980
 * Callers:
 *     AVrfCallAPILookupCallback @ 0x1800D973C (AVrfCallAPILookupCallback.c)
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x1800366F0 (LdrControlFlowGuardEnforced.c)
 *     RtlpGuardIsSuppressedAddress @ 0x1800E7950 (RtlpGuardIsSuppressedAddress.c)
 *     RtlpGuardGrantSuppressedCallAccess @ 0x1800E79F8 (RtlpGuardGrantSuppressedCallAccess.c)
 *     RtlGuardIsExportSuppressedAddress @ 0x1800E7AA0 (RtlGuardIsExportSuppressedAddress.c)
 */

__int64 __fastcall RtlGuardGrantSuppressedCallAccess(void *a1, unsigned int a2, _DWORD *a3)
{
  int v6; // eax
  __int64 result; // rax

  LOBYTE(v6) = LdrControlFlowGuardEnforced();
  if ( v6 )
  {
    if ( ((a2 & 4) == 0 || (unsigned __int8)RtlGuardIsExportSuppressedAddress(a1) == 1)
      && ((a2 & 1) == 0 || RtlpGuardIsSuppressedAddress(a1) == 1) )
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
