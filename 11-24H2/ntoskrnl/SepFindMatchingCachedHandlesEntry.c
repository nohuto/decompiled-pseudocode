/*
 * XREFs of SepFindMatchingCachedHandlesEntry @ 0x140914298
 * Callers:
 *     SepGetCachedHandlesEntry @ 0x140913D04 (SepGetCachedHandlesEntry.c)
 * Callees:
 *     RtlEqualSid @ 0x1403EB6C0 (RtlEqualSid.c)
 *     RtlLookupEntryHashTable @ 0x1403ECB10 (RtlLookupEntryHashTable.c)
 *     RtlGetNextEntryHashTable @ 0x140436530 (RtlGetNextEntryHashTable.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall SepFindMatchingCachedHandlesEntry(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        ULONG_PTR a2,
        int *a3,
        __int64 *a4)
{
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v5; // rsi
  char v6; // bl
  PRTL_DYNAMIC_HASH_TABLE_ENTRY i; // rax
  int v10; // edx
  _RTL_DYNAMIC_HASH_TABLE_CONTEXT Context; // [rsp+20h] [rbp-28h] BYREF

  memset(&Context, 0, sizeof(Context));
  v5 = 0LL;
  v6 = 0;
  for ( i = RtlLookupEntryHashTable(HashTable, a2, &Context); i; i = RtlGetNextEntryHashTable(HashTable, &Context) )
  {
    v10 = *a3;
    v5 = i;
    if ( *a3 == LODWORD(i[1].Linkage.Blink) )
    {
      if ( v10 )
      {
        if ( v10 == 1 && RtlEqualUnicodeString((PCUNICODE_STRING)(a3 + 2), (PCUNICODE_STRING)&i[1].Signature, 1u) )
          v6 = 1;
      }
      else if ( RtlEqualSid(*((PSID *)a3 + 1), (PSID)i[1].Signature) )
      {
        v6 = 1;
        break;
      }
      if ( v6 )
        break;
    }
  }
  *a4 = (unsigned __int64)v5 & -(__int64)(v6 != 0);
  return 0LL;
}
