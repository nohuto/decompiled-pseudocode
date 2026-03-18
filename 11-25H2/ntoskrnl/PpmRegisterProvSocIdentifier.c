/*
 * XREFs of PpmRegisterProvSocIdentifier @ 0x14074CDB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlDuplicateUnicodeString @ 0x140932190 (RtlDuplicateUnicodeString.c)
 */

NTSTATUS __fastcall PpmRegisterProvSocIdentifier(PCUNICODE_STRING StringIn)
{
  if ( !StringIn || !StringIn->Buffer )
    return -1073741811;
  if ( PopProvSocIdentifier.Length )
    return -1073740008;
  return RtlDuplicateUnicodeString(1u, StringIn, &PopProvSocIdentifier);
}
