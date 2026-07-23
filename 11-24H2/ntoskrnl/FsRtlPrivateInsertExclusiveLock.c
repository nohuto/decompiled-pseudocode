/*
 * XREFs of FsRtlPrivateInsertExclusiveLock @ 0x1402E32F4
 * Callers:
 *     FsRtlPrivateLock @ 0x1402E26A0 (FsRtlPrivateLock.c)
 *     FsRtlPrivateInsertLock @ 0x1402E2CE0 (FsRtlPrivateInsertLock.c)
 * Callees:
 *     RtlRealSuccessor @ 0x1402E2650 (RtlRealSuccessor.c)
 */

PRTL_SPLAY_LINKS __fastcall FsRtlPrivateInsertExclusiveLock(__int64 a1, _RTL_SPLAY_LINKS *a2)
{
  _RTL_SPLAY_LINKS *v3; // rbp
  _RTL_SPLAY_LINKS *v4; // rdx
  _RTL_SPLAY_LINKS *v5; // r8
  char v6; // r9
  PRTL_SPLAY_LINKS result; // rax
  bool v9; // zf
  _RTL_SPLAY_LINKS *Parent; // r10
  _RTL_SPLAY_LINKS *RightChild; // rdi
  _RTL_SPLAY_LINKS *v12; // r11
  _RTL_SPLAY_LINKS *v13; // rcx

  v3 = 0LL;
  v4 = *(_RTL_SPLAY_LINKS **)(a1 + 16);
  v5 = 0LL;
  v6 = 0;
  result = 0LL;
  v9 = v4 == 0LL;
  if ( v4 )
  {
    Parent = a2[1].Parent;
    do
    {
      RightChild = v4[2].RightChild;
      v3 = v4;
      if ( RightChild >= Parent && ((v12 = v4[1].Parent) != 0LL || v4[1].LeftChild) )
      {
        v13 = a2[2].RightChild;
        if ( v12 <= v13 && (v13 != (_RTL_SPLAY_LINKS *)-1LL || Parent) )
        {
          if ( v12 <= Parent )
            break;
          result = v4;
        }
        v5 = v4;
        v6 = 1;
        v4 = v4->LeftChild;
      }
      else
      {
        if ( RightChild == a2[2].RightChild && v4[1].Parent == Parent )
        {
          result = v4;
          v5 = v4;
          v4 = v4->LeftChild;
        }
        else
        {
          v5 = v4;
          v4 = v4->RightChild;
        }
        v6 = 0;
      }
    }
    while ( v4 );
    v9 = v4 == 0LL;
  }
  if ( !v9 )
    result = v3;
  a2->Parent = a2;
  a2->LeftChild = 0LL;
  a2->RightChild = 0LL;
  if ( result )
  {
    if ( result->RightChild )
    {
      if ( result->LeftChild )
        result = RtlRealSuccessor(result);
      result->LeftChild = a2;
    }
    else
    {
      result->RightChild = a2;
    }
    a2->Parent = result;
  }
  else if ( v5 )
  {
    if ( v6 )
      v5->LeftChild = a2;
    else
      v5->RightChild = a2;
    a2->Parent = v5;
  }
  else
  {
    *(_QWORD *)(a1 + 16) = a2;
  }
  return result;
}
