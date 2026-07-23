/*
 * XREFs of MiRemoveLargeFreeLoaderDescriptors @ 0x140C53C4C
 * Callers:
 *     MiInitNucleus @ 0x140C51428 (MiInitNucleus.c)
 * Callees:
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     RtlRbInsertNodeEx @ 0x1403651C0 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x140365870 (RtlRbRemoveNode.c)
 *     MiRestrictRangeToNode @ 0x1403FC38C (MiRestrictRangeToNode.c)
 *     MiFindDescriptorByPfn @ 0x140C51290 (MiFindDescriptorByPfn.c)
 */

void __fastcall MiRemoveLargeFreeLoaderDescriptors(__int64 a1)
{
  __int64 v2; // r14
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // r15
  _QWORD *DescriptorByPfn; // rbx
  char v6; // dl
  __int64 v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // r13
  _QWORD *v10; // rcx
  ULONG_PTR v11; // rsi
  ULONG_PTR v12; // rdi
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // r13
  ULONG_PTR v15; // rbp
  __int64 *v16; // rdx
  __int64 v17; // rcx
  unsigned __int16 i; // dx
  unsigned __int64 v19; // r8
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned int j; // ebx
  unsigned __int64 *v23; // r11
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  __int64 v28; // r11
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // r9
  unsigned __int64 v31; // r10
  unsigned __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // r11
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 *v37; // r11
  unsigned __int64 v38; // rdx
  BOOLEAN v39; // r8
  unsigned __int64 v40; // rax

  if ( !_bittest64(&KeFeatureBits, 0x25u) )
    return;
  v2 = a1 + 352;
  v3 = *(_QWORD *)(a1 + 352);
  v4 = 0LL;
  DescriptorByPfn = 0LL;
  if ( (*(_BYTE *)(a1 + 360) & 1) != 0 )
  {
    if ( !v3 )
      goto LABEL_48;
    v3 ^= v2;
  }
  if ( v3 )
  {
    v6 = *(_BYTE *)(a1 + 360) & 1;
    do
    {
      v7 = *(_QWORD *)(v3 + 8);
      DescriptorByPfn = (_QWORD *)v3;
      if ( v6 && v7 )
        v3 ^= v7;
      else
        v3 = *(_QWORD *)(v3 + 8);
    }
    while ( v3 );
  }
  if ( DescriptorByPfn )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v8 = (_QWORD *)*DescriptorByPfn;
        v9 = DescriptorByPfn;
        v10 = DescriptorByPfn;
        if ( *DescriptorByPfn )
        {
          while ( 1 )
          {
            DescriptorByPfn = v8;
            if ( !v8[1] )
              break;
            v8 = (_QWORD *)v8[1];
          }
        }
        else
        {
          while ( 1 )
          {
            DescriptorByPfn = (_QWORD *)(DescriptorByPfn[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !DescriptorByPfn || (_QWORD *)DescriptorByPfn[1] == v10 )
              break;
            v10 = DescriptorByPfn;
          }
        }
        v11 = v9[5];
        v12 = v9[4];
        if ( v11 >= 0x200000 )
          break;
        if ( v11 + v12 >= 0x300000 && v11 + v12 >= v4 )
        {
          v13 = v12 & 0xFFFFFFFFFFFC0000uLL;
          if ( v13 >= 0x100000 )
          {
            DescriptorByPfn = (_QWORD *)MiFindDescriptorByPfn(a1, v13 - 0x40000);
            if ( DescriptorByPfn )
              continue;
          }
        }
LABEL_47:
        v2 = a1 + 352;
        goto LABEL_48;
      }
      if ( v12 < 0x100000 )
      {
        v11 += v12 - 0x100000;
        v12 = 0x100000LL;
      }
      v14 = *((int *)v9 + 6);
      if ( v11 )
        break;
LABEL_46:
      if ( !DescriptorByPfn )
        goto LABEL_47;
    }
    while ( 1 )
    {
      v15 = MiRestrictRangeToNode(v12, v11);
      v16 = &MxBootDeferDescriptors[4 * (unsigned int)MiPageToNode(v12)];
      if ( (_DWORD)v14 != 6 && (unsigned int)(v14 - 30) > 2 )
      {
        if ( (unsigned int)v14 <= 0x2C )
        {
          v17 = 0x15C400C00008LL;
          if ( _bittest64(&v17, v14) )
            goto LABEL_45;
        }
        v16[2] += v15;
        if ( (_DWORD)v14 == 2 )
          goto LABEL_36;
      }
      if ( (_DWORD)v14 == 24 )
      {
LABEL_36:
        v16[3] += v15;
        if ( v15 >= 0x200000 && v15 > v16[1] )
        {
          v4 = -1LL;
          *v16 = v12;
          v16[1] = v15;
          for ( i = 0; i < 0x40u; ++i )
          {
            v19 = v4;
            v20 = 4LL * i;
            v21 = MxBootDeferDescriptors[v20 + 1];
            if ( v21 < v4 )
            {
              v4 = MxBootDeferDescriptors[v20 + 1];
              if ( !v21 )
                break;
            }
            v4 = MxBootDeferDescriptors[v20 + 1];
            if ( v21 >= v19 )
              v4 = v19;
            if ( i == (unsigned __int16)KeNumberNodes - 1 )
              break;
          }
        }
      }
LABEL_45:
      v11 -= v15;
      v12 += v15;
      if ( !v11 )
        goto LABEL_46;
    }
  }
