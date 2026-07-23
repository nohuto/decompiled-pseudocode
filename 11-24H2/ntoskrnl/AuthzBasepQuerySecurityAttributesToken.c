/*
 * XREFs of AuthzBasepQuerySecurityAttributesToken @ 0x1403B7C30
 * Callers:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1403B7650 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1403BADD4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     NtQueryInformationToken @ 0x140AD09E0 (NtQueryInformationToken.c)
 * Callees:
 *     AuthzBasepCopyoutSecurityAttributes @ 0x1403B7FB0 (AuthzBasepCopyoutSecurityAttributes.c)
 *     AuthzBasepGetSecurityAttributeValueCopyoutBufferSize @ 0x1403B82E0 (AuthzBasepGetSecurityAttributeValueCopyoutBufferSize.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x1403B88F4 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     AuthzBasepEqualUnicodeString @ 0x1403B8930 (AuthzBasepEqualUnicodeString.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall AuthzBasepQuerySecurityAttributesToken(
        unsigned int *a1,
        __int64 a2,
        unsigned int a3,
        _OWORD *a4,
        unsigned int Size,
        _DWORD *a6)
{
  _DWORD *v6; // r15
  void *v7; // r12
  unsigned __int64 v8; // rbp
  __int64 v9; // r13
  unsigned __int64 v10; // r10
  unsigned int i; // ecx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r14
  unsigned int j; // r12d
  const UNICODE_STRING *v15; // r15
  unsigned int *v16; // r13
  unsigned int *k; // rbx
  unsigned int *m; // rsi
  char v19; // al
  unsigned int *v20; // rcx
  __int64 result; // rax
  unsigned __int16 v22; // r8
  unsigned __int16 v23; // dx
  const UNICODE_STRING *v24; // rcx
  BOOLEAN v25; // al
  unsigned __int64 v26; // rax
  unsigned int *v27; // rbx
  unsigned __int64 v28; // rcx
  __int64 v29; // rdx
  unsigned __int64 v30; // rdx
  __int64 v31; // r8
  _QWORD v32[2]; // [rsp+38h] [rbp-50h] BYREF

  v6 = a6;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  *a6 = 0;
  v10 = *a1;
  if ( (_DWORD)v10 )
  {
    for ( i = 0; i < (unsigned int)v8; ++i )
    {
      v22 = *(_WORD *)(v9 + 16LL * i);
      if ( v22 )
      {
        v23 = *(_WORD *)(v9 + 16LL * i + 2);
        if ( v23 )
        {
          if ( v22 <= v23 && *(_QWORD *)(v9 + 16LL * i + 8) )
            continue;
        }
      }
      return 3221225485LL;
    }
    if ( v9 )
    {
      v32[0] = 0LL;
      v12 = 40 * v8;
      if ( is_mul_ok(0x28uLL, v8) )
      {
        v13 = v12 + 16;
        if ( v12 < 0xFFFFFFFFFFFFFFF0uLL )
        {
          for ( j = 0; j < (unsigned int)v8; ++j )
          {
            v15 = (const UNICODE_STRING *)(v9 + 16LL * j);
            v16 = 0LL;
            for ( k = (unsigned int *)*((_QWORD *)a1 + 1); k != a1 + 2; k = *(unsigned int **)k )
            {
              v16 = k;
              v24 = (const UNICODE_STRING *)(k + 8);
              if ( KeGetCurrentIrql() >= 2u )
                v25 = AuthzBasepEqualUnicodeStringCaseSensitive(v24, v15);
              else
                v25 = RtlEqualUnicodeString(v24, v15, 1u);
              if ( v25 )
              {
LABEL_39:
                v19 = 1;
                goto LABEL_14;
              }
            }
            LODWORD(v8) = a3;
            for ( m = (unsigned int *)*((_QWORD *)a1 + 4); m != a1 + 8; m = *(unsigned int **)m )
            {
              v16 = m - 4;
              if ( (m[10] & 1) == 0 && (unsigned __int8)AuthzBasepEqualUnicodeString(v16 + 8, v15) )
                goto LABEL_39;
            }
            v19 = 0;
LABEL_14:
            v20 = 0LL;
            if ( v19 )
              v20 = v16;
            if ( !v20 )
              return 3221226021LL;
            v30 = (v13 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
            if ( v30 < v13 )
              return 3221225621LL;
            v31 = *((unsigned __int16 *)v20 + 16);
            if ( v31 + v30 < v30 )
              return 3221225621LL;
            v32[0] = v31 + v30;
            result = AuthzBasepGetSecurityAttributeValueCopyoutBufferSize(v20, v32);
            v9 = a2;
            if ( (int)result < 0 )
              return result;
            v13 = v32[0];
          }
          v6 = a6;
          v7 = a4;
LABEL_36:
          if ( !v13 )
            return 3221225485LL;
          if ( Size < v13 )
          {
            *v6 = v13;
            return 3221225507LL;
          }
          else
          {
            memset_0(v7, 0, Size);
            result = AuthzBasepCopyoutSecurityAttributes(a1, v9, (unsigned int)v8, v7, Size);
            *v6 = v13;
          }
          return result;
        }
      }
    }
    else
    {
      v26 = 40 * v10;
      if ( is_mul_ok(0x28uLL, v10) )
      {
        v13 = v26 + 16;
        if ( v26 < 0xFFFFFFFFFFFFFFF0uLL )
        {
          v27 = (unsigned int *)*((_QWORD *)a1 + 1);
          while ( v27 != a1 + 2 )
          {
            v28 = (v13 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
            if ( v28 < v13 )
              return 3221225621LL;
            v29 = *((unsigned __int16 *)v27 + 16);
            if ( v29 + v28 < v28 )
              return 3221225621LL;
            v32[0] = v29 + v28;
            result = AuthzBasepGetSecurityAttributeValueCopyoutBufferSize(v27, v32);
            if ( (int)result < 0 )
              return result;
            v27 = *(unsigned int **)v27;
            v13 = v32[0];
          }
          goto LABEL_36;
        }
      }
    }
    return 3221225621LL;
  }
  if ( Size >= 0x10 )
  {
    result = 0LL;
    *a4 = 0LL;
    *(_WORD *)a4 = 1;
  }
  else
  {
    result = 3221225507LL;
  }
  *a6 = 16;
  return result;
}
