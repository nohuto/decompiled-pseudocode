/*
 * XREFs of MiCoalescePageFileBitmapsCache @ 0x1403C4F10
 * Callers:
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     MiAttemptPageFileReductionApc @ 0x1403EF420 (MiAttemptPageFileReductionApc.c)
 *     MiFinishPageFileExtension @ 0x1404C4B98 (MiFinishPageFileExtension.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1403651C0 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x140365870 (RtlRbRemoveNode.c)
 *     RtlLengthCurrentClearRunForward @ 0x1403C5560 (RtlLengthCurrentClearRunForward.c)
 *     RtlLengthCurrentClearRunBackward @ 0x1403C5648 (RtlLengthCurrentClearRunBackward.c)
 *     MiRescanPageFileBitmapPortion @ 0x1403C56D8 (MiRescanPageFileBitmapPortion.c)
 */

char __fastcall MiCoalescePageFileBitmapsCache(__int64 a1, int a2, unsigned int a3)
{
  _UNKNOWN **v3; // rax
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  int *v10; // r9
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rbp
  unsigned __int64 v14; // rdx
  int v15; // ecx
  unsigned __int64 v16; // rax
  int v17; // esi
  unsigned __int64 v18; // r14
  char v19; // r10
  unsigned __int64 i; // rcx
  int v21; // r12d
  unsigned __int64 v22; // rdx
  unsigned __int64 j; // rcx
  unsigned __int64 v24; // rdx
  _QWORD *v25; // rdx
  _RTL_RB_TREE *v26; // r13
  unsigned __int64 Root; // rdx
  BOOLEAN v28; // al
  unsigned __int64 v29; // rax
  unsigned int v30; // esi
  int v31; // ebx
  unsigned int v32; // ecx
  int v33; // edx
  __int64 v34; // r8
  int v35; // ecx
  int v36; // eax
  __int64 v37; // rdx
  int v38; // r12d
  int v39; // esi
  char v40; // bl
  int v41; // r9d
  unsigned __int64 v42; // rdi
  unsigned __int64 v43; // rax
  int v44; // ecx
  unsigned __int64 v45; // r11
  unsigned __int64 v46; // rdx
  __int64 v47; // rbx
  int v48; // r8d
  int v49; // r14d
  unsigned int v50; // ecx
  unsigned __int64 v51; // rax
  bool v52; // zf
  __int64 v53; // rcx
  char v54; // dl
  unsigned int v55; // r8d
  __int64 v56; // rdx
  unsigned __int64 v57; // r9
  unsigned __int64 v58; // rax
  int v59; // ecx
  unsigned __int64 v60; // r11
  unsigned int v61; // edx
  unsigned int v62; // ecx
  unsigned __int64 v63; // rax
  __int64 v64; // rax
  int v65; // eax
  int v66; // eax
  unsigned __int64 *v67; // rcx
  __int64 v68; // rcx
  unsigned int v69; // edx
  unsigned int v70; // eax
  int v71; // eax
  __int64 v73; // [rsp+30h] [rbp-48h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF
  int *v75; // [rsp+80h] [rbp+8h]
  __int64 v76; // [rsp+98h] [rbp+20h]

  v3 = &retaddr;
  if ( (*(_BYTE *)(a1 + 175) & 1) != 0 )
    return (char)v3;
  v6 = 24LL;
  v7 = *(_QWORD *)(a1 + 80);
  v8 = 8LL;
  if ( !a2 )
    v8 = 24LL;
  v76 = v7 + v8;
  v9 = *(_QWORD *)(a1 + 128);
  if ( !a2 )
    v6 = 8LL;
  v10 = (int *)(v7 + v6);
  v11 = 0LL;
  v12 = *(_QWORD *)(a1 + 136);
  v13 = 0LL;
  v75 = v10;
  if ( (v12 & 1) != 0 && v9 )
    v9 ^= a1 + 128;
  v14 = 0LL;
  v15 = v12 & 1;
  while ( v9 )
  {
    if ( a3 < *(_DWORD *)(v9 + 24) )
    {
      v16 = *(_QWORD *)v9;
      v14 = v9;
      if ( !v15 || !v16 )
        goto LABEL_13;
      v9 ^= v16;
    }
    else
    {
      if ( a3 <= *(_DWORD *)(v9 + 24) )
        goto LABEL_15;
      v16 = *(_QWORD *)(v9 + 8);
      if ( v15 && v16 )
        v9 ^= v16;
      else
LABEL_13:
        v9 = v16;
    }
  }
  v9 = v14;
LABEL_15:
  v17 = *(_DWORD *)(v9 + 24);
  v18 = v9 - 24;
  v19 = -1;
  if ( v17 == a3 + 1 && v17 != -1 )
  {
    ++*(_DWORD *)(v18 + 52);
    v13 = v9 - 24;
    *(_DWORD *)(v18 + 48) = a3;
  }
  i = *(_QWORD *)v9;
  v21 = 0;
  v22 = v9;
  if ( *(_QWORD *)v9 )
  {
    for ( ; *(_QWORD *)(i + 8); i = *(_QWORD *)(i + 8) )
      ;
  }
  else
  {
    for ( i = *(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
    {
      if ( *(_QWORD *)(i + 8) == v22 )
        break;
      v22 = i;
    }
  }
  if ( i )
  {
    v33 = *(_DWORD *)(i + 28);
    v34 = i - 24;
    v35 = v33 + *(_DWORD *)(i + 24);
    v73 = v34;
    v21 = v35 - 1;
    if ( v35 == a3 )
    {
      if ( *(_DWORD *)(v18 + 48) == a3 )
      {
        *(_DWORD *)(v34 + 52) = *(_DWORD *)(v18 + 52) + v33;
        *(_DWORD *)(v18 + 52) = 0;
        RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 112), (PRTL_BALANCED_NODE)(v9 - 24));
        RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 128), (PRTL_BALANCED_NODE)v9);
        v67 = *(unsigned __int64 **)(a1 + 152);
        if ( *v67 != a1 + 144 )
          __fastfail(3u);
        v19 = -1;
        v10 = v75;
        v13 = v73 | 1;
        *(_QWORD *)v18 = a1 + 144;
        *(_QWORD *)(v18 + 8) = v67;
        *v67 = v18;
        *(_QWORD *)(a1 + 152) = v18;
      }
      else
      {
        v13 = v34;
        *(_DWORD *)(v34 + 52) = v33 + 1;
      }
    }
  }
  if ( v13 )
  {
    if ( (v13 & 1) != 0 )
    {
      v13 &= ~1uLL;
      goto LABEL_27;
    }
    v36 = *(_DWORD *)(v13 + 48);
    if ( v36 == a3 )
    {
      v70 = RtlLengthCurrentClearRunBackward(v10, a3, 0xFFFFFFFFLL);
      if ( v70 > 1 )
      {
        v71 = RtlLengthCurrentClearRunBackward(v76, a3, v70);
        *(_DWORD *)(v13 + 52) += v71 - 1;
        *(_DWORD *)(v13 + 48) = a3 - v71 + 1;
      }
    }
    else
    {
      v37 = *((_QWORD *)v10 + 1);
      v38 = *(_DWORD *)(v13 + 52);
      v39 = *v10;
      v40 = v38 + v36 - 1;
      v41 = *v10 & 0x1F;
      v42 = 4 * ((unsigned __int64)(unsigned int)(v38 + v36 - 1) >> 5);
      v43 = v37 + 4 * ((unsigned __int64)(unsigned int)(v39 - 1) >> 5);
      v44 = *(_DWORD *)(v37 + v42);
      v45 = v37 + v42;
      v46 = v43 - 4;
      if ( (v39 & 0x1F) == 0 )
        v46 = v43;
      v47 = v40 & 0x1F;
      v48 = 0;
      v49 = ~*((_DWORD *)qword_140011DF0 + v47);
      v50 = v49 & v44;
      if ( v45 <= v46 )
      {
        while ( !v50 )
        {
          v48 += 32;
          if ( v48 == -1 && (_DWORD)v47 == 0 )
            goto LABEL_68;
          if ( v45 == v46 )
            goto LABEL_61;
          v50 = *(_DWORD *)(v45 + 4);
          v45 += 4LL;
        }
        v51 = v50;
LABEL_65:
        v52 = !_BitScanForward64((unsigned __int64 *)&v53, v51);
        v54 = -1;
        if ( !v52 )
          v54 = v53;
        v48 += v54;
      }
      else
      {
LABEL_61:
        if ( v41 )
        {
          if ( v48 )
            v50 = *(_DWORD *)(v45 + 4);
          v51 = v50 | ~*((_DWORD *)qword_140011DF0 + (v39 & 0x1F));
          goto LABEL_65;
        }
      }
LABEL_68:
      v55 = v48 - v47;
      if ( v55 > 1 )
      {
        v56 = *(_QWORD *)(v76 + 8);
        v57 = v42 + v56;
        v58 = v56 + 4 * ((unsigned __int64)(unsigned int)(*(_DWORD *)v76 - 1) >> 5);
        v59 = *(_DWORD *)(v42 + v56);
        v60 = v58 - 4;
        v61 = 0;
        if ( (*(_DWORD *)v76 & 0x1F) == 0 )
          v60 = v58;
        v62 = v49 & v59;
        if ( v57 <= v60 )
        {
          while ( !v62 )
          {
            v61 += 32;
            if ( v61 >= v55 && v61 - (unsigned int)v47 >= v55 )
              goto LABEL_100;
            if ( v57 == v60 )
              goto LABEL_72;
            v62 = *(_DWORD *)(v57 + 4);
            v57 += 4LL;
          }
          v63 = v62;
LABEL_97:
          v52 = !_BitScanForward64((unsigned __int64 *)&v68, v63);
          if ( !v52 )
            v19 = v68;
          v61 += v19;
        }
        else
        {
LABEL_72:
          if ( (*(_DWORD *)v76 & 0x1F) != 0 )
          {
            if ( v61 )
              v62 = *(_DWORD *)(v57 + 4);
            v63 = v62 | ~*((_DWORD *)qword_140011DF0 + (*(_DWORD *)v76 & 0x1F));
            goto LABEL_97;
          }
        }
LABEL_100:
        v69 = v61 - v47;
        if ( v69 > v55 )
          v69 = v55;
        *(_DWORD *)(v13 + 52) = v38 + v69 - 1;
      }
    }
LABEL_27:
    j = *(_QWORD *)(v13 + 8);
    v24 = v13;
    if ( j )
    {
      v25 = *(_QWORD **)j;
      if ( *(_QWORD *)j )
      {
        do
        {
          j = (unsigned __int64)v25;
          v25 = (_QWORD *)*v25;
        }
        while ( v25 );
      }
    }
    else
    {
      for ( j = *(_QWORD *)(v13 + 16) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
      {
        if ( *(_QWORD *)j == v24 )
          break;
        v24 = j;
      }
    }
    LODWORD(v3) = *(_DWORD *)(v13 + 52);
    if ( *(_DWORD *)(j + 52) <= (unsigned int)v3 )
    {
      v26 = (_RTL_RB_TREE *)(a1 + 112);
      RtlRbRemoveNode(v26, (PRTL_BALANCED_NODE)v13);
      Root = (unsigned __int64)v26->Root;
      if ( ((__int64)v26->Min & 1) == 0 )
        goto LABEL_36;
      if ( Root )
      {
        Root ^= (unsigned __int64)v26;
LABEL_36:
        v28 = 0;
        if ( !Root )
          goto LABEL_56;
        while ( 1 )
        {
          if ( *(_QWORD *)(v13 + 48) >= *(_QWORD *)(Root + 48) )
          {
            v29 = *(_QWORD *)(Root + 8);
            if ( ((__int64)v26->Min & 1) != 0 )
            {
              if ( !v29 )
                goto LABEL_55;
              v29 ^= Root;
            }
            if ( !v29 )
            {
LABEL_55:
              v28 = 1;
              goto LABEL_56;
            }
          }
          else
          {
            v29 = *(_QWORD *)Root;
            if ( ((__int64)v26->Min & 1) != 0 )
            {
              if ( !v29 )
                break;
              v29 ^= Root;
            }
            if ( !v29 )
              break;
          }
          Root = v29;
        }
      }
      v28 = 0;
LABEL_56:
      LOBYTE(v3) = RtlRbInsertNodeEx(v26, (PRTL_BALANCED_NODE)Root, v28, (PRTL_BALANCED_NODE)v13);
    }
  }
  else
  {
    v30 = v17 - ((v17 != -1) + 1) - a3;
    v31 = a3 - ((v21 != 0) + 1) - v21;
    if ( *(_QWORD *)(a1 + 144) == a1 + 144 )
    {
      v64 = *(_QWORD *)(a1 + 120);
      if ( (v64 & 1) != 0 )
      {
        if ( v64 != 1 )
          v11 = v64 ^ ((a1 + 112) | 1);
      }
      else
      {
        v11 = *(_QWORD *)(a1 + 120);
      }
    }
    else
    {
      v11 = *(_QWORD *)(a1 + 144);
    }
    v73 = v11;
    v32 = a3 - (v21 != 0) - v21 + v30;
    if ( *(_DWORD *)(v11 + 52) >= v32
      || v32 < 0x20
      || v30
      && ((v65 = RtlLengthCurrentClearRunForward(v10, a3, v30 + 1),
           v32 = v31 + v65,
           v30 = v65 - 1,
           *(_DWORD *)(v11 + 52) >= (unsigned int)(v31 + v65))
       || v32 < 0x20)
      || v31
      && ((v66 = RtlLengthCurrentClearRunBackward(v75, a3, a3 - (v21 != 0) - v21),
           v32 = v66 + v30,
           v31 = v66 - 1,
           v66 + v30 < 0x20)
       || *(_DWORD *)(v11 + 52) >= v32) )
    {
      LODWORD(v3) = *(_DWORD *)(a1 + 108);
      if ( (unsigned int)v3 > v32 )
        v32 = *(_DWORD *)(a1 + 108);
      *(_DWORD *)(a1 + 108) = v32;
    }
    else
    {
      LOBYTE(v3) = MiRescanPageFileBitmapPortion(a1, v76, a3 - v31, v32, (__int64)&v73);
    }
  }
  return (char)v3;
}
