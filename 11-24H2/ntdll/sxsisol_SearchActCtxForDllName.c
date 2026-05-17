/*
 * XREFs of sxsisol_SearchActCtxForDllName @ 0x18005D5B0
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18005B1C0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001470 (RtlpSysVolFree.c)
 *     RtlFindActivationContextSectionString @ 0x18005DCB0 (RtlFindActivationContextSectionString.c)
 *     RtlReleaseActivationContext @ 0x18005E4D0 (RtlReleaseActivationContext.c)
 *     DbgPrintEx @ 0x18005EA90 (DbgPrintEx.c)
 *     RtlGetAssemblyStorageRoot @ 0x180080E58 (RtlGetAssemblyStorageRoot.c)
 *     RtlFindCharInUnicodeString @ 0x18008AC70 (RtlFindCharInUnicodeString.c)
 *     RtlpEnsureBufferSize @ 0x18008B0C0 (RtlpEnsureBufferSize.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x18008B22C (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     RtlAssert @ 0x1800F28E0 (RtlAssert.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall sxsisol_SearchActCtxForDllName(
        __int128 *a1,
        char a2,
        unsigned __int64 *a3,
        _DWORD *a4,
        unsigned __int16 *a5)
{
  __int64 v8; // rdi
  int ActivationContextSectionString; // eax
  int v10; // ebx
  __int16 *v11; // rdx
  _DWORD *v13; // r15
  unsigned int v14; // r13d
  unsigned __int64 v15; // r8
  unsigned int v16; // edx
  int v17; // eax
  int v18; // edx
  int v19; // ecx
  int AssemblyStorageRoot; // eax
  __int64 v21; // r9
  unsigned int v22; // edx
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
  void *v38; // rax
  unsigned __int16 v39; // bx
  bool v40; // cf
  unsigned __int64 v41; // r8
  __int64 v42; // rcx
  void *v43; // rdx
  unsigned __int64 v44; // rax
  unsigned __int16 v45; // bx
  __int64 v46; // rdx
  unsigned __int64 v47; // r8
  int CharInUnicodeString; // eax
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
  __int64 v63; // [rsp+20h] [rbp-E0h]
  void *Src; // [rsp+30h] [rbp-D0h] BYREF
  _WORD *v65; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v66; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v67; // [rsp+50h] [rbp-B0h]
  void *v68; // [rsp+58h] [rbp-A8h]
  int v69; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v70; // [rsp+64h] [rbp-9Ch]
  __int128 v71; // [rsp+74h] [rbp-8Ch]
  __int128 v72; // [rsp+84h] [rbp-7Ch]
  __int128 v73; // [rsp+94h] [rbp-6Ch]
  __int128 v74; // [rsp+A4h] [rbp-5Ch]
  __int128 v75; // [rsp+B4h] [rbp-4Ch]
  __int64 v76; // [rsp+C4h] [rbp-3Ch]
  int v77; // [rsp+CCh] [rbp-34h]
  __int64 v78; // [rsp+D0h] [rbp-30h] BYREF
  void *v79; // [rsp+D8h] [rbp-28h]
  __int16 *v80; // [rsp+E0h] [rbp-20h]
  __int16 *v81; // [rsp+E8h] [rbp-18h]
  __int64 v82; // [rsp+F0h] [rbp-10h]
  __int64 v83; // [rsp+F8h] [rbp-8h]
  __int16 v84; // [rsp+100h] [rbp+0h] BYREF
  int v85; // [rsp+102h] [rbp+2h]
  __int16 v86; // [rsp+106h] [rbp+6h]

  v69 = 112;
  v76 = 0LL;
  v77 = 0;
  v78 = 0x20000LL;
  v80 = &v84;
  v85 = 0;
  v81 = &v84;
  v86 = 0;
  v65 = 0LL;
  v70 = 0LL;
  v79 = &v84;
  v71 = 0LL;
  v72 = 0LL;
  v8 = 0LL;
  v73 = 0LL;
  v82 = 2LL;
  v74 = 0LL;
  v83 = 2LL;
  v75 = 0LL;
  v84 = 0;
  v66 = *a1;
  ActivationContextSectionString = RtlFindActivationContextSectionString(3, 0, 2, (unsigned int)&v66, (__int64)&v69);
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
  v8 = *(_QWORD *)((char *)&v73 + 4);
  if ( HIDWORD(v70) < 0x14 || (_DWORD)v70 != 1 )
  {
    v10 = -1072365565;
    goto LABEL_4;
  }
  v13 = *(_DWORD **)((char *)&v70 + 4);
  v14 = HIDWORD(v72);
  v15 = *(unsigned int *)(*(_QWORD *)((char *)&v70 + 4) + 16LL);
  if ( (unsigned int)v15 > HIDWORD(v72) )
    goto LABEL_75;
  v16 = *(_DWORD *)(*(_QWORD *)((char *)&v70 + 4) + 12LL);
  if ( v16 > 0x1FFFFFFF || v15 > 0xFFFFFFFF - 8 * (unsigned __int64)v16 || (unsigned int)v15 + 8 * v16 > HIDWORD(v72) )
    goto LABEL_75;
  v17 = *(_DWORD *)(*(_QWORD *)((char *)&v70 + 4) + 4LL);
  if ( (v17 & 2) != 0 )
  {
    LODWORD(Src) = 0;
    v18 = 0;
    if ( (v17 & 4) == 0 )
    {
      if ( (v74 & 1) != 0 )
      {
        if ( (v74 & 2) != 0 )
        {
          RtlAssert(
            "Internal error check failed",
            "minkernel\\ntdll\\sxsisol.cpp",
            1050LL,
            "!(askd.Flags & ACTIVATION_CONTEXT_SECTION_KEYED_DATA_FLAG_FOUND_IN_SYSTEM_DEFAULT)");
          v10 = -1073741595;
          goto LABEL_4;
        }
        v18 = 1;
      }
      v19 = v18 | 2;
      if ( (v74 & 2) == 0 )
        v19 = v18;
      AssemblyStorageRoot = RtlGetAssemblyStorageRoot(
                              v19,
                              DWORD1(v73),
                              HIDWORD(v73),
                              (unsigned int)&v65,
                              v63,
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
      51LL,
      0LL,
      "[%x.%x] SXS: %s - Relative redirection plus env var expansion.\n",
      LODWORD(NtCurrentTeb()->ClientId.UniqueProcess),
      LODWORD(NtCurrentTeb()->ClientId.UniqueThread),
      "sxsisol_SearchActCtxForDllName");
LABEL_75:
    v10 = -1072365565;
    goto LABEL_4;
  }
LABEL_28:
  v21 = *(_QWORD *)((char *)&v72 + 4) + (unsigned int)v13[4];
  v67 = v21;
  *a3 = 0LL;
  v22 = 0;
  v23 = (unsigned int)v13[3];
  v24 = 0LL;
  Src = (void *)v23;
  while ( v22 != v23 )
  {
    v58 = *(_DWORD *)(v21 + 8LL * v22 + 4);
    if ( v58 > v14 )
      goto LABEL_75;
    v59 = *(_DWORD *)(v21 + 8LL * v22);
    if ( v58 > ~v59 || v59 + v58 > v14 )
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
    v49 = (void *)*(unsigned __int16 *)(v67 + 8LL * v34);
    v68 = (void *)(*(_QWORD *)((char *)&v72 + 4) + *(unsigned int *)(v67 + 8LL * v34 + 4));
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
  v37 = v13[1];
  if ( (v37 & 1) != 0 )
    goto LABEL_51;
  if ( (v37 & 8) != 0 )
  {
    LOWORD(Src) = 0;
    CharInUnicodeString = RtlFindCharInUnicodeString(1LL, &v66, &RtlDosPathSeperatorsString, &Src);
    v10 = CharInUnicodeString;
    if ( CharInUnicodeString < 0 )
    {
      if ( CharInUnicodeString == -1073741275 )
      {
        RtlAssert("Internal error check failed", "minkernel\\ntdll\\sxsisol.cpp", 1142LL, "Status != STATUS_NOT_FOUND");
        v10 = -1073741595;
      }
      goto LABEL_4;
    }
    v39 = -2 - (_WORD)Src + v66;
    v38 = (void *)(*((_QWORD *)&v66 + 1) + 2 * ((unsigned __int64)(unsigned __int16)Src >> 1) + 2);
  }
  else
  {
    v38 = (void *)*((_QWORD *)&v66 + 1);
    v39 = v66;
  }
  *a3 += v39;
  v40 = *a3 < 0xFFFF;
  Src = v38;
  if ( !v40 || (v41 = v39 + *a5 + 2LL, v41 > 0xFFFE) )
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
  memmove((void *)(v42 + 2 * v44), v43, v39);
  v45 = *a5 + v39;
  *a5 = v45;
  v24 = (unsigned __int64)v45 >> 1;
  a5[1] = v45 + 2;
  *(_WORD *)(*((_QWORD *)a5 + 1) + 2 * v24) = 0;
LABEL_51:
  if ( (v13[1] & 4) != 0 )
  {
    v10 = sxsisol_ExpandEnvironmentStrings_UEx(v24, a5, &v78);
    if ( v10 < 0 )
      goto LABEL_4;
    v46 = (unsigned __int16)v78;
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
      LOWORD(v46) = v78;
    }
    v60 = *((_QWORD *)a5 + 2);
    v61 = (unsigned __int64)*a5 >> 1;
    *((_QWORD *)a5 + 1) = v60;
    memmove((void *)(v60 + 2 * v61), v79, (unsigned __int16)v46);
    v62 = (unsigned __int16)(*a5 + v78);
    *a5 = v62;
    a5[1] = v62 + 2;
    *(_WORD *)(*((_QWORD *)a5 + 1) + 2 * (v62 >> 1)) = 0;
  }
  if ( a4 )
    *a4 |= 2u;
  v10 = 0;
LABEL_4:
  v11 = v81;
  if ( v80 )
  {
    if ( v80 != v81 )
    {
      RtlpSysVolFree((__int64)v80);
      v11 = v81;
    }
    v82 = v83;
    v80 = v11;
  }
  v79 = v11;
  if ( v11 )
    *v11 = 0;
  WORD1(v78) = v83;
  LOWORD(v78) = 0;
  if ( v8 )
    RtlReleaseActivationContext(v8);
  return (unsigned int)v10;
}
