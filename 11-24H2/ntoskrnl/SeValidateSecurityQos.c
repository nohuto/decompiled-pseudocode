/*
 * XREFs of SeValidateSecurityQos @ 0x140867C90
 * Callers:
 *     AlpcpValidateAndSetPortAttributes @ 0x140867A60 (AlpcpValidateAndSetPortAttributes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeValidateSecurityQos(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) >= 2u )
    return 3221225485LL;
  result = 3221225637LL;
  if ( *(_DWORD *)(a1 + 4) < 4u )
    return 0LL;
  return result;
}
