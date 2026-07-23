/*
 * XREFs of RtlIsApiSetImplemented @ 0x180117910
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetQuerySchemaInfo2 @ 0x180133370 (ApiSetQuerySchemaInfo2.c)
 */

NTSTATUS __cdecl RtlIsApiSetImplemented(PCSTR ApiSetName)
{
  NTSTATUS result; // eax
  int v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  result = ApiSetQuerySchemaInfo2(NtCurrentPeb()->ApiSetMap, ApiSetName, &v2);
  if ( result >= 0 )
    return v2 != 0 ? 0xC0000225 : 0;
  return result;
}
