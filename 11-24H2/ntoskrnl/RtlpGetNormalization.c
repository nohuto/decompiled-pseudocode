/*
 * XREFs of RtlpGetNormalization @ 0x14078D5B0
 * Callers:
 *     RtlIsNormalizedString @ 0x140786D60 (RtlIsNormalizedString.c)
 *     RtlNormalizeString @ 0x140786DF0 (RtlNormalizeString.c)
 * Callees:
 *     NormalizationListEntry_Alloc @ 0x1405F3B58 (NormalizationListEntry_Alloc.c)
 *     NormalizationList__InsertTail @ 0x1405F3B7C (NormalizationList__InsertTail.c)
 *     NormalizationList__Lock @ 0x1405F3BB0 (NormalizationList__Lock.c)
 *     NormalizationList__Lookup @ 0x1405F3C14 (NormalizationList__Lookup.c)
 *     NormalizationList__Unlock @ 0x1405F3C48 (NormalizationList__Unlock.c)
 *     ZwGetNlsSectionPtr @ 0x1406A8450 (ZwGetNlsSectionPtr.c)
 *     Normalization__LoadTables @ 0x14078615C (Normalization__LoadTables.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpGetNormalization(unsigned int a1, char **a2)
{
  __int64 result; // rax
  int v5; // ecx
  char *v6; // rsi
  char *v7; // rax
  __int64 v8; // rdx
  int NlsSectionPtr; // ebx
  __int64 v10; // rax
  _DWORD *v11; // rbx
  int Tables; // ebp
  unsigned __int64 v13; // [rsp+58h] [rbp+10h]
  unsigned __int16 *v14; // [rsp+60h] [rbp+18h]

  if ( !a2 )
    return 3221225712LL;
  NormalizationList__Lock();
  v6 = NormalizationList__Lookup(a1);
  if ( !v6 )
  {
    v14 = 0LL;
    v13 = 0LL;
    v7 = NormalizationList__Lookup(v5 ^ 0x100u);
    if ( v7 )
    {
      v14 = (unsigned __int16 *)*((_QWORD *)v7 + 1);
      v13 = *((_QWORD *)v7 + 2);
    }
    else
    {
      v8 = a1;
      LODWORD(v8) = a1 & 0xFFFFFEFF;
      NlsSectionPtr = ZwGetNlsSectionPtr(12LL, v8);
      if ( NlsSectionPtr < 0 )
        goto LABEL_12;
    }
    v10 = NormalizationListEntry_Alloc();
    v11 = (_DWORD *)v10;
    if ( !v10 )
    {
      NlsSectionPtr = -1073741801;
LABEL_12:
      NormalizationList__Unlock();
      return (unsigned int)NlsSectionPtr;
    }
    v6 = (char *)(v10 + 24);
    Tables = Normalization__LoadTables(a1, v14, v13, (_DWORD *)(v10 + 24));
    if ( Tables < 0 )
    {
      ExFreePoolWithTag(v11, 0);
      NlsSectionPtr = Tables;
      goto LABEL_12;
    }
    v11[4] = a1;
    NormalizationList__InsertTail((__int64)v11);
  }
  NormalizationList__Unlock();
  result = 0LL;
  *a2 = v6;
  return result;
}
