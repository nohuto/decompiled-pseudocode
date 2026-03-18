/*
 * XREFs of DrvDbFindDatabaseNode @ 0x1409325B8
 * Callers:
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x140811D3C (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x1408127F4 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbRegisterDatabase @ 0x1408139D8 (DrvDbRegisterDatabase.c)
 *     DrvDbSuspendDatabase @ 0x140813AC8 (DrvDbSuspendDatabase.c)
 *     DrvDbUnregisterDatabase @ 0x140813B7C (DrvDbUnregisterDatabase.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x14092EF8C (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbGetObjectDatabaseNode @ 0x140930228 (DrvDbGetObjectDatabaseNode.c)
 *     DrvDbOpenObjectRegKey @ 0x140931000 (DrvDbOpenObjectRegKey.c)
 *     DrvDbDispatchDriverDatabase @ 0x140935070 (DrvDbDispatchDriverDatabase.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140A84448 (DrvDbOpenDriverDatabaseRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045CBF0 (RtlInitUnicodeStringEx.c)
 *     RtlEqualUnicodeString @ 0x1409329B0 (RtlEqualUnicodeString.c)
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
