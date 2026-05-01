/*
 * XREFs of ?AddObject@CEnumerableObjectCollection@@UEAAJPEAUIUnknown@@@Z @ 0x1800CA1A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z @ 0x1800CA378 (-Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CEnumerableObjectCollection::AddObject(CEnumerableObjectCollection *this, struct IUnknown *a2)
{
  unsigned __int64 v3; // rcx
  int v4; // ebp
  int v6; // ebx
  unsigned __int64 v7; // rsi
  __int64 v8; // r8
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rsi
  __int64 v12; // r8
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // r8
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rdx
  _QWORD *v20; // rdx
  void *v21; // [rsp+60h] [rbp+8h] BYREF

  v3 = *((int *)this + 7);
  v4 = -2147024774;
  v6 = -2147024774;
  if ( v3 > 0xFFFFFFFE )
    goto LABEL_32;
  v7 = *((_QWORD *)this + 8);
  v6 = 0;
  if ( v3 <= v7 )
    goto LABEL_32;
  v21 = 0LL;
  v8 = 2 * v7;
  if ( !is_mul_ok(v7, 2uLL) )
    return (unsigned int)-2147024362;
  v9 = v7;
  v10 = v7 + 4096;
  if ( v9 <= 0x1000 )
    v10 = v8;
  if ( v3 > v10 )
  {
    v10 = v3;
  }
  else if ( v10 > 0xFFFFFFFE )
  {
    v10 = 4294967294LL;
  }
  v21 = 0LL;
  if ( !is_mul_ok(v10, 8uLL) )
    return (unsigned int)-2147024362;
  v6 = CTCoAllocPolicy::Realloc(&v21, (v10 * (unsigned __int128)8uLL) >> 64, *((void **)this + 5), 8 * v10, &v21);
  if ( v6 < 0 )
  {
LABEL_32:
    if ( v6 < 0 )
      return (unsigned int)v6;
  }
  else
  {
    *((_QWORD *)this + 5) = v21;
    *((_QWORD *)this + 8) = v10;
  }
  v12 = *((_QWORD *)this + 6);
  v6 = 0;
  v13 = *((_QWORD *)this + 8);
  if ( v12 != v13 )
    goto LABEL_26;
  v14 = v12 + 1;
  if ( v14 <= 0xFFFFFFFE )
  {
    v4 = 0;
    if ( v14 > v13 )
    {
      v21 = 0LL;
      v15 = 2 * v13;
      if ( !is_mul_ok(v13, 2uLL) )
        return (unsigned int)-2147024362;
      v16 = v13;
      v17 = v13 + 4096;
      if ( v16 <= 0x1000 )
        v17 = v15;
      if ( v14 > v17 )
      {
        v17 = v14;
      }
      else if ( v17 > 0xFFFFFFFE )
      {
        v17 = 4294967294LL;
      }
      v21 = 0LL;
      if ( !is_mul_ok(v17, 8uLL) )
        return (unsigned int)-2147024362;
      v4 = CTCoAllocPolicy::Realloc(&v21, (v17 * (unsigned __int128)8uLL) >> 64, *((void **)this + 5), 8 * v17, &v21);
      v6 = v4;
      if ( v4 >= 0 )
      {
        *((_QWORD *)this + 5) = v21;
        *((_QWORD *)this + 8) = v17;
        goto LABEL_26;
      }
    }
  }
  v6 = v4;
  if ( v4 >= 0 )
  {
LABEL_26:
    v18 = *((_QWORD *)this + 6) + 1LL;
    v19 = *((_QWORD *)this + 5) - 8LL;
    *((_QWORD *)this + 6) = v18;
    v20 = (_QWORD *)(v19 + 8 * v18);
    if ( v20 )
      *v20 = a2;
  }
  if ( v6 >= 0 )
    ((void (__fastcall *)(struct IUnknown *))a2->lpVtbl->AddRef)(a2);
  return (unsigned int)v6;
}
