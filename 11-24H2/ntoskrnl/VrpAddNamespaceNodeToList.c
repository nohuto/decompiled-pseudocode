/*
 * XREFs of VrpAddNamespaceNodeToList @ 0x14092C204
 * Callers:
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x140829C2C (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x14092B88C (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpPreLoadKey @ 0x140A6D8DC (VrpPreLoadKey.c)
 * Callees:
 *     ULongLongMult @ 0x140437FD0 (ULongLongMult.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     VrpFindExactNamespaceNode @ 0x14092AEB8 (VrpFindExactNamespaceNode.c)
 *     ExAllocatePoolWithTag @ 0x140B74010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VrpAddNamespaceNodeToList(unsigned __int64 *a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 result; // rax
  unsigned __int64 v5; // rax
  _QWORD *v6; // rsi
  ULONGLONG v7; // rsi
  ULONGLONG v8; // r15
  ULONGLONG v9; // rcx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  _QWORD *v13; // rcx
  unsigned __int64 v14; // rcx
  void *v15; // r9
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  ULONGLONG v18; // rdx
  __int64 v19; // r15
  ULONGLONG v20; // rax
  ULONGLONG v21; // rdx
  ULONGLONG v22; // r15
  void *v23; // r12
  PVOID v24; // rax
  void *v25; // r14
  size_t v26; // r13
  PVOID PoolWithTag; // rax
  ULONGLONG v28; // rsi
  __int64 v29; // r14
  ULONGLONG v30; // rdx
  ULONGLONG v31; // r14
  void *v32; // r13
  PVOID v33; // rax
  void *v34; // rsi
  size_t v35; // r12
  PVOID v36; // rax
  ULONGLONG NumberOfBytes; // [rsp+70h] [rbp+50h] BYREF
  ULONGLONG pullResult; // [rsp+78h] [rbp+58h] BYREF

  NumberOfBytes = 0LL;
  v2 = a2;
  if ( VrpFindExactNamespaceNode((int)a1, a2, (int)&NumberOfBytes) )
    return 3221225525LL;
  v7 = a1[6];
  v8 = NumberOfBytes;
  v9 = a1[7];
  if ( NumberOfBytes >= v7 )
  {
    if ( v7 < v9 )
      goto LABEL_11;
    v18 = v7 + 1;
    if ( v7 + 1 <= v9 )
      return 3221225485LL;
    v19 = a1[8] - 1;
    v20 = v19 + v18;
    if ( v19 + v18 < v18 )
      return 3221225621LL;
    v21 = a1[5];
    pullResult = 0LL;
    NumberOfBytes = 0LL;
    v22 = v20 & ~v19;
    if ( ULongLongMult(v9, v21, &pullResult) < 0 || ULongLongMult(v22, a1[5], &NumberOfBytes) < 0 )
    {
      result = 3221225621LL;
LABEL_31:
      if ( (_DWORD)result )
        return result;
LABEL_11:
      if ( is_mul_ok(a1[5], v7) )
      {
        v12 = a1[9];
        v13 = (_QWORD *)(v12 + a1[5] * v7);
        if ( (unsigned __int64)v13 >= v12 )
        {
          *v13 = v2;
LABEL_18:
          ++a1[6];
          return 0LL;
        }
      }
      return 3221225621LL;
    }
    v23 = (void *)a1[9];
    if ( v23 )
    {
      v26 = NumberOfBytes;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x72615452u);
      v25 = PoolWithTag;
      if ( !PoolWithTag )
      {
LABEL_29:
        result = 3221225495LL;
LABEL_30:
        v2 = a2;
        goto LABEL_31;
      }
      memset_0(PoolWithTag, 0, v26);
      if ( pullResult < v26 )
        v26 = pullResult;
      memmove(v25, v23, v26);
      ExFreePoolWithTag(v23, 0x72615452u);
    }
    else
    {
      v24 = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x72615452u);
      v25 = v24;
      if ( v24 )
        memset_0(v24, 0, NumberOfBytes);
      if ( !v25 )
        goto LABEL_29;
    }
    a1[9] = (unsigned __int64)v25;
    result = 0LL;
    a1[7] = v22;
    goto LABEL_30;
  }
  if ( v7 < v9 )
  {
LABEL_8:
    v10 = a1[5];
    v11 = v10 * v8;
    if ( is_mul_ok(v10, v8) )
    {
      v5 = a1[9];
      v6 = (_QWORD *)(v5 + v11);
      if ( v5 + v11 >= v5 )
      {
        v17 = v10 * (v8 + 1);
        if ( is_mul_ok(v10, v8 + 1) )
        {
          v14 = a1[9];
          v15 = (void *)(v14 + v17);
          if ( v14 + v17 >= v14 )
          {
            v16 = a1[6] - v8;
            if ( !is_mul_ok(v16, v10) )
              return 2147483659LL;
            memmove(v15, v6, v16 * v10);
            *v6 = v2;
            goto LABEL_18;
          }
        }
      }
    }
    return 3221225621LL;
  }
  v28 = v7 + 1;
  if ( v28 <= v9 )
    return 3221225485LL;
  v29 = a1[8] - 1;
  if ( v29 + v28 < v28 )
    return 3221225621LL;
  v30 = a1[5];
  pullResult = 0LL;
  NumberOfBytes = 0LL;
  v31 = (v29 + v28) & ~v29;
  if ( ULongLongMult(v9, v30, &pullResult) < 0 || ULongLongMult(v31, a1[5], &NumberOfBytes) < 0 )
  {
    result = 3221225621LL;
  }
  else
  {
    v32 = (void *)a1[9];
    if ( v32 )
    {
      v35 = NumberOfBytes;
      v36 = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x72615452u);
      v34 = v36;
      if ( !v36 )
      {
LABEL_47:
        result = 3221225495LL;
        goto LABEL_48;
      }
      memset_0(v36, 0, v35);
      if ( pullResult < v35 )
        v35 = pullResult;
      memmove(v34, v32, v35);
      ExFreePoolWithTag(v32, 0x72615452u);
    }
    else
    {
      v33 = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x72615452u);
      v34 = v33;
      if ( v33 )
        memset_0(v33, 0, NumberOfBytes);
      if ( !v34 )
        goto LABEL_47;
    }
    a1[9] = (unsigned __int64)v34;
    result = 0LL;
    a1[7] = v31;
  }
LABEL_48:
  if ( !(_DWORD)result )
  {
    v2 = a2;
    goto LABEL_8;
  }
  return result;
}
