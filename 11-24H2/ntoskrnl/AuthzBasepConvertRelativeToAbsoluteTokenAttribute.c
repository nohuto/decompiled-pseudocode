/*
 * XREFs of AuthzBasepConvertRelativeToAbsoluteTokenAttribute @ 0x1404A9A3C
 * Callers:
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1403BADD4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x14044CF68 (RtlStringCbLengthW.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall AuthzBasepConvertRelativeToAbsoluteTokenAttribute(
        unsigned int *a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned int *a4)
{
  unsigned int v4; // edi
  size_t v5; // r15
  unsigned int v9; // ebx
  __int64 v10; // r10
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  _WORD *v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 i; // rdx
  unsigned __int64 v16; // rdx
  unsigned int v17; // ebp
  unsigned int v18; // r11d
  int v19; // edx
  unsigned int m; // edx
  __int64 v21; // rcx
  unsigned int v22; // r8d
  int v23; // edx
  unsigned int j; // r12d
  __int64 v25; // rcx
  unsigned int v26; // r11d
  int v27; // edx
  unsigned int k; // ecx
  unsigned int v29; // edx
  unsigned int v30; // eax
  unsigned int v31; // ebx
  int v32; // ecx
  char *v33; // rdx
  int v34; // ecx
  int v35; // ecx
  int v36; // ecx
  int v37; // ecx
  int v38; // ecx
  unsigned __int64 v39; // rax
  __int64 v40; // rcx
  unsigned int v41; // r15d
  char *v42; // rbp
  unsigned int n; // r13d
  unsigned int *v44; // rdx
  unsigned int v45; // ecx
  unsigned int v46; // eax
  __int64 v47; // r12
  unsigned __int64 v48; // rax
  __int64 v49; // rcx
  unsigned int v50; // ebp
  char *v51; // r13
  unsigned int ii; // eax
  __int64 v53; // r11
  unsigned int v54; // r12d
  unsigned int v55; // eax
  __int64 v56; // rdx
  unsigned int v57; // ecx
  unsigned __int64 v58; // rax
  __int64 v59; // rdx
  size_t pcbLength; // [rsp+20h] [rbp-38h] BYREF
  __int64 v62; // [rsp+28h] [rbp-30h]
  unsigned int v63; // [rsp+60h] [rbp+8h]
  unsigned int v64; // [rsp+60h] [rbp+8h]

  v4 = 0;
  v5 = a2;
  if ( !a1 || !a3 || !a4 )
    return (unsigned int)-1073741811;
  if ( a2 < 0x14 )
    return (unsigned int)-1073741705;
  v10 = a1[3];
  if ( !(_DWORD)v10 )
    return (unsigned int)-1073741705;
  v11 = *a1;
  if ( a2 < (unsigned int)v11 )
    return (unsigned int)-1073741705;
  v12 = a2 - (unsigned int)v11;
  if ( (unsigned int)v12 < 4 )
    return (unsigned int)-1073741705;
  v13 = (_WORD *)((char *)a1 + v11);
  if ( !v13 )
    return (unsigned int)-1073741811;
  v14 = v12 >> 1;
  for ( i = v14; v14; --v14 )
  {
    if ( !*v13 )
      break;
    ++v13;
  }
  v9 = v14 == 0 ? 0xC000000D : 0;
  if ( v14 )
    v16 = i - v14;
  else
    v16 = 0LL;
  if ( !v14 )
    return v9;
  v17 = 2 * v16 + 2;
  pcbLength = 2 * v16;
  if ( v17 < 2 * (int)v16 )
    return (unsigned int)-1073741675;
  if ( 2 * (int)v16 + 5 < (unsigned int)(2 * v16 + 2) )
    return (unsigned int)-1073741675;
  v18 = ((2 * v16 + 5) & 0xFFFFFFFC) + 40;
  if ( v18 < 0x28 || (unsigned __int64)(4 * v10) > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  if ( (int)v5 - 16 < (unsigned int)(4 * v10) )
    return (unsigned int)-1073741705;
  switch ( *((_WORD *)a1 + 2) )
  {
    case 1:
    case 2:
      goto LABEL_51;
    case 3:
      v23 = 16 * v10;
      if ( (unsigned __int64)(16 * v10) > 0xFFFFFFFF || v18 + v23 < v18 )
        return (unsigned int)-1073741675;
      v18 += v23;
      for ( j = 0; j < a1[3]; ++j )
      {
        v25 = a1[j + 4];
        if ( (unsigned int)v5 < (unsigned int)v25 || (unsigned int)(v5 - v25) < 2 )
          return (unsigned int)-1073741705;
        v9 = RtlStringCbLengthW((STRSAFE_PCNZWCH)((char *)a1 + v25), (unsigned int)(v5 - v25), &pcbLength);
        if ( (v9 & 0x80000000) != 0 )
          return v9;
        if ( (int)pcbLength + 2 < (unsigned int)pcbLength
          || (int)pcbLength + 5 < (unsigned int)(pcbLength + 2)
          || (((_DWORD)pcbLength + 5) & 0xFFFFFFFC) + v26 < v26 )
        {
          return (unsigned int)-1073741675;
        }
        v18 = ((pcbLength + 5) & 0xFFFFFFFC) + v26;
      }
      goto LABEL_58;
    case 5:
      goto LABEL_28;
    case 6:
LABEL_51:
      v27 = 8 * v10;
      if ( (unsigned __int64)(8 * v10) > 0xFFFFFFFF || v18 + v27 < v18 )
        return (unsigned int)-1073741675;
      v18 += v27;
      for ( k = 0; k < (unsigned int)v10; ++k )
      {
        v29 = a1[k + 4];
        if ( (unsigned int)v5 < v29 || (unsigned int)v5 - v29 < 8 )
          return (unsigned int)-1073741705;
      }
      goto LABEL_58;
  }
  if ( *((_WORD *)a1 + 2) != 16 )
    goto LABEL_58;
LABEL_28:
  v19 = 16 * v10;
  if ( (unsigned __int64)(16 * v10) > 0xFFFFFFFF || v18 + v19 < v18 )
    return (unsigned int)-1073741675;
  v18 += v19;
  for ( m = 0; m < (unsigned int)v10; ++m )
  {
    v21 = a1[m + 4];
    if ( (unsigned int)v5 < (unsigned int)v21 || (unsigned int)(v5 - v21) < 4 )
      return (unsigned int)-1073741705;
    v22 = *(unsigned int *)((char *)a1 + v21);
    if ( (int)v21 + 4 < (unsigned int)v21 )
      return (unsigned int)-1073741675;
    if ( (int)v5 - ((int)v21 + 4) < v22 )
      return (unsigned int)-1073741705;
    if ( v22 + 3 < v22 || ((v22 + 3) & 0xFFFFFFFC) + v18 < v18 )
      return (unsigned int)-1073741675;
    v18 += (v22 + 3) & 0xFFFFFFFC;
  }
LABEL_58:
  v30 = *a4;
  *a4 = v18;
  if ( v30 < v18 )
    return (unsigned int)-1073741789;
  memset_0(a3, 0, v18);
  *((_WORD *)a3 + 8) = *((_WORD *)a1 + 2);
  *((_WORD *)a3 + 9) = *((_WORD *)a1 + 3);
  a3[5] = a1[2];
  a3[6] = a1[3];
  if ( v17 >= 0xFFFFFFD8 || v17 + 43 < v17 + 40 )
    return (unsigned int)-1073741675;
  v31 = (v17 + 43) & 0xFFFFFFFC;
  memmove(a3 + 10, (char *)a1 + *a1, v17);
  v32 = *((unsigned __int16 *)a3 + 8);
  *((_QWORD *)a3 + 1) = a3 + 10;
  v33 = (char *)a3 + v31;
  *(_WORD *)a3 = v17 - 2;
  *((_WORD *)a3 + 1) = v17;
  v34 = v32 - 1;
  if ( !v34 )
    goto LABEL_86;
  v35 = v34 - 1;
  if ( !v35 )
    goto LABEL_86;
  v36 = v35 - 1;
  if ( v36 )
  {
    v37 = v36 - 2;
    if ( !v37 )
    {
LABEL_68:
      v39 = 16LL * a3[6];
      if ( v39 <= 0xFFFFFFFF )
      {
        v40 = (unsigned int)v39 + v31;
        if ( (unsigned int)v40 >= v31 )
        {
          v41 = v39 + v31;
          v42 = (char *)a3 + v40;
          v9 = 0;
          *((_QWORD *)a3 + 4) = v33;
          for ( n = 0; n < a3[6]; ++n )
          {
            v44 = &a1[n];
            v45 = *(unsigned int *)((char *)a1 + v44[4]);
            v63 = v45;
            v46 = v45 + v41;
            if ( v45 + v41 < v41 || v46 + 3 < v46 )
              return (unsigned int)-1073741675;
            v47 = 2LL * n;
            v41 = (v46 + 3) & 0xFFFFFFFC;
            v9 = 0;
            *(_QWORD *)(*((_QWORD *)a3 + 4) + 16LL * n) = 0LL;
            if ( v45 )
            {
              memmove(v42, (char *)a1 + v44[4] + 4, v45);
              v45 = v63;
              *(_QWORD *)(*((_QWORD *)a3 + 4) + 16LL * n) = v42;
            }
            v42 = (char *)a3 + v41;
            *(_DWORD *)(*((_QWORD *)a3 + 4) + 8 * v47 + 8) = v45;
          }
          return v9;
        }
      }
      return (unsigned int)-1073741675;
    }
    v38 = v37 - 1;
    if ( v38 )
    {
      if ( v38 == 10 )
        goto LABEL_68;
      return (unsigned int)-1073741705;
    }
LABEL_86:
    v57 = a3[6];
    v58 = 8LL * v57;
    if ( v58 <= 0xFFFFFFFF && v31 + (unsigned int)v58 >= v31 )
    {
      *((_QWORD *)a3 + 4) = v33;
      v9 = 0;
      if ( v57 )
      {
        do
        {
          v59 = v4++;
          *(_QWORD *)(*((_QWORD *)a3 + 4) + 8 * v59) = *(_QWORD *)((char *)a1 + a1[v59 + 4]);
        }
        while ( v4 < a3[6] );
      }
      return v9;
    }
    return (unsigned int)-1073741675;
  }
  v48 = 16LL * a3[6];
  if ( v48 > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  v49 = (unsigned int)v48 + v31;
  if ( (unsigned int)v49 < v31 )
    return (unsigned int)-1073741675;
  v50 = v48 + v31;
  v51 = (char *)a3 + v49;
  v9 = 0;
  *((_QWORD *)a3 + 4) = v33;
  for ( ii = 0; ; ii = v64 + 1 )
  {
    v64 = ii;
    if ( ii >= a3[6] )
      break;
    v62 = ii;
    v9 = RtlStringCbLengthW((STRSAFE_PCNZWCH)((char *)a1 + a1[ii + 4]), v5, &pcbLength);
    if ( (v9 & 0x80000000) != 0 )
      break;
    v54 = pcbLength + 2;
    if ( (int)pcbLength + 2 < (unsigned int)pcbLength )
      return (unsigned int)-1073741675;
    v55 = v54 + v50;
    if ( v54 + v50 < v50 || v55 + 3 < v55 )
      return (unsigned int)-1073741675;
    v9 = 0;
    v50 = (v55 + 3) & 0xFFFFFFFC;
    memmove(v51, (char *)a1 + a1[v53 + 4], v54);
    v56 = 2 * v62;
    *(_QWORD *)(*((_QWORD *)a3 + 4) + 8 * v56 + 8) = v51;
    v51 = (char *)a3 + v50;
    *(_WORD *)(*((_QWORD *)a3 + 4) + 8 * v56) = v54 - 2;
    *(_WORD *)(*((_QWORD *)a3 + 4) + 8 * v56 + 2) = v54;
  }
  return v9;
}
