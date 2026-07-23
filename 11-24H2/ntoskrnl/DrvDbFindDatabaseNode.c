/*
 * XREFs of DrvDbFindDatabaseNode @ 0x140928D98
 * Callers:
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x14082237C (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140822E34 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbRegisterDatabase @ 0x140823F40 (DrvDbRegisterDatabase.c)
 *     DrvDbSuspendDatabase @ 0x140824030 (DrvDbSuspendDatabase.c)
 *     DrvDbUnregisterDatabase @ 0x1408240E4 (DrvDbUnregisterDatabase.c)
 *     DrvDbDispatchDriverDatabase @ 0x1408BB400 (DrvDbDispatchDriverDatabase.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x140924EA0 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbOpenObjectRegKey @ 0x140927630 (DrvDbOpenObjectRegKey.c)
 *     DrvDbGetObjectDatabaseNode @ 0x140928938 (DrvDbGetObjectDatabaseNode.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140A85194 (DrvDbOpenDriverDatabaseRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall DrvDbFindDatabaseNode(__int64 a1, const WCHAR *a2, const UNICODE_STRING **a3)
{
  NTSTATUS inited; // edi
  const UNICODE_STRING **v6; // rsi
  const UNICODE_STRING *i; // rbx
  UNICODE_STRING String2; // [rsp+20h] [rbp-18h] BYREF

  *a3 = 0LL;
  String2 = 0LL;
  inited = RtlInitUnicodeStringEx(&String2, a2);
  if ( inited >= 0 )
  {
    v6 = (const UNICODE_STRING **)(a1 + 16);
    inited = -1073741772;
    for ( i = *v6; i != (const UNICODE_STRING *)v6; i = *(const UNICODE_STRING **)&i->Length )
    {
      if ( RtlEqualUnicodeString(i + 1, &String2, 1u) )
      {
        inited = 0;
        *a3 = i;
        return (unsigned int)inited;
      }
    }
  }
  return (unsigned int)inited;
}
