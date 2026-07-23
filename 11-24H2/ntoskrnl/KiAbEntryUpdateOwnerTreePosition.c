/*
 * XREFs of KiAbEntryUpdateOwnerTreePosition @ 0x1403665F0
 * Callers:
 *     KiAbDeferredProcessingWorker @ 0x140283660 (KiAbDeferredProcessingWorker.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x1402CBF00 (KiAbConvertWaiterToOwnerEntry.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1403651C0 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x140365870 (RtlRbRemoveNode.c)
 */

char __fastcall KiAbEntryUpdateOwnerTreePosition(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax
  char v4; // r8
  __int64 v5; // rax
  char v6; // cl
  _RTL_RB_TREE *v7; // rdi
  unsigned __int64 Root; // rdx
  BOOLEAN v9; // al
  _RTL_BALANCED_NODE *v10; // rax
  unsigned int v11; // r8d

  v3 = *(_DWORD *)(a1 + 80) & 0x3FFFFFFF;
  if ( v3 )
  {
    _BitScanReverse(&v11, v3);
    v4 = v11 + 1;
  }
  else
  {
    v4 = 0;
  }
  v5 = *(_QWORD *)(a1 - 88LL * (*(_BYTE *)(a1 + 8) & 0x3F) - 16);
  v6 = *(_BYTE *)(v5 + 563);
  if ( v6 > v4 )
  {
    v4 = *(_BYTE *)(v5 + 563);
    if ( v6 > 30 )
      v4 = 30;
  }
  if ( *(_BYTE *)(a1 + 40) != v4 )
  {
    v7 = (_RTL_RB_TREE *)(a2 + 40);
    *(_BYTE *)(a1 + 40) = v4;
    RtlRbRemoveNode((PRTL_RB_TREE)(a2 + 40), (PRTL_BALANCED_NODE)(a1 + 16));
    Root = (unsigned __int64)v7->Root;
    if ( ((__int64)v7->Min & 1) == 0 )
      goto LABEL_8;
    if ( Root )
    {
      Root ^= (unsigned __int64)v7;
LABEL_8:
      v9 = 0;
      if ( !Root )
        goto LABEL_18;
      while ( 1 )
      {
        if ( *(_BYTE *)(Root + 24) <= *(_BYTE *)(a1 + 40) )
        {
          v10 = *(_RTL_BALANCED_NODE **)(Root + 8);
          if ( ((__int64)v7->Min & 1) != 0 )
          {
            if ( !v10 )
              goto LABEL_17;
            v10 = (_RTL_BALANCED_NODE *)(Root ^ (unsigned __int64)v10);
          }
          if ( !v10 )
          {
LABEL_17:
            v9 = 1;
            goto LABEL_18;
          }
        }
        else
        {
          v10 = *(_RTL_BALANCED_NODE **)Root;
          if ( ((__int64)v7->Min & 1) != 0 )
          {
            if ( !v10 )
              break;
            v10 = (_RTL_BALANCED_NODE *)(Root ^ (unsigned __int64)v10);
          }
          if ( !v10 )
            break;
        }
        Root = (unsigned __int64)v10;
      }
    }
    v9 = 0;
LABEL_18:
    LOBYTE(v5) = RtlRbInsertNodeEx(v7, (PRTL_BALANCED_NODE)Root, v9, (PRTL_BALANCED_NODE)(a1 + 16));
  }
  return v5;
}
