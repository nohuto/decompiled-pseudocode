/*
 * XREFs of TlgAggregateAbsorbEvent @ 0x1400ED10C
 * Callers:
 *     _tlgWriteAgg @ 0x1400ED254 (_tlgWriteAgg.c)
 * Callees:
 *     InsertEventEntryInLookUpTable @ 0x1400ECDD0 (InsertEventEntryInLookUpTable.c)
 */

NTSTATUS __fastcall TlgAggregateAbsorbEvent(
        __int64 a1,
        __int128 *a2,
        unsigned __int8 a3,
        _EVENT_DATA_DESCRIPTOR *UserData)
{
  NTSTATUS result; // eax
  unsigned __int64 Ptr; // r10
  unsigned __int8 v8; // r11
  unsigned __int64 v9; // rdi
  char *v10; // r10
  char v11; // al
  char v14; // al
  char v15; // dl
  char v16; // cl
  __int64 v17; // rax

  result = -1073741811;
  if ( *(void (__fastcall **)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))(a1 + 40) == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    Ptr = UserData[1].Ptr;
    v8 = 0;
    v9 = Ptr + UserData[1].Size;
    v10 = (char *)(Ptr + 2);
    do
      v11 = *v10++;
    while ( v11 < 0 );
    while ( *v10++ )
      ;
    while ( (unsigned __int64)v10 < v9 )
    {
      while ( *v10++ )
        ;
      if ( *v10 >= 0 )
        break;
      v14 = v10[1];
      v15 = *v10 & 0x7F;
      v10 += 2;
      if ( v14 >= 0 )
        break;
      while ( 1 )
      {
        v16 = *v10;
        if ( *v10 >= 0 )
          break;
        if ( v16 != (char)0x80 )
          goto LABEL_15;
        ++v10;
      }
      if ( v15 != 9 || (unsigned __int8)(v16 - 113) > 2u )
        break;
      v17 = v8++;
      UserData[v17 + 2].Reserved1 = v16;
    }
LABEL_15:
    if ( v8 )
      return InsertEventEntryInLookUpTable(a1, a2, a3, (__int64)UserData, v8);
    else
      return EtwWriteTransfer(*(_QWORD *)(a1 + 32), (PCEVENT_DESCRIPTOR)a2, 0LL, 0LL, a3, UserData);
  }
  return result;
}
