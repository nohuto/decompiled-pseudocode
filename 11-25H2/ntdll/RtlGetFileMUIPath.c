/*
 * XREFs of RtlGetFileMUIPath @ 0x1800A9A40
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlLCIDToCultureName @ 0x18005B640 (RtlLCIDToCultureName.c)
 *     RtlUnicodeStringToInteger @ 0x18005BFF0 (RtlUnicodeStringToInteger.c)
 *     RtlCultureNameToLCID @ 0x18005C370 (RtlCultureNameToLCID.c)
 *     RtlGetThreadPreferredUILanguages @ 0x18005D9C0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlIntegerToUnicode @ 0x18005FB90 (RtlIntegerToUnicode.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18008BAC0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x1800A1CE0 (RtlpGetMUIRedirectedFilePath.c)
 *     RtlInitUnicodeString @ 0x1800A8A00 (RtlInitUnicodeString.c)
 *     RtlGetFullPathName_U @ 0x1800AA590 (RtlGetFullPathName_U.c)
 *     LdrpCalcAllocSize @ 0x1800AA61C (LdrpCalcAllocSize.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x1800AA648 (RtlpFileIsWin32WithRCManifest.c)
 *     RtlpMUIEnumerateFolder @ 0x18010DBCC (RtlpMUIEnumerateFolder.c)
 *     _wcsicmp @ 0x180124750 (_wcsicmp.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     RtlpMUIGetAllInstalledLang @ 0x18014173C (RtlpMUIGetAllInstalledLang.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall RtlGetFileMUIPath(
        unsigned int a1,
        __int64 a2,
        wchar_t *a3,
        int *a4,
        void *a5,
        __int64 a6,
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
  __int64 v16; // r9
  int v17; // esi
  bool v18; // r12
  unsigned __int64 v19; // rax
  wchar_t *v20; // rax
  int ThreadPreferredUILanguages; // eax
  unsigned __int64 v22; // rsi
  wchar_t *v23; // rbx
  unsigned __int64 i; // rax
  __int64 v25; // rax
  size_t v26; // rax
  int MUIRedirectedFilePath; // ecx
  __int64 v28; // rax
  bool v29; // zf
  bool v30; // si
  int v31; // ecx
  wchar_t *v32; // rax
  wchar_t *v33; // rbx
  unsigned __int64 k; // rax
  __int64 v35; // rax
  size_t v36; // rax
  unsigned __int64 v37; // r10
  __int64 v38; // r11
  unsigned __int64 v39; // rax
  __int64 v40; // r9
  unsigned __int64 v41; // rcx
  __int64 v42; // rdx
  size_t v43; // rax
  wchar_t *v44; // rax
  size_t v45; // rax
  int v46; // eax
  wchar_t *v47; // r13
  int *v48; // rbx
  unsigned __int64 v49; // rbx
  __int64 v50; // rax
  unsigned __int64 v51; // rax
  wchar_t *v52; // rax
  __int64 v53; // rcx
  wchar_t *v54; // rbx
  unsigned __int64 j; // rcx
  __int64 v56; // rax
  int v57; // ecx
  __int64 v58; // rax
  __int64 v59; // rcx
  char v60; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v61; // [rsp+48h] [rbp-B8h] BYREF
  wchar_t *String2[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v63; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t *String; // [rsp+68h] [rbp-98h] BYREF
  __int64 v65; // [rsp+70h] [rbp-90h] BYREF
  wchar_t *v66; // [rsp+78h] [rbp-88h]
  wchar_t *String1; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v68; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v69; // [rsp+8Ch] [rbp-74h]
  int v70; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v71; // [rsp+98h] [rbp-68h] BYREF
  void *v72; // [rsp+A0h] [rbp-60h]
  int *v73; // [rsp+A8h] [rbp-58h]
  __int64 v74; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v75; // [rsp+B8h] [rbp-48h]
  __int64 v76; // [rsp+C0h] [rbp-40h]
  __int128 v77; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v78[2]; // [rsp+E0h] [rbp-20h] BYREF
  wchar_t *v79; // [rsp+F0h] [rbp-10h]
  unsigned __int64 *v80; // [rsp+F8h] [rbp-8h]
  WCHAR SourceString[4]; // [rsp+100h] [rbp+0h] BYREF
  __int16 v82; // [rsp+108h] [rbp+8h]

  v72 = a5;
  v75 = a6;
  *(_QWORD *)SourceString = 0LL;
  v82 = 0;
  v8 = a1;
  v73 = a4;
  v9 = a1 >> 10;
  v10 = 0LL;
  LOBYTE(v9) = (a1 & 0x400) != 0;
  v79 = a3;
  v80 = a7;
  v11 = 0LL;
  v61 = 0LL;
  v76 = 0LL;
  v78[0] = 0LL;
  *(_QWORD *)&v77 = 0LL;
  v70 = 0;
  String = 0LL;
  String1 = 0LL;
  v63 = 0;
  v68 = 0;
  v66 = 0LL;
  v71 = 0LL;
  v74 = 0LL;
  v69 = v9;
  *(_OWORD *)String2 = 0LL;
  if ( !a2 || !a7 )
    return 3221225485LL;
  result = RtlpCreateProcessRegistryInfo(&v74);
  v13 = result;
  if ( (int)result >= 0 )
  {
    Heap = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, 0x20AuLL);
    v15 = Heap;
    if ( !Heap )
      return 3221225495LL;
    if ( (unsigned int)RtlGetFullPathName_U(a2, 520LL, Heap, &v71) - 1 <= 0x206 && v71 && v71 > v15 && v71 < v15 + 520 )
    {
      *(_WORD *)(v71 - 2) = 0;
      if ( *a7 )
      {
        v37 = v61;
        v38 = *a7 & 0xF;
        v39 = *a7 >> 4;
        v76 = v38;
        v40 = (unsigned int)v38;
        v41 = 0LL;
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              v42 = v39 & 0xFFF;
              v39 >>= 12;
              v40 ^= v42;
              if ( v41 )
                break;
              v11 = v42;
              v41 = 1LL;
            }
            if ( v41 != 2 )
              break;
            v37 = v42;
            v61 = v42;
            v41 = 3LL;
          }
          if ( v41 == 3 )
            break;
          ++v41;
          v65 = v11;
          if ( v41 >= 4 )
            goto LABEL_92;
        }
        v10 = v42;
LABEL_92:
        v16 = v39 ^ v40;
        if ( (v16 & 0xFFF) != 0 )
        {
          v13 = -1073741776;
        }
        else
        {
          if ( v10 <= v37 )
          {
            if ( (v11 & 0x20) != 0 )
              v17 = 2;
            else
              v17 = (unsigned __int64)(v11 & 0x40 | 0x20) >> 5;
            v60 = v38 & 1;
            v18 = (v11 & 4) == 0;
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
          v17 = 2;
        else
          v17 = (unsigned __int64)(v8 & 0x40 | 0x20) >> 5;
        v18 = (v11 & 4) == 0;
        if ( (v11 & 0x200) != 0 )
        {
          v60 = 0;
        }
        else if ( (v11 & 0x100) != 0 || (unsigned __int8)RtlpFileIsWin32WithRCManifest(a2) )
        {
          v60 = 1;
          v76 = 1LL;
        }
        else
        {
          v60 = 0;
        }
        if ( v17 != 1 )
        {
          if ( v17 == 2 )
          {
            RtlpMUIGetAllInstalledLang(v74, &String, &v61);
          }
          else if ( v17 == 3 )
          {
            RtlpMUIEnumerateFolder(v15, &v61, &String1);
          }
LABEL_30:
          v10 = 0LL;
LABEL_31:
          if ( v17 == 1 )
          {
            if ( String )
              goto LABEL_33;
            LODWORD(v65) = 0;
            RtlGetThreadPreferredUILanguages(0x30u, &v63, 0LL, &v65);
            if ( !(_DWORD)v65 )
              goto LABEL_141;
            v51 = LdrpCalcAllocSize((unsigned int)v65, 2LL);
            if ( !v51 )
            {
              v13 = -1073741675;
LABEL_49:
              if ( String1 )
                RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)String1, v16);
              goto LABEL_12;
            }
            v52 = (wchar_t *)RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, v51);
            String = v52;
            if ( v52 && (int)RtlGetThreadPreferredUILanguages(0x30u, &v63, v52, &v65) >= 0 )
            {
LABEL_33:
              v22 = v61;
            }
            else
            {
LABEL_141:
              v22 = v61;
              v10 = v61;
            }
            v23 = String;
            for ( i = 0LL; i < v10; v23 += v53 + 1 )
            {
              if ( !v23 )
                break;
              if ( !*v23 )
                break;
              ++i;
              v53 = -1LL;
              do
                v29 = v23[++v53] == 0;
              while ( !v29 );
            }
            while ( v10 < v22 )
            {
              if ( !*v23 )
                goto LABEL_109;
              HIDWORD(String2[0]) = 0;
              String2[1] = v23;
              v26 = 2 * wcslen(v23);
              if ( v26 >= 0xFFFE )
                LOWORD(v26) = -4;
              LOWORD(String2[0]) = v26;
              WORD1(String2[0]) = v26 + 2;
              v77 = *(_OWORD *)String2;
              MUIRedirectedFilePath = RtlpGetMUIRedirectedFilePath((__int64)&v77, v15, v71, v75, v60, v69, v72);
              if ( ((MUIRedirectedFilePath + 0x80000000) & 0x80000000) != 0 || MUIRedirectedFilePath == -1073741789 )
                goto LABEL_109;
              ++v10;
              v28 = -1LL;
              do
                v29 = v23[++v28] == 0;
              while ( !v29 );
              v23 += v28 + 1;
            }
            goto LABEL_36;
          }
          if ( v17 == 2 )
          {
            if ( !String )
              RtlpMUIGetAllInstalledLang(v74, &String, v78);
            v54 = String;
            for ( j = 0LL; j < v10; v54 += v56 + 1 )
            {
              if ( !v54 )
                break;
              if ( !*v54 )
                break;
              ++j;
              v56 = -1LL;
              do
                v29 = v54[++v56] == 0;
              while ( !v29 );
            }
            v22 = v61;
            while ( v10 < v22 )
            {
              if ( !v54 )
                goto LABEL_109;
              if ( !*v54 )
                goto LABEL_109;
              RtlInitUnicodeString((PUNICODE_STRING)String2, v54);
              v77 = *(_OWORD *)String2;
              v57 = RtlpGetMUIRedirectedFilePath((__int64)&v77, v15, v71, v75, v60, v69, v72);
              if ( ((v57 + 0x80000000) & 0x80000000) != 0 || v57 == -1073741789 )
                goto LABEL_109;
              ++v10;
              v58 = -1LL;
              do
                v29 = v54[++v58] == 0;
              while ( !v29 );
              v54 += v58 + 1;
            }
LABEL_36:
            v13 = -2147483642;
            goto LABEL_37;
          }
          if ( !String1 && !(unsigned __int8)RtlpMUIEnumerateFolder(v15, &v77, &String1) )
            v10 = v61;
          v30 = 0;
          if ( v10 || (v31 = *v73) == 0 || !v79 )
          {
LABEL_67:
            v33 = String1;
            for ( k = 0LL; k < v10; v33 += v59 + 1 )
            {
              if ( !v33 )
                break;
              if ( !*v33 )
                break;
              ++k;
              v59 = -1LL;
              do
                v29 = v33[++v59] == 0;
              while ( !v29 );
            }
            while ( 1 )
            {
              while ( 1 )
              {
LABEL_68:
                if ( v10 >= v61 )
                {
                  v22 = v61;
                  goto LABEL_36;
                }
                if ( !v30 || !wcsicmp(v33, String2[1]) )
                  break;
                ++v10;
                v35 = -1LL;
                do
                  v29 = v33[++v35] == 0;
                while ( !v29 );
                v33 += v35 + 1;
              }
              String2[1] = v33;
              String2[0] = 0LL;
              if ( v33 )
              {
                v45 = 2 * wcslen(v33);
                if ( v45 >= 0xFFFE )
                  LOWORD(v45) = -4;
                LOWORD(String2[0]) = v45;
                WORD1(String2[0]) = v45 + 2;
              }
              v77 = *(_OWORD *)String2;
              v46 = RtlpGetMUIRedirectedFilePath((__int64)&v77, v15, v71, v75, v60, v69, v72);
              if ( ((v46 + 0x80000000) & 0x80000000) != 0 || v46 == -1073741789 )
                break;
              ++v10;
              v50 = -1LL;
              do
                v29 = v33[++v50] == 0;
              while ( !v29 );
              v33 += v50 + 1;
            }
            v22 = v61;
LABEL_109:
            v47 = v79;
            v25 = (__int64)v66;
            v48 = v73;
            if ( !v79 && !v73 )
              goto LABEL_116;
            if ( !v18 )
            {
              if ( !RtlCultureNameToLCID((unsigned __int16 *)String2, &v70)
                || (int)RtlIntegerToUnicode((unsigned __int16)v70, 0x10u, -4, (char *)SourceString) < 0 )
              {
                RtlInitUnicodeString((PUNICODE_STRING)String2, SourceString);
                goto LABEL_115;
              }
              RtlInitUnicodeString((PUNICODE_STRING)String2, SourceString);
              v25 = (__int64)v66;
            }
            if ( !v48 )
              goto LABEL_116;
            if ( !v47 )
            {
              *v48 = 85;
LABEL_116:
              if ( !v72 || !v47 && v73 )
              {
                v13 = 0;
LABEL_54:
                if ( v25 )
                  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v25, v16);
                goto LABEL_47;
              }
              v13 = 0;
LABEL_37:
              *v80 = v76 | (((v10 + 1) ^ v22 ^ v76 ^ v11) << 52) ^ 0xCB7000000CB70000uLL | (16
                                                                                          * (v11 | ((v22 | ((v10 + 1) << 12)) << 24) | 0xCB7000));
              v25 = (__int64)v66;
              goto LABEL_54;
            }
            if ( *v48 > (unsigned int)(LOWORD(String2[0]) >> 1) )
            {
              v49 = LOWORD(String2[0]);
              memmove(v47, String2[1], LOWORD(String2[0]));
              v47[v49 >> 1] = 0;
            }
LABEL_115:
            v25 = (__int64)v66;
            goto LABEL_116;
          }
          v32 = v79;
          while ( *v32 )
          {
            ++v32;
            if ( !--v31 )
              goto LABEL_67;
          }
          if ( v18 )
          {
            String2[1] = v79;
            HIDWORD(String2[0]) = 0;
            v36 = 2 * wcslen(v79);
            if ( v36 >= 0xFFFE )
              LOWORD(v36) = -4;
            LOWORD(String2[0]) = v36;
            WORD1(String2[0]) = v36 + 2;
            if ( RtlCultureNameToLCID((unsigned __int16 *)String2, (int *)&v68) )
            {
              v33 = String1;
              v30 = 1;
              goto LABEL_68;
            }
            goto LABEL_67;
          }
          HIDWORD(v78[0]) = 0;
          v78[1] = v79;
          v43 = 2 * wcslen(v79);
          if ( v43 >= 0xFFFE )
            LOWORD(v43) = -4;
          LOWORD(v78[0]) = v43;
          WORD1(v78[0]) = v43 + 2;
          if ( (int)RtlUnicodeStringToInteger((unsigned __int16 *)v78, 0x10u, (int *)&v68) < 0 )
          {
LABEL_102:
            v33 = String1;
            goto LABEL_68;
          }
          v44 = (wchar_t *)RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
          v66 = v44;
          if ( v44 )
          {
            String2[1] = v44;
            LODWORD(String2[0]) = 11141120;
            v30 = (unsigned __int8)RtlLCIDToCultureName(v68, (__int64)String2) != 0;
            goto LABEL_102;
          }
LABEL_47:
          if ( String )
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)String, v16);
          goto LABEL_49;
        }
        LODWORD(v65) = 0;
        RtlGetThreadPreferredUILanguages(0x30u, &v63, 0LL, &v65);
        if ( (_DWORD)v65 )
        {
          v19 = LdrpCalcAllocSize((unsigned int)v65, 2LL);
          if ( v19 )
          {
            v20 = (wchar_t *)RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, v19);
            String = v20;
            if ( !v20 )
            {
              v13 = -1073741801;
              goto LABEL_47;
            }
            ThreadPreferredUILanguages = RtlGetThreadPreferredUILanguages(0x30u, &v63, v20, &v65);
            if ( ThreadPreferredUILanguages < 0 )
            {
              v13 = ThreadPreferredUILanguages;
              goto LABEL_47;
            }
            v61 = v63;
            goto LABEL_30;
          }
          v13 = -1073741675;
        }
LABEL_12:
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v15, v16);
        return v13;
      }
    }
    v13 = -1073741811;
    goto LABEL_12;
  }
  return result;
}
