/*
 * XREFs of RtlSplay @ 0x1800C48C0
 * Callers:
 *     RtlpTpIoLookup @ 0x1800C3DFC (RtlpTpIoLookup.c)
 *     RtlEnumerateGenericTable @ 0x1800C4060 (RtlEnumerateGenericTable.c)
 *     RtlDelete @ 0x1800C4270 (RtlDelete.c)
 *     RtlInsertElementGenericTable @ 0x1800C44D0 (RtlInsertElementGenericTable.c)
 *     RtlInsertElementGenericTableFull @ 0x1800C4650 (RtlInsertElementGenericTableFull.c)
 *     RtlLookupElementGenericTableFull @ 0x1800C4770 (RtlLookupElementGenericTableFull.c)
 *     RtlLookupElementGenericTable @ 0x1800C4840 (RtlLookupElementGenericTable.c)
 *     PfxFindPrefix @ 0x18013A2F0 (PfxFindPrefix.c)
 *     PfxInsertPrefix @ 0x18013A3F0 (PfxInsertPrefix.c)
 * Callees:
 *     <none>
 */

PRTL_SPLAY_LINKS __cdecl RtlSplay(PRTL_SPLAY_LINKS Links)
{
  _RTL_SPLAY_LINKS *i; // rax
  _RTL_SPLAY_LINKS *LeftChild; // r8
  _RTL_SPLAY_LINKS *Parent; // rdx
  _RTL_SPLAY_LINKS *v4; // rdx
  _RTL_SPLAY_LINKS *v6; // r8
  _RTL_SPLAY_LINKS *v7; // r8
  _RTL_SPLAY_LINKS **p_LeftChild; // r8
  _RTL_SPLAY_LINKS *v9; // r8
  _RTL_SPLAY_LINKS **v10; // r8
  _RTL_SPLAY_LINKS *v11; // r8
  _RTL_SPLAY_LINKS *v12; // r8
  _RTL_SPLAY_LINKS **p_RightChild; // r8
  _RTL_SPLAY_LINKS *RightChild; // rdx
  _RTL_SPLAY_LINKS *v15; // r8
  _RTL_SPLAY_LINKS *v16; // r8
  _RTL_SPLAY_LINKS **v17; // r8

  for ( i = Links->Parent; Links->Parent != Links; i = Links->Parent )
  {
    LeftChild = i->LeftChild;
    Parent = i->Parent;
    if ( LeftChild == Links )
    {
      if ( Parent == i )
      {
        RightChild = Links->RightChild;
        i->LeftChild = RightChild;
        if ( RightChild )
          RightChild->Parent = i;
        Links->RightChild = i;
        i->Parent = Links;
        Links->Parent = Links;
      }
      else if ( Parent->LeftChild == i )
      {
        v6 = Links->RightChild;
        i->LeftChild = v6;
        if ( v6 )
          v6->Parent = i;
        v7 = i->RightChild;
        Parent->LeftChild = v7;
        if ( v7 )
          v7->Parent = Parent;
        if ( Parent->Parent == Parent )
        {
          Links->Parent = Links;
          Links->RightChild = i;
          i->Parent = Links;
          i->RightChild = Parent;
          Parent->Parent = i;
        }
        else
        {
          Links->Parent = Parent->Parent;
          p_LeftChild = &Parent->Parent->LeftChild;
          if ( *p_LeftChild != Parent )
            p_LeftChild = &Parent->Parent->RightChild;
          *p_LeftChild = Links;
          Links->RightChild = i;
          i->Parent = Links;
          i->RightChild = Parent;
          Parent->Parent = i;
        }
      }
      else
      {
        v11 = Links->LeftChild;
        Parent->RightChild = v11;
        if ( v11 )
          v11->Parent = Parent;
        v12 = Links->RightChild;
        i->LeftChild = v12;
        if ( v12 )
          v12->Parent = i;
        if ( Parent->Parent == Parent )
        {
          Links->Parent = Links;
          Links->LeftChild = Parent;
          Parent->Parent = Links;
          Links->RightChild = i;
          i->Parent = Links;
        }
        else
        {
          Links->Parent = Parent->Parent;
          p_RightChild = &Parent->Parent->LeftChild;
          if ( *p_RightChild != Parent )
            p_RightChild = &Parent->Parent->RightChild;
          *p_RightChild = Links;
          Links->LeftChild = Parent;
          Parent->Parent = Links;
          Links->RightChild = i;
          i->Parent = Links;
        }
      }
    }
    else if ( Parent == i )
    {
      v4 = Links->LeftChild;
      i->RightChild = v4;
      if ( v4 )
        v4->Parent = i;
      Links->LeftChild = i;
      i->Parent = Links;
      Links->Parent = Links;
    }
    else if ( Parent->RightChild == i )
    {
      Parent->RightChild = LeftChild;
      if ( LeftChild )
        LeftChild->Parent = Parent;
      v9 = Links->LeftChild;
      i->RightChild = v9;
      if ( v9 )
        v9->Parent = i;
      if ( Parent->Parent == Parent )
      {
        Links->Parent = Links;
        Links->LeftChild = i;
        i->Parent = Links;
        i->LeftChild = Parent;
        Parent->Parent = i;
      }
      else
      {
        Links->Parent = Parent->Parent;
        v10 = &Parent->Parent->LeftChild;
        if ( *v10 != Parent )
          v10 = &Parent->Parent->RightChild;
        *v10 = Links;
        Links->LeftChild = i;
        i->Parent = Links;
        i->LeftChild = Parent;
        Parent->Parent = i;
      }
    }
    else
    {
      v15 = Links->LeftChild;
      i->RightChild = v15;
      if ( v15 )
        v15->Parent = i;
      v16 = Links->RightChild;
      Parent->LeftChild = v16;
      if ( v16 )
        v16->Parent = Parent;
      if ( Parent->Parent == Parent )
      {
        Links->Parent = Links;
        Links->LeftChild = i;
        i->Parent = Links;
        Links->RightChild = Parent;
        Parent->Parent = Links;
      }
      else
      {
        Links->Parent = Parent->Parent;
        v17 = &Parent->Parent->LeftChild;
        if ( *v17 != Parent )
          v17 = &Parent->Parent->RightChild;
        *v17 = Links;
        Links->LeftChild = i;
        i->Parent = Links;
        Links->RightChild = Parent;
        Parent->Parent = Links;
      }
    }
  }
  return Links;
}
