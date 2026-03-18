/*
 * XREFs of ApiSetLoadSchemaWithExtensions @ 0x1407C9820
 * Callers:
 *     PspSiloLoadApiSets @ 0x1407735E8 (PspSiloLoadApiSets.c)
 * Callees:
 *     ApiSetReleaseSchema @ 0x14065FA14 (ApiSetReleaseSchema.c)
 *     ApiSetGetSchemaVersion @ 0x14065FA30 (ApiSetGetSchemaVersion.c)
 *     ApiSetIsSchemaSealed @ 0x140660970 (ApiSetIsSchemaSealed.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ApiSetLoadSchemaEx @ 0x1407C9704 (ApiSetLoadSchemaEx.c)
 *     ApiSetpLoadSchemaExtensions @ 0x1407C9AE8 (ApiSetpLoadSchemaExtensions.c)
 *     ApiSetpOpenSchemaExtensionsRootNode @ 0x1407C9D98 (ApiSetpOpenSchemaExtensionsRootNode.c)
 */

__int64 __fastcall ApiSetLoadSchemaWithExtensions(__int64 a1, __int64 *a2, size_t *a3)
{
  int SchemaExtensions; // ebx
  void *v6; // rdx
  __int64 v7; // rdx
  int v8; // eax
  size_t v9; // rax
  size_t v11; // [rsp+20h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+28h] [rbp-8h] BYREF
  void *v13; // [rsp+58h] [rbp+28h] BYREF

  v11 = 0LL;
  Handle = (HANDLE)-1LL;
  v13 = 0LL;
  SchemaExtensions = ApiSetLoadSchemaEx(a1, &v13, &v11);
  if ( SchemaExtensions >= 0 )
  {
    if ( (unsigned __int16)ApiSetGetSchemaVersion((__int64)v13) > 0x700u )
    {
      SchemaExtensions = -1073700510;
      goto LABEL_14;
    }
    if ( ApiSetIsSchemaSealed((__int64)v6) )
      goto LABEL_12;
    v8 = ApiSetpOpenSchemaExtensionsRootNode(&Handle);
    if ( v8 >= 0 )
    {
      SchemaExtensions = ApiSetpLoadSchemaExtensions(Handle);
    }
    else
    {
      SchemaExtensions = 0;
      if ( v8 != -1073741772 )
        SchemaExtensions = v8;
    }
    if ( SchemaExtensions >= 0 )
    {
      v7 = (__int64)v13;
LABEL_12:
      v9 = v11;
      *a2 = v7;
      v6 = 0LL;
      v13 = 0LL;
      *a3 = v9;
      goto LABEL_14;
    }
  }
  v6 = v13;
LABEL_14:
  if ( Handle != (HANDLE)-1LL )
  {
    ZwClose(Handle);
    v6 = v13;
  }
  if ( v6 )
    ApiSetReleaseSchema(v6);
  return (unsigned int)SchemaExtensions;
}
