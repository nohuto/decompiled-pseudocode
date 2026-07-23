/*
 * XREFs of HalpBuildScatterGatherListDmaThin @ 0x1403E1230
 * Callers:
 *     HalBuildScatterGatherListDmaThinEx @ 0x1403E1180 (HalBuildScatterGatherListDmaThinEx.c)
 *     HalGetScatterGatherListDmaThinEx @ 0x14054EFE0 (HalGetScatterGatherListDmaThinEx.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpBuildScatterGatherListDmaThin(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        unsigned __int64 a5,
        unsigned int a6,
        char a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        unsigned int *a11,
        unsigned int a12,
        unsigned int **a13)
{
  __int64 v14; // r8
  __int64 *v15; // r14
  int v16; // ebx
  unsigned __int64 v18; // rax
  int v19; // edx
  __int64 *v20; // rax
  unsigned int v21; // edi
  unsigned int v22; // r9d
  __int64 v23; // rsi
  unsigned int v24; // r8d
  unsigned __int64 v25; // rdx
  unsigned int v26; // r10d
  __int64 *i; // rdx
  __int64 v28; // r11
  unsigned int v29; // ecx
  unsigned int v30; // r10d
  ULONG_PTR v31; // rdx
  unsigned int *v32; // r9
  unsigned int *v33; // rdi
  __int64 v34; // rbp
  __int64 v35; // r13
  void *v36; // r9
  unsigned int v37; // r11d
  unsigned int v38; // r8d
  __int64 *v39; // rdx
  unsigned int v40; // ecx
  __int64 v41; // r15
  __int64 v42; // r12
  unsigned int v43; // r9d
  unsigned int v44; // ecx
  unsigned int v45; // r10d
  __int64 *j; // r14
  __int64 v47; // rsi
  unsigned int v48; // eax
  unsigned int v49; // r10d
  __int64 v50; // r13
  int v52; // eax
  void *v53; // [rsp+30h] [rbp-48h]
  unsigned int *P; // [rsp+98h] [rbp+20h]

  v14 = a2;
  v15 = a4;
  if ( !a4 )
    return 3221225485LL;
  v16 = 0;
  if ( a13 )
    *a13 = 0LL;
  do
  {
    v18 = *((unsigned int *)v15 + 10);
    if ( a5 < v18 )
    {
      v19 = a5;
      v20 = v15;
      v21 = 0;
      v22 = a6;
      if ( a6 )
      {
        v23 = 0LL;
        do
        {
          if ( !v20 )
            break;
          v24 = v22;
          if ( *((_DWORD *)v20 + 10) - v19 <= v22 )
            v24 = *((_DWORD *)v20 + 10) - v19;
          v25 = (unsigned int)(*((_DWORD *)v20 + 11) + v19);
          v22 -= v24;
          v26 = v25 & 0xFFF;
          for ( i = &v20[(v25 >> 12) + 6]; v24; v26 = 0 )
          {
            v28 = v26 + (*i << 12);
            v29 = 4096 - v26;
            v30 = v24;
            if ( v29 <= v24 )
              v30 = v29;
            if ( v28 != v23 + 1 || !v21 )
              ++v21;
            v24 -= v30;
            ++i;
            v23 = v28 + v30 - 1LL;
          }
          v20 = (__int64 *)*v20;
          v19 = 0;
        }
        while ( v22 );
        v14 = a2;
      }
      v31 = 24LL * v21 + 120;
      if ( a11 )
      {
        if ( a12 < v31 )
          return 3221225507LL;
        v32 = a11;
        P = a11;
      }
      else
      {
        P = (unsigned int *)ExAllocatePool2(0x42uLL, v31, 0x446C6148u);
        v32 = P;
        if ( !P )
          return 3221225626LL;
        v14 = a2;
      }
      *v32 = v21;
      v33 = &v32[6 * v21 + 4];
      *((_QWORD *)v33 + 4) = v14;
      *((_BYTE *)v33 + 97) = a11 == 0LL;
      *((_QWORD *)v33 + 3) = a1;
      *((_QWORD *)v33 + 5) = *(_QWORD *)(v14 + 32);
      *((_QWORD *)v33 + 8) = a8;
      *((_QWORD *)v33 + 9) = a9;
      v33[14] = a6;
      *((_QWORD *)v33 + 6) = v15;
      v33[15] = a5;
      *((_QWORD *)v33 + 10) = v32;
      *((_BYTE *)v33 + 96) = a7 & 1;
      v33[4] = 2;
      *((_BYTE *)v33 + 98) = 0;
      *((_QWORD *)v33 + 11) = 0LL;
      if ( a3
        && (*(_QWORD *)(a3 + 88) = v33,
            *((_QWORD *)v33 + 11) = a3 + 8,
            _m_prefetchw((const void *)(a3 + 8)),
            (_InterlockedOr((volatile signed __int32 *)(a3 + 8), 4u) & 2) != 0) )
      {
        v16 = -1073741536;
      }
      else
      {
        v34 = *((_QWORD *)v33 + 10);
        v35 = 0LL;
        v36 = (void *)*((_QWORD *)v33 + 11);
        v37 = 0;
        v38 = v33[14];
        v39 = (__int64 *)*((_QWORD *)v33 + 6);
        v40 = v33[15];
        v41 = v34 + 16;
        v42 = *((_QWORD *)v33 + 8);
        *(_QWORD *)(v34 + 8) = v33;
        v53 = v36;
        if ( v38 )
        {
          while ( v39 )
          {
            v43 = v38;
            if ( *((_DWORD *)v39 + 10) - v40 <= v38 )
              v43 = *((_DWORD *)v39 + 10) - v40;
            v44 = *((_DWORD *)v39 + 11) + v40;
            v38 -= v43;
            v45 = v44 & 0xFFF;
            for ( j = &v39[((unsigned __int64)v44 >> 12) + 6]; v43; v35 = v47 + v50 )
            {
              v47 = v45 + (*j << 12);
              v48 = 4096 - v45;
              v49 = v43;
              if ( v48 <= v43 )
                v49 = v48;
              if ( v47 != v35 + 1 || !v37 )
              {
                v41 = v34 + 24LL * v37++ + 16;
                *(_QWORD *)v41 = v47;
                *(_DWORD *)(v41 + 8) = 0;
                *(_QWORD *)(v41 + 16) = 0LL;
              }
              *(_DWORD *)(v41 + 8) += v49;
              v43 -= v49;
              ++j;
              v50 = v49 - 1LL;
              v45 = 0;
            }
            v39 = (__int64 *)*v39;
            v40 = 0;
            if ( !v38 )
            {
              v36 = v53;
              goto LABEL_35;
            }
          }
          v36 = v53;
          if ( v37 )
            *(_DWORD *)(v34 + 24 * (v37 - 1 + 1LL)) += v38;
        }
LABEL_35:
        *(_DWORD *)v34 = v37;
        if ( v36 )
        {
          _m_prefetchw(v36);
          v52 = 0;
          if ( (_InterlockedOr((volatile signed __int32 *)v36, 1u) & 2) != 0 )
            v52 = -1073741536;
          v16 = v52;
        }
        if ( v42 )
          guard_dispatch_icall_no_overrides(*((_QWORD *)v33 + 4), *((_QWORD *)v33 + 5));
        if ( v16 >= 0 )
        {
          if ( a13 )
            *a13 = P;
          return (unsigned int)v16;
        }
        v32 = P;
      }
      if ( *((_BYTE *)v33 + 97) )
        ExFreePoolWithTag(v32, 0);
      return (unsigned int)v16;
    }
    v15 = (__int64 *)*v15;
    a5 -= v18;
  }
  while ( v15 );
  return 3221225485LL;
}
