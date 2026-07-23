/*
 * XREFs of MiLimitLoaderBlockHighMemory @ 0x140C44B68
 * Callers:
 *     MiMemoryLicense @ 0x140C44F1C (MiMemoryLicense.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x1402E2A20 (RtlRbRemoveNode.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall MiLimitLoaderBlockHighMemory(_RTL_RB_TREE *a1, ULONG_PTR a2)
{
  _RTL_RB_TREE *v2; // rbp
  unsigned __int64 v3; // rdi
  __int64 v4; // r14
  _RTL_BALANCED_NODE *Min; // rax
  _QWORD *Children; // rbx
  _QWORD **v8; // rax
  _QWORD *v9; // rdx
  _QWORD *v10; // rcx
  _QWORD *v11; // rcx
  int v12; // eax
  unsigned int v13; // ecx
  ULONG_PTR v14; // r8
  ULONG_PTR v15; // r10
  int v16; // eax

  v2 = a1 + 22;
  v3 = 0LL;
  v4 = KeFeatureBits & 0x2000000000LL;
  Min = a1[22].Min;
  if ( ((unsigned __int8)Min & 1) != 0 )
  {
    if ( Min == (_RTL_BALANCED_NODE *)1 )
      Children = 0LL;
    else
      Children = (_QWORD *)((unsigned __int64)Min ^ ((unsigned __int64)v2 | 1));
  }
  else
  {
    Children = a1[22].Min->Children;
  }
  while ( Children )
  {
    v8 = (_QWORD **)Children[1];
    v9 = Children;
    v10 = Children;
    if ( v8 )
    {
      v11 = *v8;
      for ( Children = (_QWORD *)Children[1]; v11; v11 = (_QWORD *)*v11 )
        Children = v11;
    }
    else
    {
      while ( 1 )
      {
        Children = (_QWORD *)(Children[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !Children || (_QWORD *)*Children == v10 )
          break;
        v10 = Children;
      }
    }
    v12 = *((_DWORD *)v9 + 6);
    if ( !v4 )
    {
      if ( v12 == 38 )
      {
        v12 = 24;
LABEL_17:
        *((_DWORD *)v9 + 6) = v12;
LABEL_24:
        v13 = v12;
        if ( v12 != 34
          && v12 != 23
          && v12 != 3
          && v12 != 22
          && v12 != 42
          && v12 != 38
          && v12 != 39
          && v12 != 44
          && v12 != 40 )
        {
          goto LABEL_34;
        }
        goto LABEL_33;
      }
      if ( v12 == 39 )
      {
        v12 = 2;
        goto LABEL_17;
      }
    }
    if ( v12 != 30 && v12 != 31 && v12 != 6 && v12 != 32 )
      goto LABEL_24;
LABEL_33:
    v13 = v12;
    if ( v12 == 3 )
    {
LABEL_34:
      v14 = v9[5];
      v15 = v9[4];
      if ( v15 + v14 <= a2 )
      {
LABEL_43:
        if ( v15 + v14 - 1 > v3 && v13 != 3 )
          v3 = v15 + v14 - 1;
      }
      else
      {
        if ( v13 > 0x18 || (v16 = 16777524, !_bittest(&v16, v13)) )
        {
          if ( v13 != 3 && v13 != 33 && v13 != 35 )
            KeBugCheckEx(0x1Au, 0x3030308uLL, a2, v15, v9[5]);
        }
        if ( v15 < a2 )
        {
          v14 = a2 - v15;
          v9[5] = a2 - v15;
          goto LABEL_43;
        }
        RtlRbRemoveNode(v2, (PRTL_BALANCED_NODE)v9);
      }
    }
  }
  return v3;
}
