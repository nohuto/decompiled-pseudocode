/*
 * XREFs of ?Insert@RtlNameValueArray@@QEAAJPEBG00_K@Z @ 0x1801395C4
 * Callers:
 *     ?PiiFilterpAddProfiles@@YAJPEAU_PII_FILTER@@@Z @ 0x18013892C (-PiiFilterpAddProfiles@@YAJPEAU_PII_FILTER@@@Z.c)
 * Callees:
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x180148D24 (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     wcscpy_s @ 0x1802D2590 (wcscpy_s.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     memmove_0 @ 0x1806CA2E8 (memmove_0.c)
 */

__int64 __fastcall RtlNameValueArray::Insert(
        RtlNameValueArray *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4,
        unsigned __int64 a5)
{
  __int64 v5; // rsi
  __int64 v7; // rdi
  rsize_t v10; // rdi
  rsize_t v11; // rsi
  wchar_t *Heap; // rax
  wchar_t *v13; // r13
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  wchar_t **v19; // rsi
  __int64 result; // rax
  _QWORD *v21; // r8
  unsigned __int64 v22; // rdx
  __int64 v23; // rsi
  unsigned __int64 v24; // rsi
  size_t v25; // r15
  wchar_t **v26; // rcx
  void *v27; // r8
  PVOID v28; // rcx
  PVOID v29; // rax
  PVOID v30; // rbp
  unsigned __int64 v31; // rcx
  void *v32; // r9
  unsigned __int64 v33; // rcx
  __int64 v34; // rax
  unsigned __int64 v35; // rdx
  __int64 v36; // rsi
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rsi
  void *v40; // r8
  PVOID v41; // rcx
  PVOID v42; // rax
  PVOID v43; // rbp
  unsigned __int64 v44; // [rsp+60h] [rbp+8h] BYREF
  SIZE_T Size; // [rsp+68h] [rbp+10h] BYREF

  Size = (SIZE_T)a2;
  v5 = -1LL;
  v7 = -1LL;
  do
    ++v7;
  while ( a3[v7] );
  v10 = v7 + 1;
  do
    ++v5;
  while ( a4[v5] );
  v11 = v5 + 1;
  Heap = (wchar_t *)RtlAllocateHeap(*(PVOID *)this, 0, 2 * (v11 + v10));
  v13 = Heap;
  if ( !Heap )
    return 3221225495LL;
  memset_0(Heap, 0, 2 * (v11 + v10));
  wcscpy_s(v13, v10, a3);
  wcscpy_s(&v13[v10], v11, a4);
  v14 = a5;
  v15 = *((_QWORD *)this + 2);
  v16 = *((_QWORD *)this + 3);
  if ( a5 >= v15 )
  {
    v21 = (_QWORD *)((char *)this + 16);
    if ( v15 >= v16 )
    {
      v22 = v15 + 1;
      if ( v15 + 1 <= v16 )
        return 3221225485LL;
      v23 = *((_QWORD *)this + 4) - 1LL;
      if ( v23 + v22 < v22 )
        return 3221225621LL;
      v24 = (v23 + v22) & ~v23;
      if ( is_mul_ok(v16, *((_QWORD *)this + 1))
        && (v25 = v24 * *((_QWORD *)this + 1), is_mul_ok(v24, *((_QWORD *)this + 1))) )
      {
        v27 = (void *)*((_QWORD *)this + 5);
        v28 = *(PVOID *)this;
        if ( v27 )
        {
          v30 = RtlReAllocateHeap(v28, 0, v27, v24 * *((_QWORD *)this + 1));
        }
        else
        {
          v29 = RtlAllocateHeap(v28, 0, v24 * *((_QWORD *)this + 1));
          v30 = v29;
          if ( v29 )
            memset_0(v29, 0, v25);
        }
        if ( v30 )
        {
          *((_QWORD *)this + 5) = v30;
          result = 0LL;
          *((_QWORD *)this + 3) = v24;
        }
        else
        {
          result = 3221225495LL;
        }
      }
      else
      {
        result = 3221225621LL;
      }
      if ( (_DWORD)result )
        return result;
      v21 = (_QWORD *)((char *)this + 16);
    }
    if ( is_mul_ok(*((_QWORD *)this + 1), v15) )
    {
      v26 = (wchar_t **)(*((_QWORD *)this + 5) + *((_QWORD *)this + 1) * v15);
      if ( (unsigned __int64)v26 >= *((_QWORD *)this + 5) )
      {
        *v26 = v13;
        *v21 = *((_QWORD *)this + 2) + 1LL;
        return 0LL;
      }
    }
    return 3221225621LL;
  }
  if ( v15 < v16 )
    goto LABEL_8;
  v35 = v15 + 1;
  if ( v15 + 1 <= v16 )
    return 3221225485LL;
  v36 = *((_QWORD *)this + 4) - 1LL;
  v37 = v36 + v35;
  if ( v36 + v35 < v35 )
    return 3221225621LL;
  v38 = *((_QWORD *)this + 1);
  v39 = v37 & ~v36;
  Size = 0LL;
  if ( (int)ULongLongMult(v16, v38, &v44) < 0 || (int)ULongLongMult(v39, *((_QWORD *)this + 1), &Size) < 0 )
  {
    result = 3221225621LL;
  }
  else
  {
    v40 = (void *)*((_QWORD *)this + 5);
    v41 = *(PVOID *)this;
    if ( v40 )
    {
      v43 = RtlReAllocateHeap(v41, 0, v40, Size);
    }
    else
    {
      v42 = RtlAllocateHeap(v41, 0, Size);
      v43 = v42;
      if ( v42 )
        memset_0(v42, 0, Size);
    }
    if ( v43 )
    {
      *((_QWORD *)this + 5) = v43;
      result = 0LL;
      *((_QWORD *)this + 3) = v39;
    }
    else
    {
      result = 3221225495LL;
    }
  }
  if ( !(_DWORD)result )
  {
LABEL_8:
    v17 = *((_QWORD *)this + 1) * v14;
    if ( is_mul_ok(*((_QWORD *)this + 1), v14) )
    {
      v18 = *((_QWORD *)this + 5);
      v19 = (wchar_t **)(v18 + v17);
      if ( v18 + v17 >= v18 )
      {
        v34 = *((_QWORD *)this + 1) * (v14 + 1);
        if ( is_mul_ok(*((_QWORD *)this + 1), v14 + 1) )
        {
          v31 = *((_QWORD *)this + 5);
          v32 = (void *)(v31 + v34);
          if ( v31 + v34 >= v31 )
          {
            v33 = *((_QWORD *)this + 2) - v14;
            if ( is_mul_ok(v33, *((_QWORD *)this + 1)) )
            {
              memmove_0(v32, v19, v33 * *((_QWORD *)this + 1));
              *v19 = v13;
              result = 0LL;
              ++*((_QWORD *)this + 2);
              return result;
            }
          }
        }
      }
    }
    return 3221225621LL;
  }
  return result;
}
