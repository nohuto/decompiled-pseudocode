/*
 * XREFs of RtlLookupElementGenericTableAvl @ 0x180072C40
 * Callers:
 *     <none>
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x180073150 (RtlCompareUnicodeStrings.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

PVOID __cdecl RtlLookupElementGenericTableAvl(PRTL_AVL_TABLE Table, PVOID Buffer)
{
  void *v2; // rbp
  _RTL_BALANCED_LINKS *i; // rbx
  LONG (__cdecl *CompareRoutine)(PUNICODE_STRING, PUNICODE_STRING, BOOLEAN); // rax
  _RTL_BALANCED_LINKS *CaseInSensitive; // r8
  int v8; // eax
  int v9; // eax
  _RTL_BALANCED_LINKS *v10; // rbx

  v2 = 0LL;
  i = 0LL;
  if ( Table->NumberGenericTableElements )
  {
    for ( i = Table->BalancedRoot.RightChild; ; i = i->RightChild )
    {
      while ( 1 )
      {
        CompareRoutine = (LONG (__cdecl *)(PUNICODE_STRING, PUNICODE_STRING, BOOLEAN))Table->CompareRoutine;
        CaseInSensitive = i + 1;
        v8 = CompareRoutine == RtlCompareUnicodeString
           ? RtlCompareUnicodeStrings(
               (PCWCH)Table->BalancedRoot.LeftChild,
               (unsigned __int64)LOWORD(Table->BalancedRoot.Parent) >> 1,
               *((PCWCH *)Buffer + 1),
               (unsigned __int64)*(unsigned __int16 *)Buffer >> 1,
               (BOOLEAN)CaseInSensitive)
           : ((__int64 (__fastcall *)(PRTL_AVL_TABLE, PVOID, _RTL_BALANCED_LINKS *))CompareRoutine)(
               Table,
               Buffer,
               CaseInSensitive);
        if ( v8 )
          break;
        if ( !i->LeftChild )
        {
          v9 = 2;
          goto LABEL_12;
        }
        i = i->LeftChild;
      }
      if ( v8 != 1 )
      {
        v9 = 1;
        goto LABEL_12;
      }
      if ( !i->RightChild )
        break;
    }
    v9 = 3;
  }
  else
  {
    v9 = 0;
  }
LABEL_12:
  v10 = i + 1;
  if ( v9 == 1 )
    return v10;
  return v2;
}
