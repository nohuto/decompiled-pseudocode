/*
 * XREFs of LdrpConvertLangFallbackListToMultiSz @ 0x180037FF0
 * Callers:
 *     RtlGetSystemPreferredUILanguages @ 0x18007DD80 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x1800DA0F0 (RtlGetUserPreferredUILanguages.c)
 *     RtlGetProcessPreferredUILanguages @ 0x18010D110 (RtlGetProcessPreferredUILanguages.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlCultureNameToLCID @ 0x1800330E0 (RtlCultureNameToLCID.c)
 *     RtlLCIDToCultureName @ 0x1800360C0 (RtlLCIDToCultureName.c)
 *     RtlIntegerToUnicode @ 0x1800390E0 (RtlIntegerToUnicode.c)
 *     RtlpLangNameInMultiSzString_Size @ 0x180039430 (RtlpLangNameInMultiSzString_Size.c)
 *     RtlpMuiRegGetInstalledLangInfoIndex @ 0x1800EED6C (RtlpMuiRegGetInstalledLangInfoIndex.c)
 *     wcslen @ 0x1801277D0 (wcslen.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memmove @ 0x180167400 (memmove.c)
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
  unsigned int v12; // r14d
  unsigned int v13; // ecx
  unsigned __int16 v14; // bx
  int v15; // r15d
  char v16; // r12
  __int128 *v17; // rdi
  unsigned __int16 *v18; // r8
  int v19; // ecx
  unsigned int v20; // edi
  int v21; // r12d
  size_t v22; // rdx
  unsigned int v23; // edi
  __int64 v24; // r14
  __int64 result; // rax
  int v26; // ecx
  __int64 v27; // rax
  unsigned int v28; // ecx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rax
  void *v32; // rcx
  size_t v33; // rax
  unsigned int v34; // edi
  __int64 v35; // rax
  __int64 v36; // rdi
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // xmm0_8
  __m128i v40; // xmm1
  __int64 v41; // rax
  void *v42; // rcx
  size_t v43; // rax
  char v44; // [rsp+20h] [rbp-81h]
  unsigned int v45; // [rsp+24h] [rbp-7Dh]
  size_t v46; // [rsp+28h] [rbp-79h] BYREF
  void *Src[2]; // [rsp+30h] [rbp-71h] BYREF
  wchar_t *String1; // [rsp+40h] [rbp-61h]
  __int64 v49; // [rsp+48h] [rbp-59h]
  void *Heap; // [rsp+50h] [rbp-51h]
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
      if ( (int)RtlpMuiRegGetInstalledLangInfoIndex(v36, 2LL, *(__int16 *)(v35 + 6LL * v14 + 4), &v46) < 0 )
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
      *(_OWORD *)Src = 0LL;
      if ( (v16 & 4) != 0 )
      {
        LODWORD(v46) = 0;
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
          v42 = (void *)(*(_QWORD *)(*(_QWORD *)(v9 + 32) + 24LL)
                       + 2LL * *(__int16 *)(*(_QWORD *)(*(_QWORD *)(v9 + 32) + 16LL) + 2 * v41));
          Src[1] = v42;
          if ( v42 )
          {
            v43 = 2 * wcslen((const wchar_t *)v42);
            if ( v43 >= 0xFFFE )
              LOWORD(v43) = -4;
            LOWORD(Src[0]) = v43;
            WORD1(Src[0]) = v43 + 2;
          }
          if ( RtlCultureNameToLCID((unsigned __int16 *)Src, (int *)&v46) )
          {
            v20 = v46;
LABEL_15:
            v21 = RtlIntegerToUnicode(v20, 16LL, 4294967292LL, String);
            if ( v21 < 0 )
              goto LABEL_28;
            Src[0] = 0LL;
            Src[1] = String;
            v22 = 2 * wcslen(String);
            if ( v22 >= 0xFFFE )
              v22 = 65532LL;
            v46 = v22;
            WORD1(Src[0]) = v22 + 2;
            if ( v20 != 4096 && v12 && v12 <= v45 )
            {
              if ( !(unsigned __int8)RtlpLangNameInMultiSzString_Size(String1, String) )
              {
                LOWORD(v22) = v46;
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
            LODWORD(v46) = v12 + ((unsigned __int16)v22 >> 1);
            v23 = v46 + 1;
            if ( String1 && v12 < v23 )
            {
              if ( v23 < v45 )
              {
                memmove(&String1[v12], String, (unsigned __int16)v22);
                String1[(unsigned int)v46] = 0;
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
      Heap = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
      if ( !Heap )
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
        Src[0] = 0LL;
        v32 = (void *)(v31 + 2 * v30);
        Src[1] = v32;
        if ( v32 )
        {
          v33 = 2 * wcslen((const wchar_t *)v32);
          if ( v33 >= 0xFFFE )
            LOWORD(v33) = -4;
          LOWORD(Src[0]) = v33;
          WORD1(Src[0]) = v33 + 2;
        }
      }
      else
      {
        v28 = *((unsigned __int16 *)v17 + 2);
        Src[1] = Heap;
        LODWORD(Src[0]) = 11141120;
        if ( !(unsigned __int8)RtlLCIDToCultureName(v28, (__int64)Src) )
        {
          v21 = -1073741595;
LABEL_62:
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
          goto LABEL_28;
        }
      }
      if ( v12 && v12 <= v45 && (unsigned __int8)RtlpLangNameInMultiSzString_Size(String1, (wchar_t *)Src[1]) )
        goto LABEL_62;
      LODWORD(v46) = v12 + (LOWORD(Src[0]) >> 1);
      v34 = v46 + 1;
      if ( String1 && v12 < v34 )
      {
        if ( v34 < v45 )
        {
          memmove(&String1[v12], Src[1], LOWORD(Src[0]));
          String1[(unsigned int)v46] = 0;
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
