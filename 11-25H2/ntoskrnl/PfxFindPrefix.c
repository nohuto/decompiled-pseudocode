/*
 * XREFs of PfxFindPrefix @ 0x1407703C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlSplay @ 0x1403751F0 (RtlSplay.c)
 *     CompareNamesCaseSensitive @ 0x14077013C (CompareNamesCaseSensitive.c)
 *     ComputeNameLength @ 0x1407702E8 (ComputeNameLength.c)
 */

PPREFIX_TABLE_ENTRY __stdcall PfxFindPrefix(PPREFIX_TABLE PrefixTable, PSTRING FullName)
{
  CSHORT v4; // ax
  _PREFIX_TABLE *i; // rdi
  _RTL_SPLAY_LINKS *j; // rsi
  _PREFIX_TABLE_ENTRY *p_LeftChild; // r14
  int v8; // eax
  _PREFIX_TABLE_ENTRY *NextPrefixTree; // rbx

  v4 = ComputeNameLength(&FullName->Length);
  for ( i = (_PREFIX_TABLE *)PrefixTable->NextPrefixTree; i->NameLength > v4; i = (_PREFIX_TABLE *)i->NextPrefixTree )
    PrefixTable = i;
LABEL_4:
  if ( i->NameLength <= 0 )
    return 0LL;
  for ( j = (_RTL_SPLAY_LINKS *)&i[1]; ; j = j->RightChild )
  {
    while ( 1 )
    {
      if ( !j )
      {
        PrefixTable = i;
        i = (_PREFIX_TABLE *)i->NextPrefixTree;
        goto LABEL_4;
      }
      p_LeftChild = (_PREFIX_TABLE_ENTRY *)&j[-1].LeftChild;
      v8 = CompareNamesCaseSensitive((unsigned __int16 *)j[1].Parent, &FullName->Length);
      if ( v8 != 3 )
        break;
      j = j->LeftChild;
    }
    if ( v8 )
      break;
  }
  if ( p_LeftChild->NodeTypeCode == 514 )
  {
    NextPrefixTree = i->NextPrefixTree;
    i->NextPrefixTree = 0LL;
    i->NodeTypeCode = 514;
    p_LeftChild = (_PREFIX_TABLE_ENTRY *)&RtlSplay(j)[-1].LeftChild;
    p_LeftChild->NodeTypeCode = 513;
    PrefixTable->NextPrefixTree = p_LeftChild;
    p_LeftChild->NextPrefixTree = NextPrefixTree;
  }
  return p_LeftChild;
}
