/*
 * XREFs of HalpBuildScatterGatherListDmaThin @ 0x1403ECC40
 * Callers:
 *     HalBuildScatterGatherListDmaThinEx @ 0x1403ECB90 (HalBuildScatterGatherListDmaThinEx.c)
 *     HalGetScatterGatherListDmaThinEx @ 0x1405516A0 (HalGetScatterGatherListDmaThinEx.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  unsigned int *v31; // r9
  unsigned int *v32; // rdi
  __int64 v33; // rbp
  __int64 v34; // r13
  void *v35; // r9
  unsigned int v36; // r11d
  unsigned int v37; // r8d
  __int64 *v38; // rdx
  unsigned int v39; // ecx
  __int64 v40; // r15
  __int64 v41; // r12
  unsigned int v42; // r9d
  unsigned int v43; // ecx
  unsigned int v44; // r10d
  __int64 *j; // r14
  __int64 v46; // rsi
  unsigned int v47; // eax
  unsigned int v48; // r10d
  __int64 v49; // r13
  int v51; // eax
  void *v52; // [rsp+30h] [rbp-48h]
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
      if ( a11 )
      {
        if ( a12 < 24 * (unsigned __int64)v21 + 120 )
          return 3221225507LL;
        v31 = a11;
        P = a11;
      }
      else
      {
        P = (unsigned int *)ExAllocatePool2(0x42uLL);
        v31 = P;
        if ( !P )
          return 3221225626LL;
        v14 = a2;
      }
      *v31 = v21;
      v32 = &v31[6 * v21 + 4];
      *((_QWORD *)v32 + 4) = v14;
      *((_BYTE *)v32 + 97) = a11 == 0LL;
      *((_QWORD *)v32 + 3) = a1;
      *((_QWORD *)v32 + 5) = *(_QWORD *)(v14 + 32);
      *((_QWORD *)v32 + 8) = a8;
      *((_QWORD *)v32 + 9) = a9;
      v32[14] = a6;
      *((_QWORD *)v32 + 6) = v15;
      v32[15] = a5;
      *((_QWORD *)v32 + 10) = v31;
      *((_BYTE *)v32 + 96) = a7 & 1;
      v32[4] = 2;
      *((_BYTE *)v32 + 98) = 0;
      *((_QWORD *)v32 + 11) = 0LL;
      if ( a3
        && (*(_QWORD *)(a3 + 88) = v32,
            *((_QWORD *)v32 + 11) = a3 + 8,
            _m_prefetchw((const void *)(a3 + 8)),
            (_InterlockedOr((volatile signed __int32 *)(a3 + 8), 4u) & 2) != 0) )
      {
        v16 = -1073741536;
      }
      else
      {
        v33 = *((_QWORD *)v32 + 10);
        v34 = 0LL;
        v35 = (void *)*((_QWORD *)v32 + 11);
        v36 = 0;
        v37 = v32[14];
        v38 = (__int64 *)*((_QWORD *)v32 + 6);
        v39 = v32[15];
        v40 = v33 + 16;
        v41 = *((_QWORD *)v32 + 8);
        *(_QWORD *)(v33 + 8) = v32;
        v52 = v35;
        if ( v37 )
        {
          while ( v38 )
          {
            v42 = v37;
            if ( *((_DWORD *)v38 + 10) - v39 <= v37 )
              v42 = *((_DWORD *)v38 + 10) - v39;
            v43 = *((_DWORD *)v38 + 11) + v39;
            v37 -= v42;
            v44 = v43 & 0xFFF;
            for ( j = &v38[((unsigned __int64)v43 >> 12) + 6]; v42; v34 = v46 + v49 )
            {
              v46 = v44 + (*j << 12);
              v47 = 4096 - v44;
              v48 = v42;
              if ( v47 <= v42 )
                v48 = v47;
              if ( v46 != v34 + 1 || !v36 )
              {
                v40 = v33 + 24LL * v36++ + 16;
                *(_QWORD *)v40 = v46;
                *(_DWORD *)(v40 + 8) = 0;
                *(_QWORD *)(v40 + 16) = 0LL;
              }
              *(_DWORD *)(v40 + 8) += v48;
              v42 -= v48;
              ++j;
              v49 = v48 - 1LL;
              v44 = 0;
            }
            v38 = (__int64 *)*v38;
            v39 = 0;
            if ( !v37 )
            {
              v35 = v52;
              goto LABEL_35;
            }
          }
          v35 = v52;
          if ( v36 )
            *(_DWORD *)(v33 + 24 * (v36 - 1 + 1LL)) += v37;
        }
LABEL_35:
        *(_DWORD *)v33 = v36;
        if ( v35 )
        {
          _m_prefetchw(v35);
          v51 = 0;
          if ( (_InterlockedOr((volatile signed __int32 *)v35, 1u) & 2) != 0 )
            v51 = -1073741536;
          v16 = v51;
        }
        if ( v41 )
          guard_dispatch_icall_no_overrides(*((_QWORD *)v32 + 4), *((_QWORD *)v32 + 5), v33, *((_QWORD *)v32 + 9));
        if ( v16 >= 0 )
        {
          if ( a13 )
            *a13 = P;
          return (unsigned int)v16;
        }
        v31 = P;
      }
      if ( *((_BYTE *)v32 + 97) )
        ExFreePoolWithTag(v31, 0);
      return (unsigned int)v16;
    }
    v15 = (__int64 *)*v15;
    a5 -= v18;
  }
  while ( v15 );
  return 3221225485LL;
}
