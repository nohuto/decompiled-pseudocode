/*
 * XREFs of RtlpGetNormalization @ 0x14077E2FC
 * Callers:
 *     RtlIsNormalizedString @ 0x140777B10 (RtlIsNormalizedString.c)
 *     RtlNormalizeString @ 0x140777BA0 (RtlNormalizeString.c)
 * Callees:
 *     NormalizationListEntry_Alloc @ 0x1405E7810 (NormalizationListEntry_Alloc.c)
 *     NormalizationList__InsertTail @ 0x1405E7834 (NormalizationList__InsertTail.c)
 *     NormalizationList__Lock @ 0x1405E7868 (NormalizationList__Lock.c)
 *     NormalizationList__Lookup @ 0x1405E78CC (NormalizationList__Lookup.c)
 *     NormalizationList__Unlock @ 0x1405E7900 (NormalizationList__Unlock.c)
 *     ZwGetNlsSectionPtr @ 0x14069D180 (ZwGetNlsSectionPtr.c)
 *     Normalization__LoadTables @ 0x140776F0C (Normalization__LoadTables.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpGetNormalization(unsigned int a1, char **a2)
{
  __int64 result; // rax
  int v5; // ecx
  char *v6; // rsi
  char *v7; // rax
  NTSTATUS NlsSectionPtr; // ebx
  __int64 v9; // rax
  _DWORD *v10; // rbx
  int Tables; // ebp
  unsigned __int64 SectionSize; // [rsp+58h] [rbp+10h] BYREF
  PVOID SectionPointer; // [rsp+60h] [rbp+18h] BYREF

  if ( !a2 )
    return 3221225712LL;
  NormalizationList__Lock();
  v6 = NormalizationList__Lookup(a1);
  if ( !v6 )
  {
    SectionPointer = 0LL;
    SectionSize = 0LL;
    v7 = NormalizationList__Lookup(v5 ^ 0x100u);
    if ( v7 )
    {
      SectionPointer = (PVOID)*((_QWORD *)v7 + 1);
      SectionSize = *((_QWORD *)v7 + 2);
    }
    else
    {
      NlsSectionPtr = ZwGetNlsSectionPtr(0xCu, a1 & 0xFFFFFEFF, 0LL, &SectionPointer, (PULONG)&SectionSize);
      if ( NlsSectionPtr < 0 )
        goto LABEL_12;
    }
    v9 = NormalizationListEntry_Alloc();
    v10 = (_DWORD *)v9;
    if ( !v9 )
    {
      NlsSectionPtr = -1073741801;
LABEL_12:
      NormalizationList__Unlock();
      return (unsigned int)NlsSectionPtr;
    }
    v6 = (char *)(v9 + 24);
    Tables = Normalization__LoadTables(a1, (unsigned __int16 *)SectionPointer, SectionSize, (_DWORD *)(v9 + 24));
    if ( Tables < 0 )
    {
      ExFreePoolWithTag(v10, 0);
      NlsSectionPtr = Tables;
      goto LABEL_12;
    }
    v10[4] = a1;
    NormalizationList__InsertTail((__int64)v10);
  }
  NormalizationList__Unlock();
  result = 0LL;
  *a2 = v6;
  return result;
}
