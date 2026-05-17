/*
 * XREFs of RtlGetFileMUIPath @ 0x18007E370
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlUnicodeStringToInteger @ 0x180032D60 (RtlUnicodeStringToInteger.c)
 *     RtlCultureNameToLCID @ 0x1800330E0 (RtlCultureNameToLCID.c)
 *     RtlLCIDToCultureName @ 0x1800360C0 (RtlLCIDToCultureName.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180037120 (RtlGetThreadPreferredUILanguages.c)
 *     RtlIntegerToUnicode @ 0x1800390E0 (RtlIntegerToUnicode.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x180077E08 (RtlpGetMUIRedirectedFilePath.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18007CC10 (RtlpCreateProcessRegistryInfo.c)
 *     RtlGetFullPathName_U @ 0x18007EEC0 (RtlGetFullPathName_U.c)
 *     LdrpCalcAllocSize @ 0x18007EF4C (LdrpCalcAllocSize.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180080844 (RtlpFileIsWin32WithRCManifest.c)
 *     RtlInitUnicodeString @ 0x1800DA0A0 (RtlInitUnicodeString.c)
 *     RtlpMUIEnumerateFolder @ 0x18010B52C (RtlpMUIEnumerateFolder.c)
 *     _wcsicmp @ 0x180122C70 (_wcsicmp.c)
 *     wcslen @ 0x1801277D0 (wcslen.c)
 *     RtlpMUIGetAllInstalledLang @ 0x18014004C (RtlpMUIGetAllInstalledLang.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall RtlGetFileMUIPath(
        unsigned int a1,
        __int64 a2,
        wchar_t *a3,
        int *a4,
        void *a5,
        _DWORD *a6,
        unsigned __int64 *a7)
{
  __int64 v8; // rsi
  unsigned int v9; // eax
  unsigned __int64 v10; // r15
  __int64 v11; // rdi
  __int64 result; // rax
  unsigned int v13; // ebx
  __int64 Heap; // rax
  unsigned __int64 v15; // r14
  int v16; // esi
  bool v17; // r12
  unsigned __int64 v18; // rax
  wchar_t *v19; // rax
  int ThreadPreferredUILanguages; // eax
  unsigned __int64 v21; // rsi
  wchar_t *v22; // rbx
  unsigned __int64 i; // rax
  unsigned __int64 v24; // rax
  size_t v25; // rax
  int MUIRedirectedFilePath; // ecx
  __int64 v27; // rax
  bool v28; // zf
  bool v29; // si
  int v30; // ecx
  wchar_t *v31; // rax
  wchar_t *v32; // rbx
  unsigned __int64 k; // rax
  __int64 v34; // rax
  size_t v35; // rax
  unsigned __int64 v36; // r10
  __int64 v37; // r11
  unsigned __int64 v38; // rax
  __int64 v39; // r9
  unsigned __int64 v40; // rcx
  __int64 v41; // rdx
  size_t v42; // rax
  wchar_t *v43; // rax
  size_t v44; // rax
  int v45; // eax
  wchar_t *v46; // r13
  int *v47; // rbx
  unsigned __int64 v48; // rbx
  __int64 v49; // rax
  unsigned __int64 v50; // rax
  wchar_t *v51; // rax
  __int64 v52; // rcx
  wchar_t *v53; // rbx
  unsigned __int64 j; // rcx
  __int64 v55; // rax
  int v56; // ecx
  __int64 v57; // rax
  __int64 v58; // rcx
  char v59; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v60; // [rsp+48h] [rbp-B8h] BYREF
  wchar_t *String2[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v62; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t *String; // [rsp+68h] [rbp-98h] BYREF
  __int64 v64; // [rsp+70h] [rbp-90h] BYREF
  wchar_t *v65; // [rsp+78h] [rbp-88h]
  wchar_t *String1; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v67; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v68; // [rsp+8Ch] [rbp-74h]
  int v69; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v70; // [rsp+98h] [rbp-68h] BYREF
  void *v71; // [rsp+A0h] [rbp-60h]
  int *v72; // [rsp+A8h] [rbp-58h]
  __int64 v73; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD *v74; // [rsp+B8h] [rbp-48h]
  __int64 v75; // [rsp+C0h] [rbp-40h]
  __int128 v76; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v77[2]; // [rsp+E0h] [rbp-20h] BYREF
  wchar_t *v78; // [rsp+F0h] [rbp-10h]
  unsigned __int64 *v79; // [rsp+F8h] [rbp-8h]
  WCHAR SourceString[4]; // [rsp+100h] [rbp+0h] BYREF
  __int16 v81; // [rsp+108h] [rbp+8h]

  v71 = a5;
  v74 = a6;
  *(_QWORD *)SourceString = 0LL;
  v81 = 0;
  v8 = a1;
  v72 = a4;
  v9 = a1 >> 10;
  v10 = 0LL;
  LOBYTE(v9) = (a1 & 0x400) != 0;
  v78 = a3;
  v79 = a7;
  v11 = 0LL;
  v60 = 0LL;
  v75 = 0LL;
  v77[0] = 0LL;
  *(_QWORD *)&v76 = 0LL;
  v69 = 0;
  String = 0LL;
  String1 = 0LL;
  v62 = 0;
  v67 = 0;
  v65 = 0LL;
  v70 = 0LL;
  v73 = 0LL;
  v68 = v9;
  *(_OWORD *)String2 = 0LL;
  if ( !a2 || !a7 )
    return 3221225485LL;
  result = RtlpCreateProcessRegistryInfo(&v73, a2);
  v13 = result;
  if ( (int)result >= 0 )
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0x20AuLL);
    v15 = Heap;
    if ( !Heap )
      return 3221225495LL;
    if ( (unsigned int)RtlGetFullPathName_U(a2, 520LL, Heap, &v70) - 1 <= 0x206 && v70 && v70 > v15 && v70 < v15 + 520 )
    {
      *(_WORD *)(v70 - 2) = 0;
      if ( *a7 )
      {
        v36 = v60;
        v37 = *a7 & 0xF;
        v38 = *a7 >> 4;
        v75 = v37;
        v39 = (unsigned int)v37;
        v40 = 0LL;
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              v41 = v38 & 0xFFF;
              v38 >>= 12;
              v39 ^= v41;
              if ( v40 )
                break;
              v11 = v41;
              v40 = 1LL;
            }
            if ( v40 != 2 )
              break;
            v36 = v41;
            v60 = v41;
            v40 = 3LL;
          }
          if ( v40 == 3 )
            break;
          ++v40;
          v64 = v11;
          if ( v40 >= 4 )
            goto LABEL_92;
        }
        v10 = v41;
LABEL_92:
        if ( ((v38 ^ v39) & 0xFFF) != 0 )
        {
          v13 = -1073741776;
        }
        else
        {
          if ( v10 <= v36 )
          {
            if ( (v11 & 0x20) != 0 )
              v16 = 2;
            else
              v16 = (unsigned __int64)(v11 & 0x40 | 0x20) >> 5;
            v59 = v37 & 1;
            v17 = (v11 & 4) == 0;
            goto LABEL_31;
          }
          v13 = -2147483642;
        }
        goto LABEL_12;
      }
      if ( (v8 & 0xC) != 0xC
        && (v8 & 0x30) != 0x30
        && (v8 & 0x50) != 0x50
        && (v8 & 0x60) != 0x60
        && (v8 & 0x300) != 0x300
        && (v8 & 0x70) != 0x70 )
      {
        v11 = v8;
        if ( (v8 & 0x20) != 0 )
          v16 = 2;
        else
          v16 = (unsigned __int64)(v8 & 0x40 | 0x20) >> 5;
        v17 = (v11 & 4) == 0;
        if ( (v11 & 0x200) != 0 )
        {
          v59 = 0;
        }
        else if ( (v11 & 0x100) != 0 || (unsigned __int8)RtlpFileIsWin32WithRCManifest(a2) )
        {
          v59 = 1;
          v75 = 1LL;
        }
        else
        {
          v59 = 0;
        }
        if ( v16 != 1 )
        {
          if ( v16 == 2 )
          {
            RtlpMUIGetAllInstalledLang(v73, &String, &v60);
          }
          else if ( v16 == 3 )
          {
            RtlpMUIEnumerateFolder(v15, &v60, &String1);
          }
LABEL_30:
          v10 = 0LL;
LABEL_31:
          if ( v16 == 1 )
          {
            if ( String )
              goto LABEL_33;
            LODWORD(v64) = 0;
            RtlGetThreadPreferredUILanguages((void *)0x30, (unsigned __int64)&v62, 0LL, (unsigned int *)&v64);
            if ( !(_DWORD)v64 )
              goto LABEL_141;
            v50 = LdrpCalcAllocSize((unsigned int)v64, 2LL);
            if ( !v50 )
            {
              v13 = -1073741675;
LABEL_49:
              if ( String1 )
                RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)String1);
              goto LABEL_12;
            }
            v51 = (wchar_t *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v50);
            String = v51;
            if ( v51
              && (int)RtlGetThreadPreferredUILanguages((void *)0x30, (unsigned __int64)&v62, v51, (unsigned int *)&v64) >= 0 )
            {
LABEL_33:
              v21 = v60;
            }
            else
            {
LABEL_141:
              v21 = v60;
              v10 = v60;
            }
            v22 = String;
            for ( i = 0LL; i < v10; v22 += v52 + 1 )
            {
              if ( !v22 )
                break;
              if ( !*v22 )
                break;
              ++i;
              v52 = -1LL;
              do
                v28 = v22[++v52] == 0;
              while ( !v28 );
            }
            while ( v10 < v21 )
            {
              if ( !*v22 )
                goto LABEL_109;
              HIDWORD(String2[0]) = 0;
              String2[1] = v22;
              v25 = 2 * wcslen(v22);
              if ( v25 >= 0xFFFE )
                LOWORD(v25) = -4;
              LOWORD(String2[0]) = v25;
              WORD1(String2[0]) = v25 + 2;
              v76 = *(_OWORD *)String2;
              MUIRedirectedFilePath = RtlpGetMUIRedirectedFilePath((__int64)&v76, v15, v70, v74, v59, v68, v71);
              if ( ((MUIRedirectedFilePath + 0x80000000) & 0x80000000) != 0 || MUIRedirectedFilePath == -1073741789 )
                goto LABEL_109;
              ++v10;
              v27 = -1LL;
              do
                v28 = v22[++v27] == 0;
              while ( !v28 );
              v22 += v27 + 1;
            }
            goto LABEL_36;
          }
          if ( v16 == 2 )
          {
            if ( !String )
              RtlpMUIGetAllInstalledLang(v73, &String, v77);
            v53 = String;
            for ( j = 0LL; j < v10; v53 += v55 + 1 )
            {
              if ( !v53 )
                break;
              if ( !*v53 )
                break;
              ++j;
              v55 = -1LL;
              do
                v28 = v53[++v55] == 0;
              while ( !v28 );
            }
            v21 = v60;
            while ( v10 < v21 )
            {
              if ( !v53 )
                goto LABEL_109;
              if ( !*v53 )
                goto LABEL_109;
              RtlInitUnicodeString((PUNICODE_STRING)String2, v53);
              v76 = *(_OWORD *)String2;
              v56 = RtlpGetMUIRedirectedFilePath((__int64)&v76, v15, v70, v74, v59, v68, v71);
              if ( ((v56 + 0x80000000) & 0x80000000) != 0 || v56 == -1073741789 )
                goto LABEL_109;
              ++v10;
              v57 = -1LL;
              do
                v28 = v53[++v57] == 0;
              while ( !v28 );
              v53 += v57 + 1;
            }
LABEL_36:
            v13 = -2147483642;
            goto LABEL_37;
          }
          if ( !String1 && !(unsigned __int8)RtlpMUIEnumerateFolder(v15, &v76, &String1) )
            v10 = v60;
          v29 = 0;
          if ( v10 || (v30 = *v72) == 0 || !v78 )
          {
LABEL_67:
            v32 = String1;
            for ( k = 0LL; k < v10; v32 += v58 + 1 )
            {
              if ( !v32 )
                break;
              if ( !*v32 )
                break;
              ++k;
              v58 = -1LL;
              do
                v28 = v32[++v58] == 0;
              while ( !v28 );
            }
            while ( 1 )
            {
              while ( 1 )
              {
LABEL_68:
                if ( v10 >= v60 )
                {
                  v21 = v60;
                  goto LABEL_36;
                }
                if ( !v29 || !wcsicmp(v32, String2[1]) )
                  break;
                ++v10;
                v34 = -1LL;
                do
                  v28 = v32[++v34] == 0;
                while ( !v28 );
                v32 += v34 + 1;
              }
              String2[1] = v32;
              String2[0] = 0LL;
              if ( v32 )
              {
                v44 = 2 * wcslen(v32);
                if ( v44 >= 0xFFFE )
                  LOWORD(v44) = -4;
                LOWORD(String2[0]) = v44;
                WORD1(String2[0]) = v44 + 2;
              }
              v76 = *(_OWORD *)String2;
              v45 = RtlpGetMUIRedirectedFilePath((__int64)&v76, v15, v70, v74, v59, v68, v71);
              if ( ((v45 + 0x80000000) & 0x80000000) != 0 || v45 == -1073741789 )
                break;
              ++v10;
              v49 = -1LL;
              do
                v28 = v32[++v49] == 0;
              while ( !v28 );
              v32 += v49 + 1;
            }
            v21 = v60;
LABEL_109:
            v46 = v78;
            v24 = (unsigned __int64)v65;
            v47 = v72;
            if ( !v78 && !v72 )
              goto LABEL_116;
            if ( !v17 )
            {
              if ( !RtlCultureNameToLCID((unsigned __int16 *)String2, &v69)
                || (int)RtlIntegerToUnicode((unsigned __int16)v69, 0x10u, -4, (char *)SourceString) < 0 )
              {
                RtlInitUnicodeString((PUNICODE_STRING)String2, SourceString);
                goto LABEL_115;
              }
              RtlInitUnicodeString((PUNICODE_STRING)String2, SourceString);
              v24 = (unsigned __int64)v65;
            }
            if ( !v47 )
              goto LABEL_116;
            if ( !v46 )
            {
              *v47 = 85;
LABEL_116:
              if ( !v71 || !v46 && v72 )
              {
                v13 = 0;
LABEL_54:
                if ( v24 )
                  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v24);
                goto LABEL_47;
              }
              v13 = 0;
LABEL_37:
              *v79 = v75 | (((v10 + 1) ^ v21 ^ v75 ^ v11) << 52) ^ 0xCB7000000CB70000uLL | (16
                                                                                          * (v11 | ((v21 | ((v10 + 1) << 12)) << 24) | 0xCB7000));
              v24 = (unsigned __int64)v65;
              goto LABEL_54;
            }
            if ( *v47 > (unsigned int)(LOWORD(String2[0]) >> 1) )
            {
              v48 = LOWORD(String2[0]);
              memmove(v46, String2[1], LOWORD(String2[0]));
              v46[v48 >> 1] = 0;
            }
LABEL_115:
            v24 = (unsigned __int64)v65;
            goto LABEL_116;
          }
          v31 = v78;
          while ( *v31 )
          {
            ++v31;
            if ( !--v30 )
              goto LABEL_67;
          }
          if ( v17 )
          {
            String2[1] = v78;
            HIDWORD(String2[0]) = 0;
            v35 = 2 * wcslen(v78);
            if ( v35 >= 0xFFFE )
              LOWORD(v35) = -4;
            LOWORD(String2[0]) = v35;
            WORD1(String2[0]) = v35 + 2;
            if ( RtlCultureNameToLCID((unsigned __int16 *)String2, (int *)&v67) )
            {
              v32 = String1;
              v29 = 1;
              goto LABEL_68;
            }
            goto LABEL_67;
          }
          HIDWORD(v77[0]) = 0;
          v77[1] = v78;
          v42 = 2 * wcslen(v78);
          if ( v42 >= 0xFFFE )
            LOWORD(v42) = -4;
          LOWORD(v77[0]) = v42;
          WORD1(v77[0]) = v42 + 2;
          if ( (int)RtlUnicodeStringToInteger((unsigned __int16 *)v77, 0x10u, (int *)&v67) < 0 )
          {
LABEL_102:
            v32 = String1;
            goto LABEL_68;
          }
          v43 = (wchar_t *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
          v65 = v43;
          if ( v43 )
          {
            String2[1] = v43;
            LODWORD(String2[0]) = 11141120;
            v29 = (unsigned __int8)RtlLCIDToCultureName(v67, (__int64)String2) != 0;
            goto LABEL_102;
          }
LABEL_47:
          if ( String )
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)String);
          goto LABEL_49;
        }
        LODWORD(v64) = 0;
        RtlGetThreadPreferredUILanguages((void *)0x30, (unsigned __int64)&v62, 0LL, (unsigned int *)&v64);
        if ( (_DWORD)v64 )
        {
          v18 = LdrpCalcAllocSize((unsigned int)v64, 2LL);
          if ( v18 )
          {
            v19 = (wchar_t *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v18);
            String = v19;
            if ( !v19 )
            {
              v13 = -1073741801;
              goto LABEL_47;
            }
            ThreadPreferredUILanguages = RtlGetThreadPreferredUILanguages(
                                           (void *)0x30,
                                           (unsigned __int64)&v62,
                                           v19,
                                           (unsigned int *)&v64);
            if ( ThreadPreferredUILanguages < 0 )
            {
              v13 = ThreadPreferredUILanguages;
              goto LABEL_47;
            }
            v60 = v62;
            goto LABEL_30;
          }
          v13 = -1073741675;
        }
LABEL_12:
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v15);
        return v13;
      }
    }
    v13 = -1073741811;
    goto LABEL_12;
  }
  return result;
}
