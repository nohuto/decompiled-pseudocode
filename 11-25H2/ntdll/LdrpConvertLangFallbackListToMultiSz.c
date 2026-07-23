/*
 * XREFs of LdrpConvertLangFallbackListToMultiSz @ 0x18005E960
 * Callers:
 *     RtlGetSystemPreferredUILanguages @ 0x180089230 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x1800A8A50 (RtlGetUserPreferredUILanguages.c)
 *     RtlGetProcessPreferredUILanguages @ 0x18010FB40 (RtlGetProcessPreferredUILanguages.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlLCIDToCultureName @ 0x18005B640 (RtlLCIDToCultureName.c)
 *     RtlCultureNameToLCID @ 0x18005C370 (RtlCultureNameToLCID.c)
 *     RtlIntegerToUnicode @ 0x18005FB90 (RtlIntegerToUnicode.c)
 *     RtlpLangNameInMultiSzString_Size @ 0x1800600E0 (RtlpLangNameInMultiSzString_Size.c)
 *     RtlpMuiRegGetInstalledLangInfoIndex @ 0x180060794 (RtlpMuiRegGetInstalledLangInfoIndex.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     _wcsicmp @ 0x180124750 (_wcsicmp.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
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
  unsigned int v7; // r14d
  __int64 v8; // r11
  char v9; // dl
  wchar_t *v10; // rsi
  _DWORD *v11; // r8
  unsigned int v13; // r15d
  unsigned int v14; // r10d
  int v15; // edi
  unsigned __int16 v16; // r12
  __int128 *v17; // rbx
  unsigned __int16 *v18; // rdx
  int v19; // ecx
  int v20; // ecx
  DWORD v21; // ebx
  int v22; // eax
  size_t v23; // rax
  unsigned int v24; // edx
  unsigned __int16 v25; // si
  wchar_t *v26; // rbx
  unsigned __int64 v27; // rdi
  __int64 v28; // rcx
  wchar_t *v29; // rax
  wchar_t *v30; // r12
  __int64 v31; // rdi
  unsigned int v32; // ebx
  unsigned int v33; // eax
  size_t v34; // r8
  wchar_t *v35; // rsi
  __int64 v36; // rcx
  __int64 result; // rax
  wchar_t *Heap; // rsi
  __int64 v39; // rax
  LCID v40; // ecx
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // rax
  wchar_t *v44; // rcx
  size_t v45; // rax
  wchar_t *v46; // r12
  __int64 v47; // rdi
  unsigned int v48; // ebx
  __int64 v49; // rax
  __int64 v50; // rbx
  __int64 v51; // r8
  __int64 v52; // rax
  __int64 v53; // xmm0_8
  __m128i v54; // xmm1
  __int64 v55; // rax
  __int64 v56; // rax
  wchar_t *v57; // rcx
  size_t v58; // rax
  char v59; // [rsp+20h] [rbp-81h]
  __int16 v60; // [rsp+22h] [rbp-7Fh]
  DWORD Lcid; // [rsp+24h] [rbp-7Dh] BYREF
  unsigned int v62; // [rsp+28h] [rbp-79h]
  int v63; // [rsp+2Ch] [rbp-75h]
  wchar_t *String1; // [rsp+30h] [rbp-71h]
  _UNICODE_STRING v65; // [rsp+38h] [rbp-69h] BYREF
  __int64 v66; // [rsp+48h] [rbp-59h]
  unsigned int *v67; // [rsp+50h] [rbp-51h]
  __int64 v68; // [rsp+58h] [rbp-49h]
  __int128 v69; // [rsp+60h] [rbp-41h] BYREF
  __int64 v70; // [rsp+70h] [rbp-31h]
  int v71; // [rsp+78h] [rbp-29h]
  wchar_t String[4]; // [rsp+80h] [rbp-21h] BYREF
  __int16 v73; // [rsp+88h] [rbp-19h]

  v7 = 0;
  v66 = a2;
  v8 = a2;
  String1 = a3;
  v9 = 0;
  v67 = a4;
  v59 = 0;
  v10 = a3;
  v11 = a7;
  v68 = (__int64)a7;
  v13 = 0;
  if ( !a4 )
    return 3221225485LL;
  if ( !a1 )
  {
    if ( v10 )
    {
      if ( *a4 < 2 )
        v7 = -1073741789;
      else
        *(_DWORD *)v10 = 0;
    }
    *a4 = 2;
    return v7;
  }
  v14 = *a4;
  v15 = 0;
  v16 = 0;
  v62 = *a4;
  v63 = 0;
  v60 = 0;
  if ( !*(_WORD *)(a1 + 4) )
    goto LABEL_38;
  do
  {
    if ( a6 )
    {
      v49 = *(_QWORD *)(a1 + 24);
      if ( *(_WORD *)(v49 + 6LL * v16) != 2 )
        goto LABEL_36;
      v50 = *(_QWORD *)(v8 + 24);
      if ( (int)RtlpMuiRegGetInstalledLangInfoIndex(v50, 2LL, *(__int16 *)(v49 + 6LL * v16 + 4), &Lcid) < 0 )
        goto LABEL_36;
      v8 = v66;
      if ( a5 < 0 )
      {
        v52 = *(_QWORD *)(v50 + 16);
        v53 = *(_QWORD *)(28 * v51 + v52 + 16);
        v54 = *(__m128i *)(28 * v51 + v52);
        v71 = *(_DWORD *)(28 * v51 + v52 + 24);
        v70 = v53;
        if ( (_mm_cvtsi128_si32(v54) & 6) != 0 )
          a6 = 0;
      }
    }
    v69 = 0LL;
    v17 = 0LL;
    v18 = (unsigned __int16 *)(*(_QWORD *)(a1 + 24) + 6LL * v16);
    v70 = 0LL;
    v71 = 0;
    if ( v18 && v8 )
    {
      v19 = *v18;
      if ( v19 == 1 )
      {
        WORD2(v69) = v18[2];
        goto LABEL_11;
      }
      v20 = v19 - 2;
      if ( !v20 )
      {
        v17 = (__int128 *)(*(_QWORD *)(*(_QWORD *)(v8 + 24) + 16LL) + 28LL * (__int16)v18[2]);
        goto LABEL_12;
      }
      if ( v20 == 1 )
      {
        WORD3(v69) = v18[2];
LABEL_11:
        v17 = &v69;
      }
LABEL_12:
      Lcid = 0;
      v65 = 0LL;
      if ( (a5 & 4) != 0 )
      {
        *(_QWORD *)String = 0LL;
        v73 = 0;
        if ( v17 )
        {
          if ( *((_WORD *)v17 + 2) )
          {
            v21 = *((unsigned __int16 *)v17 + 2);
            goto LABEL_16;
          }
          v56 = *((__int16 *)v17 + 3);
          if ( (__int16)v56 <= 0 )
          {
            v22 = -1073741595;
            goto LABEL_33;
          }
          v57 = (wchar_t *)(*(_QWORD *)(*(_QWORD *)(v8 + 32) + 24LL)
                          + 2LL * *(__int16 *)(*(_QWORD *)(*(_QWORD *)(v8 + 32) + 16LL) + 2 * v56));
          v65.Buffer = v57;
          if ( v57 )
          {
            v58 = 2 * wcslen(v57);
            if ( v58 >= 0xFFFE )
              LOWORD(v58) = -4;
            v65.Length = v58;
            v65.MaximumLength = v58 + 2;
          }
          if ( RtlCultureNameToLCID(&v65, &Lcid) )
          {
            v21 = Lcid;
LABEL_16:
            v22 = RtlIntegerToUnicode(v21, 16LL, 4294967292LL, String);
            Lcid = v22;
            if ( v22 < 0 )
              goto LABEL_107;
            *(_QWORD *)&v65.Length = 0LL;
            v65.Buffer = String;
            v23 = wcslen(String);
            v24 = v62;
            v25 = 2 * v23;
            if ( 2 * v23 >= 0xFFFE )
              v25 = -4;
            v65.MaximumLength = v25 + 2;
            if ( v21 == 4096 )
              goto LABEL_28;
            if ( !v13 )
              goto LABEL_28;
            if ( v13 > v62 )
              goto LABEL_28;
            v26 = String1;
            v27 = 0LL;
            if ( !String1 )
              goto LABEL_28;
            if ( v13 > 0x7FFFFFFFuLL )
            {
              v30 = String1;
              v31 = v13 + (v25 >> 1);
              v32 = v31 + 1;
              v33 = v31 + 1;
              goto LABEL_29;
            }
            v28 = v13;
            v29 = String1;
            do
            {
              if ( !*v29 )
                break;
              ++v29;
              --v28;
            }
            while ( v28 );
            if ( v28 )
            {
              while ( v27 < v13 && v26 && *v26 )
              {
                if ( !wcsicmp(v26, String) )
                {
                  v15 = v63;
                  v16 = v60;
                  v22 = Lcid;
                  goto LABEL_33;
                }
                v55 = -1LL;
                do
                  ++v55;
                while ( v26[v55] );
                v27 += v55 + 1;
                v26 += v55 + 1;
              }
              v24 = v62;
            }
LABEL_28:
            v30 = String1;
            v31 = v13 + (v25 >> 1);
            v32 = v31 + 1;
            v33 = v31 + 1;
            if ( String1 )
            {
LABEL_29:
              if ( v13 < v33 )
              {
                if ( v33 < v24 )
                {
                  v34 = v25;
                  v35 = String1;
                  memmove(&String1[v13], String, v34);
                  v35[v31] = 0;
                  goto LABEL_32;
                }
LABEL_91:
                Lcid = -1073741789;
LABEL_32:
                v15 = v63;
                v13 = v32;
                v22 = Lcid;
                v16 = v60;
LABEL_33:
                if ( v22 >= 0 )
                {
LABEL_34:
                  v63 = ++v15;
                  goto LABEL_35;
                }
LABEL_107:
                if ( v22 == -1073741789 )
                {
                  v59 = 1;
                  goto LABEL_34;
                }
LABEL_35:
                v10 = String1;
                goto LABEL_36;
              }
            }
            if ( v33 >= v24 && v30 )
              goto LABEL_91;
            goto LABEL_32;
          }
        }
LABEL_80:
        v22 = -1073741811;
        goto LABEL_33;
      }
      if ( !v17 )
        goto LABEL_80;
      Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
      if ( !Heap )
      {
        v22 = -1073741801;
        goto LABEL_33;
      }
      v39 = *((__int16 *)v17 + 3);
      if ( (__int16)v39 > 0 )
      {
        v41 = *(_QWORD *)(v66 + 32);
        v42 = *(__int16 *)(*(_QWORD *)(v41 + 16) + 2 * v39);
        v43 = *(_QWORD *)(v41 + 24);
        *(_QWORD *)&v65.Length = 0LL;
        v44 = (wchar_t *)(v43 + 2 * v42);
        v65.Buffer = v44;
        if ( v44 )
        {
          v45 = 2 * wcslen(v44);
          if ( v45 >= 0xFFFE )
            LOWORD(v45) = -4;
          v65.Length = v45;
          v65.MaximumLength = v45 + 2;
        }
      }
      else
      {
        v40 = *((unsigned __int16 *)v17 + 2);
        v65.Buffer = Heap;
        *(_DWORD *)&v65.Length = 11141120;
        if ( !RtlLCIDToCultureName(v40, &v65) )
        {
          Lcid = -1073741595;
LABEL_66:
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
          v22 = Lcid;
          goto LABEL_33;
        }
      }
      v46 = String1;
      if ( !v13 || v13 > v62 || !(unsigned __int8)RtlpLangNameInMultiSzString_Size(String1, v65.Buffer) )
      {
        v47 = v13 + (v65.Length >> 1);
        v48 = v47 + 1;
        if ( v46 && v13 < v48 )
        {
          if ( v48 < v62 )
          {
            memmove(&v46[v13], v65.Buffer, v65.Length);
            v46[v47] = 0;
            goto LABEL_64;
          }
LABEL_60:
          Lcid = -1073741789;
          goto LABEL_64;
        }
        if ( v48 >= v62 && v46 )
          goto LABEL_60;
LABEL_64:
        v15 = v63;
        v13 = v48;
      }
      v16 = v60;
      goto LABEL_66;
    }
LABEL_36:
    v8 = v66;
    v60 = ++v16;
  }
  while ( v16 < *(_WORD *)(a1 + 4) );
  a4 = v67;
  v9 = v59;
  v11 = (_DWORD *)v68;
  v14 = v62;
LABEL_38:
  if ( v10 )
  {
    if ( v13 >= v14 )
      v9 = 1;
    else
      v10[v13] = 0;
  }
  v36 = v13 + 1;
  if ( !v15 )
  {
    if ( v10 )
    {
      if ( (unsigned int)v36 >= v14 )
        v9 = 1;
      else
        v10[v36] = 0;
    }
    LODWORD(v36) = v13 + 2;
  }
  *a4 = v36;
  result = v9 != 0 ? 0xC0000023 : 0;
  if ( v11 )
    *v11 = v15;
  return result;
}
