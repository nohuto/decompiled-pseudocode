/*
 * XREFs of RtlGetFileMUIPath @ 0x1800016B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpMUIEnumerateFolder @ 0x180001138 (RtlpMUIEnumerateFolder.c)
 *     RtlGetFullPathName_U @ 0x180002200 (RtlGetFullPathName_U.c)
 *     LdrpCalcAllocSize @ 0x18000228C (LdrpCalcAllocSize.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x1800026C0 (RtlpFileIsWin32WithRCManifest.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180011550 (RtlpCreateProcessRegistryInfo.c)
 *     RtlUnicodeStringToInteger @ 0x180013E20 (RtlUnicodeStringToInteger.c)
 *     RtlCultureNameToLCID @ 0x1800141A0 (RtlCultureNameToLCID.c)
 *     RtlLCIDToCultureName @ 0x180016340 (RtlLCIDToCultureName.c)
 *     RtlGetThreadPreferredUILanguages @ 0x1800173A0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlIntegerToUnicode @ 0x180019360 (RtlIntegerToUnicode.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x1800946E8 (RtlpGetMUIRedirectedFilePath.c)
 *     RtlInitUnicodeString @ 0x1800C7EE0 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x180120EA0 (_wcsicmp.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
 *     RtlpMUIGetAllInstalledLang @ 0x18013E23C (RtlpMUIGetAllInstalledLang.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

NTSTATUS __cdecl RtlGetFileMUIPath(
        ULONG Flags,
        PCWSTR FilePath,
        PWSTR Language,
        PULONG LanguageLength,
        PWSTR FileMUIPath,
        PULONG FileMUIPathLength,
        PULONGLONG Enumerator)
{
  ULONGLONG v8; // rsi
  ULONG v9; // eax
  ULONGLONG v10; // r15
  ULONGLONG v11; // rdi
  NTSTATUS result; // eax
  NTSTATUS v13; // ebx
  WCHAR *Heap; // rax
  WCHAR *v15; // r14
  int v16; // esi
  bool v17; // r12
  SIZE_T v18; // rax
  wchar_t *v19; // rax
  NTSTATUS ThreadPreferredUILanguages; // eax
  ULONGLONG v21; // rsi
  wchar_t *v22; // rbx
  ULONGLONG i; // rax
  PVOID v24; // rax
  size_t v25; // rax
  int MUIRedirectedFilePath; // ecx
  __int64 v27; // rax
  bool v28; // zf
  bool v29; // si
  ULONG v30; // ecx
  wchar_t *v31; // rax
  const wchar_t *v32; // rbx
  ULONGLONG k; // rax
  __int64 v34; // rax
  size_t v35; // rax
  ULONGLONG v36; // r10
  ULONGLONG v37; // r11
  ULONGLONG v38; // rax
  __int64 v39; // r9
  unsigned __int64 v40; // rcx
  ULONGLONG v41; // rdx
  size_t v42; // rax
  PVOID v43; // rax
  size_t v44; // rax
  int v45; // eax
  wchar_t *v46; // r13
  int *v47; // rbx
  unsigned __int64 v48; // rbx
  __int64 v49; // rax
  SIZE_T v50; // rax
  wchar_t *v51; // rax
  __int64 v52; // rcx
  wchar_t *v53; // rbx
  ULONGLONG j; // rcx
  __int64 v55; // rax
  int v56; // ecx
  __int64 v57; // rax
  __int64 v58; // rcx
  int v59; // [rsp+20h] [rbp-E0h]
  int v60; // [rsp+28h] [rbp-D8h]
  char v61; // [rsp+40h] [rbp-C0h]
  ULONGLONG v62; // [rsp+48h] [rbp-B8h] BYREF
  wchar_t *String2[2]; // [rsp+50h] [rbp-B0h] BYREF
  ULONG NumberOfLanguages; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t *String; // [rsp+68h] [rbp-98h] BYREF
  ULONG ReturnLength[2]; // [rsp+70h] [rbp-90h] BYREF
  PVOID v67; // [rsp+78h] [rbp-88h]
  PVOID BaseAddress; // [rsp+80h] [rbp-80h] BYREF
  DWORD Lcid; // [rsp+88h] [rbp-78h] BYREF
  ULONG v70; // [rsp+8Ch] [rbp-74h]
  DWORD v71; // [rsp+90h] [rbp-70h] BYREF
  PWSTR FilePart; // [rsp+98h] [rbp-68h] BYREF
  PWSTR v73; // [rsp+A0h] [rbp-60h]
  PULONG v74; // [rsp+A8h] [rbp-58h]
  __int64 v75; // [rsp+B0h] [rbp-50h] BYREF
  PULONG v76; // [rsp+B8h] [rbp-48h]
  __int64 v77; // [rsp+C0h] [rbp-40h]
  __int128 v78; // [rsp+D0h] [rbp-30h] BYREF
  _UNICODE_STRING v79; // [rsp+E0h] [rbp-20h] BYREF
  wchar_t *v80; // [rsp+F0h] [rbp-10h]
  PULONGLONG v81; // [rsp+F8h] [rbp-8h]
  WCHAR SourceString[4]; // [rsp+100h] [rbp+0h] BYREF
  __int16 v83; // [rsp+108h] [rbp+8h]

  v73 = FileMUIPath;
  v76 = FileMUIPathLength;
  *(_QWORD *)SourceString = 0LL;
  v83 = 0;
  v8 = Flags;
  v74 = LanguageLength;
  v9 = Flags >> 10;
  v10 = 0LL;
  LOBYTE(v9) = (Flags & 0x400) != 0;
  v80 = Language;
  v81 = Enumerator;
  v11 = 0LL;
  v62 = 0LL;
  v77 = 0LL;
  *(_QWORD *)&v79.Length = 0LL;
  *(_QWORD *)&v78 = 0LL;
  v71 = 0;
  String = 0LL;
  BaseAddress = 0LL;
  NumberOfLanguages = 0;
  Lcid = 0;
  v67 = 0LL;
  FilePart = 0LL;
  v75 = 0LL;
  v70 = v9;
  *(_OWORD *)String2 = 0LL;
  if ( !FilePath || !Enumerator )
    return -1073741811;
  result = RtlpCreateProcessRegistryInfo(&v75);
  v13 = result;
  if ( result >= 0 )
  {
    Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x20AuLL);
    v15 = Heap;
    if ( !Heap )
      return -1073741801;
    if ( RtlGetFullPathName_U(FilePath, 0x208u, Heap, &FilePart) - 1 <= 0x206
      && FilePart
      && FilePart > v15
      && FilePart < v15 + 260 )
    {
      *(FilePart - 1) = 0;
      if ( *Enumerator )
      {
        v36 = v62;
        v37 = *Enumerator & 0xF;
        v38 = *Enumerator >> 4;
        v77 = v37;
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
            v62 = v41;
            v40 = 3LL;
          }
          if ( v40 == 3 )
            break;
          ++v40;
          *(_QWORD *)ReturnLength = v11;
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
              v16 = (v11 & 0x40 | 0x20) >> 5;
            v61 = v37 & 1;
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
          v16 = (v8 & 0x40 | 0x20) >> 5;
        v17 = (v11 & 4) == 0;
        if ( (v11 & 0x200) != 0 )
        {
          v61 = 0;
        }
        else if ( (v11 & 0x100) != 0 || (unsigned __int8)RtlpFileIsWin32WithRCManifest(FilePath) )
        {
          v61 = 1;
          v77 = 1LL;
        }
        else
        {
          v61 = 0;
        }
        if ( v16 != 1 )
        {
          if ( v16 == 2 )
          {
            RtlpMUIGetAllInstalledLang(v75, &String, &v62);
          }
          else if ( v16 == 3 )
          {
            RtlpMUIEnumerateFolder(v15, &v62, &BaseAddress);
          }
LABEL_30:
          v10 = 0LL;
LABEL_31:
          if ( v16 == 1 )
          {
            if ( String )
              goto LABEL_33;
            ReturnLength[0] = 0;
            RtlGetThreadPreferredUILanguages(0x30u, &NumberOfLanguages, 0LL, ReturnLength);
            if ( !ReturnLength[0] )
              goto LABEL_141;
            v50 = LdrpCalcAllocSize(ReturnLength[0], 2LL);
            if ( !v50 )
            {
              v13 = -1073741675;
LABEL_49:
              if ( BaseAddress )
                RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
              goto LABEL_12;
            }
            v51 = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v50);
            String = v51;
            if ( v51 && RtlGetThreadPreferredUILanguages(0x30u, &NumberOfLanguages, v51, ReturnLength) >= 0 )
            {
LABEL_33:
              v21 = v62;
            }
            else
            {
LABEL_141:
              v21 = v62;
              v10 = v62;
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
              LOBYTE(v60) = v70;
              LOBYTE(v59) = v61;
              v78 = *(_OWORD *)String2;
              MUIRedirectedFilePath = RtlpGetMUIRedirectedFilePath(&v78, v15, FilePart, v76, v59, v60, v73);
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
              RtlpMUIGetAllInstalledLang(v75, &String, &v79);
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
            v21 = v62;
            while ( v10 < v21 )
            {
              if ( !v53 )
                goto LABEL_109;
              if ( !*v53 )
                goto LABEL_109;
              RtlInitUnicodeString((PUNICODE_STRING)String2, v53);
              LOBYTE(v60) = v70;
              LOBYTE(v59) = v61;
              v78 = *(_OWORD *)String2;
              v56 = RtlpGetMUIRedirectedFilePath(&v78, v15, FilePart, v76, v59, v60, v73);
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
          if ( !BaseAddress && !RtlpMUIEnumerateFolder(v15, &v78, &BaseAddress) )
            v10 = v62;
          v29 = 0;
          if ( v10 || (v30 = *v74) == 0 || !v80 )
          {
LABEL_67:
            v32 = (const wchar_t *)BaseAddress;
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
                if ( v10 >= v62 )
                {
                  v21 = v62;
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
              String2[1] = (wchar_t *)v32;
              String2[0] = 0LL;
              if ( v32 )
              {
                v44 = 2 * wcslen(v32);
                if ( v44 >= 0xFFFE )
                  LOWORD(v44) = -4;
                LOWORD(String2[0]) = v44;
                WORD1(String2[0]) = v44 + 2;
              }
              LOBYTE(v60) = v70;
              LOBYTE(v59) = v61;
              v78 = *(_OWORD *)String2;
              v45 = RtlpGetMUIRedirectedFilePath(&v78, v15, FilePart, v76, v59, v60, v73);
              if ( ((v45 + 0x80000000) & 0x80000000) != 0 || v45 == -1073741789 )
                break;
              ++v10;
              v49 = -1LL;
              do
                v28 = v32[++v49] == 0;
              while ( !v28 );
              v32 += v49 + 1;
            }
            v21 = v62;
LABEL_109:
            v46 = v80;
            v24 = v67;
            v47 = (int *)v74;
            if ( !v80 && !v74 )
              goto LABEL_116;
            if ( !v17 )
            {
              if ( !RtlCultureNameToLCID((PUNICODE_STRING)String2, &v71)
                || (int)RtlIntegerToUnicode((unsigned __int16)v71, 16LL, 4294967292LL, SourceString) < 0 )
              {
                RtlInitUnicodeString((PUNICODE_STRING)String2, SourceString);
                goto LABEL_115;
              }
              RtlInitUnicodeString((PUNICODE_STRING)String2, SourceString);
              v24 = v67;
            }
            if ( !v47 )
              goto LABEL_116;
            if ( !v46 )
            {
              *v47 = 85;
LABEL_116:
              if ( !v73 || !v46 && v74 )
              {
                v13 = 0;
LABEL_54:
                if ( v24 )
                  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v24);
                goto LABEL_47;
              }
              v13 = 0;
LABEL_37:
              *v81 = v77 | (((v10 + 1) ^ v21 ^ v77 ^ v11) << 52) ^ 0xCB7000000CB70000uLL | (16
                                                                                          * (v11 | ((v21 | ((v10 + 1) << 12)) << 24) | 0xCB7000));
              v24 = v67;
              goto LABEL_54;
            }
            if ( *v47 > (unsigned int)(LOWORD(String2[0]) >> 1) )
            {
              v48 = LOWORD(String2[0]);
              memmove(v46, String2[1], LOWORD(String2[0]));
              v46[v48 >> 1] = 0;
            }
LABEL_115:
            v24 = v67;
            goto LABEL_116;
          }
          v31 = v80;
          while ( *v31 )
          {
            ++v31;
            if ( !--v30 )
              goto LABEL_67;
          }
          if ( v17 )
          {
            String2[1] = v80;
            HIDWORD(String2[0]) = 0;
            v35 = 2 * wcslen(v80);
            if ( v35 >= 0xFFFE )
              LOWORD(v35) = -4;
            LOWORD(String2[0]) = v35;
            WORD1(String2[0]) = v35 + 2;
            if ( RtlCultureNameToLCID((PUNICODE_STRING)String2, &Lcid) )
            {
              v32 = (const wchar_t *)BaseAddress;
              v29 = 1;
              goto LABEL_68;
            }
            goto LABEL_67;
          }
          *(_DWORD *)(&v79.MaximumLength + 1) = 0;
          v79.Buffer = v80;
          v42 = 2 * wcslen(v80);
          if ( v42 >= 0xFFFE )
            LOWORD(v42) = -4;
          v79.Length = v42;
          v79.MaximumLength = v42 + 2;
          if ( RtlUnicodeStringToInteger(&v79, 0x10u, &Lcid) < 0 )
          {
LABEL_102:
            v32 = (const wchar_t *)BaseAddress;
            goto LABEL_68;
          }
          v43 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
          v67 = v43;
          if ( v43 )
          {
            String2[1] = (wchar_t *)v43;
            LODWORD(String2[0]) = 11141120;
            v29 = RtlLCIDToCultureName(Lcid, (PUNICODE_STRING)String2) != 0;
            goto LABEL_102;
          }
LABEL_47:
          if ( String )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, String);
          goto LABEL_49;
        }
        ReturnLength[0] = 0;
        RtlGetThreadPreferredUILanguages(0x30u, &NumberOfLanguages, 0LL, ReturnLength);
        if ( ReturnLength[0] )
        {
          v18 = LdrpCalcAllocSize(ReturnLength[0], 2LL);
          if ( v18 )
          {
            v19 = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v18);
            String = v19;
            if ( !v19 )
            {
              v13 = -1073741801;
              goto LABEL_47;
            }
            ThreadPreferredUILanguages = RtlGetThreadPreferredUILanguages(0x30u, &NumberOfLanguages, v19, ReturnLength);
            if ( ThreadPreferredUILanguages < 0 )
            {
              v13 = ThreadPreferredUILanguages;
              goto LABEL_47;
            }
            v62 = NumberOfLanguages;
            goto LABEL_30;
          }
          v13 = -1073741675;
        }
LABEL_12:
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v15);
        return v13;
      }
    }
    v13 = -1073741811;
    goto LABEL_12;
  }
  return result;
}
