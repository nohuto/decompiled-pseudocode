/*
 * XREFs of ApiSetpLoadSchemaExtensions @ 0x1407C9FD8
 * Callers:
 *     ApiSetLoadSchemaWithExtensions @ 0x1407C9D10 (ApiSetLoadSchemaWithExtensions.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x1406A79F0 (ZwEnumerateKey.c)
 *     ApiSetpLoadSchemaExtension @ 0x1407C9EBC (ApiSetpLoadSchemaExtension.c)
 */

__int64 __fastcall ApiSetpLoadSchemaExtensions(HANDLE KeyHandle, __int64 *a2, unsigned int *a3)
{
  ULONG v4; // edi
  int SchemaExtension; // ebx
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandlea; // [rsp+38h] [rbp-C8h] BYREF
  _WORD v11[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v12; // [rsp+44h] [rbp-BCh]
  char *v13; // [rsp+48h] [rbp-B8h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE KeyInformation[12]; // [rsp+80h] [rbp-80h] BYREF
  __int16 v16; // [rsp+8Ch] [rbp-74h]
  char v17; // [rsp+90h] [rbp-70h] BYREF

  KeyHandlea = 0LL;
  v4 = 0;
  ResultLength = 0;
  while ( 1 )
  {
    SchemaExtension = ZwEnumerateKey(KeyHandle, v4, KeyBasicInformation, KeyInformation, 0x218u, &ResultLength);
    if ( SchemaExtension < 0 )
      break;
    v12 = 0;
    v13 = &v17;
    v11[0] = v16;
    v11[1] = v16;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v11;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    ObjectAttributes.RootDirectory = KeyHandle;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    SchemaExtension = ZwOpenKey(&KeyHandlea, 0x20019u, &ObjectAttributes);
    if ( SchemaExtension < 0 )
      return (unsigned int)SchemaExtension;
    SchemaExtension = ApiSetpLoadSchemaExtension(KeyHandlea, a2, a3);
    ZwClose(KeyHandlea);
    if ( SchemaExtension < 0 )
      return (unsigned int)SchemaExtension;
    ++v4;
  }
  if ( SchemaExtension == -2147483622 )
    return 0;
  return (unsigned int)SchemaExtension;
}
