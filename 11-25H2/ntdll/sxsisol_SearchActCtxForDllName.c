/*
 * XREFs of sxsisol_SearchActCtxForDllName @ 0x180019210
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x180016E20 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     RtlFindActivationContextSectionString @ 0x180019910 (RtlFindActivationContextSectionString.c)
 *     RtlReleaseActivationContext @ 0x18001A130 (RtlReleaseActivationContext.c)
 *     DbgPrintEx @ 0x18001A6F0 (DbgPrintEx.c)
 *     RtlFindCharInUnicodeString @ 0x1800B3C00 (RtlFindCharInUnicodeString.c)
 *     RtlpEnsureBufferSize @ 0x1800B4050 (RtlpEnsureBufferSize.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x1800B41BC (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     RtlGetAssemblyStorageRoot @ 0x1800E2198 (RtlGetAssemblyStorageRoot.c)
 *     RtlAssert @ 0x1800F4450 (RtlAssert.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall sxsisol_SearchActCtxForDllName(
        _UNICODE_STRING *a1,
        char a2,
        unsigned __int64 *a3,
        _DWORD *a4,
        unsigned __int16 *a5)
{
  _ACTIVATION_CONTEXT *hActCtx; // rdi
  NTSTATUS ActivationContextSectionString; // eax
  int v10; // ebx
  __int16 *v11; // rdx
  _DWORD *lpData; // r15
  ULONG ulSectionTotalLength; // r13d
  unsigned __int64 v15; // r8
  unsigned int v16; // edx
  int v17; // eax
  int v18; // edx
  int v19; // ecx
  int AssemblyStorageRoot; // eax
  char *v21; // r9
  int v22; // edx
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // rcx
  const void **v25; // rdx
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // r8
  __int64 v28; // rcx
  unsigned __int64 v29; // rax
  unsigned __int16 v30; // dx
  _WORD *v31; // rcx
  unsigned __int16 v32; // dx
  __int64 v33; // rax
  unsigned int v34; // ebx
  void *v35; // r13
  __int64 *v36; // rdx
  int v37; // eax
  wchar_t *Buffer; // rax
  unsigned __int16 Length; // bx
  bool v40; // cf
  unsigned __int64 v41; // r8
  __int64 v42; // rcx
  void *v43; // rdx
  unsigned __int64 v44; // rax
  unsigned __int16 v45; // bx
  __int64 v46; // rdx
  unsigned __int64 v47; // r8
  NTSTATUS CharInUnicodeString; // eax
  void *v49; // r8
  __int64 v50; // rax
  unsigned __int64 v51; // r8
  __int64 v52; // rcx
  void *v53; // r8
  void *v54; // rdx
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rcx
  unsigned __int16 v57; // ax
  unsigned int v58; // r10d
  int v59; // r11d
  __int64 v60; // rcx
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // rcx
  PACTCTX_SECTION_KEYED_DATA ReturnedData; // [rsp+20h] [rbp-E0h]
  void *Src; // [rsp+30h] [rbp-D0h] BYREF
  _WORD *v65; // [rsp+38h] [rbp-C8h] BYREF
  _UNICODE_STRING StringToFind; // [rsp+40h] [rbp-C0h] BYREF
  char *v67; // [rsp+50h] [rbp-B0h]
  void *v68; // [rsp+58h] [rbp-A8h]
  tagACTCTX_SECTION_KEYED_DATA v69; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v70; // [rsp+D0h] [rbp-30h] BYREF
  void *v71; // [rsp+D8h] [rbp-28h]
  __int16 *v72; // [rsp+E0h] [rbp-20h]
  __int16 *v73; // [rsp+E8h] [rbp-18h]
  __int64 v74; // [rsp+F0h] [rbp-10h]
  __int64 v75; // [rsp+F8h] [rbp-8h]
  __int16 v76; // [rsp+100h] [rbp+0h] BYREF
  int v77; // [rsp+102h] [rbp+2h]
  __int16 v78; // [rsp+106h] [rbp+6h]

  v69.cbSize = 112;
  v70 = 0x20000LL;
  v72 = &v76;
  v77 = 0;
  v73 = &v76;
  v78 = 0;
  v65 = 0LL;
  memset(&v69.ulDataFormatVersion, 0, 108);
  v71 = &v76;
  hActCtx = 0LL;
  v74 = 2LL;
  v75 = 2LL;
  v76 = 0;
  StringToFind = *a1;
  ActivationContextSectionString = RtlFindActivationContextSectionString(3u, 0LL, 2u, &StringToFind, &v69);
  v10 = ActivationContextSectionString;
  if ( ActivationContextSectionString < 0 )
  {
    if ( ActivationContextSectionString == -1072365567 )
      v10 = -1072365560;
    goto LABEL_4;
  }
  if ( a2 )
  {
    v10 = 0;
    goto LABEL_4;
  }
  hActCtx = (_ACTIVATION_CONTEXT *)v69.hActCtx;
  if ( v69.ulLength < 0x14 || v69.ulDataFormatVersion != 1 )
  {
    v10 = -1072365565;
    goto LABEL_4;
  }
  lpData = v69.lpData;
  ulSectionTotalLength = v69.ulSectionTotalLength;
  v15 = *((unsigned int *)v69.lpData + 4);
  if ( (unsigned int)v15 > v69.ulSectionTotalLength )
    goto LABEL_75;
  v16 = *((_DWORD *)v69.lpData + 3);
  if ( v16 > 0x1FFFFFFF
    || v15 > 0xFFFFFFFF - 8 * (unsigned __int64)v16
    || (unsigned int)v15 + 8 * v16 > v69.ulSectionTotalLength )
  {
    goto LABEL_75;
  }
  v17 = *((_DWORD *)v69.lpData + 1);
  if ( (v17 & 2) != 0 )
  {
    LODWORD(Src) = 0;
    v18 = 0;
    if ( (v17 & 4) == 0 )
    {
      if ( (v69.ulFlags & 1) != 0 )
      {
        if ( (v69.ulFlags & 2) != 0 )
          RtlAssert(
            "Internal error check failed",
            "minkernel\\ntdll\\sxsisol.cpp",
            0x41Au,
            (PSTR)"!(askd.Flags & ACTIVATION_CONTEXT_SECTION_KEYED_DATA_FLAG_FOUND_IN_SYSTEM_DEFAULT)");
        v18 = 1;
      }
      v19 = v18 | 2;
      if ( (v69.ulFlags & 2) == 0 )
        v19 = v18;
      AssemblyStorageRoot = RtlGetAssemblyStorageRoot(
                              v19,
                              v69.hActCtx,
                              v69.ulAssemblyRosterIndex,
                              (unsigned int)&v65,
                              (__int64)ReturnedData,
                              (__int64)&Src);
      v10 = AssemblyStorageRoot;
      if ( AssemblyStorageRoot < 0 )
      {
        if ( AssemblyStorageRoot == -1073741536 && (int)Src < 0 )
          v10 = (int)Src;
        goto LABEL_4;
      }
      goto LABEL_28;
    }
    DbgPrintEx(
      0x33u,
      0,
      "[%x.%x] SXS: %s - Relative redirection plus env var expansion.\n",
      LODWORD(NtCurrentTeb()->ClientId.UniqueProcess),
      LODWORD(NtCurrentTeb()->ClientId.UniqueThread),
      "sxsisol_SearchActCtxForDllName");
LABEL_75:
    v10 = -1072365565;
    goto LABEL_4;
  }
LABEL_28:
  v21 = (char *)v69.lpSectionBase + (unsigned int)lpData[4];
  v67 = v21;
  *a3 = 0LL;
  v22 = 0;
  v23 = (unsigned int)lpData[3];
  v24 = 0LL;
  Src = (void *)v23;
  while ( v22 != v23 )
  {
    v58 = *(_DWORD *)&v21[8 * v22 + 4];
    if ( v58 > ulSectionTotalLength )
      goto LABEL_75;
    v59 = *(_DWORD *)&v21[8 * v22];
    if ( v58 > ~v59 || v59 + v58 > ulSectionTotalLength )
      goto LABEL_75;
    v24 += (unsigned __int16)v59;
    *a3 = v24;
    ++v22;
  }
  v25 = (const void **)v65;
  if ( v65 )
  {
    v24 += (unsigned __int16)*v65;
    *a3 = v24;
  }
  v26 = (unsigned __int16)v24 + 2LL;
  if ( v26 > 0xFFFE )
    goto LABEL_86;
  if ( a5 == (unsigned __int16 *)-16LL || v26 > *((_QWORD *)a5 + 4) )
  {
    if ( (int)RtlpEnsureBufferSize(0LL, a5 + 8, v26) < 0 )
    {
LABEL_92:
      v10 = -1073741801;
      goto LABEL_4;
    }
    v25 = (const void **)v65;
  }
  *((_QWORD *)a5 + 1) = *((_QWORD *)a5 + 2);
  a5[1] = a5[16];
  if ( v25 )
  {
    *a5 = 0;
    v27 = *(unsigned __int16 *)v25 + 2LL;
    if ( v27 > 0xFFFE )
    {
      v10 = -1073741562;
      goto LABEL_4;
    }
    if ( v27 > *((_QWORD *)a5 + 4) )
    {
      if ( (int)RtlpEnsureBufferSize(0LL, a5 + 8, v27) < 0 )
      {
        v10 = -1073741801;
        goto LABEL_4;
      }
      v25 = (const void **)v65;
    }
    v28 = *((_QWORD *)a5 + 2);
    v29 = *a5;
    *((_QWORD *)a5 + 1) = v28;
    memmove((void *)(v28 + 2 * (v29 >> 1)), v25[1], *(unsigned __int16 *)v25);
    v30 = *a5;
    v31 = v65;
    a5[1] = *v65 + *a5 + 2;
    v32 = *v31 + v30;
    v33 = *((_QWORD *)a5 + 1);
    *a5 = v32;
    v24 = (unsigned __int64)v32 >> 1;
    *(_WORD *)(v33 + 2 * v24) = 0;
  }
  v34 = 0;
  v35 = Src;
  while ( 1 )
  {
    v36 = (__int64 *)(a5 + 8);
    if ( (void *)v34 == v35 )
      break;
    v49 = (void *)*(unsigned __int16 *)&v67[8 * v34];
    v68 = (char *)v69.lpSectionBase + *(unsigned int *)&v67[8 * v34 + 4];
    v50 = *a5 + 2LL;
    Src = v49;
    v51 = (unsigned __int64)v49 + v50;
    if ( v51 > 0xFFFE )
      goto LABEL_86;
    if ( v51 > *((_QWORD *)a5 + 4) )
    {
      if ( (int)RtlpEnsureBufferSize(0LL, v36, v51) < 0 )
        goto LABEL_92;
      v36 = (__int64 *)(a5 + 8);
    }
    v52 = *v36;
    v53 = Src;
    v54 = v68;
    v55 = (unsigned __int64)*a5 >> 1;
    *((_QWORD *)a5 + 1) = v52;
    memmove((void *)(v52 + 2 * v55), v54, (size_t)v53);
    v56 = (unsigned __int16)(*a5 + (_WORD)Src);
    *a5 = v56;
    v57 = v56 + 2;
    v24 = v56 >> 1;
    a5[1] = v57;
    ++v34;
    *(_WORD *)(*((_QWORD *)a5 + 1) + 2 * v24) = 0;
  }
  v37 = lpData[1];
  if ( (v37 & 1) != 0 )
    goto LABEL_51;
  if ( (v37 & 8) != 0 )
  {
    LOWORD(Src) = 0;
    CharInUnicodeString = RtlFindCharInUnicodeString(1u, &StringToFind, &RtlDosPathSeperatorsString, (PUSHORT)&Src);
    v10 = CharInUnicodeString;
    if ( CharInUnicodeString < 0 )
    {
      if ( CharInUnicodeString == -1073741275 )
        RtlAssert(
          "Internal error check failed",
          "minkernel\\ntdll\\sxsisol.cpp",
          0x476u,
          (PSTR)"Status != STATUS_NOT_FOUND");
      goto LABEL_4;
    }
    Length = -2 - (_WORD)Src + StringToFind.Length;
    Buffer = &StringToFind.Buffer[((unsigned __int64)(unsigned __int16)Src >> 1) + 1];
  }
  else
  {
    Buffer = StringToFind.Buffer;
    Length = StringToFind.Length;
  }
  *a3 += Length;
  v40 = *a3 < 0xFFFF;
  Src = Buffer;
  if ( !v40 || (v41 = Length + *a5 + 2LL, v41 > 0xFFFE) )
  {
LABEL_86:
    v10 = -1073741562;
    goto LABEL_4;
  }
  if ( v41 > *((_QWORD *)a5 + 4) && (int)RtlpEnsureBufferSize(0LL, a5 + 8, v41) < 0 )
  {
    v10 = -1073741801;
    goto LABEL_4;
  }
  v42 = *((_QWORD *)a5 + 2);
  v43 = Src;
  v44 = (unsigned __int64)*a5 >> 1;
  *((_QWORD *)a5 + 1) = v42;
  memmove((void *)(v42 + 2 * v44), v43, Length);
  v45 = *a5 + Length;
  *a5 = v45;
  v24 = (unsigned __int64)v45 >> 1;
  a5[1] = v45 + 2;
  *(_WORD *)(*((_QWORD *)a5 + 1) + 2 * v24) = 0;
LABEL_51:
  if ( (lpData[1] & 4) != 0 )
  {
    v10 = sxsisol_ExpandEnvironmentStrings_UEx(v24, a5, &v70);
    if ( v10 < 0 )
      goto LABEL_4;
    v46 = (unsigned __int16)v70;
    *a5 = 0;
    v47 = v46 + 2;
    if ( (unsigned __int64)(v46 + 2) > 0xFFFE )
    {
      v10 = -1073741562;
      goto LABEL_4;
    }
    if ( v47 > *((_QWORD *)a5 + 4) )
    {
      if ( (int)RtlpEnsureBufferSize(0LL, a5 + 8, v47) < 0 )
      {
        v10 = -1073741801;
        goto LABEL_4;
      }
      LOWORD(v46) = v70;
    }
    v60 = *((_QWORD *)a5 + 2);
    v61 = (unsigned __int64)*a5 >> 1;
    *((_QWORD *)a5 + 1) = v60;
    memmove((void *)(v60 + 2 * v61), v71, (unsigned __int16)v46);
    v62 = (unsigned __int16)(*a5 + v70);
    *a5 = v62;
    a5[1] = v62 + 2;
    *(_WORD *)(*((_QWORD *)a5 + 1) + 2 * (v62 >> 1)) = 0;
  }
  if ( a4 )
    *a4 |= 2u;
  v10 = 0;
LABEL_4:
  v11 = v73;
  if ( v72 )
  {
    if ( v72 != v73 )
    {
      RtlpSysVolFree(v72);
      v11 = v73;
    }
    v74 = v75;
    v72 = v11;
  }
  v71 = v11;
  if ( v11 )
    *v11 = 0;
  WORD1(v70) = v75;
  LOWORD(v70) = 0;
  if ( hActCtx )
    RtlReleaseActivationContext(hActCtx);
  return (unsigned int)v10;
}
