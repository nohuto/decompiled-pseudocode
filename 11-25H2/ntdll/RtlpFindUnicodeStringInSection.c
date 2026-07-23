/*
 * XREFs of RtlpFindUnicodeStringInSection @ 0x180019C70
 * Callers:
 *     RtlFindActivationContextSectionString @ 0x180019910 (RtlFindActivationContextSectionString.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x1800B0060 (RtlQueryActivationContextApplicationSettings.c)
 * Callees:
 *     DbgPrintEx @ 0x18001A6F0 (DbgPrintEx.c)
 *     RtlCompareUnicodeStrings @ 0x180073150 (RtlCompareUnicodeStrings.c)
 *     bsearch @ 0x180125820 (bsearch.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpFindUnicodeStringInSection(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int16 *a3,
        unsigned int *a4,
        _DWORD *a5,
        int *a6)
{
  char v6; // r10
  BOOLEAN v7; // r13
  unsigned int *v8; // r12
  unsigned __int64 v10; // r11
  unsigned int v12; // eax
  __int64 v13; // rsi
  int v14; // r10d
  unsigned __int16 *v15; // r11
  int v16; // r9d
  unsigned __int64 v17; // rax
  size_t v18; // r8
  char *v19; // rbx
  char *v20; // rsi
  char *v21; // rax
  char *v22; // rcx
  int v24; // eax
  char *v25; // rbp
  __int64 v26; // rdx
  int v27; // ebx
  unsigned int v28; // edx
  char v29; // cl
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  int v33; // r12d
  _DWORD *v34; // rsi
  int *v35; // r14
  __int64 i; // rbx
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rax
  char v39; // [rsp+50h] [rbp-78h]
  __int128 Key; // [rsp+70h] [rbp-58h] BYREF
  __int64 v44; // [rsp+80h] [rbp-48h]

  v6 = 1;
  v7 = *(_BYTE *)(a1 + 16) & 1;
  v8 = a4;
  v10 = a2;
  v39 = 1;
  if ( *(_DWORD *)a1 != 1682469715 )
    return 3222601731LL;
  if ( !*(_DWORD *)(a1 + 20) )
    return 3222601736LL;
  v12 = *(_DWORD *)(a1 + 28);
  if ( v12 == -1 )
  {
    v6 = 0;
    v39 = 0;
  }
  else if ( *a5 != v12 )
  {
    v13 = qword_1801CF038;
    v14 = 0;
    if ( !a3 )
      return 3221225485LL;
    if ( a6 && (v15 = (unsigned __int16 *)*((_QWORD *)a3 + 1), *a6 = 0, v16 = *a3 >> 1, v12 <= 1) )
    {
      if ( v16 )
      {
        if ( v7 )
        {
          do
          {
            v17 = *v15++;
            --v16;
            if ( (unsigned int)v17 >= 0x61 )
            {
              if ( (unsigned int)v17 > 0x7A )
              {
                if ( v13 && (unsigned __int16)v17 >= 0xC0u )
                  LOWORD(v17) = *(_WORD *)(v13
                                         + 2
                                         * ((v17 & 0xF)
                                          + *(unsigned __int16 *)(v13
                                                                + 2LL
                                                                * (((unsigned __int8)v17 >> 4)
                                                                 + (unsigned int)*(unsigned __int16 *)(v13 + 2 * (v17 >> 8))))))
                              + v17;
              }
              else
              {
                LOWORD(v17) = v17 - 32;
              }
            }
            v14 = (unsigned __int16)v17 + 65599 * v14;
          }
          while ( v16 );
        }
        else
        {
          do
          {
            v24 = *v15++;
            v14 = v24 + 65599 * v14;
            --v16;
          }
          while ( v16 );
        }
      }
      *a6 = v14;
      v6 = 1;
      *a5 = *(_DWORD *)(a1 + 28);
    }
    else
    {
      DbgPrintEx(
        0x33u,
        0,
        "RtlpFindUnicodeStringInSection: Unsupported hash algorithm %lu found in string section.\n",
        *(_DWORD *)(a1 + 28));
      v6 = 0;
      v39 = 0;
    }
    v10 = a2;
  }
  if ( *(_DWORD *)(a1 + 8) == 1 )
  {
    v28 = *(_DWORD *)(a1 + 32);
    v29 = 0;
    if ( v28 )
      v29 = v6;
    if ( v29 )
    {
      v30 = v28;
      v31 = (unsigned int)*a6 % *(_DWORD *)(v28 + a1);
      v32 = a1 + *(unsigned int *)(v30 + a1 + 4);
      v33 = v31;
      v34 = (_DWORD *)(v32 + 8 * v31);
      v35 = (int *)(a1 + *(unsigned int *)(v32 + 8LL * (unsigned int)v31 + 4));
      for ( i = 0LL; (unsigned int)i < *v34; i = (unsigned int)(i + 1) )
      {
        v37 = v35[i];
        if ( v37 > v10 )
        {
          DbgPrintEx(0x33u, 0, "SXS: String hash collision chain offset at %p (= %ld) out of bounds\n", &v35[i], v37);
          return 3222601731LL;
        }
        v25 = (char *)(v37 + a1);
        if ( !v6 || *(_DWORD *)v25 == *a6 )
        {
          v38 = *((unsigned int *)v25 + 1);
          if ( v38 > v10 )
          {
            DbgPrintEx(
              0x33u,
              0,
              "SXS: String hash table entry at %p has invalid key offset (= %ld)\n"
              "   Header = %p; Index = %lu; Bucket = %p; Chain = %p\n",
              (const void *)(v37 + a1),
              v38,
              (const void *)a1,
              v33,
              v34,
              v35);
            return 3222601731LL;
          }
          if ( !RtlCompareUnicodeStrings(
                  *((PCWCH *)a3 + 1),
                  (unsigned __int64)*a3 >> 1,
                  (PCWCH)(v38 + a1),
                  (unsigned __int64)*((unsigned __int16 *)v25 + 4) >> 1,
                  v7) )
          {
            v8 = a4;
            goto LABEL_66;
          }
          v6 = v39;
          v10 = a2;
        }
      }
      return 3222601736LL;
    }
  }
  if ( !v6 || (*(_BYTE *)(a1 + 16) & 2) == 0 )
  {
    v27 = *(_DWORD *)(a1 + 20);
    v25 = (char *)(a1 + *(unsigned int *)(a1 + 24));
    while ( v27 )
    {
      if ( !v6 || *(_DWORD *)v25 == *a6 )
      {
        if ( !RtlCompareUnicodeStrings(
                *((PCWCH *)a3 + 1),
                (unsigned __int64)*a3 >> 1,
                (PCWCH)(a1 + *((unsigned int *)v25 + 1)),
                (unsigned __int64)*((unsigned __int16 *)v25 + 4) >> 1,
                v7) )
        {
LABEL_66:
          if ( v25 )
            goto LABEL_37;
          return 3222601736LL;
        }
        v6 = v39;
      }
      --v27;
      v25 += 24;
    }
    return 3222601736LL;
  }
  v18 = *(unsigned int *)(a1 + 20);
  v19 = (char *)(a1 + *(unsigned int *)(a1 + 24));
  Key = 0LL;
  v20 = &v19[24 * (unsigned int)(v18 - 1)];
  v44 = 0LL;
  LODWORD(Key) = *a6;
  v21 = (char *)bsearch(&Key, v19, v18, 0x18uLL, RtlpCompareActivationContextStringSectionEntryByPseudoKey);
  v22 = v21;
  if ( !v21 )
    return 3222601736LL;
  if ( v21 != v19 )
  {
    do
    {
      if ( *(_DWORD *)v22 != *a6 )
        break;
      v22 -= 24;
    }
    while ( v22 != v19 );
  }
  v25 = v22 + 24;
  if ( *(_DWORD *)v22 == *a6 )
    v25 = v22;
  while ( RtlCompareUnicodeStrings(
            *((PCWCH *)a3 + 1),
            (unsigned __int64)*a3 >> 1,
            (PCWCH)(a1 + *((unsigned int *)v25 + 1)),
            (unsigned __int64)*((unsigned __int16 *)v25 + 4) >> 1,
            v7) )
  {
    v25 += 24;
    if ( v25 > v20 )
      return 3222601736LL;
    if ( *(_DWORD *)v25 != *a6 )
      goto LABEL_36;
  }
  if ( v25 > v20 )
    return 3222601736LL;
LABEL_36:
  if ( *(_DWORD *)v25 != *a6 )
    return 3222601736LL;
LABEL_37:
  if ( !*((_DWORD *)v25 + 3) )
    return 3222601736LL;
  if ( v8 )
  {
    v26 = *v8;
    v8[1] = *(_DWORD *)(a1 + 12);
    *((_QWORD *)v8 + 1) = a1 + *((unsigned int *)v25 + 3);
    v8[4] = *((_DWORD *)v25 + 4);
    if ( v8 + 17 <= (unsigned int *)((char *)v8 + v26) )
      v8[16] = *((_DWORD *)v25 + 5);
  }
  return 0LL;
}
