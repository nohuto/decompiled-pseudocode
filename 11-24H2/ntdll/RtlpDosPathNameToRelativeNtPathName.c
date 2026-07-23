/*
 * XREFs of RtlpDosPathNameToRelativeNtPathName @ 0x18006F820
 * Callers:
 *     RtlpMUIEnumerateFolder @ 0x180001138 (RtlpMUIEnumerateFolder.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x1800026C0 (RtlpFileIsWin32WithRCManifest.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x1800033D8 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x18000402C (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlGetImageFileMachines @ 0x18006F0C0 (RtlGetImageFileMachines.c)
 *     LdrpIsReparsePoint @ 0x18007A600 (LdrpIsReparsePoint.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180080610 (EtwpAddLogHeaderToLogFile.c)
 *     LdrpGetNtPathFromDosPath @ 0x1800927B0 (LdrpGetNtPathFromDosPath.c)
 *     LdrpMapResourceFile @ 0x180093250 (LdrpMapResourceFile.c)
 *     RtlDoesFileExists_UstrEx @ 0x180093650 (RtlDoesFileExists_UstrEx.c)
 *     RtlDosSearchPath_Ustr @ 0x1800937A0 (RtlDosSearchPath_Ustr.c)
 *     RtlpCreateNewDirectoryReference @ 0x180094EF0 (RtlpCreateNewDirectoryReference.c)
 *     RtlDosPathNameToRelativeNtPathName_U_WithStatus @ 0x1800D5990 (RtlDosPathNameToRelativeNtPathName_U_WithStatus.c)
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x1800D6F10 (RtlpDosPathNameToRelativeNtPathName_U.c)
 *     RtlDosPathNameToNtPathName_U_WithStatus @ 0x1800DADC0 (RtlDosPathNameToNtPathName_U_WithStatus.c)
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x1800DDCB0 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     RtlDosPathNameToNtPathName_U @ 0x1800E2880 (RtlDosPathNameToNtPathName_U.c)
 *     LdrAddDllDirectory @ 0x180107730 (LdrAddDllDirectory.c)
 *     LdrpCheckAppDirType @ 0x180113030 (LdrpCheckAppDirType.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlGetFullPathName_Ustr @ 0x180071600 (RtlGetFullPathName_Ustr.c)
 *     RtlpReferenceCurrentDirectory @ 0x180094BF0 (RtlpReferenceCurrentDirectory.c)
 *     RtlPrefixUnicodeString @ 0x1800A64C0 (RtlPrefixUnicodeString.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memmove @ 0x1801657C0 (memmove.c)
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
  wchar_t *Heap; // r15
  unsigned int v15; // r13d
  unsigned int v16; // eax
  unsigned int v17; // esi
  int v18; // edx
  wchar_t *v19; // r14
  wchar_t v20; // ax
  wchar_t v21; // ax
  int v22; // ecx
  _UNICODE_STRING v23; // xmm1
  wchar_t v24; // ax
  const _UNICODE_STRING *v25; // r9
  unsigned int v26; // r13d
  PVOID v27; // rax
  int Length; // ebp
  wchar_t *Buffer; // rdx
  size_t v30; // r8
  size_t v31; // r13
  unsigned __int16 v32; // bp
  unsigned int v33; // eax
  __int64 v34; // r8
  wchar_t *v35; // rdx
  unsigned __int16 v36; // bp
  unsigned __int64 v37; // r14
  void *v38; // r13
  unsigned __int16 v39; // bp
  unsigned int v40; // eax
  const _UNICODE_STRING *v41; // r14
  _QWORD *v42; // rcx
  bool v43; // zf
  __int64 v44; // rax
  __int64 v45; // rbp
  _WORD *v46; // rcx
  __int16 v47; // si
  __int16 v49; // dx
  unsigned int v50; // r15d
  PVOID v51; // rax
  unsigned __int16 v52; // ax
  unsigned __int16 v53; // dx
  unsigned __int64 v54; // rdx
  int v55; // ecx
  unsigned int v56; // eax
  unsigned __int16 v57; // bp
  unsigned __int64 v58; // rcx
  const void *v59; // rdx
  unsigned __int64 v60; // r14
  unsigned __int16 v61; // bp
  unsigned int v62; // eax
  wchar_t v63; // ax
  wchar_t v64; // ax
  wchar_t v65; // ax
  wchar_t v66; // ax
  wchar_t v67; // ax
  wchar_t v68; // ax
  unsigned __int64 v69; // rdx
  _WORD *v70; // rcx
  _WORD *v71; // rax
  char v72[4]; // [rsp+30h] [rbp-2A8h] BYREF
  int v73; // [rsp+34h] [rbp-2A4h]
  __int64 v74; // [rsp+38h] [rbp-2A0h]
  const _UNICODE_STRING *v75; // [rsp+40h] [rbp-298h]
  _QWORD *v76; // [rsp+48h] [rbp-290h]
  __int64 v77; // [rsp+50h] [rbp-288h]
  __int64 v78; // [rsp+58h] [rbp-280h] BYREF
  _UNICODE_STRING String2; // [rsp+60h] [rbp-278h] BYREF
  void *v80; // [rsp+70h] [rbp-268h]
  _QWORD *v81; // [rsp+78h] [rbp-260h]
  _BYTE BaseAddress[528]; // [rsp+80h] [rbp-258h] BYREF

  v7 = *a2;
  v8 = 0;
  v9 = a6;
  v11 = a3;
  v73 = a1;
  v81 = a5;
  v76 = a6;
  v78 = 0LL;
  v72[0] = 0;
  String2 = 0LL;
  if ( v7 <= 8 )
    goto LABEL_4;
  v13 = (_WORD *)*((_QWORD *)a2 + 1);
  if ( *v13 != 92 || (v49 = v13[1], v49 != 92) && v49 != 63 || v13[2] != 63 || v13[3] != 92 )
  {
    LOBYTE(a1) = v73;
LABEL_4:
    if ( a6 )
      *a6 = 0LL;
    Heap = (wchar_t *)BaseAddress;
    v15 = 520;
    if ( (a1 & 1) != 0 )
    {
      v23 = *(_UNICODE_STRING *)a2;
      v19 = (wchar_t *)*((_QWORD *)a2 + 1);
      v18 = 2;
      String2 = v23;
      v74 = 4LL;
      LOWORD(v17) = _mm_cvtsi128_si32((__m128i)v23);
      if ( (unsigned __int16)v17 >= 2u && (*v19 == 92 || *v19 == 47) )
      {
        if ( (unsigned __int16)v17 >= 4u && ((v66 = v19[1], v66 == 92) || v66 == 47) )
        {
          if ( (unsigned __int16)v17 >= 6u && ((v67 = v19[2], v67 == 46) || v67 == 63) )
          {
            if ( (unsigned __int16)v17 >= 8u && ((v68 = v19[3], v68 == 92) || v68 == 47) )
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
      LODWORD(v78) = v22;
      goto LABEL_29;
    }
    while ( 1 )
    {
      v16 = ((__int64 (__fastcall *)(unsigned __int16 *, _QWORD, wchar_t *, _QWORD *, char *, __int64 *))RtlGetFullPathName_Ustr)(
              a2,
              v15,
              Heap,
              v9,
              v72,
              &v78);
      v17 = v16;
      if ( !v16 || v72[0] )
      {
        v8 = -1073741773;
        goto LABEL_57;
      }
      if ( v16 <= v15 )
        break;
      if ( (v73 & 4) == 0 && ((v73 & 8) != 0 || (NtCurrentPeb()->BitField & 0x80u) == 0) )
        goto LABEL_90;
      Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v16);
      if ( !Heap )
        return 3221225495LL;
      v15 = v17;
      v9 = v76;
    }
    v18 = 2;
    String2.Length = v16;
    String2.MaximumLength = v15;
    String2.Buffer = Heap;
    v19 = Heap;
    v74 = 4LL;
    if ( (unsigned __int16)v16 < 2u )
      goto LABEL_92;
    v20 = *Heap;
    if ( *Heap == 92 || v20 == 47 )
    {
      if ( (unsigned __int16)v17 >= 4u && ((v63 = Heap[1], v63 == 92) || v63 == 47) )
      {
        if ( (unsigned __int16)v17 >= 6u && ((v64 = Heap[2], v64 == 46) || v64 == 63) )
        {
          if ( (unsigned __int16)v17 >= 8u && ((v65 = Heap[3], v65 == 92) || v65 == 47) )
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
    if ( (unsigned __int16)v17 >= 4u && v20 && Heap[1] == 58 )
    {
      if ( (unsigned __int16)v17 >= 6u && ((v21 = Heap[2], v21 == 92) || v21 == 47) )
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
      v25 = &RtlpDosDevicesUncPrefix;
      LOWORD(v77) = 4;
      v18 = 14;
LABEL_32:
      v26 = v18 + (unsigned __int16)v17;
      v75 = v25;
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
          Length = v25->Length;
          if ( (_WORD)Length )
          {
            if ( (unsigned int)*v11 + Length <= v11[1] )
            {
              Buffer = v25->Buffer;
              v30 = v25->Length;
              v31 = v30;
              v80 = (void *)(*((_QWORD *)v11 + 1) + 2 * ((unsigned __int64)*v11 >> 1));
              memmove(v80, Buffer, v30);
              v32 = *v11 + Length;
              v33 = v11[1];
              *v11 = v32;
              if ( (unsigned int)v32 + 1 < v33 )
                *((_WORD *)v80 + (v31 >> 1)) = 0;
            }
          }
          v34 = v74;
          v35 = &v19[(unsigned __int64)v74 / 2];
          v36 = v17 - v77;
          if ( (_WORD)v17 != (_WORD)v77 )
          {
            if ( *v11 + (unsigned int)v36 > v11[1] )
            {
              v34 = v74;
            }
            else
            {
              v37 = v36;
              v38 = (void *)(*((_QWORD *)v11 + 1) + 2 * ((unsigned __int64)*v11 >> 1));
              memmove(v38, v35, v36);
              v39 = *v11 + v36;
              v40 = v11[1];
              v34 = v74;
              *v11 = v39;
              if ( (unsigned int)v39 + 1 < v40 )
                *((_WORD *)v38 + (v37 >> 1)) = 0;
            }
          }
          if ( v81 )
            *v81 = v11;
          v41 = v75;
          *(_WORD *)(*((_QWORD *)v11 + 1) + 2 * ((unsigned __int64)*v11 >> 1)) = 0;
          v42 = v76;
          if ( v76 )
          {
            v35 = (wchar_t *)*v76;
            if ( *v76 )
              *v76 = (char *)v35 + *((_QWORD *)v11 + 1) + v41->Length - v34 - (_QWORD)Heap;
          }
          if ( a7 )
          {
            v43 = (_DWORD)v78 == 5;
            *(_DWORD *)a7 = 0;
            *(_QWORD *)(a7 + 8) = 0LL;
            *(_QWORD *)(a7 + 16) = 0LL;
            *(_QWORD *)(a7 + 24) = 0LL;
            if ( v43 )
            {
              LOBYTE(v42) = 1;
              v44 = RtlpReferenceCurrentDirectory(v42, v35);
              v45 = v44;
              if ( v44 )
              {
                if ( !RtlPrefixUnicodeString((PUNICODE_STRING)(v44 + 24), &String2, 1u) )
                  goto LABEL_127;
                v46 = (_WORD *)(*(unsigned __int16 *)(v45 + 24) + v41->Length + *((_QWORD *)v11 + 1) - v74);
                *(_QWORD *)(a7 + 8) = v46;
                v47 = v17 - *(_WORD *)(v45 + 24);
                *(_WORD *)a7 = v47;
                if ( *v46 == 92 )
                {
                  v47 -= 2;
                  *(_WORD *)a7 = v47;
                  *(_QWORD *)(a7 + 8) = v46 + 1;
                }
                v43 = (v73 & 2) == 0;
                *(_WORD *)(a7 + 2) = v47;
                if ( v43 )
                {
LABEL_127:
                  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v45, 0xFFFFFFFF) == 1 )
                  {
                    NtClose(*(HANDLE *)(v45 + 8));
                    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v45);
                  }
                }
                else
                {
                  *(_QWORD *)(a7 + 24) = v45;
                  *(_QWORD *)(a7 + 16) = *(_QWORD *)(v45 + 8);
                }
              }
              else
              {
                RtlLeaveCriticalSection(&FastPebLock);
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
      v27 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v26);
      *((_QWORD *)a4 + 1) = v27;
      if ( v27 )
      {
        v19 = String2.Buffer;
        v11 = a4;
        LOWORD(v17) = String2.Length;
        v25 = v75;
        *a4 = 0;
        a4[1] = v26;
        goto LABEL_37;
      }
      v8 = -1073741801;
LABEL_57:
      if ( Heap != (wchar_t *)BaseAddress )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      return v8;
    }
    if ( v22 != 6 )
    {
LABEL_30:
      LOWORD(v77) = 0;
      v18 = 10;
      v74 = 0LL;
    }
    else
    {
      v77 = 8LL;
      v74 = 8LL;
    }
    v25 = &RtlpDosDevicesPrefix;
    goto LABEL_32;
  }
  v50 = v7 + 2;
  if ( v7 + 2 > 0xFFFE )
    return (unsigned int)-1073741562;
  if ( !a3 )
  {
    if ( !a4 )
      return (unsigned int)-1073741811;
    goto LABEL_68;
  }
  if ( v50 <= a3[1] )
  {
    v52 = *a3;
    goto LABEL_70;
  }
  if ( !a4 )
    return (unsigned int)-1073741562;
LABEL_68:
  v51 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v50);
  *((_QWORD *)a4 + 1) = v51;
  if ( v51 )
  {
    *a4 = 0;
    v11 = a4;
    a4[1] = v50;
    v52 = 0;
LABEL_70:
    v53 = v52;
    if ( (unsigned int)v52 + 8 <= v11[1] )
    {
      v54 = *((_QWORD *)v11 + 1) + 2 * ((unsigned __int64)v52 >> 1);
      *(_QWORD *)v54 = *(_QWORD *)RtlpDosDevicesPrefix.Buffer;
      v55 = (unsigned __int16)(*v11 + 8);
      v56 = v11[1];
      *v11 = v55;
      if ( v55 + 1 < v56 )
        *(_WORD *)(v54 + 8) = 0;
      v53 = *v11;
    }
    v57 = *(_DWORD *)a2 - 8;
    if ( (unsigned __int16)*(_DWORD *)a2 != 8 && v57 + (unsigned int)v53 <= v11[1] )
    {
      v58 = v53;
      v59 = (const void *)(*((_QWORD *)a2 + 1) + 8LL);
      v60 = v57;
      v76 = (_QWORD *)(*((_QWORD *)v11 + 1) + 2 * (v58 >> 1));
      memmove(v76, v59, v57);
      v61 = *v11 + v57;
      v62 = v11[1];
      *v11 = v61;
      if ( (unsigned int)v61 + 1 < v62 )
        *((_WORD *)v76 + (v60 >> 1)) = 0;
    }
    if ( a5 )
      *a5 = v11;
    *(_WORD *)(*((_QWORD *)v11 + 1) + 2 * ((unsigned __int64)*v11 >> 1)) = 0;
    if ( a6 )
    {
      v69 = *((_QWORD *)v11 + 1);
      v70 = (_WORD *)(v69 + 2 * ((unsigned __int64)*v11 >> 1));
      while ( 1 )
      {
        v71 = v70--;
        if ( (unsigned __int64)v70 < v69 )
          break;
        if ( *v70 == 92 )
        {
          if ( v71 && *v71 )
          {
            *a6 = v71;
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
