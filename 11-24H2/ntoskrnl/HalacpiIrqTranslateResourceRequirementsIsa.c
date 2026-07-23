/*
 * XREFs of HalacpiIrqTranslateResourceRequirementsIsa @ 0x140700B80
 * Callers:
 *     <none>
 * Callees:
 *     HalpIsInterruptTypeSecondary @ 0x140372B20 (HalpIsInterruptTypeSecondary.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalacpiIrqTranslateResourceRequirementsIsa(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        __int64 *a5)
{
  unsigned int v5; // r14d
  unsigned int v6; // ebx
  unsigned int v9; // esi
  unsigned int v10; // r13d
  __int64 Pool2; // rax
  _OWORD *v12; // rax
  unsigned int v14; // ebp
  char *v15; // rbp
  unsigned int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int16 v19; // dx
  char v20; // r12
  unsigned int i; // r14d
  char *v22; // r9
  unsigned int v23; // ecx
  unsigned int v24; // eax
  int v25; // r8d
  __int64 v26; // rcx
  __int64 v27; // rdx
  _BYTE *v28; // r8
  unsigned int *v29; // r9
  __int64 v30; // r14
  unsigned int v31; // edx
  unsigned int v32; // r11d
  __int64 v33; // r15
  _DWORD *v34; // r10
  __int64 v35; // rsi
  __int64 v36; // rcx
  __int64 v37; // rax
  ULONG_PTR v38; // [rsp+20h] [rbp-48h]
  __int16 v39; // [rsp+78h] [rbp+10h]

  v5 = *(_DWORD *)(a2 + 8);
  v6 = 0;
  v9 = 0;
  v10 = 0;
  if ( v5 + 0x100000 <= 0xFFFFE )
    goto LABEL_2;
  v14 = *(_DWORD *)(a2 + 12);
  if ( v14 + 0x100000 <= 0xFFFFE )
    return 3221225473LL;
  if ( HalpIsInterruptTypeSecondary(0, v5) && HalpIsInterruptTypeSecondary(0, v14) )
  {
LABEL_2:
    Pool2 = ExAllocatePool2(0x100uLL, 0x20uLL, 0x696C6148u);
    *a5 = Pool2;
    if ( Pool2 )
    {
      *a4 = 1;
      v12 = (_OWORD *)*a5;
      *v12 = *(_OWORD *)a2;
      v12[1] = *(_OWORD *)(a2 + 16);
      return 0LL;
    }
    return 3221225626LL;
  }
  v38 = 32 * (v14 - v5 + 3);
  v15 = (char *)ExAllocatePool2(0x100uLL, v38, 0x696C6148u);
  if ( !v15 )
    return 3221225626LL;
  v16 = *(_DWORD *)(a2 + 8);
  if ( v16 > 2 || *(_DWORD *)(a2 + 12) < 2u )
  {
    v9 = 1;
    *(_OWORD *)v15 = *(_OWORD *)a2;
    *((_OWORD *)v15 + 1) = *(_OWORD *)(a2 + 16);
  }
  else
  {
    if ( v16 < 2 )
    {
      v9 = 1;
      *(_OWORD *)v15 = *(_OWORD *)a2;
      *((_OWORD *)v15 + 1) = *(_OWORD *)(a2 + 16);
      *((_DWORD *)v15 + 2) = *(_DWORD *)(a2 + 8);
      *((_DWORD *)v15 + 3) = 1;
    }
    if ( *(_DWORD *)(a2 + 12) > 2u )
    {
      v17 = 32LL * v9++;
      *(_OWORD *)&v15[v17] = *(_OWORD *)a2;
      *(_OWORD *)&v15[v17 + 16] = *(_OWORD *)(a2 + 16);
      *(_DWORD *)&v15[v17 + 12] = *(_DWORD *)(a2 + 12);
      *(_DWORD *)&v15[v17 + 8] = 3;
    }
    if ( *(_DWORD *)(a2 + 8) > 9u || *(_DWORD *)(a2 + 12) < 9u )
    {
      v18 = 32LL * v9++;
      *(_OWORD *)&v15[v18] = *(_OWORD *)a2;
      *(_OWORD *)&v15[v18 + 16] = *(_OWORD *)(a2 + 16);
      *(_DWORD *)&v15[v18 + 8] = 9;
      *(_DWORD *)&v15[v18 + 12] = 9;
    }
  }
  v19 = word_140FC0FAE;
  v20 = 0;
  v39 = word_140FC0FAE;
  for ( i = 0; i < v9; ++i )
  {
    v22 = &v15[32 * i];
    v23 = *((_DWORD *)v22 + 3);
    if ( v23 >= 0x10 || (v24 = *((_DWORD *)v22 + 2), v24 >= 0x10) )
    {
      v6 = -1073741823;
      goto LABEL_51;
    }
    v25 = v19;
    if ( v24 <= v19 && v23 >= v19 )
    {
      if ( v20 )
      {
        v6 = -1073741595;
        goto LABEL_51;
      }
      v20 = 1;
      if ( v24 < v19 )
      {
        v26 = 32LL * v9++;
        *(_DWORD *)&v15[v26 + 8] = v24;
        *(_DWORD *)&v15[v26 + 12] = v19 - 1;
      }
      if ( *((_DWORD *)v22 + 3) > (unsigned int)v19 )
      {
        v27 = 32LL * v9++;
        *(_DWORD *)&v15[v27 + 8] = v25 + 1;
        *(_DWORD *)&v15[v27 + 12] = *((_DWORD *)v22 + 3);
      }
      memmove(&v15[32 * i], v22 + 32, 32LL * (v9 - i));
      v19 = v39;
      --v9;
    }
  }
  v28 = (_BYTE *)ExAllocatePool2(0x100uLL, v38, 0x696C6148u);
  if ( v28 )
  {
    if ( v9 )
    {
      v29 = (unsigned int *)(v15 + 12);
      v30 = v9;
      do
      {
        v31 = *(v29 - 1);
        v32 = *v29;
        do
        {
          v33 = v31;
          if ( v31 < v32 )
          {
            v34 = (_DWORD *)HalpPicVectorRedirect + v31;
            do
            {
              v35 = v31 + 1;
              if ( *v34 + 1 != *((_DWORD *)HalpPicVectorRedirect + v35) )
                break;
              ++v34;
              ++v31;
            }
            while ( (unsigned int)v35 < v32 );
          }
          v36 = 32LL * v10;
          *(_OWORD *)&v28[v36] = *(_OWORD *)a2;
          *(_OWORD *)&v28[v36 + 16] = *(_OWORD *)(a2 + 16);
          if ( v10 )
            v28[v36] = 8;
          ++v10;
          *(_DWORD *)&v28[v36 + 8] = *((_DWORD *)HalpPicVectorRedirect + v33);
          v37 = v31++;
          *(_DWORD *)&v28[v36 + 12] = *((_DWORD *)HalpPicVectorRedirect + v37);
        }
        while ( v31 <= v32 );
        v29 += 8;
        --v30;
      }
      while ( v30 );
    }
    *a4 = v10;
    if ( v10 )
      *a5 = (__int64)v28;
    else
      ExFreePoolWithTag(v28, 0);
  }
  else
  {
    v6 = -1073741670;
  }
LABEL_51:
  ExFreePoolWithTag(v15, 0);
  return v6;
}
