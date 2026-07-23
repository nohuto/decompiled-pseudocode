/*
 * XREFs of RtlDosApplyFileIsolationRedirection_Ustr @ 0x180016E20
 * Callers:
 *     LdrpPreprocessDllName @ 0x1800161D0 (LdrpPreprocessDllName.c)
 *     LdrpLoadDependentModuleInternal @ 0x18004C180 (LdrpLoadDependentModuleInternal.c)
 *     RtlDosSearchPath_Ustr @ 0x1800A2650 (RtlDosSearchPath_Ustr.c)
 *     LdrpQuerySxSMUIFile @ 0x1800EE464 (LdrpQuerySxSMUIFile.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     sxsisol_SearchActCtxForDllName @ 0x180019210 (sxsisol_SearchActCtxForDllName.c)
 *     sxsisol_RespectDotLocal @ 0x1800A0C84 (sxsisol_RespectDotLocal.c)
 *     RtlGetFullPathName_UstrEx @ 0x1800A3020 (RtlGetFullPathName_UstrEx.c)
 *     RtlFindCharInUnicodeString @ 0x1800B3C00 (RtlFindCharInUnicodeString.c)
 *     RtlpEnsureBufferSize @ 0x1800B4050 (RtlpEnsureBufferSize.c)
 *     sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success @ 0x1800F42FC (sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success.c)
 *     RtlAssert @ 0x1800F4450 (RtlAssert.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

NTSTATUS __cdecl RtlDosApplyFileIsolationRedirection_Ustr(
        ULONG Flags,
        PUNICODE_STRING OriginalName,
        PUNICODE_STRING Extension,
        PUNICODE_STRING StaticString,
        PUNICODE_STRING DynamicString,
        PUNICODE_STRING *NewName,
        PULONG NewFlags,
        PSIZE_T FileNameSize,
        PSIZE_T RequiredLength)
{
  char v10; // r13
  __int64 v12; // r9
  NTSTATUS CharInUnicodeString; // eax
  int FullPathName_Ustr; // ebx
  _UNICODE_STRING v15; // xmm7
  __m128i v16; // xmm6
  unsigned __int64 v17; // rdi
  unsigned int v18; // ecx
  unsigned __int64 v19; // rdi
  size_t v20; // rdi
  size_t v21; // rbx
  bool v22; // di
  wchar_t v23; // cx
  _UNICODE_STRING *v24; // rax
  __m128i v25; // xmm0
  unsigned __int16 Length; // cx
  int v27; // eax
  ULONG v28; // r15d
  PSIZE_T v30; // rdi
  _UNICODE_STRING *MaximumLength; // r8
  wchar_t *Buffer; // rax
  int NonInclusivePrefixLength; // [rsp+48h] [rbp-C0h] BYREF
  USHORT v34; // [rsp+4Ch] [rbp-BCh] BYREF
  _UNICODE_STRING StringToSearch_8; // [rsp+58h] [rbp-B0h] BYREF
  ULONG v36; // [rsp+68h] [rbp-A0h] BYREF
  _UNICODE_STRING v37; // [rsp+70h] [rbp-98h] BYREF
  PUNICODE_STRING StringUsed[2]; // [rsp+88h] [rbp-80h] BYREF
  _UNICODE_STRING v39; // [rsp+98h] [rbp-70h]
  _UNICODE_STRING StaticStringa; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v41; // [rsp+B8h] [rbp-50h] BYREF
  PSIZE_T v42; // [rsp+C0h] [rbp-48h]
  _UNICODE_STRING v43; // [rsp+C8h] [rbp-40h]
  void *v44; // [rsp+D8h] [rbp-30h] BYREF
  _WORD *v45; // [rsp+E0h] [rbp-28h]
  unsigned __int64 v46; // [rsp+E8h] [rbp-20h]
  __int64 v47; // [rsp+F0h] [rbp-18h]
  __int64 v48; // [rsp+F8h] [rbp-10h]
  _UNICODE_STRING v49; // [rsp+108h] [rbp+0h] BYREF
  __int128 v50; // [rsp+118h] [rbp+10h]
  __int128 v51; // [rsp+128h] [rbp+20h]
  __int128 v52; // [rsp+138h] [rbp+30h] BYREF
  unsigned __int128 v53; // [rsp+148h] [rbp+40h]
  __int64 v54; // [rsp+158h] [rbp+50h]
  _WORD v55[16]; // [rsp+168h] [rbp+60h] BYREF
  char v56; // [rsp+188h] [rbp+80h] BYREF

  v10 = Flags;
  v12 = 0LL;
  StaticStringa.Buffer = (wchar_t *)&v56;
  v42 = FileNameSize;
  *(_QWORD *)&v37.Length = 0LL;
  v37.Buffer = 0LL;
  *(_QWORD *)&StaticStringa.Length = 0x800000LL;
  *(_DWORD *)(&v43.MaximumLength + 1) = 0;
  v48 = 0LL;
  v54 = 0LL;
  v41 = 0LL;
  v34 = 0;
  v36 = 0;
  StringToSearch_8 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  if ( NewFlags )
    *NewFlags = 0;
  if ( FileNameSize )
    *FileNameSize = 0LL;
  if ( RequiredLength )
    *RequiredLength = 520LL;
  if ( DynamicString )
    *DynamicString = 0LL;
  v46 = 32LL;
  v44 = v55;
  v45 = v55;
  v43.Buffer = v55;
  v47 = 32LL;
  v55[0] = 0;
  *(_DWORD *)&v43.Length = 0x200000;
  if ( StaticString )
  {
    MaximumLength = (_UNICODE_STRING *)StaticString->MaximumLength;
    Buffer = StaticString->Buffer;
    if ( (unsigned __int64)MaximumLength < 2 )
    {
      *(_QWORD *)&v51 = 2LL;
      *(_QWORD *)&v50 = &v52;
      *((_QWORD *)&v50 + 1) = &v52;
      v49.Buffer = (wchar_t *)&v52;
      *((_QWORD *)&v51 + 1) = 2LL;
      LOWORD(v52) = 0;
      v49.Length = 0;
      v49.MaximumLength = 2;
    }
    else
    {
      *(_QWORD *)&v50 = StaticString->Buffer;
      *(_QWORD *)&v51 = MaximumLength;
      *((_QWORD *)&v50 + 1) = Buffer;
      *((_QWORD *)&v51 + 1) = MaximumLength;
      v49.Buffer = Buffer;
      StringUsed[0] = MaximumLength;
      if ( Buffer )
        *Buffer = 0;
      v49.Length = 0;
      v49.MaximumLength = (unsigned __int16)MaximumLength;
    }
  }
  else
  {
    *(_QWORD *)&v51 = 2LL;
    *(_QWORD *)&v50 = &v52;
    *((_QWORD *)&v50 + 1) = &v52;
    v49.Buffer = (wchar_t *)&v52;
    *((_QWORD *)&v51 + 1) = 2LL;
    LOWORD(v52) = 0;
    *(_DWORD *)&v49.Length = 0x20000;
  }
  *((_QWORD *)&v52 + 1) = StaticString;
  v53 = __PAIR128__((unsigned __int64)NewName, (unsigned __int64)DynamicString);
  LOBYTE(v54) = 1;
  if ( (Flags & 0xFFFFFFFE) != 0 )
  {
    FullPathName_Ustr = -1073741811;
    goto LABEL_61;
  }
  if ( !OriginalName )
  {
    FullPathName_Ustr = -1073741811;
    goto LABEL_61;
  }
  if ( StaticString )
  {
    if ( DynamicString && !NewName )
      goto LABEL_110;
  }
  else if ( !DynamicString && FileNameSize )
  {
LABEL_110:
    FullPathName_Ustr = -1073741811;
    goto LABEL_61;
  }
  StringToSearch_8 = *OriginalName;
  if ( Extension && Extension->Length )
  {
    LOWORD(NonInclusivePrefixLength) = 0;
    CharInUnicodeString = RtlFindCharInUnicodeString(
                            1u,
                            &StringToSearch_8,
                            (PUNICODE_STRING)&CharSet,
                            (PUSHORT)&NonInclusivePrefixLength);
    FullPathName_Ustr = CharInUnicodeString;
    if ( CharInUnicodeString < 0 )
    {
      if ( CharInUnicodeString == -1073741275 )
      {
        v15 = *Extension;
        v16 = (__m128i)StringToSearch_8;
        v17 = 0LL;
        v39 = v15;
        v18 = 0;
        *(_UNICODE_STRING *)StringUsed = StringToSearch_8;
        while ( v18 != 2 )
        {
          v17 += LOWORD(StringUsed[2 * v18]);
          if ( v17 > 0xFFFE )
            goto LABEL_125;
          ++v18;
        }
        v19 = v17 + 2;
        if ( v19 > 0xFFFE )
        {
LABEL_125:
          FullPathName_Ustr = -1073741562;
          goto LABEL_61;
        }
        if ( v19 <= v46 || (FullPathName_Ustr = RtlpEnsureBufferSize(0LL, &v44, v19), FullPathName_Ustr >= 0) )
        {
          v43.MaximumLength = v19;
          v43.Length = v19 - 2;
          v20 = (unsigned __int16)_mm_cvtsi128_si32(v16);
          v43.Buffer = (wchar_t *)v44;
          memmove(v44, (const void *)_mm_srli_si128(v16, 8).m128i_i64[0], v20);
          v21 = (unsigned __int16)_mm_cvtsi128_si32((__m128i)v15);
          memmove(
            &v43.Buffer[(unsigned __int64)(unsigned int)v20 >> 1],
            (const void *)_mm_srli_si128((__m128i)v15, 8).m128i_i64[0],
            v21);
          v12 = 0LL;
          v43.Buffer[(v21 + v20) >> 1] = 0;
          StringToSearch_8 = v43;
          goto LABEL_26;
        }
      }
      goto LABEL_61;
    }
    v12 = 0LL;
  }
LABEL_26:
  v22 = 0;
  StringUsed[0] = 0LL;
  if ( v37.Buffer )
  {
    FullPathName_Ustr = -1073741811;
    goto LABEL_50;
  }
  if ( StringToSearch_8.Length < 2u
    || (LODWORD(OriginalName) = *StringToSearch_8.Buffer, (_WORD)OriginalName != 92) && (_WORD)OriginalName != 47 )
  {
    if ( StringToSearch_8.Length >= 4u && *StringToSearch_8.Buffer && StringToSearch_8.Buffer[1] == 58 )
    {
      if ( StringToSearch_8.Length >= 6u )
      {
        v23 = StringToSearch_8.Buffer[2];
        if ( v23 == 92 || v23 == 47 )
        {
          NonInclusivePrefixLength = 2;
          goto LABEL_36;
        }
      }
      v27 = 3;
      goto LABEL_48;
    }
LABEL_81:
    FullPathName_Ustr = 0;
    goto LABEL_50;
  }
  if ( StringToSearch_8.Length >= 4u
    && ((LODWORD(OriginalName) = StringToSearch_8.Buffer[1], (_WORD)OriginalName == 92) || (_WORD)OriginalName == 47) )
  {
    if ( StringToSearch_8.Length >= 6u )
    {
      LODWORD(OriginalName) = StringToSearch_8.Buffer[2];
      if ( (_WORD)OriginalName == 46 || (_WORD)OriginalName == 63 )
      {
        if ( StringToSearch_8.Length >= 8u )
        {
          LODWORD(OriginalName) = StringToSearch_8.Buffer[3];
          if ( (_WORD)OriginalName == 92 || (_WORD)OriginalName == 47 )
          {
            NonInclusivePrefixLength = 6;
            goto LABEL_36;
          }
        }
        if ( StringToSearch_8.Length == 6 )
        {
          NonInclusivePrefixLength = 7;
          goto LABEL_81;
        }
      }
    }
    v27 = 1;
  }
  else
  {
    v27 = 4;
  }
LABEL_48:
  NonInclusivePrefixLength = v27;
  if ( v27 != 1 )
    goto LABEL_49;
LABEL_36:
  FullPathName_Ustr = RtlGetFullPathName_UstrEx(
                        &StringToSearch_8,
                        &StaticStringa,
                        &v37,
                        StringUsed,
                        0LL,
                        0LL,
                        (RTL_PATH_TYPE *)&NonInclusivePrefixLength,
                        0LL);
  if ( FullPathName_Ustr >= 0 )
  {
    v24 = StringUsed[0];
    v25 = *(__m128i *)StringUsed[0];
    *(_UNICODE_STRING *)StringUsed = *StringUsed[0];
    if ( NonInclusivePrefixLength == 6 && StringToSearch_8.Buffer[5] == 58 && StringToSearch_8.Buffer[6] == 92 )
    {
      StringUsed[1] = (PUNICODE_STRING)((char *)StringUsed[1] + 8);
      StringToSearch_8.MaximumLength -= 8;
      Length = StringToSearch_8.Length - 8;
      StringToSearch_8.Buffer += 4;
      LODWORD(OriginalName) = LOWORD(StringUsed[0]);
      LOWORD(OriginalName) = LOWORD(StringUsed[0]) - 8;
      StringToSearch_8.Length -= 8;
      WORD1(StringUsed[0]) -= 8;
      LOWORD(StringUsed[0]) -= 8;
      v25 = *(__m128i *)StringUsed;
    }
    else
    {
      Length = StringToSearch_8.Length;
      LODWORD(OriginalName) = _mm_cvtsi128_si32(v25);
    }
    if ( Length > (unsigned __int16)OriginalName )
    {
      StringToSearch_8 = (_UNICODE_STRING)v25;
      v22 = v24 == &v37;
    }
    v12 = 0LL;
LABEL_49:
    FullPathName_Ustr = 0;
    if ( v22 )
      goto LABEL_52;
  }
LABEL_50:
  if ( v37.Buffer )
  {
    RtlpSysVolFree(v37.Buffer);
    *(_QWORD *)&v37.Length = 0LL;
    v37.Buffer = (wchar_t *)_mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
  }
LABEL_52:
  if ( FullPathName_Ustr >= 0 )
  {
    if ( (v10 & 1) == 0
      || !NtCurrentPeb()->ProcessParameters
      || (NtCurrentPeb()->ProcessParameters->Flags & 0x1000) == 0
      || (FullPathName_Ustr = sxsisol_RespectDotLocal(&StringToSearch_8, &v49, &v36, v12), FullPathName_Ustr >= 0) )
    {
      v28 = v36;
      if ( (v36 & 1) != 0
        || (!StaticString && !DynamicString ? (LOBYTE(OriginalName) = 1) : (LOBYTE(OriginalName) = 0),
            FullPathName_Ustr = sxsisol_SearchActCtxForDllName(
                                  (unsigned int)&StringToSearch_8,
                                  (_DWORD)OriginalName,
                                  (unsigned int)&v41,
                                  (_DWORD)NewFlags,
                                  (__int64)&v49),
            FullPathName_Ustr >= 0) )
      {
        if ( DynamicString || !StaticString || v49.Buffer == StaticString->Buffer )
        {
          v30 = v42;
          if ( v42 )
          {
            FullPathName_Ustr = RtlFindCharInUnicodeString(1u, &v49, &RtlDosPathSeperatorsString, &v34);
            if ( FullPathName_Ustr < 0 )
              goto LABEL_61;
            *v30 = ((unsigned __int64)v34 >> 1) + 1;
          }
          FullPathName_Ustr = sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success(&v49);
          if ( FullPathName_Ustr >= 0 )
          {
            if ( NewFlags )
              *NewFlags = v28;
            FullPathName_Ustr = 0;
          }
        }
        else
        {
          FullPathName_Ustr = -1073741789;
        }
      }
    }
  }
LABEL_61:
  if ( FullPathName_Ustr < 0 )
  {
    if ( (_BYTE)v54 )
    {
      if ( (_QWORD)v50 && (_QWORD)v50 != *((_QWORD *)&v50 + 1) )
        RtlpSysVolFree((void *)v50);
      if ( *((_QWORD *)&v50 + 1) )
        **((_WORD **)&v50 + 1) = 0;
    }
    v49 = 0LL;
    v54 = 0LL;
    v50 = 0LL;
    v51 = 0LL;
    v52 = 0LL;
    v53 = 0LL;
  }
  if ( v37.Buffer )
  {
    RtlpSysVolFree(v37.Buffer);
    v37 = 0LL;
  }
  if ( v44 )
  {
    if ( v44 != v45 )
      RtlpSysVolFree(v44);
    v44 = v45;
    v46 = v47;
  }
  v43.Buffer = v45;
  if ( v45 )
    *v45 = 0;
  v43.MaximumLength = v47;
  v43.Length = 0;
  if ( FullPathName_Ustr == -1072365567 )
    RtlAssert(
      "Internal error check failed",
      "minkernel\\ntdll\\sxsisol.cpp",
      0x1B1u,
      (PSTR)"Status != STATUS_SXS_SECTION_NOT_FOUND");
  return FullPathName_Ustr;
}
