/*
 * XREFs of LdrpPreprocessDllName @ 0x1800161D0
 * Callers:
 *     LdrpFindLoadedDll @ 0x1800492A0 (LdrpFindLoadedDll.c)
 *     LdrpLoadDll @ 0x18004A090 (LdrpLoadDll.c)
 *     LdrpLoadForwardedDll @ 0x18004A820 (LdrpLoadForwardedDll.c)
 *     LdrLoadEnclaveModule @ 0x1800D8840 (LdrLoadEnclaveModule.c)
 *     LdrpEnclaveAddDependentModule @ 0x180134834 (LdrpEnclaveAddDependentModule.c)
 *     LdrpAddRedirectedFunction @ 0x1801621C4 (LdrpAddRedirectedFunction.c)
 * Callees:
 *     LdrpLogEtwEvent @ 0x180006960 (LdrpLogEtwEvent.c)
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     ApiSetResolveToHost @ 0x180016CA0 (ApiSetResolveToHost.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x180016E20 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     RtlGetFullPathName_Ustr @ 0x180017680 (RtlGetFullPathName_Ustr.c)
 *     RtlpAllocateAtom @ 0x18004C160 (RtlpAllocateAtom.c)
 *     LdrpGetFullPath @ 0x180070F10 (LdrpGetFullPath.c)
 *     LdrpLogDllState @ 0x180071900 (LdrpLogDllState.c)
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x1800A3370 (RtlDetermineDosPathNameType_Ustr.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x1800CBB70 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     NtdllpReallocateStringRoutine @ 0x1801204A8 (NtdllpReallocateStringRoutine.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall LdrpPreprocessDllName(unsigned __int16 *a1, _UNICODE_STRING *a2, __int64 a3, int *a4)
{
  int *v4; // r12
  char v5; // si
  unsigned __int16 *v7; // r15
  int FullPath; // ebx
  int v9; // ebx
  struct _PEB *v10; // r13
  char v11; // r14
  __int64 v12; // rsi
  void *ApiSetMap; // r15
  _DWORD *SharedData; // rcx
  __int64 v15; // rcx
  __int64 v16; // r12
  _DWORD *v17; // rcx
  unsigned __int16 *v18; // rsi
  _DWORD *v19; // rcx
  __int64 v20; // rsi
  size_t v21; // rax
  unsigned __int16 v22; // dx
  unsigned __int16 v23; // bx
  unsigned int v24; // edx
  unsigned __int16 v25; // bx
  wchar_t *Buffer; // rax
  unsigned __int16 *p_MaximumLength; // r14
  unsigned int v28; // ecx
  const void **p_Buffer; // r15
  char *v30; // rdx
  unsigned __int64 v31; // rcx
  wchar_t *v32; // rax
  size_t v33; // rsi
  unsigned int v34; // edx
  const void **v35; // r14
  unsigned __int16 v36; // si
  _WORD *v37; // rax
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  _UNICODE_STRING *v39; // rdx
  _DWORD *v40; // rcx
  __int16 v41; // cx
  _UNICODE_STRING *v42; // r14
  unsigned __int64 v43; // rdx
  _WORD *v44; // rax
  int v45; // eax
  unsigned int v46; // edx
  unsigned __int64 v47; // rcx
  wchar_t *v48; // rax
  unsigned __int64 v49; // rdx
  __int16 *v50; // rax
  __int16 v51; // cx
  unsigned int v52; // ecx
  unsigned __int64 v53; // rcx
  wchar_t *v54; // rax
  unsigned __int64 v55; // rcx
  __int64 Length; // rdx
  _WORD *i; // rax
  const char *v59; // rax
  int v60; // eax
  NTSTATUS v61; // r14d
  __int64 FullPathName_Ustr; // rbx
  unsigned int v63; // ebx
  void *v64; // rsi
  unsigned int v65; // r14d
  void *v66; // r12
  wchar_t *v67; // rsi
  unsigned __int16 *v68; // rcx
  unsigned int v69; // r15d
  __int64 v70; // rax
  void *Atom; // r14
  unsigned int v72; // ebx
  void *v73; // rsi
  char *v74; // rcx
  unsigned int v75; // r14d
  void *v76; // rsi
  PULONG NewFlags; // [rsp+30h] [rbp-39h]
  char v78; // [rsp+50h] [rbp-19h] BYREF
  char v79; // [rsp+51h] [rbp-18h]
  __int128 v80; // [rsp+58h] [rbp-11h] BYREF
  void *Src[2]; // [rsp+68h] [rbp-1h] BYREF
  _UNICODE_STRING DynamicString; // [rsp+78h] [rbp+Fh] BYREF

  v4 = a4;
  v5 = 0;
  v7 = a1;
  FullPath = 0;
  if ( (*a4 & 0x800008) == 0 )
  {
    v78 = 0;
    v79 = 0;
    v9 = a3 + 88;
    DynamicString = 0LL;
    v10 = NtCurrentPeb();
    if ( !a3 )
      v9 = 0;
    v11 = 1;
    *(_OWORD *)Src = 0LL;
    v12 = 2147353476LL;
    ApiSetMap = v10->ApiSetMap;
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v15 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v15 = 2147353476LL;
    v16 = 2147353477LL;
    if ( *(_BYTE *)v15 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v74 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
      if ( (*v74 & 0x20) != 0 )
        LdrpLogEtwEvent(5328, 0LL, 0, 0, a1, 0LL);
    }
    FullPath = ApiSetResolveToHost((_DWORD)ApiSetMap, (_DWORD)a1, v9, (unsigned int)&v78, (__int64)Src);
    if ( FullPath >= 0 && v78 )
    {
      if ( !LOWORD(Src[0]) )
      {
        v18 = a1;
        LdrpLogDllState(0LL, a1, 5330LL);
        goto LABEL_13;
      }
      v40 = NtCurrentPeb()->SharedData;
      if ( v40 && *v40 )
        v12 = (__int64)NtCurrentPeb()->SharedData + 554;
      if ( *(_BYTE *)v12 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v16 = (__int64)NtCurrentPeb()->SharedData + 555;
        v18 = a1;
        if ( (*(_BYTE *)v16 & 0x20) != 0 )
        {
          v41 = 5329;
LABEL_158:
          LdrpLogEtwEvent(v41, 0LL, 0, 0, v18, 0LL);
          goto LABEL_13;
        }
        goto LABEL_13;
      }
    }
    else
    {
      v17 = NtCurrentPeb()->SharedData;
      if ( v17 && *v17 )
        v12 = (__int64)NtCurrentPeb()->SharedData + 554;
      if ( *(_BYTE *)v12 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v16 = (__int64)NtCurrentPeb()->SharedData + 555;
        v18 = a1;
        if ( (*(_BYTE *)v16 & 0x20) != 0 )
        {
          v41 = 5331;
          goto LABEL_158;
        }
LABEL_13:
        if ( !v78 )
        {
          v39 = (_UNICODE_STRING *)v18;
          if ( FullPath < 0 )
            goto LABEL_43;
          goto LABEL_75;
        }
        if ( !LOWORD(Src[0]) )
        {
          FullPath = -1073740671;
          goto LABEL_43;
        }
        a2->Length = 0;
        v19 = NtCurrentPeb()->SharedData;
        if ( v19 && *v19 )
          v20 = (__int64)NtCurrentPeb()->SharedData + 30;
        else
          v20 = 2147352624LL;
        LOWORD(v21) = 0;
        v22 = 0;
        v80 = 0LL;
        if ( v20 )
        {
          v21 = 2 * wcslen((const wchar_t *)v20);
          a3 = 65534LL;
          if ( v21 >= 0xFFFE )
            LOWORD(v21) = -4;
          v23 = v21;
          v22 = v21;
        }
        else
        {
          v23 = v80;
          a3 = 65534LL;
        }
        if ( (_WORD)v21 )
        {
          v24 = a2->Length + 2 + v22;
          if ( v24 <= a2->MaximumLength )
          {
LABEL_23:
            memmove((char *)a2->Buffer + a2->Length, (const void *)v20, v23);
            v25 = a2->Length + v23;
            Buffer = a2->Buffer;
            a2->Length = v25;
            Buffer[(unsigned __int64)v25 >> 1] = 0;
            goto LABEL_24;
          }
          if ( v24 <= 0xFFFE )
          {
            v69 = (v24 + 63) & 0xFFFFFFC0;
            if ( v69 > 0xFFFE )
              v69 = 65534;
            if ( (_UNICODE_STRING *)a2->Buffer == &a2[1] )
            {
              Atom = (void *)RtlpAllocateAtom(v69);
              if ( Atom )
              {
                if ( a2->Length )
                  memmove(Atom, a2->Buffer, a2->Length);
                a2->Buffer = (wchar_t *)Atom;
                a2->MaximumLength = v69;
                goto LABEL_23;
              }
            }
            else
            {
              v70 = NtdllpReallocateStringRoutine(v69);
              if ( v70 )
              {
                a2->Buffer = (wchar_t *)v70;
                a2->MaximumLength = v69;
                goto LABEL_23;
              }
            }
          }
        }
LABEL_24:
        p_MaximumLength = &a2->MaximumLength;
        v28 = a2->Length + 22;
        if ( v28 <= a2->MaximumLength )
        {
LABEL_25:
          p_Buffer = (const void **)&a2->Buffer;
          v30 = (char *)a2->Buffer + a2->Length;
          *(_OWORD *)v30 = *(_OWORD *)SlashSystem32SlashString.Buffer;
          *((_DWORD *)v30 + 4) = *((_DWORD *)SlashSystem32SlashString.Buffer + 4);
          v31 = (unsigned __int16)(a2->Length + 20);
          v32 = a2->Buffer;
          a2->Length = v31;
          v32[v31 >> 1] = 0;
          goto LABEL_26;
        }
        if ( v28 > 0xFFFE )
        {
          p_Buffer = (const void **)&a2->Buffer;
        }
        else
        {
          v72 = (a2->Length + 85) & 0xFFFFFFC0;
          if ( v72 > 0xFFFE )
          {
            v72 = 65534;
            p_MaximumLength = &a2->MaximumLength;
          }
          p_Buffer = (const void **)&a2->Buffer;
          if ( (_UNICODE_STRING *)a2->Buffer != &a2[1] )
          {
            v73 = (void *)NtdllpReallocateStringRoutine(v72);
            if ( !v73 )
            {
              p_Buffer = (const void **)&a2->Buffer;
              p_MaximumLength = &a2->MaximumLength;
              goto LABEL_26;
            }
LABEL_146:
            *p_Buffer = v73;
            p_MaximumLength = &a2->MaximumLength;
            a2->MaximumLength = v72;
            goto LABEL_25;
          }
          v73 = (void *)RtlpAllocateAtom(v72);
          if ( v73 )
          {
            if ( a2->Length )
              memmove(v73, *p_Buffer, a2->Length);
            goto LABEL_146;
          }
        }
LABEL_26:
        v33 = LOWORD(Src[0]);
        FullPath = 0;
        v34 = a2->Length + LOWORD(Src[0]) + 2;
        if ( v34 <= *p_MaximumLength )
        {
          v35 = p_Buffer;
LABEL_28:
          memmove((char *)*v35 + a2->Length, Src[1], v33);
          v36 = a2->Length + v33;
          v37 = *v35;
          a2->Length = v36;
          v37[(unsigned __int64)v36 >> 1] = 0;
          ProcessParameters = v10->ProcessParameters;
          if ( ProcessParameters && (ProcessParameters->Flags & 0x1000) != 0 )
          {
            v11 = 1;
            v39 = a2;
          }
          else
          {
            v11 = 0;
            v39 = a2;
          }
LABEL_75:
          if ( !v11 || LdrpIsSecureProcess )
            goto LABEL_43;
          v61 = RtlDosApplyFileIsolationRedirection_Ustr(
                  1u,
                  v39,
                  (PUNICODE_STRING)&LdrpDefaultExtension,
                  0LL,
                  &DynamicString,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
          if ( v61 >= 0 )
          {
            v79 = 1;
            Src[0] = 0LL;
            v78 = 0;
            *(_QWORD *)&v80 = 0LL;
            while ( 1 )
            {
              FullPathName_Ustr = (unsigned int)RtlGetFullPathName_Ustr(
                                                  &DynamicString,
                                                  a2->MaximumLength,
                                                  a2->Buffer,
                                                  Src,
                                                  &v78,
                                                  &v80);
              if ( v78
                || (unsigned int)(FullPathName_Ustr - 1) > 0xFFFD
                || (_DWORD)v80 == 5 && (DWORD1(v80) & LdrpIllegalCWDDevices) != 0 )
              {
                break;
              }
              if ( (unsigned int)FullPathName_Ustr < a2->MaximumLength )
              {
                a2->Length = FullPathName_Ustr;
                break;
              }
              v67 = (wchar_t *)RtlpAllocateAtom(FullPathName_Ustr);
              if ( !v67 )
                break;
              v68 = a2->Buffer;
              if ( &a2[1] != (_UNICODE_STRING *)v68 )
                RtlpSysVolFree(v68);
              a2[1].Length = 0;
              a2->Buffer = v67;
              a2->Length = 0;
              a2->MaximumLength = FullPathName_Ustr;
              *v67 = 0;
            }
            if ( DynamicString.Buffer )
              RtlpSysVolFree(DynamicString.Buffer);
            goto LABEL_42;
          }
          v79 = 0;
          if ( v61 != -1072365560 )
LABEL_42:
            FullPath = v61;
LABEL_43:
          v7 = a1;
          if ( FullPath < 0 )
            goto LABEL_91;
          v5 = v79;
          v4 = a4;
          goto LABEL_45;
        }
        if ( v34 > 0xFFFE )
        {
          FullPath = -1073741562;
          goto LABEL_43;
        }
        v65 = (v34 + 63) & 0xFFFFFFC0;
        if ( v65 > 0xFFFE )
        {
          v65 = 65534;
          p_Buffer = (const void **)&a2->Buffer;
        }
        if ( *p_Buffer == &a2[1] )
        {
          v66 = (void *)RtlpAllocateAtom(v65);
          if ( !v66 )
            goto LABEL_109;
          if ( a2->Length )
            memmove(v66, *p_Buffer, a2->Length);
        }
        else
        {
          v66 = (void *)NtdllpReallocateStringRoutine(v65);
          if ( !v66 )
          {
LABEL_109:
            FullPath = -1073741801;
            goto LABEL_43;
          }
        }
        *p_Buffer = v66;
        a2->MaximumLength = v65;
        v35 = (const void **)&a2->Buffer;
        goto LABEL_28;
      }
    }
    v18 = a1;
    goto LABEL_13;
  }
LABEL_45:
  v42 = (_UNICODE_STRING *)v7;
  if ( a2->Length )
  {
    v59 = "SxS";
    if ( !v5 )
      v59 = "API set";
    LdrpLogInternal(
      "minkernel\\ldr\\ldrutil.c",
      2792LL,
      "LdrpPreprocessDllName",
      2LL,
      "DLL %wZ was redirected to %wZ by %s\n",
      v7,
      a2,
      v59);
    v60 = *v4 | 0x200;
    *v4 = v60;
    if ( v5 )
      *v4 = v60 | 4;
    v42 = a2;
    goto LABEL_56;
  }
  v43 = *((_QWORD *)v7 + 1);
  v44 = (_WORD *)(v43 + *v7);
  do
  {
    if ( (unsigned __int64)--v44 < v43 )
    {
      *v4 |= 0x20u;
      FullPath = 0;
      v45 = *v7;
      if ( !(_WORD)v45 )
        goto LABEL_56;
      v46 = v45 + a2->Length + 2;
      if ( v46 <= a2->MaximumLength )
        goto LABEL_55;
      if ( v46 > 0xFFFE )
      {
        FullPath = -1073741562;
        goto LABEL_56;
      }
      v63 = (v46 + 63) & 0xFFFFFFC0;
      if ( v63 > 0xFFFE )
        v63 = 65534;
      if ( (_UNICODE_STRING *)a2->Buffer == &a2[1] )
      {
        v64 = (void *)RtlpAllocateAtom(v63);
        if ( !v64 )
          goto LABEL_102;
        if ( a2->Length )
          memmove(v64, a2->Buffer, a2->Length);
      }
      else
      {
        v64 = (void *)NtdllpReallocateStringRoutine(v63);
        if ( !v64 )
        {
LABEL_102:
          FullPath = -1073741801;
          goto LABEL_56;
        }
      }
      a2->MaximumLength = v63;
      FullPath = 0;
      a2->Buffer = (wchar_t *)v64;
LABEL_55:
      memmove((char *)a2->Buffer + a2->Length, *((const void **)v7 + 1), *v7);
      v47 = (unsigned __int16)(a2->Length + *v7);
      v48 = a2->Buffer;
      a2->Length = v47;
      v48[v47 >> 1] = 0;
      goto LABEL_56;
    }
  }
  while ( *v44 != 92 && *v44 != 47 );
  if ( (unsigned int)RtlDetermineDosPathNameType_Ustr(v7, v43, a3, 65534LL) != 5 )
  {
    FullPath = LdrpGetFullPath(v7, a2);
    if ( FullPath >= 0 )
    {
      *v4 |= 0x600u;
      goto LABEL_57;
    }
LABEL_91:
    LODWORD(NewFlags) = FullPath;
    LdrpLogInternal(
      "minkernel\\ldr\\ldrutil.c",
      2853LL,
      "LdrpPreprocessDllName",
      0LL,
      "LdrpPreprocessDllName for DLL %wZ failed with status 0x%08lx\n",
      v7,
      NewFlags);
    return (unsigned int)FullPath;
  }
  FullPath = LdrpAppendUnicodeStringToFilenameBuffer(a2, v7);
LABEL_56:
  if ( FullPath < 0 )
    goto LABEL_91;
LABEL_57:
  v49 = (unsigned __int64)v42->Buffer;
  v50 = (__int16 *)(v49 + v42->Length);
  while ( 2 )
  {
    if ( (unsigned __int64)--v50 < v49 )
    {
LABEL_62:
      FullPath = 0;
      v52 = a2->Length + 10;
      if ( v52 <= a2->MaximumLength )
      {
LABEL_63:
        *(_QWORD *)((char *)a2->Buffer + a2->Length) = *(_QWORD *)LdrpDefaultExtension.Buffer;
        v53 = (unsigned __int16)(a2->Length + 8);
        v54 = a2->Buffer;
        a2->Length = v53;
        v54[v53 >> 1] = 0;
        goto LABEL_67;
      }
      if ( v52 > 0xFFFE )
      {
        FullPath = -1073741562;
        goto LABEL_67;
      }
      v75 = (a2->Length + 73) & 0xFFFFFFC0;
      if ( v75 > 0xFFFE )
        v75 = 65534;
      if ( (_UNICODE_STRING *)a2->Buffer == &a2[1] )
      {
        v76 = (void *)RtlpAllocateAtom(v75);
        if ( !v76 )
          goto LABEL_165;
        if ( a2->Length )
          memmove(v76, a2->Buffer, a2->Length);
      }
      else
      {
        v76 = (void *)NtdllpReallocateStringRoutine(v75);
        if ( !v76 )
        {
LABEL_165:
          FullPath = -1073741801;
          goto LABEL_67;
        }
      }
      a2->Buffer = (wchar_t *)v76;
      a2->MaximumLength = v75;
      goto LABEL_63;
    }
    v51 = *v50;
    if ( *v50 != 46 )
    {
      if ( v51 == 47 || v51 == 92 )
        goto LABEL_62;
      continue;
    }
    break;
  }
  v55 = (unsigned __int64)a2->Buffer;
  Length = a2->Length;
  for ( i = (_WORD *)(Length + v55 - 2); (unsigned __int64)i >= v55; a2->Length = Length )
  {
    if ( *i != 46 )
      break;
    LOWORD(Length) = Length - 2;
    --i;
  }
  i[1] = 0;
LABEL_67:
  if ( FullPath < 0 )
    goto LABEL_91;
  return (unsigned int)FullPath;
}
