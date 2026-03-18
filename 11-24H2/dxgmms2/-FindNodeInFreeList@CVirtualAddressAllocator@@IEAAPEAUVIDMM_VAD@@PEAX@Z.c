/*
 * XREFs of ?FindNodeInFreeList@CVirtualAddressAllocator@@IEAAPEAUVIDMM_VAD@@PEAX@Z @ 0x1400BD940
 * Callers:
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1400BD1F0 (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 * Callees:
 *     ?CompareVadSizeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1400BDD30 (-CompareVadSizeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

struct VIDMM_VAD *__fastcall CVirtualAddressAllocator::FindNodeInFreeList(
        CVirtualAddressAllocator *this,
        unsigned __int64 *a2)
{
  unsigned __int64 i; // r12
  struct _RTL_BALANCED_NODE *v5; // rsi
  _QWORD *Children; // rbx
  int v7; // eax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  _QWORD **v15; // rax
  _QWORD *v16; // rcx
  struct VIDMM_VAD *result; // rax
  _QWORD *v18; // rcx
  struct _RTL_BALANCED_NODE *v19; // rsi
  struct _RTL_BALANCED_NODE *v20; // rbp
  int v21; // eax
  struct _RTL_BALANCED_NODE *v22; // rsi
  struct _RTL_BALANCED_NODE *v23; // rbx
  int v24; // eax
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // r10
  _QWORD **v29; // rax
  unsigned __int64 v30; // rcx
  struct _RTL_BALANCED_NODE *v31; // rbx
  int v32; // eax
  _QWORD *v33; // rcx

  i = 0LL;
  if ( *a2 || a2[2] || a2[3] != *((_QWORD *)this + 2) )
  {
    v5 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 5);
    Children = 0LL;
    while ( 1 )
    {
      if ( !v5 )
        goto LABEL_10;
      v7 = CompareVadSizeAvl(a2 + 4, v5);
      if ( !v7 )
        break;
      if ( v7 >= 0 )
      {
        v5 = v5->Children[1];
      }
      else
      {
        Children = v5->Children;
        v5 = v5->Children[0];
      }
    }
    Children = v5->Children;
    v19 = v5->Children[0];
    v20 = 0LL;
    if ( !v19 )
    {
      while ( 1 )
      {
LABEL_10:
        if ( !Children )
          goto LABEL_30;
        v8 = *a2;
        v9 = Children[3];
        if ( *a2 )
        {
          if ( v8 >= v9 && a2[1] <= Children[4] )
          {
            a2[7] = v8;
            goto LABEL_29;
          }
        }
        else
        {
          v10 = a2[3];
          if ( v9 < v10 )
          {
            v11 = Children[4];
            v12 = a2[2];
            if ( v11 > v12 )
            {
              if ( v9 <= v12 )
                v9 = a2[2];
              if ( v11 >= v10 )
                v11 = a2[3];
              v13 = (*((_DWORD *)this + 36) & 2) != 0 ? v11 - a2[4] : v9 + a2[5];
              v14 = a2[6] & v13;
              if ( v14 < v11 && v14 >= v9 && v11 - v14 >= a2[4] )
              {
                a2[7] = v14;
LABEL_29:
                i = (unsigned __int64)Children;
                goto LABEL_30;
              }
            }
          }
        }
        v15 = (_QWORD **)Children[1];
        v16 = Children;
        if ( v15 )
        {
          v18 = *v15;
          for ( Children = (_QWORD *)Children[1]; v18; v18 = (_QWORD *)*v18 )
            Children = v18;
        }
        else
        {
          for ( Children = (_QWORD *)(Children[2] & 0xFFFFFFFFFFFFFFFCuLL);
                Children;
                Children = (_QWORD *)(Children[2] & 0xFFFFFFFFFFFFFFFCuLL) )
          {
            if ( (_QWORD *)*Children == v16 )
              break;
            v16 = Children;
          }
        }
      }
    }
    while ( 1 )
    {
      v21 = CompareVadSizeAvl(a2 + 4, v19);
      if ( v21 < 0 )
        goto LABEL_42;
      if ( v21 <= 0 )
        break;
      v19 = v19->Children[1];
LABEL_39:
      if ( !v19 )
      {
        if ( v20 )
          Children = v20->Children;
        goto LABEL_10;
      }
    }
    v20 = v19;
LABEL_42:
    v19 = v19->Children[0];
    goto LABEL_39;
  }
  v22 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 5);
  v23 = 0LL;
  while ( 1 )
  {
    if ( !v22 )
    {
      i = (unsigned __int64)v23;
      if ( v23 )
        goto LABEL_53;
      goto LABEL_30;
    }
    v24 = CompareVadSizeAvl(a2 + 4, v22);
    if ( !v24 )
      break;
    if ( v24 >= 0 )
    {
      v22 = v22->Children[1];
    }
    else
    {
      v23 = v22;
      v22 = v22->Children[0];
    }
  }
  v31 = v22->Children[0];
  if ( !v22->Children[0] )
    goto LABEL_73;
  do
  {
    v32 = CompareVadSizeAvl(a2 + 4, v31);
    if ( v32 >= 0 )
    {
      if ( v32 > 0 )
      {
        v31 = v31->Children[1];
        continue;
      }
      i = (unsigned __int64)v31;
    }
    v31 = v31->Children[0];
  }
  while ( v31 );
  if ( i )
    v22 = (struct _RTL_BALANCED_NODE *)i;
LABEL_73:
  i = (unsigned __int64)v22;
LABEL_53:
  v25 = a2[6];
  while ( 1 )
  {
    v26 = *(_QWORD *)(i + 32);
    v27 = v25 & (a2[5] + *(_QWORD *)(i + 24));
    if ( v27 < v26 )
    {
      v28 = a2[4];
      if ( v26 - v27 >= v28 )
        break;
    }
    v29 = *(_QWORD ***)(i + 8);
    v30 = i;
    if ( v29 )
    {
      v33 = *v29;
      for ( i = *(_QWORD *)(i + 8); v33; v33 = (_QWORD *)*v33 )
        i = (unsigned __int64)v33;
    }
    else
    {
      for ( i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
      {
        if ( *(_QWORD *)i == v30 )
          break;
        v30 = i;
      }
    }
    if ( !i )
      goto LABEL_30;
  }
  if ( (*((_DWORD *)this + 36) & 2) != 0 )
    a2[7] = v25 & (v26 - v28);
  else
    a2[7] = v27;
LABEL_30:
  result = (struct VIDMM_VAD *)i;
  *((_DWORD *)this + 36) ^= 2 * (*((_DWORD *)this + 36) & 1);
  return result;
}
