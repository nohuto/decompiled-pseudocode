/*
 * XREFs of KiAbEntryUpdateWaiterTreePosition @ 0x140366760
 * Callers:
 *     KiAbConvertWaiterToOwnerEntry @ 0x1402CBF00 (KiAbConvertWaiterToOwnerEntry.c)
 *     KiAbForceProcessLockEntry @ 0x140408194 (KiAbForceProcessLockEntry.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1403651C0 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x140365870 (RtlRbRemoveNode.c)
 */

char __fastcall KiAbEntryUpdateWaiterTreePosition(__int64 a1, __int64 a2)
{
  char result; // al
  _RTL_RB_TREE *v4; // rdi
  unsigned __int64 Root; // rdx
  BOOLEAN v6; // al
  _RTL_BALANCED_NODE *v7; // rax

  result = *(_BYTE *)(*(_QWORD *)(a1 - 88LL * (*(_BYTE *)(a1 + 8) & 0x3F) - 16) + 195LL);
  if ( result > 30 )
    result = 30;
  if ( *(_BYTE *)(a1 + 40) != result )
  {
    v4 = (_RTL_RB_TREE *)(a2 + 56);
    *(_BYTE *)(a1 + 40) = result;
    RtlRbRemoveNode((PRTL_RB_TREE)(a2 + 56), (PRTL_BALANCED_NODE)(a1 + 16));
    Root = (unsigned __int64)v4->Root;
    if ( ((__int64)v4->Min & 1) == 0 )
      goto LABEL_5;
    if ( Root )
    {
      Root ^= (unsigned __int64)v4;
LABEL_5:
      v6 = 0;
      if ( !Root )
        return RtlRbInsertNodeEx(v4, (PRTL_BALANCED_NODE)Root, v6, (PRTL_BALANCED_NODE)(a1 + 16));
      while ( 1 )
      {
        if ( *(_BYTE *)(Root + 24) >= *(_BYTE *)(a1 + 40) )
        {
          v7 = *(_RTL_BALANCED_NODE **)(Root + 8);
          if ( ((__int64)v4->Min & 1) != 0 )
          {
            if ( !v7 )
              goto LABEL_14;
            v7 = (_RTL_BALANCED_NODE *)(Root ^ (unsigned __int64)v7);
          }
          if ( !v7 )
          {
LABEL_14:
            v6 = 1;
            return RtlRbInsertNodeEx(v4, (PRTL_BALANCED_NODE)Root, v6, (PRTL_BALANCED_NODE)(a1 + 16));
          }
        }
        else
        {
          v7 = *(_RTL_BALANCED_NODE **)Root;
          if ( ((__int64)v4->Min & 1) != 0 )
          {
            if ( !v7 )
              break;
            v7 = (_RTL_BALANCED_NODE *)(Root ^ (unsigned __int64)v7);
          }
          if ( !v7 )
            break;
        }
        Root = (unsigned __int64)v7;
      }
    }
    v6 = 0;
    return RtlRbInsertNodeEx(v4, (PRTL_BALANCED_NODE)Root, v6, (PRTL_BALANCED_NODE)(a1 + 16));
  }
  return result;
}
