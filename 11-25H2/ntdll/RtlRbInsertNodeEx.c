/*
 * XREFs of RtlRbInsertNodeEx @ 0x180010AF0
 * Callers:
 *     RtlpCreateWnfNameSubscription @ 0x1800050BC (RtlpCreateWnfNameSubscription.c)
 *     RtlpHpVsChunkSplit @ 0x18000E810 (RtlpHpVsChunkSplit.c)
 *     RtlpHpSegFreeRangeInsert @ 0x18000F5C0 (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpVsChunkFree @ 0x18000F800 (RtlpHpVsChunkFree.c)
 *     RtlpHpSegPageRangeShrink @ 0x1800100E0 (RtlpHpSegPageRangeShrink.c)
 *     EtwpInsertRegistration @ 0x180045AB0 (EtwpInsertRegistration.c)
 *     LdrpInsertModuleToIndexLockHeld @ 0x18006E938 (LdrpInsertModuleToIndexLockHeld.c)
 *     LdrpCheckForRetryLoading @ 0x180072F4C (LdrpCheckForRetryLoading.c)
 *     RtlpHpVaMgrFree @ 0x1800BC4D0 (RtlpHpVaMgrFree.c)
 *     RtlpHpLargeAlloc @ 0x1800BD0E4 (RtlpHpLargeAlloc.c)
 *     RtlpHpVsFreeChunkInsert @ 0x1800D8410 (RtlpHpVsFreeChunkInsert.c)
 *     EtwpInsertGuidEntry @ 0x18010E48C (EtwpInsertGuidEntry.c)
 *     RtlCompareExchangePointerMapping @ 0x1801445C0 (RtlCompareExchangePointerMapping.c)
 *     LdrpAddRedirectedFunction @ 0x1801621C4 (LdrpAddRedirectedFunction.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlRbInsertNodeEx(PRTL_RB_TREE Tree, PRTL_BALANCED_NODE Parent, BOOLEAN Right, PRTL_BALANCED_NODE Node)
{
  _RTL_BALANCED_NODE *v4; // rsi
  char v5; // bp
  unsigned __int64 v6; // r10
  char v8; // di
  unsigned __int64 v9; // rcx
  unsigned __int64 Min; // rax
  unsigned __int64 v11; // rax
  _RTL_BALANCED_NODE *v12; // rcx
  char v13; // cl
  _RTL_BALANCED_NODE *v14; // rcx
  $7D93978C745EB1C2D28075BAF55422B4 v15; // dl
  unsigned __int64 v16; // rdi
  char v17; // r14
  __int64 v18; // r15
  _RTL_BALANCED_NODE *v19; // r8
  BOOL v20; // eax
  _BOOL8 v21; // r13
  _BOOL8 v22; // r15
  _BOOL8 v23; // r12
  bool v24; // zf
  BOOL v25; // r14d
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  int v28; // edx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // r15
  unsigned int v32; // edi
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rbx
  unsigned __int64 v35; // rcx
  unsigned __int64 Root; // rdi
  unsigned __int64 v37; // rbx
  unsigned __int64 v38; // rax
  int v39; // r9d
  unsigned __int64 v40; // rdi
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rcx
  unsigned __int64 v54; // [rsp+0h] [rbp-58h]
  _BOOL8 v55; // [rsp+8h] [rbp-50h]
  _BOOL8 v56; // [rsp+10h] [rbp-48h]
  BOOL v57; // [rsp+68h] [rbp+10h]
  int v58; // [rsp+68h] [rbp+10h]
  BOOL v59; // [rsp+78h] [rbp+20h]

  v4 = 0LL;
  v5 = Right;
  Node->Children[0] = 0LL;
  v6 = (unsigned __int64)Parent;
  Node->Children[1] = 0LL;
  v8 = *(_BYTE *)&Tree->0 & 1;
  if ( !Parent )
  {
    v9 = (unsigned __int64)Tree ^ (unsigned __int64)Node;
    Min = (unsigned __int64)Tree ^ (unsigned __int64)Node;
    if ( !v8 )
      Min = (unsigned __int64)Node;
    Tree->Root = (_RTL_BALANCED_NODE *)Min;
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
    {
      Tree->Min = (_RTL_BALANCED_NODE *)v9;
      Tree->0 = ($7D93978C745EB1C2D28075BAF55422B4)(v9 | 1);
    }
    else
    {
      Tree->Min = Node;
    }
    Node->ParentValue = 0LL;
    return Min;
  }
  v11 = (unsigned __int64)Parent;
  v12 = (_RTL_BALANCED_NODE *)((unsigned __int64)Parent ^ (unsigned __int64)Node);
  if ( !v8 )
    v12 = Node;
  Parent->Children[Right] = v12;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
    v11 = (unsigned __int64)Parent ^ (unsigned __int64)Node;
  Min = v11 | 1;
  Node->ParentValue = Min;
  if ( !Right )
  {
    Min = (unsigned __int64)Tree->Min;
    if ( (Min & 1) != 0 )
    {
      if ( Min == 1 )
        goto LABEL_12;
      v14 = (_RTL_BALANCED_NODE *)(Min ^ ((unsigned __int64)Tree | 1));
    }
    else
    {
      v14 = Tree->Min;
    }
    if ( Parent == v14 )
    {
      if ( (Min & 1) != 0 )
      {
        Tree->Min = (_RTL_BALANCED_NODE *)((unsigned __int64)Node ^ (unsigned __int64)Tree);
        LOBYTE(Min) = (unsigned __int8)Node ^ (unsigned __int8)Tree | 1;
        Tree->0 = ($7D93978C745EB1C2D28075BAF55422B4)Min;
      }
      else
      {
        Tree->Min = Node;
      }
    }
  }
  while ( 1 )
  {
LABEL_12:
    v13 = *(_BYTE *)(v6 + 16);
    if ( (v13 & 1) == 0 )
      return Min;
    v15 = Tree->0;
    v16 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    v17 = *(_BYTE *)&v15 & 1;
    if ( (*(_BYTE *)&v15 & 1) != 0 && v16 )
    {
      v19 = (_RTL_BALANCED_NODE *)(v6 ^ v16);
      v54 = v6 ^ v16;
      v18 = *(_QWORD *)(v6 ^ v16);
    }
    else
    {
      v18 = *(_QWORD *)v16;
      v19 = (_RTL_BALANCED_NODE *)(*(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL);
      v54 = (unsigned __int64)v19;
      if ( !v17 )
        goto LABEL_21;
    }
    if ( !v18 )
    {
LABEL_21:
      v20 = v18 != v6;
      v21 = v20;
      v22 = v18 == v6;
      v23 = v20;
      v24 = v17 == 0;
      v59 = v20;
      v57 = v20;
      v25 = v20;
      v56 = v20;
      v26 = (unsigned __int64)v19->Children[v22];
      v55 = v21;
      if ( v24 )
        goto LABEL_22;
      goto LABEL_30;
    }
    v59 = ((unsigned __int64)v19 ^ v18) != v6;
    LODWORD(v21) = v59;
    v57 = v59;
    v25 = v59;
    v56 = ((unsigned __int64)v19 ^ v18) != v6;
    v23 = v56;
    v55 = v56;
    v22 = ((unsigned __int64)v19 ^ v18) == v6;
    v26 = *(_QWORD *)(v54 + 8 * v22);
LABEL_30:
    if ( !v26 )
      break;
    v26 ^= (unsigned __int64)v19;
LABEL_22:
    if ( !v26 || (*(_BYTE *)(v26 + 16) & 1) == 0 )
      break;
    Node = v19;
    *(_BYTE *)(v6 + 16) = v13 & 0xFE;
    *(_BYTE *)(v26 + 16) &= ~1u;
    Min = v19->ParentValue;
    v6 = Min & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
    {
      if ( !v6 )
        return Min;
      v6 ^= (unsigned __int64)v19;
    }
    if ( !v6 )
      return Min;
    v19->0 = ($424C8BBEF8F6C852886B4C6E806B5DB0)(Min | 1);
    Min = *(_QWORD *)v6;
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 && Min )
      Min ^= v6;
    v5 = v19 != (_RTL_BALANCED_NODE *)Min;
  }
  if ( v5 == v21 )
  {
    v31 = v54;
  }
  else
  {
    v27 = Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    v28 = *(_BYTE *)&v15 & 1;
    if ( v28 && v27 )
      v27 ^= (unsigned __int64)Node;
    if ( v27 != v6 )
      goto LABEL_51;
    v29 = *(_QWORD *)(v6 + 8 * v22);
    if ( v28 && v29 )
      v29 ^= v6;
    if ( (PRTL_BALANCED_NODE)v29 != Node )
      goto LABEL_51;
    v30 = (unsigned __int64)v19->Children[v23];
    if ( v28 && v30 )
      v30 ^= (unsigned __int64)v19;
    if ( v30 != v6 )
      goto LABEL_51;
    if ( v28 && v16 )
      v16 ^= v6;
    if ( (_RTL_BALANCED_NODE *)v16 != v19 )
      goto LABEL_51;
    v31 = v54;
    v32 = v59;
    v33 = (unsigned __int64)Node ^ v54;
    v57 = v25;
    if ( v28 )
    {
      *(_QWORD *)(v54 + 8 * v55) = v33;
    }
    else
    {
      v33 = (unsigned __int64)v19;
      *(_QWORD *)(v54 + 8 * v56) = Node;
    }
    Node->ParentValue = v33 | *(_DWORD *)&Node->0 & 3;
    v34 = (unsigned __int64)Node->Children[v23];
    if ( !v28 )
    {
LABEL_43:
      if ( !v34 )
        goto LABEL_44;
      v40 = *(_QWORD *)(v34 + 16);
      v41 = v40 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v28 && v41 )
        v41 ^= v34;
      if ( (PRTL_BALANCED_NODE)v41 == Node )
      {
        v42 = v6;
        if ( v28 )
          v42 = v6 ^ v34;
        *(_QWORD *)(v34 + 16) = v42 | v40 & 3;
        v32 = v59;
        goto LABEL_44;
      }
LABEL_51:
      __fastfail(0x1Du);
    }
    if ( v34 )
    {
      v34 ^= (unsigned __int64)Node;
      goto LABEL_43;
    }
LABEL_44:
    if ( v28 && v34 )
    {
      *(_QWORD *)(v6 + 8 * (v32 ^ 1LL)) = v6 ^ v34;
LABEL_58:
      Node->Children[v32] = (_RTL_BALANCED_NODE *)((unsigned __int64)Node ^ v6);
      v35 = (unsigned __int64)Node ^ v6;
    }
    else
    {
      *(_QWORD *)(v6 + 8 * !v21) = v34;
      if ( v28 )
        goto LABEL_58;
      v35 = (unsigned __int64)Node;
      v57 = v25;
      Node->Children[v32] = (_RTL_BALANCED_NODE *)v6;
    }
    *(_QWORD *)(v6 + 16) = v35 | *(_DWORD *)(v6 + 16) & 3;
    v6 = (unsigned __int64)Node;
  }
  Root = (unsigned __int64)Tree->Root;
  if ( ((__int64)Tree->Min & 1) != 0 && Root )
    Root ^= (unsigned __int64)Tree;
  v37 = !v57;
  v38 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  v58 = !v57;
  v39 = (__int64)Tree->Min & 1;
  if ( ((__int64)Tree->Min & 1) != 0 && v38 )
    v38 ^= v6;
  if ( (_RTL_BALANCED_NODE *)v38 != v19 )
    goto LABEL_51;
  v52 = (unsigned __int64)v19->Children[(unsigned int)v37 ^ 1LL];
  if ( ((__int64)Tree->Min & 1) != 0 && v52 )
    v52 ^= (unsigned __int64)v19;
  if ( v52 != v6 )
    goto LABEL_51;
  v43 = v19->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  if ( ((__int64)Tree->Min & 1) != 0 )
  {
    if ( v43 )
    {
      v43 ^= (unsigned __int64)v19;
      goto LABEL_84;
    }
    goto LABEL_99;
  }
LABEL_84:
  if ( !v43 )
  {
LABEL_99:
    if ( (_RTL_BALANCED_NODE *)Root != v19 )
      goto LABEL_51;
    Root = v6;
    goto LABEL_90;
  }
  v44 = *(_QWORD *)(v43 + 8);
  if ( ((__int64)Tree->Min & 1) != 0 && v44 )
    v44 ^= v43;
  if ( (_RTL_BALANCED_NODE *)v44 == v19 )
  {
    v45 = v6;
    if ( ((__int64)Tree->Min & 1) != 0 )
      v45 = v6 ^ v43;
    *(_QWORD *)(v43 + 8) = v45;
  }
  else
  {
    v50 = *(_QWORD *)v43;
    if ( ((__int64)Tree->Min & 1) != 0 && v50 )
      v50 ^= v43;
    if ( (_RTL_BALANCED_NODE *)v50 != v19 )
      goto LABEL_51;
    v51 = v6;
    if ( ((__int64)Tree->Min & 1) != 0 )
      v51 = v6 ^ v43;
    *(_QWORD *)v43 = v51;
  }
LABEL_90:
  if ( v39 && v43 )
    v43 ^= v6;
  *(_QWORD *)(v6 + 16) = v43 | *(_DWORD *)(v6 + 16) & 3;
  v46 = *(_QWORD *)(v6 + 8 * v37);
  if ( v39 )
  {
    if ( v46 )
    {
      v46 ^= v6;
      goto LABEL_92;
    }
  }
  else
  {
LABEL_92:
    if ( v46 )
    {
      v37 = *(_QWORD *)(v46 + 16);
      v48 = v37 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v39 && v48 )
        v48 ^= v46;
      if ( v48 != v6 )
        goto LABEL_51;
      v49 = (unsigned __int64)v19;
      if ( v39 )
        v49 = (unsigned __int64)v19 ^ v46;
      *(_QWORD *)(v46 + 16) = v49 | v37 & 3;
      LODWORD(v37) = v58;
    }
  }
  if ( v39 && v46 )
  {
    *(_QWORD *)(v31 + 8 * ((unsigned int)v37 ^ 1LL)) = (unsigned __int64)v19 ^ v46;
LABEL_101:
    *(_QWORD *)(v6 + 8LL * (unsigned int)v37) = v6 ^ (unsigned __int64)v19;
    v47 = v6 ^ (unsigned __int64)v19;
  }
  else
  {
    v19->Children[(unsigned int)v37 ^ 1LL] = (_RTL_BALANCED_NODE *)v46;
    if ( v39 )
      goto LABEL_101;
    v47 = v6;
    *(_QWORD *)(v6 + 8LL * (unsigned int)v37) = v19;
  }
  Min = v19->ParentValue & 3;
  v19->ParentValue = Min | v47;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
  {
    LOBYTE(Min) = (unsigned __int8)Tree ^ Root;
    if ( Root )
      v4 = (_RTL_BALANCED_NODE *)((unsigned __int64)Tree ^ Root);
    Tree->Root = v4;
    *(_BYTE *)&v19->0 |= 1u;
    *(_BYTE *)(v6 + 16) &= ~1u;
  }
  else
  {
    Tree->Root = (_RTL_BALANCED_NODE *)Root;
    *(_BYTE *)&v19->0 |= 1u;
    *(_BYTE *)(v6 + 16) &= ~1u;
  }
  return Min;
}
