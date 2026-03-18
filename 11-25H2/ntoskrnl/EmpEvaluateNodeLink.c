/*
 * XREFs of EmpEvaluateNodeLink @ 0x14043D5D4
 * Callers:
 *     EmpEvaluateTargetRule @ 0x14043D2E8 (EmpEvaluateTargetRule.c)
 *     EmpEvaluateNodeLink @ 0x14043D5D4 (EmpEvaluateNodeLink.c)
 * Callees:
 *     HalMatchAcpiOemId @ 0x140412F90 (HalMatchAcpiOemId.c)
 *     EmpEvaluateNodeLink @ 0x14043D5D4 (EmpEvaluateNodeLink.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
        int **a10,
        unsigned int a11)
{
  unsigned __int64 v11; // rdi
  _QWORD *v12; // rsi
  int v13; // eax
  __int64 v14; // r10
  int **Pool2; // r14
  unsigned int v16; // ebx
  _DWORD *v17; // r15
  __int64 v18; // rbp
  __int64 v20; // r12
  unsigned int v21; // r13d
  __int64 v22; // rcx
  unsigned int v23; // edx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  unsigned int v26; // r10d
  unsigned __int64 v27; // rdx
  unsigned int v28; // r8d
  unsigned int v29; // r9d
  __int64 j; // rdx
  __int64 v31; // rax
  __int64 v32; // rsi
  int v33; // ebp
  __int64 k; // rdx
  __int64 v35; // rax
  unsigned int matched; // eax
  unsigned int v37; // r13d
  unsigned __int64 v39; // rdx
  __int64 i; // rdx
  __int64 v41; // rax
  int v43; // eax
  unsigned int v44; // [rsp+60h] [rbp-78h]
  unsigned int v45; // [rsp+64h] [rbp-74h]
  unsigned int v46; // [rsp+68h] [rbp-70h]
  int v47; // [rsp+6Ch] [rbp-6Ch]
  __int64 v48; // [rsp+70h] [rbp-68h]
  __int64 v49; // [rsp+78h] [rbp-60h]

  v11 = (unsigned __int64)a10;
  v12 = 0LL;
  v13 = *a1;
  v14 = 0LL;
  v49 = 0LL;
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
    v32 = *((_QWORD *)a1 + 1);
    v33 = EmpEvaluateNodeLink(
            *(_QWORD *)(v32 + 8),
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            *(_QWORD *)(v32 + 24),
            *(_DWORD *)(v32 + 16),
            (__int64)a10,
            a11);
    if ( v33 == 1 )
      return v16;
    if ( *(_BYTE *)v32 == 38 )
    {
      if ( !v33 )
        return 0;
    }
    else if ( *(_BYTE *)v32 == 124 && v33 == 2 )
    {
      return 2;
    }
    v43 = EmpEvaluateNodeLink(
            *(_QWORD *)(v32 + 32),
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            *(_QWORD *)(v32 + 48),
            *(_DWORD *)(v32 + 40),
            (__int64)a10,
            a11);
    if ( v43 == 1 )
      return v16;
    if ( *(_BYTE *)v32 == 38 )
    {
      if ( !v33 || !v43 )
        return 0;
    }
    else
    {
      if ( *(_BYTE *)v32 != 124 )
        return v16;
      if ( !v33 && !v43 )
        return 0;
    }
    return 2;
  }
  v22 = *((_QWORD *)a1 + 1);
  if ( v13 )
  {
    v14 = v22;
    v49 = v22;
    if ( !*(_BYTE *)(v22 + 20) )
      return v16;
    v23 = *(_DWORD *)(v22 + 44);
    v45 = *(_DWORD *)(v22 + 48);
    v24 = *(unsigned int *)(v22 + 40);
  }
  else
  {
    v18 = v22;
    if ( !*(_QWORD *)(v22 + 16) )
      return v16;
    v23 = *(_DWORD *)(v22 + 60);
    v45 = *(_DWORD *)(v22 + 64);
    v24 = *(unsigned int *)(v22 + 56);
  }
  v44 = v23;
  v46 = v24;
  v47 = a1[4];
  if ( v47 && (v48 = *((_QWORD *)a1 + 3)) != 0 || (v48 = a8, v47 = a9, a8) )
  {
    if ( (_DWORD)v24 )
    {
      if ( !is_mul_ok(v24, 8uLL) )
        return v16;
      v39 = (8 * v24 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      if ( a10 && a11 >= v39 )
      {
        v20 = (__int64)a10 + v39;
        v21 = a11 - v39;
        Pool2 = a10;
      }
      else
      {
        Pool2 = (int **)ExAllocatePool2(0x100uLL);
        if ( !Pool2 )
          return v16;
      }
    }
    if ( !v44 )
      goto LABEL_14;
    if ( is_mul_ok(v44, 4uLL) )
    {
      v25 = (4LL * v44 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      if ( v20 && v21 >= v25 )
      {
        v17 = (_DWORD *)v20;
        v20 += v25;
        v21 -= v25;
        goto LABEL_14;
      }
      v17 = (_DWORD *)ExAllocatePool2(0x100uLL);
      if ( v17 )
      {
LABEL_14:
        v26 = v45;
        if ( v45 )
        {
          if ( !is_mul_ok(v45, 8uLL) )
            goto LABEL_69;
          v27 = (8LL * v45 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
          if ( v20 && v21 >= v27 )
          {
            v12 = (_QWORD *)v20;
            v20 += v27;
            v21 -= v27;
          }
          else
          {
            v12 = (_QWORD *)ExAllocatePool2(0x100uLL);
            if ( !v12 )
              goto LABEL_69;
            v26 = v45;
          }
        }
        v28 = v46;
        v29 = v44;
        if ( v47 == v44 + v46 + v26 )
        {
          if ( Pool2 )
          {
            for ( i = 0LL; (unsigned int)i < v28; i = (unsigned int)(i + 1) )
            {
              v41 = *(unsigned int *)(v48 + 4 * i);
              if ( (unsigned int)v41 >= a3 )
                goto LABEL_41;
              v28 = v46;
              Pool2[i] = *(int **)(a2 + 8 * v41);
            }
          }
          if ( v17 )
          {
            for ( j = 0LL; (unsigned int)j < v44; j = (unsigned int)(j + 1) )
            {
              v31 = *(unsigned int *)(v48 + 4LL * ((unsigned int)j + v28));
              if ( (unsigned int)v31 >= a5 )
                goto LABEL_41;
              v11 = (unsigned __int64)a10;
              v17[j] = *(_DWORD *)(a4 + 4 * v31);
            }
          }
          if ( v12 )
          {
            for ( k = 0LL; (unsigned int)k < v26; k = (unsigned int)(k + 1) )
            {
              v35 = *(unsigned int *)(v48 + 4LL * ((unsigned int)k + v44 + v46));
              if ( (unsigned int)v35 >= a7 )
                goto LABEL_42;
              v12[k] = *(_QWORD *)(a6 + 8 * v35);
            }
            v29 = v44;
          }
          if ( *a1 )
          {
            matched = EmpEvaluateNodeLink(
                        *(_QWORD *)(v49 + 96),
                        (_DWORD)Pool2,
                        v28,
                        (_DWORD)v17,
                        v29,
                        (__int64)v12,
                        v26,
                        0LL,
                        0,
                        v20,
                        v21);
          }
          else if ( *(__int64 (__fastcall **)(__int64, __int64, int **, int))(v18 + 16) == HalMatchAcpiOemId )
          {
            matched = HalMatchAcpiOemId((__int64)v12, v26, Pool2, v28);
          }
          else
          {
            matched = guard_dispatch_icall_no_overrides(v12, v26);
          }
          v16 = matched;
        }
LABEL_41:
        if ( v12 )
        {
LABEL_42:
          if ( v11 && (unsigned __int64)v12 >= v11 )
          {
            v37 = a11;
            if ( (unsigned __int64)v12 < v11 + a11 )
            {
LABEL_45:
              if ( v17 && (!v11 || (unsigned __int64)v17 < v11 || (unsigned __int64)v17 >= v11 + v37) )
                ExFreePoolWithTag(v17, 0x76654D45u);
              goto LABEL_49;
            }
          }
          else
          {
            v37 = a11;
          }
          ExFreePoolWithTag(v12, 0x76654D45u);
          goto LABEL_45;
        }
LABEL_69:
        v37 = a11;
        goto LABEL_45;
      }
    }
    v37 = a11;
LABEL_49:
    if ( Pool2 && (!v11 || (unsigned __int64)Pool2 < v11 || (unsigned __int64)Pool2 >= v11 + v37) )
      ExFreePoolWithTag(Pool2, 0x76654D45u);
    return v16;
  }
  if ( v13 )
    return (unsigned int)EmpEvaluateNodeLink(*(_QWORD *)(v14 + 96), a2, a3, a4, a5, a6, a7, 0LL, 0, (__int64)a10, a11);
  else
    return (unsigned int)guard_dispatch_icall_no_overrides(a6, a7);
}
