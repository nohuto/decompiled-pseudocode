/*
 * XREFs of EmpEvaluateNodeLink @ 0x140431B1C
 * Callers:
 *     EmpEvaluateTargetRule @ 0x140431830 (EmpEvaluateTargetRule.c)
 *     EmpEvaluateNodeLink @ 0x140431B1C (EmpEvaluateNodeLink.c)
 * Callees:
 *     EmpEvaluateNodeLink @ 0x140431B1C (EmpEvaluateNodeLink.c)
 *     HalMatchAcpiOemId @ 0x14045F7B0 (HalMatchAcpiOemId.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EmpEvaluateNodeLink(
        int *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        int a9,
        _QWORD *a10,
        unsigned int a11)
{
  unsigned __int64 v11; // rdi
  _QWORD *v12; // rsi
  int v13; // eax
  __int64 v14; // r10
  _QWORD *Pool2; // r14
  unsigned int v16; // ebx
  _DWORD *v17; // r15
  __int64 v18; // rbp
  __int64 v20; // r12
  unsigned int v21; // r13d
  __int64 v22; // rcx
  unsigned int v23; // edx
  unsigned __int64 v24; // rcx
  ULONG_PTR v25; // rax
  unsigned __int64 v26; // rdx
  unsigned int v27; // r10d
  ULONG_PTR v28; // rax
  unsigned __int64 v29; // rdx
  unsigned int v30; // r8d
  unsigned int v31; // r9d
  __int64 j; // rdx
  __int64 v33; // rax
  __int64 v34; // rsi
  int v35; // ebp
  __int64 k; // rdx
  __int64 v37; // rax
  unsigned int matched; // eax
  unsigned int v39; // r13d
  ULONG_PTR v41; // rax
  unsigned __int64 v42; // rdx
  __int64 i; // rdx
  __int64 v44; // rax
  int v46; // eax
  unsigned int v47; // [rsp+60h] [rbp-78h]
  unsigned int v48; // [rsp+64h] [rbp-74h]
  unsigned int v49; // [rsp+68h] [rbp-70h]
  int v50; // [rsp+6Ch] [rbp-6Ch]
  __int64 v51; // [rsp+70h] [rbp-68h]
  __int64 v52; // [rsp+78h] [rbp-60h]

  v11 = (unsigned __int64)a10;
  v12 = 0LL;
  v13 = *a1;
  v14 = 0LL;
  v52 = 0LL;
  Pool2 = 0LL;
  v16 = 1;
  v17 = 0LL;
  v18 = 0LL;
  v20 = (__int64)a10;
  v21 = a11;
  if ( (unsigned int)*a1 > 1 )
  {
    if ( v13 != 2 )
      return v16;
    v34 = *((_QWORD *)a1 + 1);
    v35 = EmpEvaluateNodeLink(
            *(_QWORD *)(v34 + 8),
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            *(_QWORD *)(v34 + 24),
            *(_DWORD *)(v34 + 16),
            (__int64)a10,
            a11);
    if ( v35 == 1 )
      return v16;
    if ( *(_BYTE *)v34 == 38 )
    {
      if ( !v35 )
        return 0;
    }
    else if ( *(_BYTE *)v34 == 124 && v35 == 2 )
    {
      return 2;
    }
    v46 = EmpEvaluateNodeLink(
            *(_QWORD *)(v34 + 32),
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            *(_QWORD *)(v34 + 48),
            *(_DWORD *)(v34 + 40),
            (__int64)a10,
            a11);
    if ( v46 == 1 )
      return v16;
    if ( *(_BYTE *)v34 == 38 )
    {
      if ( !v35 || !v46 )
        return 0;
    }
    else
    {
      if ( *(_BYTE *)v34 != 124 )
        return v16;
      if ( !v35 && !v46 )
        return 0;
    }
    return 2;
  }
  v22 = *((_QWORD *)a1 + 1);
  if ( v13 )
  {
    v14 = v22;
    v52 = v22;
    if ( !*(_BYTE *)(v22 + 20) )
      return v16;
    v23 = *(_DWORD *)(v22 + 44);
    v48 = *(_DWORD *)(v22 + 48);
    v24 = *(unsigned int *)(v22 + 40);
  }
  else
  {
    v18 = v22;
    if ( !*(_QWORD *)(v22 + 16) )
      return v16;
    v23 = *(_DWORD *)(v22 + 60);
    v48 = *(_DWORD *)(v22 + 64);
    v24 = *(unsigned int *)(v22 + 56);
  }
  v47 = v23;
  v49 = v24;
  v50 = a1[4];
  if ( v50 && (v51 = *((_QWORD *)a1 + 3)) != 0 || (v51 = a8, v50 = a9, a8) )
  {
    if ( (_DWORD)v24 )
    {
      v41 = 8 * v24;
      if ( !is_mul_ok(v24, 8uLL) )
        return v16;
      v42 = (v41 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      if ( a10 && a11 >= v42 )
      {
        v20 = (__int64)a10 + v42;
        v21 = a11 - v42;
        Pool2 = a10;
      }
      else
      {
        Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL, v41, 0x76654D45u);
        if ( !Pool2 )
          return v16;
      }
    }
    if ( !v47 )
      goto LABEL_14;
    v25 = 4LL * v47;
    if ( is_mul_ok(v47, 4uLL) )
    {
      v26 = (v25 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      if ( v20 && v21 >= v26 )
      {
        v17 = (_DWORD *)v20;
        v20 += v26;
        v21 -= v26;
        goto LABEL_14;
      }
      v17 = (_DWORD *)ExAllocatePool2(0x100uLL, v25, 0x76654D45u);
      if ( v17 )
      {
LABEL_14:
        v27 = v48;
        if ( v48 )
        {
          v28 = 8LL * v48;
          if ( !is_mul_ok(v48, 8uLL) )
            goto LABEL_69;
          v29 = (v28 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
          if ( v20 && v21 >= v29 )
          {
            v12 = (_QWORD *)v20;
            v20 += v29;
            v21 -= v29;
          }
          else
          {
            v12 = (_QWORD *)ExAllocatePool2(0x100uLL, v28, 0x76654D45u);
            if ( !v12 )
              goto LABEL_69;
            v27 = v48;
          }
        }
        v30 = v49;
        v31 = v47;
        if ( v50 == v47 + v49 + v27 )
        {
          if ( Pool2 )
          {
            for ( i = 0LL; (unsigned int)i < v30; i = (unsigned int)(i + 1) )
            {
              v44 = *(unsigned int *)(v51 + 4 * i);
              if ( (unsigned int)v44 >= a3 )
                goto LABEL_41;
              v30 = v49;
              Pool2[i] = *(_QWORD *)(a2 + 8 * v44);
            }
          }
          if ( v17 )
          {
            for ( j = 0LL; (unsigned int)j < v47; j = (unsigned int)(j + 1) )
            {
              v33 = *(unsigned int *)(v51 + 4LL * ((unsigned int)j + v30));
              if ( (unsigned int)v33 >= a5 )
                goto LABEL_41;
              v11 = (unsigned __int64)a10;
              v17[j] = *(_DWORD *)(a4 + 4 * v33);
            }
          }
          if ( v12 )
          {
            for ( k = 0LL; (unsigned int)k < v27; k = (unsigned int)(k + 1) )
            {
              v37 = *(unsigned int *)(v51 + 4LL * ((unsigned int)k + v47 + v49));
              if ( (unsigned int)v37 >= a7 )
                goto LABEL_42;
              v12[k] = *(_QWORD *)(a6 + 8 * v37);
            }
            v31 = v47;
          }
          if ( *a1 )
          {
            matched = EmpEvaluateNodeLink(
                        *(_QWORD *)(v52 + 96),
                        (_DWORD)Pool2,
                        v30,
                        (_DWORD)v17,
                        v31,
                        (__int64)v12,
                        v27,
                        0LL,
                        0,
                        v20,
                        v21);
          }
          else if ( *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))(v18 + 16) == HalMatchAcpiOemId )
          {
            matched = HalMatchAcpiOemId(v12, v27, Pool2, v30, v17, v31, *(_QWORD *)(v18 + 32));
          }
          else
          {
            matched = guard_dispatch_icall_no_overrides(v12, v27);
          }
          v16 = matched;
        }
LABEL_41:
        if ( v12 )
        {
LABEL_42:
          if ( v11 && (unsigned __int64)v12 >= v11 )
          {
            v39 = a11;
            if ( (unsigned __int64)v12 < v11 + a11 )
            {
LABEL_45:
              if ( v17 && (!v11 || (unsigned __int64)v17 < v11 || (unsigned __int64)v17 >= v11 + v39) )
                ExFreePoolWithTag(v17, 0x76654D45u);
              goto LABEL_49;
            }
          }
          else
          {
            v39 = a11;
          }
          ExFreePoolWithTag(v12, 0x76654D45u);
          goto LABEL_45;
        }
LABEL_69:
        v39 = a11;
        goto LABEL_45;
      }
    }
    v39 = a11;
LABEL_49:
    if ( Pool2 && (!v11 || (unsigned __int64)Pool2 < v11 || (unsigned __int64)Pool2 >= v11 + v39) )
      ExFreePoolWithTag(Pool2, 0x76654D45u);
    return v16;
  }
  if ( v13 )
    return (unsigned int)EmpEvaluateNodeLink(*(_QWORD *)(v14 + 96), a2, a3, a4, a5, a6, a7, 0LL, 0, (__int64)a10, a11);
  else
    return (unsigned int)guard_dispatch_icall_no_overrides(a6, a7);
}
