/*
 * XREFs of FilterEvalStrict @ 0x1408D0FC0
 * Callers:
 *     ConstraintEval @ 0x140839B70 (ConstraintEval.c)
 *     ValidFilter @ 0x14083A17C (ValidFilter.c)
 *     PiDqQueryEvaluateFilter @ 0x1408D06A0 (PiDqQueryEvaluateFilter.c)
 *     FilterEvalStrict @ 0x1408D0FC0 (FilterEvalStrict.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     FilterEvalStrict @ 0x1408D0FC0 (FilterEvalStrict.c)
 *     PiDqPropertyCallback @ 0x1408D2660 (PiDqPropertyCallback.c)
 *     PropertyEval @ 0x1408D2D00 (PropertyEval.c)
 *     FindFilterOperatorClose @ 0x1409EE7A0 (FindFilterOperatorClose.c)
 */

__int64 __fastcall FilterEvalStrict(
        __int64 (__fastcall *a1)(int, int, int, int, __int64),
        __int64 a2,
        unsigned int a3,
        _DWORD *a4,
        _DWORD *a5)
{
  int v5; // r15d
  int v8; // r11d
  _DWORD *v9; // r10
  int v10; // ecx
  int v11; // edx
  int v12; // r9d
  unsigned int v13; // eax
  int v14; // r8d
  int v15; // eax
  unsigned int v16; // r14d
  unsigned int v17; // esi
  unsigned int *v18; // r13
  unsigned int *v19; // rbx
  unsigned int v20; // edi
  unsigned int v21; // r12d
  __int64 v22; // r14
  __int64 result; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // r8
  int v27; // eax
  bool v28; // zf
  int v29; // edx
  int v30; // r8d
  unsigned int v31; // r14d
  unsigned int v32; // eax
  unsigned int i; // ecx
  int v34; // eax
  unsigned int v35; // r14d
  __int64 v36; // rcx
  __int64 *v37; // [rsp+20h] [rbp-40h]
  __int64 *v38; // [rsp+20h] [rbp-40h]
  unsigned int v39; // [rsp+40h] [rbp-20h] BYREF
  int v40; // [rsp+44h] [rbp-1Ch] BYREF
  int v41; // [rsp+48h] [rbp-18h]
  int v42; // [rsp+4Ch] [rbp-14h]
  unsigned int v43; // [rsp+50h] [rbp-10h]
  __int64 v44; // [rsp+58h] [rbp-8h] BYREF
  unsigned int v47; // [rsp+B0h] [rbp+50h] BYREF

  v5 = 0;
  v42 = 1;
  v47 = 0;
  v44 = 0LL;
  v39 = 0;
  if ( a3 < 3 )
    return 3221225485LL;
  v28 = (*a4 & 0xFF00000) == 0;
  v8 = *a4 & 0xFF00000;
  v41 = v8;
  if ( v28 )
    return 3221225485LL;
  v9 = a5;
  v10 = 0;
  v11 = 0;
  v40 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  *a5 = 0;
  while ( 1 )
  {
    if ( v13 >= a3 )
      return 3221225485LL;
    v15 = a4[14 * v14] & 0xFF00000;
    if ( v15 == 3145728 )
    {
LABEL_13:
      ++v10;
      goto LABEL_11;
    }
    if ( v15 != 0x400000 )
    {
      if ( v15 == 0x100000 )
        goto LABEL_13;
      if ( v15 != 0x200000 )
      {
        if ( v15 == 5242880 )
          goto LABEL_13;
        if ( v15 != 6291456 )
          goto LABEL_11;
      }
    }
    ++v11;
LABEL_11:
    if ( v10 == v11 )
      break;
    v13 = ++v12;
    v40 = v12;
    v14 = v12;
  }
  v16 = a3 - v12;
  v17 = a3 - 1;
  v18 = &a4[14 * v12];
  v43 = v16;
  v19 = a4 + 14;
  v20 = 0;
  v21 = -1073741823;
  if ( v8 == 3145728 || v8 == 0x100000 )
  {
    v22 = a2;
    while ( 1 )
    {
      if ( v17 <= 1 )
        goto LABEL_27;
      v28 = (*v19 & 0xFF00000) == 0;
      *v9 = 0;
      if ( !v28 )
        break;
      if ( a1 == PiDqPropertyCallback )
      {
        LODWORD(result) = PiDqPropertyCallback(a2, (int)v19 + 8, (int)&v47, (int)&v39, (__int64)&v44);
        v22 = a2;
      }
      else
      {
        v37 = &v44;
        LODWORD(result) = guard_dispatch_icall_no_overrides(v22);
      }
      v20 = result;
      if ( (_DWORD)result == -1073741275 )
      {
        v20 = 0;
        if ( (*v19 & 0xFFF) == 1 )
        {
          v24 = 0LL;
          v39 = 0;
          v25 = 0LL;
          v47 = 0;
          v44 = 0LL;
          v26 = 0LL;
          goto LABEL_24;
        }
        v9 = a5;
        v19 += 14;
        v8 = v41;
        --v17;
        v42 = 0;
      }
      else
      {
        if ( (_DWORD)result )
          return (unsigned int)result;
        v24 = v47;
        v25 = v44;
        v26 = v39;
LABEL_24:
        LODWORD(v37) = v19[10];
        PropertyEval(v24, v25, v26, *v19, v37, *((_QWORD *)v19 + 6), v19[11], a5);
        v19 += 14;
        --v17;
LABEL_25:
        v8 = v41;
        v9 = a5;
        if ( *a5 == (v41 == 3145728) )
        {
          v17 = v43;
          v5 = 1;
          v19 = v18;
          goto LABEL_27;
        }
      }
    }
    v29 = 0;
    v30 = 0;
    v31 = 0;
    v32 = 0;
    for ( i = 0; ; i = v31 )
    {
      if ( v32 >= v17 )
        return 3221225485LL;
      v34 = v19[14 * i] & 0xFF00000;
      if ( v34 == 3145728 )
        break;
      if ( v34 != 0x400000 )
      {
        if ( v34 == 0x100000 )
          break;
        if ( v34 != 0x200000 )
        {
          if ( v34 == 5242880 )
            break;
          if ( v34 != 6291456 )
            goto LABEL_44;
        }
      }
      ++v30;
LABEL_44:
      ++v31;
      if ( v29 == v30 )
      {
        result = FilterEvalStrict((_DWORD)a1, a2, v31, (_DWORD)v19, (__int64)v9);
        v20 = result;
        if ( (_DWORD)result == -1073741823 )
        {
          v42 = 0;
        }
        else if ( (_DWORD)result )
        {
          return result;
        }
        v19 += 14 * v31;
        v17 -= v31;
        v22 = a2;
        goto LABEL_25;
      }
      v32 = v31;
    }
    ++v29;
    goto LABEL_44;
  }
  if ( v8 != 5242880 )
    return 3221225485LL;
  if ( (*v19 & 0xFF00000) != 0 )
  {
    result = FindFilterOperatorClose(v17, v19, &v40);
    v35 = v40 + 1;
    if ( (_DWORD)result )
      return result;
    result = FilterEvalStrict((_DWORD)a1, a2, v35, (_DWORD)v19, (__int64)a5);
    v20 = result;
    if ( (_DWORD)result )
      return result;
    v17 -= v35;
    v36 = 56LL * v35;
LABEL_74:
    v8 = v41;
    v19 = (unsigned int *)((char *)v19 + v36);
    *a5 = *a5 == 0;
LABEL_27:
    if ( v17 )
    {
      v27 = *v19 & 0xFF00000;
      if ( v27 == 0x400000 )
      {
        v28 = v8 == 3145728;
        goto LABEL_30;
      }
      if ( v27 == 0x200000 )
      {
        v28 = v8 == 0x100000;
LABEL_30:
        if ( v28 )
        {
LABEL_31:
          if ( v5 || v42 || v20 )
            return v20;
          return v21;
        }
      }
      else if ( v27 == 6291456 && v8 == 5242880 )
      {
        goto LABEL_31;
      }
    }
    return 3221225485LL;
  }
  v38 = &v44;
  result = guard_dispatch_icall_no_overrides(a2);
  v20 = result;
  if ( (_DWORD)result == -1073741275 )
    return v21;
  if ( !(_DWORD)result )
  {
    LODWORD(v38) = v19[10];
    PropertyEval(v47, v44, v39, *v19, v38, *((_QWORD *)v19 + 6), v19[11], a5);
    --v17;
    v36 = v20 + 56;
    goto LABEL_74;
  }
  return result;
}
