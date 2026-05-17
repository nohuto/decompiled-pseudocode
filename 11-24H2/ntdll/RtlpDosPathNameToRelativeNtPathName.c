/*
 * XREFs of RtlpDosPathNameToRelativeNtPathName @ 0x180059C40
 * Callers:
 *     RtlGetImageFileMachines @ 0x1800594E0 (RtlGetImageFileMachines.c)
 *     LdrpIsReparsePoint @ 0x180064A20 (LdrpIsReparsePoint.c)
 *     LdrpGetNtPathFromDosPath @ 0x180075ED0 (LdrpGetNtPathFromDosPath.c)
 *     LdrpMapResourceFile @ 0x180076970 (LdrpMapResourceFile.c)
 *     RtlDoesFileExists_UstrEx @ 0x180076D70 (RtlDoesFileExists_UstrEx.c)
 *     RtlDosSearchPath_Ustr @ 0x180076EC0 (RtlDosSearchPath_Ustr.c)
 *     RtlpCreateNewDirectoryReference @ 0x180078610 (RtlpCreateNewDirectoryReference.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180080844 (RtlpFileIsWin32WithRCManifest.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180081558 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x1800821AC (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800B3D70 (EtwpAddLogHeaderToLogFile.c)
 *     RtlDosPathNameToRelativeNtPathName_U_WithStatus @ 0x1800DB430 (RtlDosPathNameToRelativeNtPathName_U_WithStatus.c)
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x1800DBE30 (RtlpDosPathNameToRelativeNtPathName_U.c)
 *     RtlDosPathNameToNtPathName_U_WithStatus @ 0x1800DFC50 (RtlDosPathNameToNtPathName_U_WithStatus.c)
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x1800E26E0 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     RtlDosPathNameToNtPathName_U @ 0x1800E73D0 (RtlDosPathNameToNtPathName_U.c)
 *     RtlpMUIEnumerateFolder @ 0x18010B52C (RtlpMUIEnumerateFolder.c)
 *     LdrAddDllDirectory @ 0x18010C9F0 (LdrAddDllDirectory.c)
 *     LdrpCheckAppDirType @ 0x1801180BC (LdrpCheckAppDirType.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlGetFullPathName_Ustr @ 0x18005BA20 (RtlGetFullPathName_Ustr.c)
 *     RtlpReferenceCurrentDirectory @ 0x180078310 (RtlpReferenceCurrentDirectory.c)
 *     RtlPrefixUnicodeString @ 0x18008AA00 (RtlPrefixUnicodeString.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall RtlpDosPathNameToRelativeNtPathName(
        int a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        _QWORD *a5,
        _QWORD *a6,
        __int64 a7)
{
  unsigned int v7; // eax
  unsigned int v8; // ebx
  _QWORD *v9; // rsi
  unsigned __int16 *v11; // rdi
  _WORD *v13; // rcx
  _BYTE *Heap; // r15
  unsigned int v15; // r13d
  unsigned int FullPathName_Ustr; // eax
  unsigned int v17; // esi
  int v18; // edx
  _WORD *v19; // r14
  __int16 v20; // ax
  __int16 v21; // ax
  int v22; // ecx
  __m128i v23; // xmm1
  __int16 v24; // ax
  const wchar_t *v25; // r9
  unsigned int v26; // r13d
  __int64 v27; // rax
  int v28; // ebp
  const void *v29; // rdx
  size_t v30; // r8
  size_t v31; // r13
  unsigned __int16 v32; // bp
  unsigned int v33; // eax
  __int64 v34; // r8
  char *v35; // rdx
  unsigned __int16 v36; // bp
  unsigned __int64 v37; // r14
  void *v38; // r13
  unsigned __int16 v39; // bp
  unsigned int v40; // eax
  const wchar_t *v41; // r14
  _QWORD *v42; // rcx
  bool v43; // zf
  __int64 v44; // rax
  __int64 v45; // r8
  unsigned __int64 v46; // rbp
  _WORD *v47; // rcx
  __int16 v48; // si
  __int16 v50; // dx
  unsigned int v51; // r15d
  __int64 v52; // rax
  unsigned __int16 v53; // ax
  unsigned __int16 v54; // dx
  unsigned __int64 v55; // rdx
  int v56; // ecx
  unsigned int v57; // eax
  unsigned __int16 v58; // bp
  unsigned __int64 v59; // rcx
  const void *v60; // rdx
  unsigned __int64 v61; // r14
  unsigned __int16 v62; // bp
  unsigned int v63; // eax
  __int16 v64; // ax
  __int16 v65; // ax
  __int16 v66; // ax
  __int16 v67; // ax
  __int16 v68; // ax
  __int16 v69; // ax
  unsigned __int64 v70; // rdx
  _WORD *v71; // rcx
  _WORD *v72; // rax
  char v73[4]; // [rsp+30h] [rbp-2A8h] BYREF
  int v74; // [rsp+34h] [rbp-2A4h]
  __int64 v75; // [rsp+38h] [rbp-2A0h]
  const wchar_t *v76; // [rsp+40h] [rbp-298h]
  _QWORD *v77; // [rsp+48h] [rbp-290h]
  __int64 v78; // [rsp+50h] [rbp-288h]
  __int64 v79; // [rsp+58h] [rbp-280h] BYREF
  __m128i v80; // [rsp+60h] [rbp-278h] BYREF
  void *v81; // [rsp+70h] [rbp-268h]
  _QWORD *v82; // [rsp+78h] [rbp-260h]
  _BYTE v83[528]; // [rsp+80h] [rbp-258h] BYREF

  v7 = *a2;
  v8 = 0;
  v9 = a6;
  v11 = a3;
  v74 = a1;
  v82 = a5;
  v77 = a6;
  v79 = 0LL;
  v73[0] = 0;
  v80 = 0LL;
  if ( v7 <= 8 )
    goto LABEL_4;
  v13 = (_WORD *)*((_QWORD *)a2 + 1);
  if ( *v13 != 92 || (v50 = v13[1], v50 != 92) && v50 != 63 || v13[2] != 63 || v13[3] != 92 )
  {
    LOBYTE(a1) = v74;
LABEL_4:
    if ( a6 )
      *a6 = 0LL;
    Heap = v83;
    v15 = 520;
    if ( (a1 & 1) != 0 )
    {
      v23 = *(__m128i *)a2;
      v19 = (_WORD *)*((_QWORD *)a2 + 1);
      v18 = 2;
      v80 = v23;
      v75 = 4LL;
      LOWORD(v17) = _mm_cvtsi128_si32(v23);
      if ( (unsigned __int16)v17 >= 2u && (*v19 == 92 || *v19 == 47) )
      {
        if ( (unsigned __int16)v17 >= 4u && ((v67 = v19[1], v67 == 92) || v67 == 47) )
        {
          if ( (unsigned __int16)v17 >= 6u && ((v68 = v19[2], v68 == 46) || v68 == 63) )
          {
            if ( (unsigned __int16)v17 >= 8u && ((v69 = v19[3], v69 == 92) || v69 == 47) )
            {
              v22 = 6;
            }
            else
            {
              v22 = 1;
              if ( (_WORD)v17 == 6 )
                v22 = 7;
            }
          }
          else
          {
            v22 = 1;
          }
        }
        else
        {
          v22 = 4;
        }
      }
      else if ( (unsigned __int16)v17 >= 4u && *v19 && v19[1] == 58 )
      {
        if ( (unsigned __int16)v17 >= 6u && ((v24 = v19[2], v24 == 92) || v24 == 47) )
          v22 = 2;
        else
          v22 = 3;
      }
      else
      {
        v22 = 5;
      }
      LODWORD(v79) = v22;
      goto LABEL_29;
    }
    while ( 1 )
    {
      FullPathName_Ustr = RtlGetFullPathName_Ustr(a2, v15, Heap, v9, v73, &v79);
      v17 = FullPathName_Ustr;
      if ( !FullPathName_Ustr || v73[0] )
      {
        v8 = -1073741773;
        goto LABEL_57;
      }
      if ( FullPathName_Ustr <= v15 )
        break;
      if ( (v74 & 4) == 0 && ((v74 & 8) != 0 || (NtCurrentPeb()->BitField & 0x80u) == 0) )
        goto LABEL_90;
      Heap = (_BYTE *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, FullPathName_Ustr);
      if ( !Heap )
        return 3221225495LL;
      v15 = v17;
      v9 = v77;
    }
    v18 = 2;
    v80.m128i_i16[0] = FullPathName_Ustr;
    v80.m128i_i16[1] = v15;
    v80.m128i_i64[1] = (__int64)Heap;
    v19 = Heap;
    v75 = 4LL;
    if ( (unsigned __int16)FullPathName_Ustr < 2u )
      goto LABEL_92;
    v20 = *(_WORD *)Heap;
    if ( *(_WORD *)Heap == 92 || v20 == 47 )
    {
      if ( (unsigned __int16)v17 >= 4u && ((v64 = *((_WORD *)Heap + 1), v64 == 92) || v64 == 47) )
      {
        if ( (unsigned __int16)v17 >= 6u && ((v65 = *((_WORD *)Heap + 2), v65 == 46) || v65 == 63) )
        {
          if ( (unsigned __int16)v17 >= 8u && ((v66 = *((_WORD *)Heap + 3), v66 == 92) || v66 == 47) )
          {
            v22 = 6;
          }
          else
          {
            v22 = 1;
            if ( (_WORD)v17 == 6 )
              v22 = 7;
          }
        }
        else
        {
          v22 = 1;
        }
      }
      else
      {
        v22 = 4;
      }
      goto LABEL_29;
    }
    if ( (unsigned __int16)v17 >= 4u && v20 && *((_WORD *)Heap + 1) == 58 )
    {
      if ( (unsigned __int16)v17 >= 6u && ((v21 = *((_WORD *)Heap + 2), v21 == 92) || v21 == 47) )
        v22 = 2;
      else
        v22 = 3;
    }
    else
    {
LABEL_92:
      v22 = 5;
    }
LABEL_29:
    if ( v22 == 5 )
      goto LABEL_30;
    if ( v22 == 1 )
    {
      v25 = (const wchar_t *)&RtlpDosDevicesUncPrefix;
      LOWORD(v78) = 4;
      v18 = 14;
LABEL_32:
      v26 = v18 + (unsigned __int16)v17;
      v76 = v25;
      if ( v26 > 0xFFFE )
      {
LABEL_90:
        v8 = -1073741562;
        goto LABEL_57;
      }
      if ( v11 )
      {
        if ( v26 <= v11[1] )
        {
LABEL_37:
          v28 = *v25;
          if ( (_WORD)v28 )
          {
            if ( (unsigned int)*v11 + v28 <= v11[1] )
            {
              v29 = (const void *)*((_QWORD *)v25 + 1);
              v30 = *v25;
              v31 = v30;
              v81 = (void *)(*((_QWORD *)v11 + 1) + 2 * ((unsigned __int64)*v11 >> 1));
              memmove(v81, v29, v30);
              v32 = *v11 + v28;
              v33 = v11[1];
              *v11 = v32;
              if ( (unsigned int)v32 + 1 < v33 )
                *((_WORD *)v81 + (v31 >> 1)) = 0;
            }
          }
          v34 = v75;
          v35 = (char *)&v19[(unsigned __int64)v75 / 2];
          v36 = v17 - v78;
          if ( (_WORD)v17 != (_WORD)v78 )
          {
            if ( *v11 + (unsigned int)v36 > v11[1] )
            {
              v34 = v75;
            }
            else
            {
              v37 = v36;
              v38 = (void *)(*((_QWORD *)v11 + 1) + 2 * ((unsigned __int64)*v11 >> 1));
              memmove(v38, v35, v36);
              v39 = *v11 + v36;
              v40 = v11[1];
              v34 = v75;
              *v11 = v39;
              if ( (unsigned int)v39 + 1 < v40 )
                *((_WORD *)v38 + (v37 >> 1)) = 0;
            }
          }
          if ( v82 )
            *v82 = v11;
          v41 = v76;
          *(_WORD *)(*((_QWORD *)v11 + 1) + 2 * ((unsigned __int64)*v11 >> 1)) = 0;
          v42 = v77;
          if ( v77 )
          {
            v35 = (char *)*v77;
            if ( *v77 )
              *v77 = &v35[*((_QWORD *)v11 + 1) + *v41 - v34 - (_QWORD)Heap];
          }
          if ( a7 )
          {
            v43 = (_DWORD)v79 == 5;
            *(_DWORD *)a7 = 0;
            *(_QWORD *)(a7 + 8) = 0LL;
            *(_QWORD *)(a7 + 16) = 0LL;
            *(_QWORD *)(a7 + 24) = 0LL;
            if ( v43 )
            {
              LOBYTE(v42) = 1;
              v44 = RtlpReferenceCurrentDirectory(v42, v35);
              v46 = v44;
              if ( v44 )
              {
                LOBYTE(v45) = 1;
                if ( !(unsigned __int8)RtlPrefixUnicodeString(v44 + 24, &v80, v45) )
                  goto LABEL_127;
                v47 = (_WORD *)(*(unsigned __int16 *)(v46 + 24) + *v41 + *((_QWORD *)v11 + 1) - v75);
                *(_QWORD *)(a7 + 8) = v47;
                v48 = v17 - *(_WORD *)(v46 + 24);
                *(_WORD *)a7 = v48;
                if ( *v47 == 92 )
                {
                  v48 -= 2;
                  *(_WORD *)a7 = v48;
                  *(_QWORD *)(a7 + 8) = v47 + 1;
                }
                v43 = (v74 & 2) == 0;
                *(_WORD *)(a7 + 2) = v48;
                if ( v43 )
                {
LABEL_127:
                  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v46, 0xFFFFFFFF) == 1 )
                  {
                    NtClose(*(HANDLE *)(v46 + 8));
                    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v46);
                  }
                }
                else
                {
                  *(_QWORD *)(a7 + 24) = v46;
                  *(_QWORD *)(a7 + 16) = *(_QWORD *)(v46 + 8);
                }
              }
              else
              {
                RtlLeaveCriticalSection((__int64)&FastPebLock);
              }
            }
          }
          goto LABEL_57;
        }
        if ( !a4 )
        {
          v8 = -1073741562;
          goto LABEL_57;
        }
      }
      else if ( !a4 )
      {
        v8 = -1073741811;
        goto LABEL_57;
      }
      v27 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v26);
      *((_QWORD *)a4 + 1) = v27;
      if ( v27 )
      {
        v19 = (_WORD *)v80.m128i_i64[1];
        v11 = a4;
        LOWORD(v17) = v80.m128i_i16[0];
        v25 = v76;
        *a4 = 0;
        a4[1] = v26;
        goto LABEL_37;
      }
      v8 = -1073741801;
LABEL_57:
      if ( Heap != v83 )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
      return v8;
    }
    if ( v22 != 6 )
    {
LABEL_30:
      LOWORD(v78) = 0;
      v18 = 10;
      v75 = 0LL;
    }
    else
    {
      v78 = 8LL;
      v75 = 8LL;
    }
    v25 = L"\b\n";
    goto LABEL_32;
  }
  v51 = v7 + 2;
  if ( v7 + 2 > 0xFFFE )
    return (unsigned int)-1073741562;
  if ( !a3 )
  {
    if ( !a4 )
      return (unsigned int)-1073741811;
    goto LABEL_68;
  }
  if ( v51 <= a3[1] )
  {
    v53 = *a3;
    goto LABEL_70;
  }
  if ( !a4 )
    return (unsigned int)-1073741562;
LABEL_68:
  v52 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v51);
  *((_QWORD *)a4 + 1) = v52;
  if ( v52 )
  {
    *a4 = 0;
    v11 = a4;
    a4[1] = v51;
    v53 = 0;
LABEL_70:
    v54 = v53;
    if ( (unsigned int)v53 + 8 <= v11[1] )
    {
      v55 = *((_QWORD *)v11 + 1) + 2 * ((unsigned __int64)v53 >> 1);
      *(_QWORD *)v55 = *(_QWORD *)L"\\??\\";
      v56 = (unsigned __int16)(*v11 + 8);
      v57 = v11[1];
      *v11 = v56;
      if ( v56 + 1 < v57 )
        *(_WORD *)(v55 + 8) = 0;
      v54 = *v11;
    }
    v58 = *(_DWORD *)a2 - 8;
    if ( (unsigned __int16)*(_DWORD *)a2 != 8 && v58 + (unsigned int)v54 <= v11[1] )
    {
      v59 = v54;
      v60 = (const void *)(*((_QWORD *)a2 + 1) + 8LL);
      v61 = v58;
      v77 = (_QWORD *)(*((_QWORD *)v11 + 1) + 2 * (v59 >> 1));
      memmove(v77, v60, v58);
      v62 = *v11 + v58;
      v63 = v11[1];
      *v11 = v62;
      if ( (unsigned int)v62 + 1 < v63 )
        *((_WORD *)v77 + (v61 >> 1)) = 0;
    }
    if ( a5 )
      *a5 = v11;
    *(_WORD *)(*((_QWORD *)v11 + 1) + 2 * ((unsigned __int64)*v11 >> 1)) = 0;
    if ( a6 )
    {
      v70 = *((_QWORD *)v11 + 1);
      v71 = (_WORD *)(v70 + 2 * ((unsigned __int64)*v11 >> 1));
      while ( 1 )
      {
        v72 = v71--;
        if ( (unsigned __int64)v71 < v70 )
          break;
        if ( *v71 == 92 )
        {
          if ( v72 && *v72 )
          {
            *a6 = v72;
            goto LABEL_81;
          }
          break;
        }
      }
      *a6 = 0LL;
    }
LABEL_81:
    if ( a7 )
    {
      *(_DWORD *)a7 = 0;
      *(_QWORD *)(a7 + 8) = 0LL;
      *(_QWORD *)(a7 + 16) = 0LL;
      *(_QWORD *)(a7 + 24) = 0LL;
    }
    return v8;
  }
  return (unsigned int)-1073741801;
}
