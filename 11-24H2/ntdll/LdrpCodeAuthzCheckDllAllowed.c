/*
 * XREFs of LdrpCodeAuthzCheckDllAllowed @ 0x18008F3E8
 * Callers:
 *     LdrpMapDllNtFileName @ 0x18008DF20 (LdrpMapDllNtFileName.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrpCodeAuthzCheckDllAllowed(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v3)(__int64, __int64); // r8

  if ( !LdrpAdvapi32DllHandle )
    return 0LL;
  v3 = (__int64 (__fastcall *)(__int64, __int64))(MEMORY[0x7FFE0330] ^ __ROR8__(
                                                                         LdrpSaferIsDllAllowedRoutine,
                                                                         64 - (MEMORY[0x7FFE0330] & 0x3Fu)));
  if ( v3 == LdrpCodeAuthzCheckDllAllowedSrpV2 )
    return LdrpCodeAuthzCheckDllAllowedSrpV2(a2, a1);
  else
    return v3(a2, a1);
}
