/*
 * XREFs of LdrpConvertLangFallbackListToMultiSz @ 0x180018270
 * Callers:
 *     RtlGetUserPreferredUILanguages @ 0x1800C7F30 (RtlGetUserPreferredUILanguages.c)
 *     RtlGetSystemPreferredUILanguages @ 0x1800C9E60 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetProcessPreferredUILanguages @ 0x1801080D0 (RtlGetProcessPreferredUILanguages.c)
 * Callees:
 *     RtlCultureNameToLCID @ 0x1800141A0 (RtlCultureNameToLCID.c)
 *     RtlLCIDToCultureName @ 0x180016340 (RtlLCIDToCultureName.c)
 *     RtlIntegerToUnicode @ 0x180019360 (RtlIntegerToUnicode.c)
 *     RtlpLangNameInMultiSzString_Size @ 0x1800196B0 (RtlpLangNameInMultiSzString_Size.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlpMuiRegGetInstalledLangInfoIndex @ 0x1800E9F4C (RtlpMuiRegGetInstalledLangInfoIndex.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

__int64 __fastcall LdrpConvertLangFallbackListToMultiSz(
        __int64 a1,
        __int64 a2,
        wchar_t *a3,
        unsigned int *a4,
        char a5,
        char a6,
        _DWORD *a7)
{
  unsigned int v7; // esi
  char v8; // r10
  __int64 v9; // r11
  _DWORD *v10; // rdx
  DWORD v12; // r14d
  unsigned int v13; // ecx
  unsigned __int16 v14; // bx
  int v15; // r15d
  char v16; // r12
  __int128 *v17; // rdi
  unsigned __int16 *v18; // r8
  int v19; // ecx
  DWORD v20; // edi
  int v21; // r12d
  size_t v22; // rdx
  DWORD v23; // edi
  __int64 v24; // r14
  __int64 result; // rax
  int v26; // ecx
  __int64 v27; // rax
  LCID v28; // ecx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rax
  wchar_t *v32; // rcx
  size_t v33; // rax
  DWORD v34; // edi
  __int64 v35; // rax
  __int64 v36; // rdi
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // xmm0_8
  __m128i v40; // xmm1
  __int64 v41; // rax
  wchar_t *v42; // rcx
  size_t v43; // rax
  char v44; // [rsp+20h] [rbp-81h]
  DWORD v45; // [rsp+24h] [rbp-7Dh]
  DWORD Lcid[2]; // [rsp+28h] [rbp-79h] BYREF
  _UNICODE_STRING v47; // [rsp+30h] [rbp-71h] BYREF
  wchar_t *String1; // [rsp+40h] [rbp-61h]
  __int64 v49; // [rsp+48h] [rbp-59h]
  PVOID BaseAddress; // [rsp+50h] [rbp-51h]
  unsigned int *v51; // [rsp+58h] [rbp-49h]
  __int64 v52; // [rsp+60h] [rbp-41h]
  __int128 v53; // [rsp+68h] [rbp-39h] BYREF
  __int64 v54; // [rsp+78h] [rbp-29h]
  int v55; // [rsp+80h] [rbp-21h]
  wchar_t String[4]; // [rsp+88h] [rbp-19h] BYREF
  __int16 v57; // [rsp+90h] [rbp-11h]

  v7 = 0;
  v49 = a2;
  v8 = 0;
  v51 = a4;
  String1 = a3;
  v9 = a2;
  v10 = a7;
  v52 = (__int64)a7;
  v12 = 0;
  v44 = 0;
  if ( !a4 )
    return 3221225485LL;
  if ( !a1 )
  {
    if ( a3 )
    {
      if ( *a4 < 2 )
        v7 = -1073741789;
      else
        *(_DWORD *)a3 = 0;
    }
    *a4 = 2;
    return v7;
  }
  v13 = *a4;
  v14 = 0;
  v15 = 0;
  v45 = *a4;
  if ( !*(_WORD *)(a1 + 4) )
    goto LABEL_33;
  v16 = a5;
  do
  {
    if ( a6 )
    {
      v35 = *(_QWORD *)(a1 + 24);
      if ( *(_WORD *)(v35 + 6LL * v14) != 2 )
        goto LABEL_31;
      v36 = *(_QWORD *)(v9 + 24);
      if ( (int)RtlpMuiRegGetInstalledLangInfoIndex(v36, 2LL, *(__int16 *)(v35 + 6LL * v14 + 4), Lcid) < 0 )
        goto LABEL_31;
      v9 = v49;
      if ( v16 < 0 )
      {
        v38 = *(_QWORD *)(v36 + 16);
        v39 = *(_QWORD *)(28 * v37 + v38 + 16);
        v40 = *(__m128i *)(28 * v37 + v38);
        v55 = *(_DWORD *)(28 * v37 + v38 + 24);
        v54 = v39;
        if ( (_mm_cvtsi128_si32(v40) & 6) != 0 )
          a6 = 0;
      }
    }
    v53 = 0LL;
    v17 = 0LL;
    v18 = (unsigned __int16 *)(*(_QWORD *)(a1 + 24) + 6LL * v14);
    v54 = 0LL;
    v55 = 0;
    if ( v18 && v9 )
    {
      v19 = *v18;
      if ( v19 == 1 )
      {
        WORD2(v53) = v18[2];
        goto LABEL_10;
      }
      v26 = v19 - 2;
      if ( v26 )
      {
        if ( v26 == 1 )
        {
          WORD3(v53) = v18[2];
LABEL_10:
          v17 = &v53;
        }
      }
      else
      {
        v17 = (__int128 *)(*(_QWORD *)(*(_QWORD *)(v9 + 24) + 16LL) + 28LL * (__int16)v18[2]);
      }
      v47 = 0LL;
      if ( (v16 & 4) != 0 )
      {
        Lcid[0] = 0;
        *(_QWORD *)String = 0LL;
        v57 = 0;
        if ( v17 )
        {
          if ( *((_WORD *)v17 + 2) )
          {
            v20 = *((unsigned __int16 *)v17 + 2);
            goto LABEL_15;
          }
          v41 = *((__int16 *)v17 + 3);
          if ( (__int16)v41 <= 0 )
          {
            v21 = -1073741595;
            goto LABEL_28;
          }
          v42 = (wchar_t *)(*(_QWORD *)(*(_QWORD *)(v9 + 32) + 24LL)
                          + 2LL * *(__int16 *)(*(_QWORD *)(*(_QWORD *)(v9 + 32) + 16LL) + 2 * v41));
          v47.Buffer = v42;
          if ( v42 )
          {
            v43 = 2 * wcslen(v42);
            if ( v43 >= 0xFFFE )
              LOWORD(v43) = -4;
            v47.Length = v43;
            v47.MaximumLength = v43 + 2;
          }
          if ( RtlCultureNameToLCID(&v47, Lcid) )
          {
            v20 = Lcid[0];
LABEL_15:
            v21 = RtlIntegerToUnicode(v20, 16LL, 4294967292LL, String);
            if ( v21 < 0 )
              goto LABEL_28;
            *(_QWORD *)&v47.Length = 0LL;
            v47.Buffer = String;
            v22 = 2 * wcslen(String);
            if ( v22 >= 0xFFFE )
              v22 = 65532LL;
            *(_QWORD *)Lcid = v22;
            v47.MaximumLength = v22 + 2;
            if ( v20 != 4096 && v12 && v12 <= v45 )
            {
              if ( !(unsigned __int8)RtlpLangNameInMultiSzString_Size(String1, String) )
              {
                LOWORD(v22) = Lcid[0];
                goto LABEL_23;
              }
LABEL_28:
              if ( v21 < 0 )
              {
                if ( v21 == -1073741789 )
                {
                  v44 = 1;
                  goto LABEL_29;
                }
              }
              else
              {
LABEL_29:
                ++v15;
              }
              v16 = a5;
              goto LABEL_31;
            }
LABEL_23:
            Lcid[0] = v12 + ((unsigned __int16)v22 >> 1);
            v23 = Lcid[0] + 1;
            if ( String1 && v12 < v23 )
            {
              if ( v23 < v45 )
              {
                memmove(&String1[v12], String, (unsigned __int16)v22);
                String1[Lcid[0]] = 0;
LABEL_27:
                v12 = v23;
                goto LABEL_28;
              }
            }
            else if ( v23 < v45 || !String1 )
            {
              goto LABEL_27;
            }
            v21 = -1073741789;
            goto LABEL_27;
          }
        }
LABEL_68:
        v21 = -1073741811;
        goto LABEL_28;
      }
      v21 = 0;
      if ( !v17 )
        goto LABEL_68;
      BaseAddress = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
      if ( !BaseAddress )
      {
        v21 = -1073741801;
        goto LABEL_28;
      }
      v27 = *((__int16 *)v17 + 3);
      if ( (__int16)v27 > 0 )
      {
        v29 = *(_QWORD *)(v49 + 32);
        v30 = *(__int16 *)(*(_QWORD *)(v29 + 16) + 2 * v27);
        v31 = *(_QWORD *)(v29 + 24);
        *(_QWORD *)&v47.Length = 0LL;
        v32 = (wchar_t *)(v31 + 2 * v30);
        v47.Buffer = v32;
        if ( v32 )
        {
          v33 = 2 * wcslen(v32);
          if ( v33 >= 0xFFFE )
            LOWORD(v33) = -4;
          v47.Length = v33;
          v47.MaximumLength = v33 + 2;
        }
      }
      else
      {
        v28 = *((unsigned __int16 *)v17 + 2);
        v47.Buffer = (wchar_t *)BaseAddress;
        *(_DWORD *)&v47.Length = 11141120;
        if ( !RtlLCIDToCultureName(v28, &v47) )
        {
          v21 = -1073741595;
LABEL_62:
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
          goto LABEL_28;
        }
      }
      if ( v12 && v12 <= v45 && (unsigned __int8)RtlpLangNameInMultiSzString_Size(String1, v47.Buffer) )
        goto LABEL_62;
      Lcid[0] = v12 + (v47.Length >> 1);
      v34 = Lcid[0] + 1;
      if ( String1 && v12 < v34 )
      {
        if ( v34 < v45 )
        {
          memmove(&String1[v12], v47.Buffer, v47.Length);
          String1[Lcid[0]] = 0;
          goto LABEL_61;
        }
      }
      else if ( v34 < v45 || !String1 )
      {
        goto LABEL_61;
      }
      v21 = -1073741789;
LABEL_61:
      v12 = v34;
      goto LABEL_62;
    }
LABEL_31:
    v9 = v49;
    ++v14;
  }
  while ( v14 < *(_WORD *)(a1 + 4) );
  a3 = String1;
  v13 = v45;
  a4 = v51;
  v10 = (_DWORD *)v52;
  v8 = v44;
LABEL_33:
  if ( a3 )
  {
    if ( v12 >= v13 )
      v8 = 1;
    else
      a3[v12] = 0;
  }
  v24 = v12 + 1;
  if ( !v15 )
  {
    if ( a3 )
    {
      if ( (unsigned int)v24 >= v13 )
        v8 = 1;
      else
        a3[v24] = 0;
    }
    LODWORD(v24) = v24 + 1;
  }
  *a4 = v24;
  result = v8 != 0 ? 0xC0000023 : 0;
  if ( v10 )
    *v10 = v15;
  return result;
}
