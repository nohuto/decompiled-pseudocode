/*
 * XREFs of FilterEvalStrict @ 0x1408CC720
 * Callers:
 *     ConstraintEval @ 0x1408B4EA0 (ConstraintEval.c)
 *     PiDqQueryEvaluateFilter @ 0x1408CBE00 (PiDqQueryEvaluateFilter.c)
 *     FilterEvalStrict @ 0x1408CC720 (FilterEvalStrict.c)
 *     ValidFilter @ 0x1409FA0B0 (ValidFilter.c)
 * Callees:
 *     Feature_KernelPnP_DevFilterShortCircuitEval__private_IsEnabledDeviceUsageNoInline @ 0x14069C41C (Feature_KernelPnP_DevFilterShortCircuitEval__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     FilterEvalStrict @ 0x1408CC720 (FilterEvalStrict.c)
 *     PropertyEval @ 0x1408D4F30 (PropertyEval.c)
 *     FindFilterOperatorClose @ 0x1409E9E70 (FindFilterOperatorClose.c)
 */

__int64 __fastcall FilterEvalStrict(int a1, __int64 a2, unsigned int a3, __int64 a4, _DWORD *a5)
{
  int v5; // ebp
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
  unsigned int v22; // r14d
  unsigned int v23; // edi
  int v24; // ecx
  int v25; // edx
  unsigned int v26; // edi
  __int64 v27; // rax
  unsigned int v28; // eax
  unsigned int v29; // edi
  bool v30; // zf
  int v31; // eax
  bool v32; // zf
  __int64 *v33; // [rsp+20h] [rbp-78h]
  __int64 *v34; // [rsp+20h] [rbp-78h]
  unsigned int v35; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v36; // [rsp+44h] [rbp-54h] BYREF
  unsigned int v37; // [rsp+48h] [rbp-50h] BYREF
  unsigned int v38; // [rsp+4Ch] [rbp-4Ch]
  __int64 v39; // [rsp+50h] [rbp-48h] BYREF
  unsigned int *v40; // [rsp+58h] [rbp-40h]
  int v43; // [rsp+B0h] [rbp+18h]

  v5 = 0;
  v6 = 1;
  v43 = 1;
  v36 = 0;
  v39 = 0LL;
  v9 = a2;
  v35 = 0;
  if ( a3 < 3 )
    return 3221225485LL;
  v11 = *(_DWORD *)a4 & 0xFF00000;
  if ( !v11 )
    return 3221225485LL;
  v12 = 0;
  v37 = 0;
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
    v37 = ++v12;
    v15 = v12;
    if ( v12 >= a3 )
      return 3221225485LL;
  }
  v18 = 0;
  v19 = -1073741823;
  v20 = (unsigned int *)(a4 + 56LL * v12);
  v21 = (unsigned int *)(a4 + 56);
  v40 = v20;
  LODWORD(v20) = a3 - v12;
  v22 = a3 - 1;
  v38 = (unsigned int)v20;
  if ( ((v11 - 0x100000) & 0xFFDFFFFF) != 0 )
  {
    if ( v11 != 5242880 )
      return 3221225485LL;
    if ( (*v21 & 0xFF00000) != 0 )
    {
      result = FindFilterOperatorClose(v22, v21, &v37);
      v23 = v37 + 1;
      if ( (_DWORD)result )
        return result;
      result = FilterEvalStrict(a1, a2, v23, (_DWORD)v21, (__int64)a5);
      v18 = result;
      if ( (_DWORD)result )
        return result;
      v22 -= v23;
      v21 += 14 * v23;
      *a5 = *a5 == 0;
      goto LABEL_66;
    }
    v33 = &v39;
    result = guard_dispatch_icall_no_overrides(v9, a4 + 64, &v36, &v35);
    v18 = result;
    if ( (_DWORD)result != -1073741275 )
    {
      if ( (_DWORD)result )
        return result;
      LODWORD(v33) = *(_DWORD *)(a4 + 96);
      PropertyEval(v36, v39, v35, *v21, v33, *(_QWORD *)(a4 + 104), *(_DWORD *)(a4 + 100), a5);
      v21 = (unsigned int *)(a4 + 112);
      --v22;
      *a5 = *a5 == 0;
LABEL_66:
      v6 = v43;
LABEL_67:
      if ( !v22 )
        return 3221225485LL;
      v31 = *v21 & 0xFF00000;
      switch ( v31 )
      {
        case 2097152:
          v32 = v11 == 0x100000;
          break;
        case 4194304:
          v32 = v11 == 3145728;
          break;
        case 6291456:
          v32 = v11 == 5242880;
          break;
        default:
          return 3221225485LL;
      }
      if ( !v32 )
        return 3221225485LL;
      if ( v5 || v6 || v18 )
        return v18;
    }
    return v19;
  }
  if ( v22 <= 1 )
    goto LABEL_67;
  while ( 2 )
  {
    v30 = (*v21 & 0xFF00000) == 0;
    *a5 = 0;
    if ( v30 )
    {
      v34 = &v39;
      v18 = guard_dispatch_icall_no_overrides(v9, v21 + 2, &v36, &v35);
      if ( v18 == -1073741275 )
      {
        v18 = (unsigned int)Feature_KernelPnP_DevFilterShortCircuitEval__private_IsEnabledDeviceUsageNoInline() != 0
            ? 0xC0000001
            : 0;
        if ( (*v21 & 0xFFF) != 1 )
        {
          v21 += 14;
          v43 = 0;
          --v22;
          v6 = 0;
LABEL_62:
          if ( v22 <= 1 )
            goto LABEL_67;
          v9 = a2;
          continue;
        }
        v36 = 0;
        v35 = 0;
        v39 = 0LL;
      }
      if ( (unsigned int)Feature_KernelPnP_DevFilterShortCircuitEval__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( !v18 )
          goto LABEL_55;
        v30 = v18 == -1073741823;
      }
      else
      {
        v30 = v18 == 0;
      }
      if ( !v30 )
        return v18;
LABEL_55:
      LODWORD(v34) = v21[10];
      PropertyEval(v36, v39, v35, *v21, v34, *((_QWORD *)v21 + 6), v21[11], a5);
      v21 += 14;
      --v22;
LABEL_56:
      if ( (unsigned int)Feature_KernelPnP_DevFilterShortCircuitEval__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( !v18 && *a5 == (v11 == 3145728) )
        {
          v21 = v40;
          v5 = 1;
          v22 = v38;
          goto LABEL_66;
        }
        v6 = v43;
      }
      else
      {
        v6 = v43;
        if ( *a5 == (v11 == 3145728) )
        {
          v21 = v40;
          v5 = 1;
          v22 = v38;
          goto LABEL_67;
        }
      }
      goto LABEL_62;
    }
    break;
  }
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0LL;
  while ( 1 )
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
          if ( v28 != 3145728 )
            goto LABEL_36;
LABEL_35:
          ++v24;
          goto LABEL_36;
        }
      }
LABEL_41:
      ++v25;
      goto LABEL_36;
    }
    if ( v28 == 5242880 )
      goto LABEL_35;
    if ( v28 == 6291456 )
      goto LABEL_41;
LABEL_36:
    if ( v24 == v25 )
      break;
    v27 = ++v26;
    if ( v26 >= v22 )
      return 3221225485LL;
  }
  v29 = v26 + 1;
  result = FilterEvalStrict(a1, v9, v29, (_DWORD)v21, (__int64)a5);
  v18 = result;
  if ( (_DWORD)result == -1073741823 )
  {
    v43 = 0;
    v21 += 14 * v29;
    v22 -= v29;
    goto LABEL_56;
  }
  if ( !(_DWORD)result )
  {
    v21 += 14 * v29;
    v22 -= v29;
    goto LABEL_56;
  }
  return result;
}
