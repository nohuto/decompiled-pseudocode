/*
 * XREFs of RtlNextUnicodePrefix @ 0x140A41220
 * Callers:
 *     <none>
 * Callees:
 *     RtlRealSuccessor @ 0x1402E2650 (RtlRealSuccessor.c)
 */

PUNICODE_PREFIX_TABLE_ENTRY __stdcall RtlNextUnicodePrefix(PUNICODE_PREFIX_TABLE PrefixTable, BOOLEAN Restart)
{
  PUNICODE_PREFIX_TABLE_ENTRY LastNextEntry; // rbx
  PUNICODE_PREFIX_TABLE_ENTRY result; // rax
  PRTL_SPLAY_LINKS p_Links; // rax
  RTL_SPLAY_LINKS *v6; // rcx
  RTL_SPLAY_LINKS *Parent; // rdx
  _RTL_SPLAY_LINKS *v8; // rax
  _RTL_SPLAY_LINKS *v9; // rcx
  PUNICODE_PREFIX_TABLE_ENTRY NextPrefixTree; // rax
  _RTL_SPLAY_LINKS *LeftChild; // rcx

  if ( Restart || (LastNextEntry = PrefixTable->LastNextEntry) == 0LL )
  {
    NextPrefixTree = PrefixTable->NextPrefixTree;
    if ( NextPrefixTree->NodeTypeCode != 2048 )
    {
      LeftChild = NextPrefixTree->Links.LeftChild;
      p_Links = &NextPrefixTree->Links;
      while ( LeftChild )
      {
        p_Links = LeftChild;
        LeftChild = LeftChild->LeftChild;
      }
      goto LABEL_5;
    }
  }
  else
  {
    result = LastNextEntry->CaseMatch;
    if ( result->NodeTypeCode == 2051 )
    {
LABEL_6:
      PrefixTable->LastNextEntry = result;
      return result;
    }
    p_Links = RtlRealSuccessor(&result->Links);
    if ( p_Links )
    {
LABEL_5:
      result = (PUNICODE_PREFIX_TABLE_ENTRY)&p_Links[-1];
      goto LABEL_6;
    }
    v6 = &LastNextEntry->Links;
    Parent = LastNextEntry->Links.Parent;
    if ( Parent != &LastNextEntry->Links )
    {
      do
      {
        v6 = Parent;
        Parent = Parent->Parent;
      }
      while ( Parent != v6 );
    }
    v8 = v6[-1].LeftChild;
    if ( SWORD1(v8->Parent) > 0 )
    {
      v9 = v8[1].LeftChild;
      p_Links = v8 + 1;
      while ( v9 )
      {
        p_Links = v9;
        v9 = v9->LeftChild;
      }
      goto LABEL_5;
    }
  }
  return 0LL;
}
