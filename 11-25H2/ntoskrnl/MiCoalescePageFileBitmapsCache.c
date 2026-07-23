/*
 * XREFs of MiCoalescePageFileBitmapsCache @ 0x1403DA600
 * Callers:
 *     MiReleasePageFileInfo @ 0x1402346B0 (MiReleasePageFileInfo.c)
 *     MiAttemptPageFileReductionApc @ 0x14045A0D0 (MiAttemptPageFileReductionApc.c)
 *     MiFinishPageFileExtension @ 0x1404CB93C (MiFinishPageFileExtension.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1402E2370 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x1402E2A20 (RtlRbRemoveNode.c)
 *     RtlLengthCurrentClearRunForward @ 0x1403DAC50 (RtlLengthCurrentClearRunForward.c)
 *     RtlLengthCurrentClearRunBackward @ 0x1403DAD38 (RtlLengthCurrentClearRunBackward.c)
 *     MiRescanPageFileBitmapPortion @ 0x1403DADC8 (MiRescanPageFileBitmapPortion.c)
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
  unsigned __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rdx
  int v39; // r12d
  int v40; // esi
  char v41; // bl
  int v42; // r9d
  unsigned __int64 v43; // rdi
  unsigned __int64 v44; // rax
  int v45; // ecx
  unsigned __int64 v46; // r11
  unsigned __int64 v47; // rdx
  __int64 v48; // rbx
  int v49; // r8d
  int v50; // r14d
  unsigned int v51; // ecx
  unsigned __int64 v52; // rax
  bool v53; // zf
  __int64 v54; // rcx
  char v55; // dl
  unsigned int v56; // r8d
  __int64 v57; // rdx
  unsigned __int64 v58; // r9
  unsigned __int64 v59; // rax
  int v60; // ecx
  unsigned __int64 v61; // r11
  unsigned int v62; // edx
  unsigned int v63; // ecx
  unsigned __int64 v64; // rax
  __int64 v65; // rax
  int v66; // eax
  int v67; // eax
  unsigned __int64 *v68; // rcx
  __int64 v69; // rcx
  unsigned int v70; // edx
  unsigned int v71; // eax
  int v72; // eax
  __int64 v74; // [rsp+30h] [rbp-48h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF
  int *v76; // [rsp+80h] [rbp+8h]
  __int64 v77; // [rsp+98h] [rbp+20h]

  v3 = &retaddr;
  if ( (*(_BYTE *)(a1 + 175) & 1) != 0 )
    return (char)v3;
  v6 = 24LL;
  v7 = *(_QWORD *)(a1 + 80);
  v8 = 8LL;
  if ( !a2 )
    v8 = 24LL;
  v77 = v7 + v8;
  v9 = *(_QWORD *)(a1 + 128);
  if ( !a2 )
    v6 = 8LL;
  v10 = (int *)(v7 + v6);
  v11 = 0LL;
  v12 = *(_QWORD *)(a1 + 136);
  v13 = 0LL;
  v76 = v10;
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
    v74 = v34;
    v21 = v35 - 1;
    if ( v35 == a3 )
    {
      if ( *(_DWORD *)(v18 + 48) == a3 )
      {
        *(_DWORD *)(v34 + 52) = *(_DWORD *)(v18 + 52) + v33;
        *(_DWORD *)(v18 + 52) = 0;
        RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 112), (PRTL_BALANCED_NODE)(v9 - 24));
        RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 128), (PRTL_BALANCED_NODE)v9);
        v68 = *(unsigned __int64 **)(a1 + 152);
        if ( *v68 != a1 + 144 )
          __fastfail(3u);
        v19 = -1;
        v10 = v76;
        v13 = v74 | 1;
        *(_QWORD *)v18 = a1 + 144;
        *(_QWORD *)(v18 + 8) = v68;
        *v68 = v18;
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
    v37 = *(_DWORD *)(v13 + 48);
    if ( v37 == a3 )
    {
      v71 = RtlLengthCurrentClearRunBackward(v10, a3, 0xFFFFFFFFLL);
      if ( v71 > 1 )
      {
        v72 = RtlLengthCurrentClearRunBackward(v77, a3, v71);
        *(_DWORD *)(v13 + 52) += v72 - 1;
        *(_DWORD *)(v13 + 48) = a3 - v72 + 1;
      }
    }
    else
    {
      v38 = *((_QWORD *)v10 + 1);
      v39 = *(_DWORD *)(v13 + 52);
      v40 = *v10;
      v41 = v39 + v37 - 1;
      v42 = *v10 & 0x1F;
      v43 = 4 * ((unsigned __int64)(unsigned int)(v39 + v37 - 1) >> 5);
      v44 = v38 + 4 * ((unsigned __int64)(unsigned int)(v40 - 1) >> 5);
      v45 = *(_DWORD *)(v38 + v43);
      v46 = v38 + v43;
      v47 = v44 - 4;
      if ( (v40 & 0x1F) == 0 )
        v47 = v44;
      v48 = v41 & 0x1F;
      v49 = 0;
      v50 = ~*((_DWORD *)qword_1400122D0 + v48);
      v51 = v50 & v45;
      if ( v46 <= v47 )
      {
        while ( !v51 )
        {
          v49 += 32;
          if ( v49 == -1 && (_DWORD)v48 == 0 )
            goto LABEL_68;
          if ( v46 == v47 )
            goto LABEL_61;
          v51 = *(_DWORD *)(v46 + 4);
          v46 += 4LL;
        }
        v52 = v51;
LABEL_65:
        v53 = !_BitScanForward64((unsigned __int64 *)&v54, v52);
        v55 = -1;
        if ( !v53 )
          v55 = v54;
        v49 += v55;
      }
      else
      {
LABEL_61:
        if ( v42 )
        {
          if ( v49 )
            v51 = *(_DWORD *)(v46 + 4);
          v52 = v51 | ~*((_DWORD *)qword_1400122D0 + (v40 & 0x1F));
          goto LABEL_65;
        }
      }
LABEL_68:
      v56 = v49 - v48;
      if ( v56 > 1 )
      {
        v57 = *(_QWORD *)(v77 + 8);
        v58 = v43 + v57;
        v59 = v57 + 4 * ((unsigned __int64)(unsigned int)(*(_DWORD *)v77 - 1) >> 5);
        v60 = *(_DWORD *)(v43 + v57);
        v61 = v59 - 4;
        v62 = 0;
        if ( (*(_DWORD *)v77 & 0x1F) == 0 )
          v61 = v59;
        v63 = v50 & v60;
        if ( v58 <= v61 )
        {
          while ( !v63 )
          {
            v62 += 32;
            if ( v62 >= v56 && v62 - (unsigned int)v48 >= v56 )
              goto LABEL_102;
            if ( v58 == v61 )
              goto LABEL_72;
            v63 = *(_DWORD *)(v58 + 4);
            v58 += 4LL;
          }
          v64 = v63;
LABEL_99:
          v53 = !_BitScanForward64((unsigned __int64 *)&v69, v64);
          if ( !v53 )
            v19 = v69;
          v62 += v19;
        }
        else
        {
LABEL_72:
          if ( (*(_DWORD *)v77 & 0x1F) != 0 )
          {
            if ( v62 )
              v63 = *(_DWORD *)(v58 + 4);
            v64 = v63 | ~*((_DWORD *)qword_1400122D0 + (*(_DWORD *)v77 & 0x1F));
            goto LABEL_99;
          }
        }
LABEL_102:
        v70 = v62 - v48;
        if ( v70 > v56 )
          v70 = v56;
        *(_DWORD *)(v13 + 52) = v39 + v70 - 1;
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
      if ( ((__int64)v26->Min & 1) != 0 )
      {
        if ( Root )
        {
          Root ^= (unsigned __int64)v26;
          goto LABEL_36;
        }
LABEL_108:
        v28 = 0;
      }
      else
      {
LABEL_36:
        v28 = 0;
        if ( Root )
        {
          while ( 1 )
          {
            while ( *(_QWORD *)(v13 + 48) < *(_QWORD *)(Root + 48) )
            {
              v29 = *(_QWORD *)Root;
              if ( ((__int64)v26->Min & 1) != 0 )
              {
                if ( !v29 )
                  goto LABEL_108;
                v29 ^= Root;
              }
              if ( !v29 )
                goto LABEL_108;
              Root = v29;
            }
            v36 = *(_QWORD *)(Root + 8);
            if ( ((__int64)v26->Min & 1) != 0 )
            {
              if ( !v36 )
                break;
              v36 ^= Root;
            }
            if ( !v36 )
              break;
            Root = v36;
          }
          v28 = 1;
        }
      }
      LOBYTE(v3) = RtlRbInsertNodeEx(v26, (PRTL_BALANCED_NODE)Root, v28, (PRTL_BALANCED_NODE)v13);
    }
  }
  else
  {
    v30 = v17 - ((v17 != -1) + 1) - a3;
    v31 = a3 - ((v21 != 0) + 1) - v21;
    if ( *(_QWORD *)(a1 + 144) == a1 + 144 )
    {
      v65 = *(_QWORD *)(a1 + 120);
      if ( (v65 & 1) != 0 )
      {
        if ( v65 != 1 )
          v11 = v65 ^ ((a1 + 112) | 1);
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
    v74 = v11;
    v32 = a3 - (v21 != 0) - v21 + v30;
    if ( *(_DWORD *)(v11 + 52) >= v32
      || v32 < 0x20
      || v30
      && ((v66 = RtlLengthCurrentClearRunForward(v10, a3, v30 + 1),
           v32 = v31 + v66,
           v30 = v66 - 1,
           *(_DWORD *)(v11 + 52) >= (unsigned int)(v31 + v66))
       || v32 < 0x20)
      || v31
      && ((v67 = RtlLengthCurrentClearRunBackward(v76, a3, a3 - (v21 != 0) - v21),
           v32 = v67 + v30,
           v31 = v67 - 1,
           v67 + v30 < 0x20)
       || *(_DWORD *)(v11 + 52) >= v32) )
    {
      LODWORD(v3) = *(_DWORD *)(a1 + 108);
      if ( (unsigned int)v3 > v32 )
        v32 = *(_DWORD *)(a1 + 108);
      *(_DWORD *)(a1 + 108) = v32;
    }
    else
    {
      LOBYTE(v3) = MiRescanPageFileBitmapPortion(a1, v77, a3 - v31, v32, (__int64)&v74);
    }
  }
  return (char)v3;
}
