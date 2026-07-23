/*
 * XREFs of RtlSplay @ 0x1403751F0
 * Callers:
 *     RtlDelete @ 0x1403738D0 (RtlDelete.c)
 *     RtlEnumerateGenericTable @ 0x140373EF0 (RtlEnumerateGenericTable.c)
 *     FsRtlPrivateLock @ 0x140373FB0 (FsRtlPrivateLock.c)
 *     FsRtlPrivateInsertSharedLock @ 0x140374828 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlPrivateCheckForExclusiveLockAccess @ 0x140374A30 (FsRtlPrivateCheckForExclusiveLockAccess.c)
 *     RtlInsertElementGenericTable @ 0x140374DF0 (RtlInsertElementGenericTable.c)
 *     RtlInsertElementGenericTableFull @ 0x140374F70 (RtlInsertElementGenericTableFull.c)
 *     RtlLookupElementGenericTableFull @ 0x1403750A0 (RtlLookupElementGenericTableFull.c)
 *     RtlLookupElementGenericTable @ 0x140375170 (RtlLookupElementGenericTable.c)
 *     FsRtlPrivateCheckForSharedLockAccess @ 0x140375A34 (FsRtlPrivateCheckForSharedLockAccess.c)
 *     FsRtlCheckNoExclusiveConflict @ 0x140375B44 (FsRtlCheckNoExclusiveConflict.c)
 *     FsRtlCheckNoSharedConflict @ 0x140375DBC (FsRtlCheckNoSharedConflict.c)
 *     PfxFindPrefix @ 0x1407703C0 (PfxFindPrefix.c)
 *     PfxInsertPrefix @ 0x1407704C0 (PfxInsertPrefix.c)
 *     RtlInsertUnicodePrefix @ 0x14099A430 (RtlInsertUnicodePrefix.c)
 *     RtlFindUnicodePrefix @ 0x14099A5B0 (RtlFindUnicodePrefix.c)
 * Callees:
 *     <none>
 */

PRTL_SPLAY_LINKS __stdcall RtlSplay(PRTL_SPLAY_LINKS Links)
{
  _RTL_SPLAY_LINKS *i; // rax
  _RTL_SPLAY_LINKS *LeftChild; // r8
  _RTL_SPLAY_LINKS *Parent; // rdx
  _RTL_SPLAY_LINKS *v5; // r8
  _RTL_SPLAY_LINKS *v6; // r8
  _RTL_SPLAY_LINKS **p_LeftChild; // r8
  _RTL_SPLAY_LINKS *v8; // rdx
  _RTL_SPLAY_LINKS *RightChild; // rdx
  _RTL_SPLAY_LINKS *v10; // r8
  _RTL_SPLAY_LINKS *v11; // r8
  _RTL_SPLAY_LINKS *v12; // r8
  _RTL_SPLAY_LINKS **p_RightChild; // r8
  _RTL_SPLAY_LINKS *v14; // r8
  _RTL_SPLAY_LINKS *v15; // r8
  _RTL_SPLAY_LINKS **v16; // r8
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
        v5 = Links->RightChild;
        i->LeftChild = v5;
        if ( v5 )
          v5->Parent = i;
        v6 = i->RightChild;
        Parent->LeftChild = v6;
        if ( v6 )
          v6->Parent = Parent;
        if ( Parent->Parent == Parent )
        {
          Links->Parent = Links;
        }
        else
        {
          Links->Parent = Parent->Parent;
          p_LeftChild = &Parent->Parent->LeftChild;
          if ( *p_LeftChild != Parent )
            p_LeftChild = &Parent->Parent->RightChild;
          *p_LeftChild = Links;
        }
        Links->RightChild = i;
        i->Parent = Links;
        i->RightChild = Parent;
        Parent->Parent = i;
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
      v8 = Links->LeftChild;
      i->RightChild = v8;
      if ( v8 )
        v8->Parent = i;
      Links->LeftChild = i;
      i->Parent = Links;
      Links->Parent = Links;
    }
    else if ( Parent->RightChild == i )
    {
      Parent->RightChild = LeftChild;
      if ( LeftChild )
        LeftChild->Parent = Parent;
      v10 = Links->LeftChild;
      i->RightChild = v10;
      if ( v10 )
        v10->Parent = i;
      if ( Parent->Parent == Parent )
      {
        Links->Parent = Links;
      }
      else
      {
        Links->Parent = Parent->Parent;
        v17 = &Parent->Parent->LeftChild;
        if ( *v17 != Parent )
          v17 = &Parent->Parent->RightChild;
        *v17 = Links;
      }
      Links->LeftChild = i;
      i->Parent = Links;
      i->LeftChild = Parent;
      Parent->Parent = i;
    }
    else
    {
      v14 = Links->LeftChild;
      i->RightChild = v14;
      if ( v14 )
        v14->Parent = i;
      v15 = Links->RightChild;
      Parent->LeftChild = v15;
      if ( v15 )
        v15->Parent = Parent;
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
        v16 = &Parent->Parent->LeftChild;
        if ( *v16 != Parent )
          v16 = &Parent->Parent->RightChild;
        *v16 = Links;
        Links->LeftChild = i;
        i->Parent = Links;
        Links->RightChild = Parent;
        Parent->Parent = Links;
      }
    }
  }
  return Links;
}
