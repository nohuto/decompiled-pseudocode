/*
 * XREFs of RtlpMuiRegTryToAppendLangId @ 0x18005F1D0
 * Callers:
 *     RtlpMuiRegGetFallbackLanguagesAsMultiSZ @ 0x180088F5C (RtlpMuiRegGetFallbackLanguagesAsMultiSZ.c)
 * Callees:
 *     RtlCultureNameToLCID @ 0x18005C370 (RtlCultureNameToLCID.c)
 *     RtlIntegerToUnicode @ 0x18005FB90 (RtlIntegerToUnicode.c)
 *     _wcsicmp @ 0x180124750 (_wcsicmp.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall RtlpMuiRegTryToAppendLangId(__int64 a1, __int64 a2, unsigned int *a3, _WORD *a4, unsigned int a5)
{
  __int64 v7; // r14
  DWORD v8; // ebx
  unsigned int v9; // r12d
  size_t v10; // rax
  unsigned int v11; // ecx
  unsigned __int16 v12; // bp
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdi
  __int64 v15; // rcx
  _WORD *v16; // rax
  __int64 v17; // rdi
  unsigned int v18; // ebx
  const wchar_t *v20; // rbx
  unsigned __int64 v21; // r13
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r8
  wchar_t *v25; // rcx
  size_t v26; // rax
  DWORD Lcid; // [rsp+20h] [rbp-78h] BYREF
  _UNICODE_STRING v28; // [rsp+28h] [rbp-70h] BYREF
  wchar_t String[4]; // [rsp+38h] [rbp-60h] BYREF
  __int16 v30; // [rsp+40h] [rbp-58h]

  *(_QWORD *)String = 0LL;
  v30 = 0;
  Lcid = 0;
  if ( a2 && a1 && a3 )
  {
    v7 = *a3;
    if ( *(_WORD *)(a2 + 4) )
    {
      v8 = *(unsigned __int16 *)(a2 + 4);
    }
    else
    {
      v23 = *(__int16 *)(a2 + 6);
      if ( (__int16)v23 <= 0 )
        return (unsigned int)-1073741595;
      v24 = *(_QWORD *)(a1 + 32);
      *(_QWORD *)&v28.Length = 0LL;
      v25 = (wchar_t *)(*(_QWORD *)(v24 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v24 + 16) + 2 * v23));
      v28.Buffer = v25;
      if ( v25 )
      {
        v26 = 2 * wcslen(v25);
        if ( v26 >= 0xFFFE )
          LOWORD(v26) = -4;
        v28.Length = v26;
        v28.MaximumLength = v26 + 2;
      }
      if ( !RtlCultureNameToLCID(&v28, &Lcid) )
        return (unsigned int)-1073741811;
      v8 = Lcid;
    }
    v9 = RtlIntegerToUnicode(v8, 16LL, 4294967292LL, String);
    if ( (v9 & 0x80000000) != 0 )
      return v9;
    v10 = wcslen(String);
    v11 = a5;
    v12 = 2 * v10;
    if ( 2 * v10 >= 0xFFFE )
      v12 = -4;
    if ( v8 != 4096 )
    {
      v13 = *a3;
      if ( (_DWORD)v13 )
      {
        if ( (unsigned int)v13 <= a5 )
        {
          v14 = 0LL;
          if ( a4 )
          {
            v15 = (unsigned int)v13;
            if ( v13 > 0x7FFFFFFF )
            {
              v11 = a5;
              v17 = (unsigned int)v7 + (v12 >> 1);
              v18 = v17 + 1;
LABEL_20:
              if ( (unsigned int)v7 < v18 )
              {
                if ( v18 < v11 )
                {
                  memmove(&a4[v7], String, v12);
                  a4[v17] = 0;
LABEL_23:
                  *a3 = v18;
                  return v9;
                }
LABEL_36:
                v9 = -1073741789;
                goto LABEL_23;
              }
LABEL_34:
              if ( v18 < v11 || !a4 )
                goto LABEL_23;
              goto LABEL_36;
            }
            v16 = a4;
            do
            {
              if ( !*v16 )
                break;
              ++v16;
              --v15;
            }
            while ( v15 );
            if ( v15 )
            {
              v20 = a4;
              v21 = *a3;
              while ( v14 < v21 && v20 && *v20 )
              {
                if ( !wcsicmp(v20, String) )
                  return v9;
                v22 = -1LL;
                do
                  ++v22;
                while ( v20[v22] );
                v14 += v22 + 1;
                v20 += v22 + 1;
              }
            }
            v11 = a5;
          }
        }
      }
    }
    v17 = (unsigned int)v7 + (v12 >> 1);
    v18 = v17 + 1;
    if ( !a4 )
      goto LABEL_34;
    goto LABEL_20;
  }
  return 3221225485LL;
}
