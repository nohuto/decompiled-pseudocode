/*
 * XREFs of MxComputeFreeNodeDescriptorRequirements @ 0x140C54388
 * Callers:
 *     MiInitializeLoaderDescriptors @ 0x140C539C4 (MiInitializeLoaderDescriptors.c)
 * Callees:
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     MiRestrictRangeToNode @ 0x1403FC38C (MiRestrictRangeToNode.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MxComputePfnPagesNeeded @ 0x140C54550 (MxComputePfnPagesNeeded.c)
 */

__int64 __fastcall MxComputeFreeNodeDescriptorRequirements(__int64 a1, void *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // r15
  __int64 v8; // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  ULONG_PTR v12; // rbp
  ULONG_PTR v13; // r14
  __int64 v14; // rsi
  ULONG_PTR v15; // r13
  __int64 v16; // rdi
  _QWORD **v17; // rax
  unsigned __int64 v18; // rcx
  _QWORD *v19; // rcx
  __int64 result; // rax
  _QWORD *i; // [rsp+60h] [rbp+8h]
  __int64 v22; // [rsp+68h] [rbp+10h]

  memset_0(a2, 0, 0x200uLL);
  v4 = 0xFFFFFFFFLL;
  v5 = a1 + 352;
  v22 = -1LL;
  v6 = -1LL;
  v7 = -1LL;
  v8 = *(_QWORD *)(v5 + 8);
  if ( (v8 & 1) != 0 )
  {
    if ( v8 == 1 )
      goto LABEL_27;
    v9 = v8 ^ (v5 | 1);
  }
  else
  {
    v9 = *(_QWORD *)(v5 + 8);
  }
  i = (_QWORD *)v9;
  if ( v9 )
  {
    while ( 1 )
    {
      v10 = *(int *)(v9 + 24);
      if ( (unsigned int)v10 > 0x2C || (v11 = 0x15C5C0C00048LL, !_bittest64(&v11, v10)) )
      {
        v12 = *(_QWORD *)(v9 + 40);
        v13 = *(_QWORD *)(v9 + 32);
        if ( v12 )
          break;
      }
LABEL_17:
      v17 = *(_QWORD ***)(v9 + 8);
      v18 = v9;
      if ( v17 )
      {
        v19 = *v17;
        v9 = *(_QWORD *)(v9 + 8);
        for ( i = v17; v19; v19 = (_QWORD *)*v19 )
        {
          v9 = (unsigned __int64)v19;
          i = v19;
        }
      }
      else
      {
        v9 = *(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        i = (_QWORD *)v9;
        if ( v9 )
        {
          do
          {
            if ( *(_QWORD *)v9 == v18 )
              break;
            v18 = v9;
            v9 = *(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          }
          while ( v9 );
          i = (_QWORD *)v9;
        }
      }
      if ( !v9 )
      {
        v6 = v22;
        goto LABEL_27;
      }
    }
    v14 = v22;
    while ( 1 )
    {
      v15 = MiRestrictRangeToNode(v13, v12);
      v16 = (unsigned int)MiPageToNode(v13);
      if ( v7 != -1 )
      {
        if ( (_DWORD)v16 == (_DWORD)v4
          && (((unsigned __int64)(48 * v7) >> 18) & 0x3FFFFFF8) - 0x904BFFFFFF8LL >= (((48 * v13) >> 18) & 0x3FFFFFF8)
                                                                                   - 0x904C0000000LL )
        {
          goto LABEL_15;
        }
        *((_QWORD *)a2 + (unsigned int)v4) += MxComputePfnPagesNeeded(v14, v7);
      }
      v14 = v13;
LABEL_15:
      v7 = v13 + v15;
      v4 = v16;
      v13 += v15;
      v12 -= v15;
      if ( !v12 )
      {
        v22 = v14;
        v9 = (unsigned __int64)i;
        goto LABEL_17;
      }
    }
  }
LABEL_27:
  result = MxComputePfnPagesNeeded(v6, v7);
  *((_QWORD *)a2 + v4) += result;
  return result;
}
