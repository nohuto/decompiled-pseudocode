/*
 * XREFs of TlgAggregateAbsorbEvent @ 0x140274154
 * Callers:
 *     _tlgWriteAgg @ 0x140273698 (_tlgWriteAgg.c)
 * Callees:
 *     ExtractAggregateFieldTypes @ 0x140274970 (ExtractAggregateFieldTypes.c)
 *     InsertEventEntryInLookUpTable @ 0x140274A04 (InsertEventEntryInLookUpTable.c)
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 */

NTSTATUS __fastcall TlgAggregateAbsorbEvent(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        unsigned __int8 a3,
        struct _EVENT_DATA_DESCRIPTOR *a4)
{
  ULONG UserDataCount; // esi
  NTSTATUS result; // eax
  char AggregateFieldTypes; // al
  int v10; // r8d

  UserDataCount = a3;
  result = -1073741811;
  if ( *(void (__fastcall **)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))(a1 + 40) == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    AggregateFieldTypes = ExtractAggregateFieldTypes(TlgAggregateInternalRegisteredProviderEtwCallback, a4);
    if ( AggregateFieldTypes )
    {
      LOBYTE(v10) = UserDataCount;
      return InsertEventEntryInLookUpTable(a1, (_DWORD)a2, v10, (_DWORD)a4, AggregateFieldTypes);
    }
    else
    {
      return EtwWriteEx(*(_QWORD *)(a1 + 32), a2, 0LL, 0, 0LL, 0LL, UserDataCount, a4);
    }
  }
  return result;
}
