/*
 * XREFs of RtlIsApiSetImplemented @ 0x140785310
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetQuerySchemaInfo2 @ 0x14065E23C (ApiSetQuerySchemaInfo2.c)
 *     PsQueryCurrentApiSetSchema @ 0x140A11520 (PsQueryCurrentApiSetSchema.c)
 */

NTSTATUS __cdecl RtlIsApiSetImplemented(PCSTR ApiSetName)
{
  __int64 CurrentApiSetSchema; // rax
  NTSTATUS result; // eax
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  CurrentApiSetSchema = PsQueryCurrentApiSetSchema();
  result = ApiSetQuerySchemaInfo2(CurrentApiSetSchema, ApiSetName, &v4);
  if ( result >= 0 )
    return v4 != 0 ? 0xC0000225 : 0;
  return result;
}
