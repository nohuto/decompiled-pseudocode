/*
 * XREFs of ApiSetLoadSchemaWithExtensions @ 0x1407BA050
 * Callers:
 *     PspSiloLoadApiSets @ 0x140763C18 (PspSiloLoadApiSets.c)
 * Callees:
 *     ApiSetReleaseSchema @ 0x140653A84 (ApiSetReleaseSchema.c)
 *     ApiSetIsSchemaSealed @ 0x1406547FC (ApiSetIsSchemaSealed.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwOpenKey @ 0x14069B380 (ZwOpenKey.c)
 *     ApiSetLoadSchemaEx @ 0x1407B9F34 (ApiSetLoadSchemaEx.c)
 *     ApiSetpLoadSchemaExtensions @ 0x1407BA348 (ApiSetpLoadSchemaExtensions.c)
 */

__int64 __fastcall ApiSetLoadSchemaWithExtensions(__int64 a1, __int64 *a2, size_t *a3)
{
  int SchemaExtensions; // ebx
  __int64 v6; // rcx
  NTSTATUS v7; // eax
  size_t v8; // rax
  void *v9; // rcx
  HANDLE KeyHandle; // [rsp+20h] [rbp-50h] BYREF
  size_t v12; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v13[2]; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  void *v15; // [rsp+98h] [rbp+28h] BYREF

  v12 = 0LL;
  KeyHandle = (HANDLE)-1LL;
  v15 = 0LL;
  SchemaExtensions = ApiSetLoadSchemaEx(a1, &v15, &v12);
  if ( SchemaExtensions >= 0 )
  {
    if ( ApiSetIsSchemaSealed((__int64)v15) )
    {
LABEL_10:
      v8 = v12;
      *a2 = v6;
      v9 = 0LL;
      v15 = 0LL;
      *a3 = v8;
      goto LABEL_12;
    }
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    ObjectAttributes.RootDirectory = 0LL;
    v13[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\ApiSetSchemaExtensions";
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v13;
    v13[0] = 11796658LL;
    ObjectAttributes.Attributes = 576;
    v7 = ZwOpenKey(&KeyHandle, 8u, &ObjectAttributes);
    if ( v7 >= 0 )
    {
      SchemaExtensions = ApiSetpLoadSchemaExtensions(KeyHandle);
    }
    else
    {
      SchemaExtensions = 0;
      if ( v7 != -1073741772 )
        SchemaExtensions = v7;
    }
    if ( SchemaExtensions >= 0 )
    {
      v6 = (__int64)v15;
      goto LABEL_10;
    }
  }
  v9 = v15;
LABEL_12:
  if ( KeyHandle != (HANDLE)-1LL )
  {
    ZwClose(KeyHandle);
    v9 = v15;
  }
  if ( v9 )
    ApiSetReleaseSchema(v9);
  return (unsigned int)SchemaExtensions;
}
