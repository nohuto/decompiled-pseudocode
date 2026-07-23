/*
 * XREFs of FilterEvalStrict @ 0x1408CA150
 * Callers:
 *     ConstraintEval @ 0x1408B2790 (ConstraintEval.c)
 *     PiDqQueryEvaluateFilter @ 0x1408C9830 (PiDqQueryEvaluateFilter.c)
 *     FilterEvalStrict @ 0x1408CA150 (FilterEvalStrict.c)
 *     ValidFilter @ 0x1409F2A20 (ValidFilter.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     FilterEvalStrict @ 0x1408CA150 (FilterEvalStrict.c)
 *     PropertyEval @ 0x1408D2920 (PropertyEval.c)
 *     FindFilterOperatorClose @ 0x1409E4E30 (FindFilterOperatorClose.c)
 */

__int64 __fastcall FilterEvalStrict(int a1, __int64 a2, unsigned int a3, __int64 a4, _DWORD *a5)
{
  int v5; // r14d
  int v6; // r10d
  __int64 v9; // r11
  int v11; // r13d
  unsigned int v12; // edx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rax
  unsigned int v16; // eax
  __int64 result; // rax
  unsigned int v18; // ebx
  unsigned int v19; // r15d
  unsigned int *v20; // rax
  unsigned int *v21; // rsi
  unsigned int v22; // ebp
  unsigned int v23; // edi
  int v24; // ecx
  int v25; // edx
  unsigned int v26; // edi
  __int64 v27; // rax
  unsigned int v28; // eax
  unsigned int v29; // edi
  __int64 v30; // rdx
  int v31; // eax
  bool v32; // zf
  __int64 *v33; // [rsp+20h] [rbp-78h]
  __int64 *v34; // [rsp+20h] [rbp-78h]
  unsigned int v35; // [rsp+48h] [rbp-50h] BYREF
  unsigned int v36; // [rsp+4Ch] [rbp-4Ch]
  __int64 v37; // [rsp+50h] [rbp-48h] BYREF
  unsigned int *v38; // [rsp+58h] [rbp-40h]
  int v41; // [rsp+B0h] [rbp+18h]

  v5 = 0;
  v6 = 1;
  v41 = 1;
  v37 = 0LL;
  v9 = a2;
  if ( a3 < 3 )
    return 3221225485LL;
  v11 = *(_DWORD *)a4 & 0xFF00000;
  if ( !v11 )
    return 3221225485LL;
  v12 = 0;
  v35 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0LL;
  *a5 = 0;
  while ( 1 )
  {
    v16 = *(_DWORD *)(56 * v15 + a4) & 0xFF00000;
    if ( v16 <= 0x400000 )
    {
      if ( v16 != 0x400000 )
      {
        if ( v16 == 0x100000 )
          goto LABEL_9;
        if ( v16 != 0x200000 )
        {
          if ( v16 != 3145728 )
            goto LABEL_10;
LABEL_9:
          ++v13;
          goto LABEL_10;
        }
      }
LABEL_16:
      ++v14;
      goto LABEL_10;
    }
    if ( v16 == 5242880 )
      goto LABEL_9;
    if ( v16 == 6291456 )
      goto LABEL_16;
LABEL_10:
    if ( v13 == v14 )
      break;
    v35 = ++v12;
    v15 = v12;
    if ( v12 >= a3 )
      return 3221225485LL;
  }
  v18 = 0;
  v19 = -1073741823;
  v20 = (unsigned int *)(a4 + 56LL * v12);
  v21 = (unsigned int *)(a4 + 56);
  v38 = v20;
  LODWORD(v20) = a3 - v12;
  v22 = a3 - 1;
  v36 = (unsigned int)v20;
  if ( ((v11 - 0x100000) & 0xFFDFFFFF) != 0 )
  {
    if ( v11 != 5242880 )
      return 3221225485LL;
    if ( (*v21 & 0xFF00000) != 0 )
    {
      result = FindFilterOperatorClose(v22, v21, &v35);
      v23 = v35 + 1;
      if ( !(_DWORD)result )
      {
        result = FilterEvalStrict(a1, a2, v23, (_DWORD)v21, (__int64)a5);
        v18 = result;
        if ( !(_DWORD)result )
        {
          v22 -= v23;
          v21 += 14 * v23;
          *a5 = *a5 == 0;
          goto LABEL_60;
        }
      }
      return result;
    }
    v33 = &v37;
    result = guard_dispatch_icall_no_overrides(v9, a4 + 64);
    v18 = result;
    if ( (_DWORD)result != -1073741275 )
    {
      if ( !(_DWORD)result )
      {
        LODWORD(v33) = *(_DWORD *)(a4 + 96);
        PropertyEval(0LL, v37, 0LL, *v21, v33, *(_QWORD *)(a4 + 104), *(_DWORD *)(a4 + 100), a5);
        v21 = (unsigned int *)(a4 + 112);
        --v22;
        *a5 = *a5 == 0;
        goto LABEL_60;
      }
      return result;
    }
    return v19;
  }
  if ( v22 <= 1 )
    goto LABEL_61;
  while ( 2 )
  {
    v32 = (*v21 & 0xFF00000) == 0;
    *a5 = 0;
    if ( v32 )
    {
      v34 = &v37;
      result = guard_dispatch_icall_no_overrides(v9, v21 + 2);
      v18 = result;
      if ( (_DWORD)result == -1073741275 )
      {
        v18 = -1073741823;
        if ( (*v21 & 0xFFF) != 1 )
        {
          v21 += 14;
          v41 = 0;
          --v22;
          v6 = 0;
          goto LABEL_57;
        }
        v30 = 0LL;
        v37 = 0LL;
      }
      else
      {
        if ( (_DWORD)result && (_DWORD)result != -1073741823 )
          return result;
        v30 = v37;
      }
      LODWORD(v34) = v21[10];
      PropertyEval(0LL, v30, 0LL, *v21, v34, *((_QWORD *)v21 + 6), v21[11], a5);
      v21 += 14;
      --v22;
      goto LABEL_54;
    }
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0LL;
    while ( 2 )
    {
      v28 = v21[14 * v27] & 0xFF00000;
      if ( v28 <= 0x400000 )
      {
        if ( v28 != 0x400000 )
        {
          if ( v28 == 0x100000 )
            goto LABEL_35;
          if ( v28 != 0x200000 )
          {
            if ( v28 == 3145728 )
              goto LABEL_35;
            goto LABEL_36;
          }
        }
LABEL_41:
        ++v25;
        goto LABEL_36;
      }
      if ( v28 == 5242880 )
      {
LABEL_35:
        ++v24;
        goto LABEL_36;
      }
      if ( v28 == 6291456 )
        goto LABEL_41;
LABEL_36:
      if ( v24 != v25 )
      {
        v27 = ++v26;
        if ( v26 >= v22 )
          return 3221225485LL;
        continue;
      }
      break;
    }
    v29 = v26 + 1;
    result = FilterEvalStrict(a1, v9, v29, (_DWORD)v21, (__int64)a5);
    v18 = result;
    if ( (_DWORD)result != -1073741823 )
    {
      if ( !(_DWORD)result )
      {
        v21 += 14 * v29;
        v22 -= v29;
        goto LABEL_54;
      }
      return result;
    }
    v41 = 0;
    v21 += 14 * v29;
    v22 -= v29;
LABEL_54:
    if ( v18 || *a5 != (v11 == 3145728) )
    {
      v6 = v41;
LABEL_57:
      if ( v22 <= 1 )
        goto LABEL_61;
      v9 = a2;
      continue;
    }
    break;
  }
  v21 = v38;
  v5 = 1;
  v22 = v36;
LABEL_60:
  v6 = v41;
LABEL_61:
  if ( !v22 )
    return 3221225485LL;
  v31 = *v21 & 0xFF00000;
  switch ( v31 )
  {
    case 2097152:
      v32 = v11 == 0x100000;
      goto LABEL_68;
    case 4194304:
      v32 = v11 == 3145728;
LABEL_68:
      if ( !v32 )
        return 3221225485LL;
      if ( v5 || v6 || v18 )
        return v18;
      return v19;
    case 6291456:
      v32 = v11 == 5242880;
      goto LABEL_68;
  }
  return 3221225485LL;
}