LABEL_48:
  for ( j = 0; j < (unsigned __int16)KeNumberNodes; ++j )
  {
    v23 = (unsigned __int64 *)&MxBootDeferDescriptors[4 * j];
    v24 = v23[1];
    if ( !v24 )
      continue;
    v25 = v23[3];
    if ( v25 < 0x300000 )
      continue;
    v26 = ((48 * v23[2]) >> 10) & 0x3FFFFFFFFFFFFCLL;
    if ( v26 < 0x100000 )
      v26 = 0x100000LL;
    if ( v25 - v24 < v26 )
    {
      if ( v25 <= v26 )
        continue;
      v24 = v25 - v26;
    }
    v27 = MiFindDescriptorByPfn(a1, *v23);
    v29 = (v28 + v24) & 0xFFFFFFFFFFFC0000uLL;
    v30 = (v28 + 0x3FFFF) & 0xFFFFFFFFFFFC0000uLL;
    v31 = v29;
    if ( v29 < v30 )
      continue;
    v32 = v29 - v30;
    if ( v32 < 0x40000 )
      continue;
    v33 = 6LL * j;
    LODWORD(qword_14100C9E8[v33]) = *(_DWORD *)(v27 + 24);
    qword_14100C9E8[v33 + 1] = v30;
    qword_14100C9E8[v33 + 2] = v32;
    v34 = *(_QWORD *)(v27 + 32);
    v35 = *(_QWORD *)(v27 + 40);
    v36 = v34 + v35;
    if ( v30 != v34 )
    {
      if ( v31 != v36 )
      {
        v37 = &MxDeferredBootSplitDescriptor[v33];
        *((_DWORD *)v37 + 6) = *(_DWORD *)(v27 + 24);
        v37[4] = *(_QWORD *)(v27 + 32);
        v37[5] = v30 - *(_QWORD *)(v27 + 32);
        *(_QWORD *)(v27 + 40) = *(_QWORD *)(v27 + 32) + *(_QWORD *)(v27 + 40) - v30 - v32;
        *(_QWORD *)(v27 + 32) = v31;
        v38 = *(_QWORD *)v2;
        if ( (*(_BYTE *)(v2 + 8) & 1) != 0 )
        {
          if ( v38 )
            v38 ^= v2;
          else
            v38 = 0LL;
        }
        v39 = 0;
        if ( v38 )
        {
          while ( 1 )
          {
            if ( (unsigned __int64)v37[4] >= *(_QWORD *)(v38 + 32) )
            {
              v40 = *(_QWORD *)(v38 + 8);
              if ( (*(_BYTE *)(v2 + 8) & 1) != 0 )
              {
                if ( !v40 )
                  goto LABEL_80;
                v40 ^= v38;
              }
              if ( !v40 )
              {
LABEL_80:
                v39 = 1;
                break;
              }
            }
            else
            {
              v40 = *(_QWORD *)v38;
              if ( (*(_BYTE *)(v2 + 8) & 1) != 0 )
              {
                if ( !v40 )
                  goto LABEL_74;
                v40 ^= v38;
              }
              if ( !v40 )
              {
LABEL_74:
                v39 = 0;
                break;
              }
            }
            v38 = v40;
          }
        }
        RtlRbInsertNodeEx(
          (PRTL_RB_TREE)v2,
          (PRTL_BALANCED_NODE)v38,
          v39,
          (PRTL_BALANCED_NODE)&MxDeferredBootSplitDescriptor[v33]);
        continue;
      }
      goto LABEL_62;
    }
    if ( v31 != v36 )
    {
      *(_QWORD *)(v27 + 32) = v34 + v32;
LABEL_62:
      *(_QWORD *)(v27 + 40) = v35 - v32;
      continue;
    }
    RtlRbRemoveNode((PRTL_RB_TREE)v2, (PRTL_BALANCED_NODE)v27);
  }
}
