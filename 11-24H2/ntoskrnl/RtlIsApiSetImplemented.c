/*
 * XREFs of RtlIsApiSetImplemented @ 0x1407853E0
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetQuerySchemaInfo2 @ 0x14065FA6C (ApiSetQuerySchemaInfo2.c)
 *     PsQueryCurrentApiSetSchema @ 0x140A183B0 (PsQueryCurrentApiSetSchema.c)
 */

__int64 __fastcall RtlIsApiSetImplemented(_DWORD *a1)
{
  __int64 CurrentApiSetSchema; // rax
  __int64 result; // rax
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  CurrentApiSetSchema = PsQueryCurrentApiSetSchema();
  result = ApiSetQuerySchemaInfo2(CurrentApiSetSchema, a1, &v4);
  if ( (int)result >= 0 )
    return v4 != 0 ? 0xC0000225 : 0;
  return result;
}
