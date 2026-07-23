/*
 * XREFs of MiLimitLoaderBlockTotalMemory @ 0x140C58184
 * Callers:
 *     MiMemoryLicense @ 0x140C5838C (MiMemoryLicense.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140365870 (RtlRbRemoveNode.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall MiLimitLoaderBlockTotalMemory(__int64 a1, ULONG_PTR a2)
{
  __int64 v2; // r14
  ULONG_PTR v3; // r8
  __int64 v4; // rax
  ULONG_PTR BugCheckParameter4; // r9
  unsigned __int64 v6; // rbp
  __int64 v8; // r13
  int v9; // r12d
  __int64 v10; // r11
  unsigned __int64 i; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  _QWORD **v14; // rax
  unsigned __int64 v15; // rdx
  _QWORD *v16; // rdx
  _QWORD *v17; // rbx
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rax
  _QWORD *v22; // rdi
  _QWORD *v23; // rcx
  unsigned int v24; // eax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // rdx

  v2 = a1 + 352;
  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 360);
  BugCheckParameter4 = 0LL;
  v6 = 0LL;
  v8 = 0x15C5C0C00048LL;
  v9 = 16777524;
  v10 = v4 & 1;
  if ( (v4 & 1) != 0 )
  {
    if ( v4 == 1 )
      goto LABEL_18;
    i = v4 ^ (v2 | 1);
  }
  else
  {
    i = *(_QWORD *)(a1 + 360);
  }
  while ( i )
  {
    v12 = *(int *)(i + 24);
    if ( (unsigned int)v12 > 0x2C || !_bittest64(&v8, v12) )
    {
      v13 = *(_QWORD *)(i + 40);
      v3 += v13;
      if ( (unsigned int)v12 <= 0x18 )
      {
        if ( _bittest(&v9, v12) )
          BugCheckParameter4 += v13;
      }
    }
    v14 = *(_QWORD ***)(i + 8);
    v15 = i;
    if ( v14 )
    {
      v16 = *v14;
      for ( i = *(_QWORD *)(i + 8); v16; v16 = (_QWORD *)*v16 )
        i = (unsigned __int64)v16;
    }
    else
    {
      while ( 1 )
      {
        i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !i || *(_QWORD *)i == v15 )
          break;
        v15 = i;
      }
    }
  }
LABEL_18:
  if ( v3 - BugCheckParameter4 > a2 )
    KeBugCheckEx(0x1Au, 0x3030310uLL, a2, v3, BugCheckParameter4);
  v17 = 0LL;
  v18 = (v3 - a2) & -(__int64)(a2 < v3);
  v19 = *(_QWORD *)v2;
  if ( v10 )
  {
    if ( !v19 )
      return v6;
    v19 ^= v2;
  }
  while ( v19 )
  {
    v20 = *(_QWORD *)(v19 + 8);
    v17 = (_QWORD *)v19;
    if ( (*(_BYTE *)(v2 + 8) & 1) != 0 && v20 )
      v19 ^= v20;
    else
      v19 = *(_QWORD *)(v19 + 8);
  }
  while ( v17 )
  {
    v21 = (_QWORD *)*v17;
    v22 = v17;
    v23 = v17;
    if ( *v17 )
    {
      while ( 1 )
      {
        v17 = v21;
        if ( !v21[1] )
          break;
        v21 = (_QWORD *)v21[1];
      }
    }
    else
    {
      while ( 1 )
      {
        v17 = (_QWORD *)(v17[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v17 || (_QWORD *)v17[1] == v23 )
          break;
        v23 = v17;
      }
    }
    if ( v18 )
    {
      v24 = *((_DWORD *)v22 + 6);
      if ( v24 <= 0x18 )
      {
        if ( _bittest(&v9, v24) )
        {
          v25 = v22[5];
          if ( v25 > v18 )
          {
            v22[5] = v25 - v18;
            v18 = 0LL;
          }
          else
          {
            RtlRbRemoveNode((PRTL_RB_TREE)v2, (PRTL_BALANCED_NODE)v22);
            v18 -= v22[5];
            v22[5] = 0LL;
          }
        }
      }
    }
    v26 = *((int *)v22 + 6);
    if ( (unsigned int)v26 > 0x2C || !_bittest64(&v8, v26) )
    {
      v27 = v22[5];
      if ( v27 )
      {
        v28 = v22[4] + v27;
        if ( v28 > v6 )
          v6 = v28;
      }
    }
  }
  return v6;
}
