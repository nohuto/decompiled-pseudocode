/*
 * XREFs of SymCryptParallelHashProcess @ 0x14051D7E4
 * Callers:
 *     SymCryptParallelSha256Process @ 0x14051AB58 (SymCryptParallelSha256Process.c)
 * Callees:
 *     qsort @ 0x1404FC5E0 (qsort.c)
 *     SymCryptWipe @ 0x14051B504 (SymCryptWipe.c)
 *     SymCryptParallelHashSetNextWork @ 0x14051DC28 (SymCryptParallelHashSetNextWork.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall SymCryptParallelHashProcess(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned int a8)
{
  unsigned int v9; // ebx
  size_t v13; // r8
  unsigned __int64 v14; // rbp
  _QWORD *v15; // r14
  size_t v16; // rdi
  unsigned __int64 *i; // rdx
  unsigned __int64 v18; // r8
  _QWORD *v19; // rcx
  int v20; // eax
  unsigned __int64 v21; // rax
  char v22; // r12
  size_t v23; // rsi
  __int64 v24; // r13
  _QWORD *v25; // r15
  _QWORD *v26; // rbp
  char v27; // dl
  size_t v28; // rsi
  __int64 *v29; // r12
  unsigned __int64 v30; // r8
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  size_t v33; // rbp
  _QWORD *v34; // r15
  __int64 v35; // rdx
  __int64 v36; // rax
  unsigned __int64 v38; // [rsp+30h] [rbp-38h]
  unsigned __int64 v39; // [rsp+38h] [rbp-30h]
  __int64 v41; // [rsp+90h] [rbp+28h]

  v9 = 0;
  if ( a5 )
  {
    v41 = *a1;
    v13 = 48 * a3;
    v38 = *((unsigned int *)a1 + 2);
    v14 = (a6 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
    v15 = (_QWORD *)(v13 + v14);
    v39 = (v13 + v14 + 8 * a3 + 31) & 0xFFFFFFFFFFFFFFE0uLL;
    if ( v38 + v39 <= a6 + a7 )
    {
      memset_0((void *)((a6 + 15) & 0xFFFFFFFFFFFFFFF0uLL), 0, v13);
      v16 = 0LL;
      for ( i = (unsigned __int64 *)(a4 + 40 * a5); (unsigned __int64)i > a4; v19[3] = i )
      {
        i -= 5;
        v18 = *i;
        if ( *i >= a3 )
          return 32782;
        v19 = (_QWORD *)(v14 + 48 * v18);
        if ( !*v19 )
        {
          *v19 = a2 + v18 * *(unsigned int *)(v41 + 40);
          v15[v16++] = v19;
        }
        v20 = *((_DWORD *)i + 2);
        if ( v20 == 1 )
        {
          v21 = i[3];
        }
        else
        {
          if ( v20 != 2 )
            return 32782;
          v21 = *(unsigned int *)(v41 + 48);
        }
        v19[2] += v21;
        i[4] = v19[3];
      }
      v22 = 1;
      v23 = 0LL;
      v24 = *(_QWORD *)(*v15 + 16LL);
      if ( v16 )
      {
        v25 = &v15[v16 - 1];
        do
        {
          v26 = &v15[v23];
          if ( (unsigned __int8)SymCryptParallelHashSetNextWork(a1, *v26) )
          {
            ++v23;
            v27 = 0;
            if ( *(_QWORD *)(*v26 + 16LL) == v24 )
              v27 = v22;
            v22 = v27;
          }
          else
          {
            --v16;
            *v26 = *v25--;
          }
        }
        while ( v23 < v16 );
        if ( !v22 )
          qsort(v15, v16, 8uLL, compareRequestSize);
      }
      v28 = a8;
      if ( v16 < a8 )
        v28 = v16;
      v29 = &v15[v28];
      while ( v16 )
      {
        v30 = 1LL;
        v31 = *(_QWORD *)(*v15 + 40LL);
        while ( v30 < v28 )
        {
          v32 = *(_QWORD *)(v15[v30] + 40LL);
          if ( v31 < v32 )
            v32 = v31;
          ++v30;
          v31 = v32;
        }
        guard_dispatch_icall_no_overrides(v15, v28);
        v33 = 0LL;
        if ( v28 )
        {
          v34 = &v15[v28];
          do
          {
            v35 = v15[v33];
            if ( *(_QWORD *)(v35 + 40) < (unsigned __int64)*(unsigned int *)(v41 + 48)
              && !(unsigned __int8)SymCryptParallelHashSetNextWork(a1, v35) )
            {
              if ( v16 <= v28 )
              {
                --v34;
                --v28;
                v15[v33--] = *v34;
              }
              else
              {
                v36 = *v29++;
                v15[v33] = v36;
              }
              --v16;
            }
            ++v33;
          }
          while ( v33 < v28 );
        }
      }
      SymCryptWipe(v39, v38);
    }
    else
    {
      return 32781;
    }
  }
  return v9;
}
