/*
 * XREFs of RtlRbRemoveNode @ 0x180067980
 * Callers:
 *     RtlpDereferenceWnfNameSubscription @ 0x18002E530 (RtlpDereferenceWnfNameSubscription.c)
 *     LdrpUnloadNode @ 0x180049460 (LdrpUnloadNode.c)
 *     EtwpRemoveRegistrationFromTable @ 0x180049DA8 (EtwpRemoveRegistrationFromTable.c)
 *     RtlpHpVsFreeChunkRemove @ 0x180067760 (RtlpHpVsFreeChunkRemove.c)
 *     RtlpHpSegFreeRangeRemove @ 0x180067840 (RtlpHpSegFreeRangeRemove.c)
 *     RtlpHpVsChunkSplit @ 0x1800687B0 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsChunkFree @ 0x1800697A0 (RtlpHpVsChunkFree.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x18006A6B0 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpVaMgrAlloc @ 0x18009D908 (RtlpHpVaMgrAlloc.c)
 *     RtlpHpVaMgrRangeCoalesce @ 0x18009DD80 (RtlpHpVaMgrRangeCoalesce.c)
 *     RtlpHpLargeFree @ 0x18009E878 (RtlpHpLargeFree.c)
 *     EtwpDereferenceUmGuidEntry @ 0x180105730 (EtwpDereferenceUmGuidEntry.c)
 *     RtlRemovePointerMapping @ 0x180141750 (RtlRemovePointerMapping.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlRbRemoveNode(PRTL_RB_TREE Tree, PRTL_BALANCED_NODE Node)
{
  PRTL_RB_TREE v3; // r11
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rdi
  _RTL_BALANCED_NODE *v9; // rsi
  _RTL_BALANCED_NODE *Min; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r9
  _BOOL8 v13; // rbx
  $424C8BBEF8F6C852886B4C6E806B5DB0 v14; // r9
  char v15; // r9
  $7D93978C745EB1C2D28075BAF55422B4 v16; // cl
  unsigned __int64 v17; // rbp
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rax
  int v21; // r9d
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  _QWORD *p_Root; // rax
  unsigned __int64 v29; // rcx
  __int64 v30; // rax
  char v31; // cl
  __int64 v32; // rax
  char v33; // al
  $7D93978C745EB1C2D28075BAF55422B4 v34; // dl
  unsigned __int64 v35; // rcx
  char v36; // dl
  unsigned __int64 v37; // rdx
  _RTL_BALANCED_NODE *v38; // rcx
  __int64 v39; // rbp
  unsigned __int64 v40; // rcx
  char v41; // r14
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // rax
  char v45; // bp
  unsigned __int64 v46; // rax
  char v47; // cl
  _RTL_BALANCED_NODE *v48; // rcx
  unsigned __int64 v49; // rbp
  $7D93978C745EB1C2D28075BAF55422B4 v50; // dl
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // r14
  unsigned __int64 v53; // rcx
  unsigned __int64 v54; // rdx
  unsigned __int64 v55; // r14
  char v56; // dl
  PRTL_BALANCED_NODE v57; // rcx
  __int64 v58; // r15
  unsigned __int64 v59; // rcx
  unsigned __int64 v60; // rdx
  _RTL_BALANCED_NODE *v61; // rdx
  _RTL_BALANCED_NODE *v62; // r9
  char v63; // dl
  unsigned __int64 v64; // r9
  unsigned __int64 v65; // rdi
  unsigned __int64 v66; // rax
  int v67; // r9d
  unsigned __int64 v68; // rcx
  unsigned __int64 v69; // rcx
  __int64 v70; // rax
  unsigned __int64 v71; // rax
  __int64 v72; // r10
  __int64 v73; // r10
  unsigned __int64 v74; // rax
  __int64 v75; // rax
  unsigned __int64 v76; // r10
  __int64 v77; // rbp
  unsigned __int64 v78; // rax
  int v79; // r9d
  __int64 v80; // rcx
  unsigned __int64 v81; // rax
  unsigned __int64 v82; // rax
  unsigned __int64 v83; // rcx
  __int64 v84; // rcx
  unsigned __int64 v85; // rcx
  char v86; // cl
  __int64 v87; // rax
  unsigned __int64 v88; // rdx
  unsigned __int64 Root; // rbp
  __int64 v90; // rcx
  unsigned __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rdi
  unsigned __int64 v94; // rax

  v3 = Tree;
  LOBYTE(Tree) = Tree->0;
  v4 = (unsigned __int64)Node->Children[0];
  if ( ((unsigned __int8)Tree & 1) != 0 && v4 )
  {
    v5 = (unsigned __int64)Node->Children[1];
    v4 ^= (unsigned __int64)Node;
  }
  else
  {
    v5 = (unsigned __int64)Node->Children[1];
    if ( ((unsigned __int8)Tree & 1) == 0 )
      goto LABEL_3;
  }
  if ( v5 )
    v5 ^= (unsigned __int64)Node;
LABEL_3:
  if ( v4 )
  {
    v6 = v4;
    if ( !v5 )
      goto LABEL_6;
    v37 = *(_QWORD *)v5;
    v9 = 0LL;
    v8 = v5;
    v7 = v5;
    LODWORD(v13) = 1;
    if ( *(_QWORD *)v5 )
    {
      LODWORD(v13) = 0;
      do
      {
        v7 = v8;
        if ( ((unsigned __int8)Tree & 1) != 0 && v37 )
          v8 ^= v37;
        else
          v8 = v37;
        v37 = *(_QWORD *)v8;
      }
      while ( *(_QWORD *)v8 );
    }
    if ( ((unsigned __int8)Tree & 1) != 0 )
      v38 = (_RTL_BALANCED_NODE *)(v4 ^ v8);
    else
      v38 = (_RTL_BALANCED_NODE *)v4;
    *(_QWORD *)v8 = v38;
    v39 = *(_QWORD *)(v4 + 16);
    v40 = v39 & 0xFFFFFFFFFFFFFFFCuLL;
    v41 = *(_BYTE *)&v3->0 & 1;
    if ( v41 && v40 )
      v40 ^= v4;
    if ( (PRTL_BALANCED_NODE)v40 != Node )
      goto LABEL_12;
    v42 = v8;
    if ( v41 )
      v42 = v4 ^ v8;
    *(_QWORD *)(v4 + 16) = v42 | v39 & 3;
    v43 = *(_QWORD *)(v5 + 16);
    v44 = v43 & 0xFFFFFFFFFFFFFFFCuLL;
    v45 = *(_BYTE *)&v3->0 & 1;
    if ( v45 && v44 )
      v44 ^= v5;
    if ( (PRTL_BALANCED_NODE)v44 != Node )
      goto LABEL_12;
    v46 = v8;
    if ( v45 )
      v46 = v5 ^ v8;
    *(_QWORD *)(v5 + 16) = v46 | v43 & 3;
    v4 = *(_QWORD *)(v8 + 8);
    v47 = *(_BYTE *)&v3->0 & 1;
    if ( v47 && v4 )
    {
      v4 ^= v8;
    }
    else if ( !v47 )
    {
      v48 = (_RTL_BALANCED_NODE *)v5;
LABEL_79:
      v49 = *(_QWORD *)(v8 + 16);
      *(_QWORD *)(v8 + 8) = v48;
      v50 = v3->0;
      v51 = v49 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( (*(_BYTE *)&v50 & 1) != 0 && v51 )
        v52 = v8 ^ v51;
      else
        v52 = v49 & 0xFFFFFFFFFFFFFFFCuLL;
      v14 = ($424C8BBEF8F6C852886B4C6E806B5DB0)v49;
      if ( v52 == v7 )
        goto LABEL_82;
      v14 = ($424C8BBEF8F6C852886B4C6E806B5DB0)v49;
      if ( (*(_BYTE *)&v50 & 1) != 0 )
      {
        if ( !v51 )
          goto LABEL_255;
        v51 ^= v8;
      }
      if ( v51 )
        goto LABEL_12;
LABEL_255:
      if ( v8 != v7 )
        goto LABEL_12;
LABEL_82:
      v53 = Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( (*(_BYTE *)&v50 & 1) == 0 )
        goto LABEL_83;
      if ( v53 )
      {
        v53 ^= (unsigned __int64)Node;
      }
      else if ( (*(_BYTE *)&v50 & 1) == 0 )
      {
        goto LABEL_83;
      }
      if ( v53 )
        v53 ^= v8;
LABEL_83:
      v54 = v53 | *(_DWORD *)(v8 + 16) & 3;
      *(_QWORD *)(v8 + 16) = v54;
      *(_BYTE *)(v8 + 16) = v54 ^ (*(_BYTE *)&Node->0 ^ v54) & 1;
      v55 = Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v55 )
      {
        Tree = (PRTL_RB_TREE)v3->Min;
        Root = (unsigned __int64)v3->Root;
        if ( ((unsigned __int8)Tree & 1) != 0 && Root )
          Root ^= (unsigned __int64)v3;
        if ( (PRTL_BALANCED_NODE)Root != Node )
          goto LABEL_12;
        if ( ((unsigned __int8)Tree & 1) != 0 )
          v3->Root = (_RTL_BALANCED_NODE *)((unsigned __int64)v3 ^ v8);
        else
          v3->Root = (_RTL_BALANCED_NODE *)v8;
        goto LABEL_17;
      }
      v56 = *(_BYTE *)&v3->0 & 1;
      if ( v56 )
      {
        v55 ^= (unsigned __int64)Node;
        v57 = *(PRTL_BALANCED_NODE *)(v55 + 8);
        if ( v57 )
        {
          v58 = 0LL;
          if ( (PRTL_BALANCED_NODE)((unsigned __int64)v57 ^ v55) == Node )
            v58 = 8LL;
          v59 = *(_QWORD *)(v55 + v58);
LABEL_248:
          if ( v59 )
            v59 ^= v55;
LABEL_89:
          if ( (PRTL_BALANCED_NODE)v59 != Node )
            goto LABEL_12;
          Tree = (PRTL_RB_TREE)v8;
          if ( (*(_BYTE *)&v3->0 & 1) != 0 )
            Tree = (PRTL_RB_TREE)(v8 ^ v55);
          *(_QWORD *)(v58 + v55) = Tree;
          LOBYTE(Tree) = v3->0;
          goto LABEL_17;
        }
      }
      else
      {
        v57 = *(PRTL_BALANCED_NODE *)(v55 + 8);
      }
      v58 = 0LL;
      if ( v57 == Node )
        v58 = 8LL;
      v59 = *(_QWORD *)(v58 + v55);
      if ( !v56 )
        goto LABEL_89;
      goto LABEL_248;
    }
    v48 = (_RTL_BALANCED_NODE *)(v5 ^ v8);
    goto LABEL_79;
  }
  v4 = v5;
  v6 = v5;
LABEL_6:
  v7 = Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  if ( ((unsigned __int8)Tree & 1) != 0 && v7 )
    v7 ^= (unsigned __int64)Node;
  v8 = (unsigned __int64)Node;
  if ( !v7 )
  {
    v9 = 0LL;
    if ( v4 )
      *(_QWORD *)(v4 + 16) = 0LL;
    Min = v3->Min;
    v11 = (unsigned __int64)v3->Root;
    if ( ((unsigned __int8)Min & 1) != 0 && v11 )
      v11 ^= (unsigned __int64)v3;
    if ( (PRTL_BALANCED_NODE)v11 != Node )
      goto LABEL_12;
    if ( ((unsigned __int8)Min & 1) != 0 )
    {
      v88 = 0LL;
      if ( v4 )
        v88 = (unsigned __int64)v3 ^ v4;
      v3->Min = (_RTL_BALANCED_NODE *)v88;
      v34 = ($7D93978C745EB1C2D28075BAF55422B4)(v88 | 1);
      v3->0 = v34;
    }
    else
    {
      v3->Min = (_RTL_BALANCED_NODE *)v4;
      v34 = ($7D93978C745EB1C2D28075BAF55422B4)v4;
    }
    if ( (*(_BYTE *)&v34 & 1) != 0 )
    {
      if ( v4 )
        v9 = (_RTL_BALANCED_NODE *)((unsigned __int64)v3 ^ v4);
    }
    else
    {
      v9 = (_RTL_BALANCED_NODE *)v6;
    }
    goto LABEL_51;
  }
  v12 = *(_QWORD *)(v7 + 8);
  if ( ((unsigned __int8)Tree & 1) != 0 && v12 )
    v12 ^= v7;
  v9 = 0LL;
  if ( (PRTL_BALANCED_NODE)v12 != Node )
  {
    v60 = *(_QWORD *)v7;
    if ( ((unsigned __int8)Tree & 1) != 0 && v60 )
      v60 ^= v7;
    if ( (PRTL_BALANCED_NODE)v60 != Node )
      goto LABEL_12;
    v61 = v3->Min;
    LODWORD(v13) = 0;
    if ( ((unsigned __int8)v61 & 1) != 0 )
    {
      if ( v61 == (_RTL_BALANCED_NODE *)1 )
      {
        LOBYTE(Tree) = 1;
        goto LABEL_16;
      }
      v62 = (_RTL_BALANCED_NODE *)((unsigned __int64)v61 ^ ((unsigned __int64)v3 | 1));
    }
    else
    {
      v62 = v3->Min;
    }
    LOBYTE(Tree) = v3->Min;
    if ( v62 == Node )
    {
      v63 = (unsigned __int8)v61 & 1;
      if ( v4 )
      {
        if ( v63 )
        {
          v3->Min = (_RTL_BALANCED_NODE *)((unsigned __int64)v3 ^ v4);
          LOBYTE(Tree) = (unsigned __int8)v3 ^ v4 | 1;
          v3->0 = ($7D93978C745EB1C2D28075BAF55422B4)Tree;
        }
        else
        {
          v3->Min = (_RTL_BALANCED_NODE *)v4;
          LOBYTE(Tree) = v4;
        }
      }
      else if ( v63 )
      {
        v3->Min = (_RTL_BALANCED_NODE *)((unsigned __int64)v3 ^ v7);
        LOBYTE(Tree) = (unsigned __int8)v3 ^ v7 | 1;
        v3->0 = ($7D93978C745EB1C2D28075BAF55422B4)Tree;
      }
      else
      {
        v3->Min = (_RTL_BALANCED_NODE *)v7;
        LOBYTE(Tree) = v7;
      }
    }
    goto LABEL_16;
  }
  LODWORD(v13) = 1;
LABEL_16:
  v14 = Node->0;
LABEL_17:
  v15 = *(_BYTE *)&v14 & 1;
  if ( ((unsigned __int8)Tree & 1) != 0 && v4 )
  {
    *(_QWORD *)(v7 + 8 * v13) = v4 ^ v7;
LABEL_59:
    v35 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    v36 = *(_BYTE *)&v3->0 & 1;
    if ( v36 && v35 )
      v35 ^= v4;
    if ( v35 != v8 )
      goto LABEL_12;
    if ( v36 && v7 )
      v7 ^= v4;
    *(_QWORD *)(v4 + 16) = v7;
    return v4;
  }
  *(_QWORD *)(v7 + 8 * v13) = v4;
  if ( v4 )
    goto LABEL_59;
  if ( v15 )
    return v4;
  while ( 1 )
  {
    v16 = v3->0;
    v17 = v7;
    v18 = *(_QWORD *)(v7 + 8 * !v13);
    if ( (*(_BYTE *)&v16 & 1) != 0 && v18 )
      v18 ^= v7;
    if ( (*(_BYTE *)(v18 + 16) & 1) != 0 )
    {
      v19 = (unsigned __int64)v3->Root;
      if ( ((__int64)v3->Min & 1) != 0 && v19 )
        v19 ^= (unsigned __int64)v3;
      v20 = *(_QWORD *)(v18 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      v21 = (__int64)v3->Min & 1;
      if ( ((__int64)v3->Min & 1) != 0 && v20 )
        v20 ^= v18;
      if ( v20 != v7 )
        goto LABEL_12;
      v22 = *(_QWORD *)(v7 + 8 * !v13);
      if ( ((__int64)v3->Min & 1) != 0 && v22 )
        v22 ^= v7;
      if ( v22 != v18 )
        goto LABEL_12;
      v23 = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( ((__int64)v3->Min & 1) != 0 )
      {
        if ( !v23 )
          goto LABEL_124;
        v23 ^= v7;
      }
      if ( v23 )
      {
        v24 = *(_QWORD *)(v23 + 8);
        if ( ((__int64)v3->Min & 1) != 0 && v24 )
          v24 ^= v23;
        if ( v24 == v7 )
        {
          if ( ((__int64)v3->Min & 1) != 0 )
            v25 = v18 ^ v23;
          else
            v25 = v18;
          *(_QWORD *)(v23 + 8) = v25;
        }
        else
        {
          v75 = *(_QWORD *)v23;
          if ( ((__int64)v3->Min & 1) != 0 && v75 )
            v75 ^= v23;
          if ( v75 != v7 )
            goto LABEL_12;
          if ( ((__int64)v3->Min & 1) != 0 )
            *(_QWORD *)v23 = v18 ^ v23;
          else
            *(_QWORD *)v23 = v18;
        }
LABEL_34:
        if ( v21 && v23 )
          v23 ^= v18;
        *(_QWORD *)(v18 + 16) = v23 | *(_DWORD *)(v18 + 16) & 3;
        v26 = *(_QWORD *)(v18 + 8 * v13);
        if ( v21 )
        {
          if ( !v26 )
            goto LABEL_37;
          v26 ^= v18;
        }
        if ( v26 )
        {
          v73 = *(_QWORD *)(v26 + 16);
          v74 = v73 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v21 && v74 )
            v74 ^= v26;
          if ( v74 != v18 )
            goto LABEL_12;
          if ( v21 )
            *(_QWORD *)(v26 + 16) = v7 ^ v26 | v73 & 3;
          else
            *(_QWORD *)(v26 + 16) = v7 | v73 & 3;
        }
LABEL_37:
        if ( v21 && v26 )
        {
          *(_QWORD *)(v7 + 8 * !v13) = v7 ^ v26;
        }
        else
        {
          *(_QWORD *)(v7 + 8 * !v13) = v26;
          if ( !v21 )
          {
            v27 = v18;
            *(_QWORD *)(v18 + 8 * v13) = v7;
LABEL_40:
            *(_QWORD *)(v7 + 16) = v27 | *(_DWORD *)(v7 + 16) & 3;
            p_Root = &v3->Root;
            if ( (*(_BYTE *)&v3->0 & 1) != 0 )
            {
              v29 = 0LL;
              if ( v19 )
                v29 = v19 ^ (unsigned __int64)v3;
              p_Root = &v3->Root;
            }
            else
            {
              v29 = v19;
            }
            *p_Root = v29;
            *(_BYTE *)(v18 + 16) &= ~1u;
            *(_BYTE *)(v7 + 16) |= 1u;
            v16 = v3->0;
            v18 = *(_QWORD *)(v7 + 8 * !v13);
            if ( (*(_BYTE *)&v16 & 1) != 0 && v18 )
              v18 ^= v7;
            goto LABEL_43;
          }
        }
        *(_QWORD *)(v18 + 8 * v13) = v7 ^ v18;
        v27 = v7 ^ v18;
        goto LABEL_40;
      }
LABEL_124:
      if ( v19 != v7 )
        goto LABEL_12;
      v19 = v18;
      goto LABEL_34;
    }
LABEL_43:
    v30 = *(_QWORD *)v18;
    v31 = *(_BYTE *)&v16 & 1;
    if ( *(_QWORD *)v18 )
    {
      if ( v31 )
        v30 ^= v18;
      if ( (*(_BYTE *)(v30 + 16) & 1) != 0 )
        break;
    }
    v32 = *(_QWORD *)(v18 + 8);
    if ( v32 )
    {
      if ( v31 )
        v32 ^= v18;
      if ( (*(_BYTE *)(v32 + 16) & 1) != 0 )
        break;
    }
    v33 = *(_BYTE *)(v7 + 16);
    if ( (v33 & 1) != 0 )
    {
      LOBYTE(v4) = v33 & 0xFE;
      *(_BYTE *)(v7 + 16) = v4;
      *(_BYTE *)(v18 + 16) |= 1u;
      return v4;
    }
    *(_BYTE *)(v18 + 16) |= 1u;
    v4 = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    v86 = *(_BYTE *)&v3->0 & 1;
    if ( v86 && v4 )
      v7 ^= v4;
    else
      v7 = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( !v7 )
      return v4;
    v87 = *(_QWORD *)(v7 + 8);
    if ( v86 && v87 )
      v87 ^= v7;
    v13 = v87 == v17;
  }
  v64 = *(_QWORD *)(v18 + 8 * !v13);
  if ( v31 )
  {
    if ( v64 )
    {
      v64 ^= v18;
      goto LABEL_133;
    }
LABEL_176:
    v76 = *(_QWORD *)(v18 + 8 * v13);
    if ( v31 && v76 )
      v76 ^= v18;
    *(_BYTE *)(v76 + 16) &= ~1u;
    v77 = (unsigned int)v13 ^ 1;
    v78 = *(_QWORD *)(v76 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    v79 = *(_BYTE *)&v3->0 & 1;
    if ( (*(_BYTE *)&v3->0 & 1) != 0 && v78 )
      v78 ^= v76;
    if ( v78 != v18 )
      goto LABEL_12;
    v80 = *(_QWORD *)(v18 + 8 * v13);
    if ( (*(_BYTE *)&v3->0 & 1) != 0 && v80 )
      v80 ^= v18;
    if ( v80 != v76 )
      goto LABEL_12;
    v81 = *(_QWORD *)(v7 + 8 * v77);
    if ( (*(_BYTE *)&v3->0 & 1) != 0 && v81 )
      v81 ^= v7;
    if ( v81 != v18 )
      goto LABEL_12;
    v82 = *(_QWORD *)(v18 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*(_BYTE *)&v3->0 & 1) != 0 && v82 )
      v82 ^= v18;
    if ( v82 != v7 )
      goto LABEL_12;
    if ( (*(_BYTE *)&v3->0 & 1) != 0 )
    {
      *(_QWORD *)(v7 + 8 * v77) = v7 ^ v76;
      if ( v7 )
      {
        v83 = v7 ^ v76;
LABEL_188:
        *(_QWORD *)(v76 + 16) = v83 | *(_DWORD *)(v76 + 16) & 3;
        v84 = *(_QWORD *)(v76 + 8 * v77);
        if ( v79 )
        {
          if ( !v84 )
            goto LABEL_190;
          v84 ^= v76;
        }
        if ( v84 )
        {
          v93 = *(_QWORD *)(v84 + 16);
          v94 = v93 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v79 && v94 )
            v94 ^= v84;
          if ( v94 != v76 )
            goto LABEL_12;
          if ( v79 )
            *(_QWORD *)(v84 + 16) = v18 ^ v84 | v93 & 3;
          else
            *(_QWORD *)(v84 + 16) = v18 | v93 & 3;
        }
LABEL_190:
        if ( v79 && v84 )
        {
          *(_QWORD *)(v18 + 8 * v13) = v18 ^ v84;
        }
        else
        {
          *(_QWORD *)(v18 + 8 * v13) = v84;
          if ( !v79 )
          {
            *(_QWORD *)(v76 + 8 * v77) = v18;
            v85 = v76;
LABEL_193:
            v64 = v18;
            *(_QWORD *)(v18 + 16) = v85 | *(_DWORD *)(v18 + 16) & 3;
            v18 = v76;
            goto LABEL_135;
          }
        }
        *(_QWORD *)(v76 + 8 * v77) = v18 ^ v76;
        v85 = v18 ^ v76;
        goto LABEL_193;
      }
    }
    else
    {
      *(_QWORD *)(v7 + 8 * v77) = v76;
    }
    v83 = v7;
    goto LABEL_188;
  }
LABEL_133:
  if ( !v64 || (*(_BYTE *)(v64 + 16) & 1) == 0 )
    goto LABEL_176;
LABEL_135:
  *(_BYTE *)(v18 + 16) ^= (*(_BYTE *)(v7 + 16) ^ *(_BYTE *)(v18 + 16)) & 1;
  *(_BYTE *)(v7 + 16) &= ~1u;
  *(_BYTE *)(v64 + 16) &= ~1u;
  v65 = (unsigned __int64)v3->Root;
  if ( ((__int64)v3->Min & 1) != 0 && v65 )
    v65 ^= (unsigned __int64)v3;
  v66 = *(_QWORD *)(v18 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  v67 = (__int64)v3->Min & 1;
  if ( ((__int64)v3->Min & 1) != 0 && v66 )
    v66 ^= v18;
  if ( v66 != v7 )
    goto LABEL_12;
  v68 = *(_QWORD *)(v7 + 8 * !v13);
  if ( ((__int64)v3->Min & 1) != 0 && v68 )
    v68 ^= v7;
  if ( v68 != v18 )
    goto LABEL_12;
  v69 = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( ((__int64)v3->Min & 1) == 0 )
    goto LABEL_141;
  if ( !v69 )
    goto LABEL_267;
  v69 ^= v7;
LABEL_141:
  if ( !v69 )
  {
LABEL_267:
    if ( v65 == v7 )
    {
      v65 = v18;
      goto LABEL_147;
    }
    goto LABEL_12;
  }
  v70 = *(_QWORD *)(v69 + 8);
  if ( ((__int64)v3->Min & 1) != 0 && v70 )
    v70 ^= v69;
  if ( v70 != v7 )
  {
    v92 = *(_QWORD *)v69;
    if ( ((__int64)v3->Min & 1) != 0 && v92 )
      v92 ^= v69;
    if ( v92 == v7 )
    {
      if ( ((__int64)v3->Min & 1) != 0 )
        *(_QWORD *)v69 = v18 ^ v69;
      else
        *(_QWORD *)v69 = v18;
      goto LABEL_147;
    }
    goto LABEL_12;
  }
  if ( ((__int64)v3->Min & 1) != 0 )
    v71 = v18 ^ v69;
  else
    v71 = v18;
  *(_QWORD *)(v69 + 8) = v71;
LABEL_147:
  if ( v67 && v69 )
    v69 ^= v18;
  *(_QWORD *)(v18 + 16) = v69 | *(_DWORD *)(v18 + 16) & 3;
  v72 = *(_QWORD *)(v18 + 8 * v13);
  if ( !v67 )
  {
LABEL_149:
    if ( !v72 )
      goto LABEL_150;
    v90 = *(_QWORD *)(v72 + 16);
    v91 = v90 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v67 && v91 )
      v91 ^= v72;
    if ( v91 == v18 )
    {
      if ( v67 )
        *(_QWORD *)(v72 + 16) = v7 ^ v72 | v90 & 3;
      else
        *(_QWORD *)(v72 + 16) = v7 | v90 & 3;
      goto LABEL_150;
    }
LABEL_12:
    __fastfail(0x1Du);
  }
  if ( v72 )
  {
    v72 ^= v18;
    goto LABEL_149;
  }
LABEL_150:
  if ( v67 && v72 )
  {
    *(_QWORD *)(v7 + 8 * !v13) = v7 ^ v72;
LABEL_269:
    *(_QWORD *)(v18 + 8 * v13) = v7 ^ v18;
    v18 ^= v7;
  }
  else
  {
    *(_QWORD *)(v7 + 8 * !v13) = v72;
    if ( v67 )
      goto LABEL_269;
    *(_QWORD *)(v18 + 8 * v13) = v7;
  }
  v4 = v18 | *(_DWORD *)(v7 + 16) & 3;
  *(_QWORD *)(v7 + 16) = v4;
  if ( (*(_BYTE *)&v3->0 & 1) != 0 )
  {
    LOBYTE(v4) = v65 ^ (unsigned __int8)v3;
    if ( v65 )
      v9 = (_RTL_BALANCED_NODE *)(v65 ^ (unsigned __int64)v3);
  }
  else
  {
    v9 = (_RTL_BALANCED_NODE *)v65;
  }
LABEL_51:
  v3->Root = v9;
  return v4;
}
