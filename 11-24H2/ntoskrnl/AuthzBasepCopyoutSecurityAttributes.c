/*
 * XREFs of AuthzBasepCopyoutSecurityAttributes @ 0x1403B7FB0
 * Callers:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1403B7650 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     AuthzBasepQuerySecurityAttributesToken @ 0x1403B7C30 (AuthzBasepQuerySecurityAttributesToken.c)
 * Callees:
 *     AuthzBasepCopyoutSecurityAttributeValues @ 0x1403B8470 (AuthzBasepCopyoutSecurityAttributeValues.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x1403B88F4 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     AuthzBasepEqualUnicodeString @ 0x1403B8930 (AuthzBasepEqualUnicodeString.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall AuthzBasepCopyoutSecurityAttributes(int *a1, __int64 a2, unsigned int a3, _OWORD *a4, size_t Size)
{
  unsigned int v6; // ebp
  __int64 v7; // r14
  int *v8; // rdi
  unsigned __int64 v9; // r12
  _OWORD *v10; // rbx
  unsigned int v11; // ecx
  __int64 v12; // r8
  char *v13; // rsi
  __int64 result; // rax
  _DWORD *v15; // rbx
  int *k; // r14
  char *v17; // rcx
  size_t v18; // r8
  char *v19; // rsi
  unsigned int v20; // r13d
  const UNICODE_STRING *v21; // rbp
  _QWORD *v22; // r14
  _QWORD *i; // rdi
  int *j; // r14
  char v25; // al
  __int64 *v26; // rbp
  char *v27; // rcx
  size_t v28; // r8
  char *v29; // rsi
  const UNICODE_STRING *v30; // rcx
  BOOLEAN v31; // al
  __int64 *v32; // [rsp+30h] [rbp-58h]
  size_t v36; // [rsp+A8h] [rbp+20h] BYREF

  v6 = a3;
  v7 = a2;
  v8 = a1;
  if ( !a4 || !Size || (v9 = (unsigned __int64)a4 + Size, (_OWORD *)((char *)a4 + Size) < a4) )
  {
    result = 3221225485LL;
    goto LABEL_42;
  }
  memset_0(a4, 0, Size);
  v10 = a4 + 1;
  if ( (unsigned __int64)(a4 + 1) > v9 )
  {
    result = 3221225507LL;
LABEL_42:
    if ( Size >= 0x10 )
      *a4 = 0LL;
    return result;
  }
  v11 = v6;
  if ( !v7 )
    v11 = *v8;
  v36 = 0LL;
  v12 = 40LL * v11;
  if ( !is_mul_ok(0x28uLL, v11) )
  {
    result = 3221225621LL;
    goto LABEL_42;
  }
  v13 = (char *)v10 + v12;
  result = 0LL;
  if ( (unsigned __int64)v10 + v12 > v9 )
  {
LABEL_33:
    result = 2147483653LL;
    goto LABEL_42;
  }
  *((_QWORD *)a4 + 1) = v10;
  v15 = (_DWORD *)a4 + 10;
  *(_DWORD *)a4 = 1;
  *((_DWORD *)a4 + 1) = v11;
  if ( v7 )
  {
    v20 = 0;
    while ( v20 < v6 )
    {
      v21 = (const UNICODE_STRING *)(v7 + 16LL * v20);
      v32 = 0LL;
      v22 = v8 + 2;
      LOBYTE(v36) = 0;
      for ( i = (_QWORD *)*((_QWORD *)v8 + 1); i != v22; i = (_QWORD *)*i )
      {
        v32 = i;
        v30 = (const UNICODE_STRING *)(i + 4);
        if ( KeGetCurrentIrql() >= 2u )
          v31 = AuthzBasepEqualUnicodeStringCaseSensitive(v30, v21);
        else
          v31 = RtlEqualUnicodeString(v30, v21, 1u);
        if ( v31 )
        {
LABEL_32:
          v25 = 1;
          goto LABEL_22;
        }
      }
      for ( j = (int *)*((_QWORD *)a1 + 4); j != a1 + 8; j = *(int **)j )
      {
        v32 = (__int64 *)(j - 4);
        if ( (j[10] & 1) == 0 && (unsigned __int8)AuthzBasepEqualUnicodeString(j + 4, v21) )
          goto LABEL_32;
      }
      v25 = v36;
LABEL_22:
      v26 = 0LL;
      if ( v25 )
        v26 = v32;
      if ( !v26 )
      {
        result = 3221226021LL;
        goto LABEL_42;
      }
      *((_WORD *)v15 - 4) = *((_WORD *)v26 + 24);
      v27 = (char *)((unsigned __int64)(v13 + 1) & 0xFFFFFFFFFFFFFFFEuLL);
      *v15 = *((_DWORD *)v26 + 15);
      *((_WORD *)v15 - 3) = 0;
      *(v15 - 1) = *((_DWORD *)v26 + 13);
      v28 = *((unsigned __int16 *)v26 + 16);
      v36 = v28;
      v29 = &v27[v28];
      if ( (unsigned __int64)&v27[v28] > v9 )
        goto LABEL_33;
      *((_WORD *)v15 - 12) = v28;
      *((_WORD *)v15 - 11) = v28;
      *((_QWORD *)v15 - 2) = v27;
      memmove(v27, (const void *)v26[5], v28);
      result = AuthzBasepCopyoutSecurityAttributeValues(
                 (_DWORD)v26,
                 (int)v15 - 24,
                 (_DWORD)v29,
                 (int)v9 - (int)v29,
                 (__int64)&v36);
      if ( (int)result < 0 )
        goto LABEL_42;
      v13 = &v29[v36];
      ++v20;
      v8 = a1;
      v15 += 10;
      v7 = a2;
      v6 = a3;
    }
  }
  else
  {
    for ( k = (int *)*((_QWORD *)v8 + 1); k != v8 + 2; k = *(int **)k )
    {
      *((_WORD *)v15 - 4) = *((_WORD *)k + 24);
      v17 = (char *)((unsigned __int64)(v13 + 1) & 0xFFFFFFFFFFFFFFFEuLL);
      *v15 = k[15];
      *((_WORD *)v15 - 3) = 0;
      *(v15 - 1) = k[13];
      v18 = *((unsigned __int16 *)k + 16);
      v36 = v18;
      v19 = &v17[v18];
      if ( (unsigned __int64)&v17[v18] > v9 )
        goto LABEL_33;
      *((_WORD *)v15 - 12) = v18;
      *((_WORD *)v15 - 11) = v18;
      *((_QWORD *)v15 - 2) = v17;
      memmove(v17, *((const void **)k + 5), v18);
      result = AuthzBasepCopyoutSecurityAttributeValues(
                 (_DWORD)k,
                 (int)v15 - 24,
                 (_DWORD)v19,
                 (int)v9 - (int)v19,
                 (__int64)&v36);
      if ( (int)result < 0 )
        goto LABEL_42;
      v13 = &v19[v36];
      v15 += 10;
    }
  }
  return result;
}
