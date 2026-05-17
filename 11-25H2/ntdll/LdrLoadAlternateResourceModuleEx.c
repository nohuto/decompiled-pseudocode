/*
 * XREFs of LdrLoadAlternateResourceModuleEx @ 0x18001BB80
 * Callers:
 *     LdrResSearchResource @ 0x180003A20 (LdrResSearchResource.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18001B3A0 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpResSearchResourceMappedFile @ 0x1800A4170 (LdrpResSearchResourceMappedFile.c)
 *     LdrLoadAlternateResourceModule @ 0x1800F3250 (LdrLoadAlternateResourceModule.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x18001AD80 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpGetRcConfig @ 0x18001D0E0 (LdrpGetRcConfig.c)
 *     LdrpGetFromMUIMemCache @ 0x18001D230 (LdrpGetFromMUIMemCache.c)
 *     LdrpGetLoadAsEntry @ 0x18002037C (LdrpGetLoadAsEntry.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18004E410 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     GetOverlayFilePathUsingChecksum @ 0x18006BF80 (GetOverlayFilePathUsingChecksum.c)
 *     RtlAppendUnicodeToString @ 0x18006C570 (RtlAppendUnicodeToString.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180074EB0 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     LdrpMapResourceFile @ 0x1800A2100 (LdrpMapResourceFile.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x1800A3438 (LdrpVerifyAlternateResourceModuleEx.c)
 *     LdrpTraceLoadMUIDll @ 0x1800A3730 (LdrpTraceLoadMUIDll.c)
 *     RtlLcidToLocaleName @ 0x1800A75A0 (RtlLcidToLocaleName.c)
 *     LdrFindEntryForAddress @ 0x1800D0470 (LdrFindEntryForAddress.c)
 *     LdrpGetFileDriverStoreRoot @ 0x1800EDB04 (LdrpGetFileDriverStoreRoot.c)
 *     LdrpQuerySxSMUIFile @ 0x1800EE464 (LdrpQuerySxSMUIFile.c)
 *     LdrpLogMapAndVerifyResourceFileFailure @ 0x1801142C0 (LdrpLogMapAndVerifyResourceFileFailure.c)
 *     LdrpCnvrtShortToLongFileName @ 0x180119888 (LdrpCnvrtShortToLongFileName.c)
 *     __report_rangecheckfailure @ 0x18012250C (__report_rangecheckfailure.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     wcsrchr @ 0x180129730 (wcsrchr.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     ZwQueryVirtualMemory @ 0x180163680 (ZwQueryVirtualMemory.c)
 *     NtUnmapViewOfSection @ 0x180163760 (NtUnmapViewOfSection.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall LdrLoadAlternateResourceModuleEx(__int64 a1, unsigned __int16 a2, _QWORD *a3, _QWORD *a4, int a5)
{
  unsigned int v7; // edi
  unsigned int v9; // r12d
  __int64 v10; // r15
  __int64 v11; // rax
  int v13; // eax
  __int64 Heap; // r15
  int v15; // r15d
  __int64 v16; // rax
  wchar_t *v17; // r8
  wchar_t *v18; // rax
  wchar_t *v19; // rcx
  __int64 v20; // rax
  wchar_t *v21; // rax
  int EntryForAddress; // eax
  wchar_t *v23; // rax
  wchar_t *v24; // rax
  wchar_t *v25; // rcx
  __int64 v26; // r12
  unsigned int v27; // eax
  unsigned __int64 v28; // rax
  wchar_t *v29; // rcx
  char *v30; // rax
  unsigned __int16 v31; // r12
  size_t v32; // rax
  int v33; // eax
  int v34; // ecx
  size_t v35; // rax
  wchar_t *v36; // r8
  int v37; // eax
  __int16 v38; // r12
  unsigned __int16 v39; // cx
  unsigned __int16 v40; // r12
  bool v41; // cf
  int v42; // r12d
  char v43; // dl
  unsigned __int16 v44; // r15
  unsigned __int16 v45; // r12
  size_t v46; // rax
  __int64 v47; // rax
  int v48; // ecx
  size_t v49; // rax
  __int64 v50; // rdx
  int v51; // eax
  unsigned __int64 v52; // r12
  void *v53; // r15
  __int64 v54; // rdx
  __int64 v55; // r9
  __int64 RcConfig; // rax
  int OverlayFilePathUsingChecksum; // eax
  wchar_t *v58; // r12
  size_t v59; // rax
  __int64 v60; // rcx
  size_t v61; // rax
  __int64 v62; // rax
  wchar_t *i; // rcx
  __int64 v64; // rax
  int v65; // edx
  __int64 v66; // rax
  __int64 v67; // rax
  size_t v68; // rax
  wchar_t *v69; // r8
  int v70; // eax
  __int16 v71; // r12
  __int64 v72; // r15
  __int64 v73; // rdx
  __int64 v74; // rax
  unsigned int v75; // r15d
  __int64 v76; // rax
  size_t v77; // rax
  unsigned __int16 v78; // r12
  int v79; // eax
  wchar_t *v80; // rax
  __int64 v81; // r12
  unsigned int v82; // edx
  unsigned int v83; // eax
  unsigned __int16 *v84; // r15
  __int64 v85; // rcx
  __int64 v86; // rcx
  __int64 v87; // rcx
  unsigned __int8 v88; // [rsp+40h] [rbp-AE8h]
  unsigned int v89; // [rsp+44h] [rbp-AE4h]
  wchar_t *String; // [rsp+48h] [rbp-AE0h] BYREF
  int v91; // [rsp+50h] [rbp-AD8h]
  void *v92; // [rsp+58h] [rbp-AD0h] BYREF
  __int64 v93; // [rsp+60h] [rbp-AC8h] BYREF
  __int128 v94; // [rsp+68h] [rbp-AC0h] BYREF
  unsigned __int64 v95; // [rsp+78h] [rbp-AB0h]
  wchar_t *v96; // [rsp+80h] [rbp-AA8h]
  __int64 v97; // [rsp+88h] [rbp-AA0h]
  unsigned __int64 v98; // [rsp+90h] [rbp-A98h] BYREF
  void *v99; // [rsp+98h] [rbp-A90h] BYREF
  int v100; // [rsp+A0h] [rbp-A88h] BYREF
  int v101; // [rsp+A4h] [rbp-A84h]
  __int64 v102; // [rsp+A8h] [rbp-A80h] BYREF
  void *v103; // [rsp+B0h] [rbp-A78h]
  __int64 v104; // [rsp+B8h] [rbp-A70h] BYREF
  void *Src; // [rsp+C0h] [rbp-A68h]
  wchar_t *v106; // [rsp+C8h] [rbp-A60h] BYREF
  int v107; // [rsp+D0h] [rbp-A58h]
  wchar_t *v108; // [rsp+D8h] [rbp-A50h]
  wchar_t *v109; // [rsp+E0h] [rbp-A48h] BYREF
  size_t Size; // [rsp+E8h] [rbp-A40h]
  _QWORD v111[2]; // [rsp+F0h] [rbp-A38h] BYREF
  __int64 v112; // [rsp+100h] [rbp-A28h] BYREF
  char *v113; // [rsp+108h] [rbp-A20h]
  __int128 v114; // [rsp+110h] [rbp-A18h] BYREF
  wchar_t *v115[2]; // [rsp+120h] [rbp-A08h] BYREF
  __int128 v116; // [rsp+130h] [rbp-9F8h]
  __int128 v117; // [rsp+140h] [rbp-9E8h]
  _QWORD v118[2]; // [rsp+150h] [rbp-9D8h] BYREF
  __int128 v119; // [rsp+160h] [rbp-9C8h]
  __int128 v120; // [rsp+170h] [rbp-9B8h]
  __int128 v121; // [rsp+180h] [rbp-9A8h]
  __int64 v122; // [rsp+190h] [rbp-998h]
  __int128 v123; // [rsp+1A0h] [rbp-988h] BYREF
  wchar_t Str[352]; // [rsp+1B0h] [rbp-978h] BYREF
  char v125; // [rsp+470h] [rbp-6B8h] BYREF
  _WORD v126[352]; // [rsp+4B0h] [rbp-678h] BYREF
  char v127; // [rsp+770h] [rbp-3B8h] BYREF
  _BYTE v128[704]; // [rsp+820h] [rbp-308h] BYREF

  v7 = a2;
  v106 = 0LL;
  v94 = 0LL;
  v91 = 0;
  String = 0LL;
  v9 = 0;
  v113 = 0LL;
  v99 = 0LL;
  v114 = 0LL;
  v123 = 0LL;
  v112 = 0LL;
  v118[0] = 72LL;
  v118[1] = 1LL;
  v119 = 0LL;
  v120 = 0LL;
  v121 = 0LL;
  v122 = 0LL;
  v88 = 0;
  v109 = 0LL;
  v108 = 0LL;
  v10 = 0LL;
  v93 = 0LL;
  v96 = (wchar_t *)v128;
  v100 = 702;
  v101 = 1;
  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  v11 = LdrpGetFromMUIMemCache(a1, a2, &v99, 4LL);
  if ( v11 == -1 )
  {
    v13 = a5 & 0x400000;
    v107 = a5 & 0x400000;
    if ( (a5 & 0x400000) == 0 )
    {
      *a3 = 0LL;
      return 3221946374LL;
    }
  }
  else
  {
    if ( v11 )
    {
      *a3 = v11;
      if ( a4 )
        *a4 = v99;
      return 0LL;
    }
    v13 = a5 & 0x400000;
    v107 = a5 & 0x400000;
  }
  v98 = 0LL;
  if ( v13 )
    goto LABEL_13;
  v92 = 0LL;
  *(_OWORD *)v115 = 0LL;
  v116 = 0LL;
  v117 = 0LL;
  if ( (a1 & 3) == 0 )
  {
    EntryForAddress = LdrFindEntryForAddress(a1, &v92);
    LODWORD(v97) = EntryForAddress;
    if ( EntryForAddress >= 0 )
    {
      v82 = *((unsigned __int16 *)v92 + 36);
      v83 = v82 - *((unsigned __int16 *)v92 + 44);
      v91 = v83;
      if ( v83 <= v82 && v83 < 0x2BE )
      {
        v84 = (unsigned __int16 *)v92;
        memmove(Str, *((const void **)v92 + 10), v83);
        v25 = (wchar_t *)*((_QWORD *)v84 + 12);
        String = v25;
        v9 = v84[44];
        v10 = *((_QWORD *)v84 + 17);
        v93 = v10;
        goto LABEL_198;
      }
      EntryForAddress = -2147483643;
    }
LABEL_31:
    v25 = 0LL;
    goto LABEL_32;
  }
  EntryForAddress = LdrpGetLoadAsEntry(a1, v115);
  LODWORD(v97) = EntryForAddress;
  if ( EntryForAddress < 0 )
    goto LABEL_31;
  v23 = wcsrchr(v115[1], 0x5Cu);
  if ( !v23 )
  {
    EntryForAddress = -1073741767;
    goto LABEL_31;
  }
  v24 = v23 + 1;
  v25 = v24;
  String = v24;
  v26 = -1LL;
  do
    ++v26;
  while ( v24[v26] );
  v9 = 2 * v26;
  v27 = 2 * (v24 - v115[1]);
  v91 = v27;
  if ( v27 >= 0x2BE )
  {
    EntryForAddress = -2147483643;
    goto LABEL_32;
  }
  memmove(Str, v115[1], v27);
  v25 = String;
  if ( *((_QWORD *)&v117 + 1) != -1LL )
  {
    v10 = *((_QWORD *)&v117 + 1);
    v93 = *((_QWORD *)&v117 + 1);
    EntryForAddress = v97;
    goto LABEL_32;
  }
LABEL_198:
  EntryForAddress = v97;
LABEL_32:
  if ( EntryForAddress >= 0 )
    goto LABEL_33;
LABEL_13:
  String = 0LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap);
  v97 = Heap;
  if ( !Heap )
  {
LABEL_22:
    v15 = -1073741801;
    goto LABEL_190;
  }
  v15 = ZwQueryVirtualMemory(-1LL, a1, 2LL, Heap, 702LL, &String);
  if ( v15 >= 0 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( *(_WORD *)(*(_QWORD *)(v97 + 8) + 2 * v16) );
    v17 = (wchar_t *)(2 * v16 + 2);
    String = v17;
    if ( (unsigned __int64)v17 >= 0x2BE )
    {
      v15 = -2147483643;
      goto LABEL_190;
    }
    memmove(Str, *(const void **)(v97 + 8), (size_t)v17);
    v18 = wcsrchr(Str, 0x5Cu);
    if ( !v18 )
    {
      v15 = -1073741767;
      goto LABEL_190;
    }
    v19 = v18 + 1;
    v92 = v18 + 1;
    v20 = -1LL;
    do
      ++v20;
    while ( v19[v20] );
    v95 = (unsigned int)(2 * v20);
    Size = v95 + 2;
    v21 = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap);
    v108 = v21;
    if ( v21 )
    {
      memmove(v21, v92, Size);
      v9 = v95;
      v91 = 2 * (((_BYTE *)v92 - (_BYTE *)Str) >> 1);
      v88 = 1;
      goto LABEL_190;
    }
    goto LABEL_22;
  }
LABEL_190:
  if ( v97 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v97);
  v89 = v15;
  if ( v15 < 0 )
    goto LABEL_106;
  v25 = v108;
  String = v108;
  v10 = v93;
LABEL_33:
  v28 = v91 & 0xFFFFFFFE;
  if ( v28 >= 0x2BE )
    _report_rangecheckfailure(v25);
  *(wchar_t *)((char *)Str + v28) = 0;
  if ( wcsrchr(v25, 0x7Eu) && (int)LdrpCnvrtShortToLongFileName(Str, String, &v109) >= 0 )
  {
    v29 = v109;
    String = v109;
    v81 = -1LL;
    do
      ++v81;
    while ( v109[v81] );
    v9 = 2 * v81;
  }
  else
  {
    v29 = String;
  }
  v102 = 0LL;
  v103 = 0LL;
  v104 = 0LL;
  Src = 0LL;
  *((_QWORD *)&v114 + 1) = v126;
  LODWORD(v114) = 46006272;
  if ( (unsigned __int64)v9 + 12 > 0x3C )
  {
    v30 = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap);
    v113 = v30;
    if ( !v30 )
    {
      v15 = -1073741801;
      goto LABEL_105;
    }
    v31 = 2 * (v9 + 5);
    v10 = v93;
    v29 = String;
  }
  else
  {
    v30 = &v125;
    v31 = 60;
  }
  WORD1(v102) = v31;
  v103 = v30;
  LODWORD(v97) = 0;
  if ( v29 )
  {
    v32 = wcslen(v29);
    if ( v32 > 0x7FFE )
    {
      v34 = -1073741562;
      LOWORD(v33) = 0;
      LODWORD(v97) = 0;
    }
    else
    {
      v33 = 2 * v32;
      v34 = 0;
      LODWORD(v97) = v33;
    }
    if ( v34 < 0 )
      goto LABEL_229;
    v91 = (unsigned __int16)v33;
    LODWORD(v92) = v31;
    if ( (unsigned __int16)v33 > (unsigned int)v31 )
      goto LABEL_229;
    memmove(v103, String, (unsigned __int16)v33);
    if ( v91 + 1 < (unsigned int)v92 )
      *((_WORD *)v103 + ((unsigned __int64)(unsigned __int16)v97 >> 1)) = 0;
  }
  v91 = a5 & 0x1000000;
  if ( (a5 & 0x1000000) == 0 )
  {
    v35 = wcslen(L".mui");
    if ( v35 > 0x7FFE )
    {
      v37 = -1073741562;
      v36 = 0LL;
    }
    else
    {
      v36 = (wchar_t *)(2 * v35);
      v37 = 0;
    }
    String = v36;
    if ( v37 >= 0 )
    {
      LODWORD(v92) = v31;
      v38 = v97;
      if ( (unsigned __int16)v97 + (unsigned int)(unsigned __int16)v36 <= (unsigned int)v92 )
      {
        v95 = (unsigned __int64)v103 + 2 * ((unsigned __int64)(unsigned __int16)v97 >> 1);
        memmove((void *)v95, L".mui", (unsigned __int16)v36);
        v39 = (unsigned __int16)String;
        v40 = (_WORD)String + v38;
        v41 = (unsigned int)v40 + 1 < (unsigned int)v92;
        goto LABEL_52;
      }
    }
LABEL_229:
    v15 = -1073741789;
    goto LABEL_105;
  }
  v68 = wcslen(L".mun");
  if ( v68 > 0x7FFE )
  {
    v70 = -1073741562;
    v69 = 0LL;
  }
  else
  {
    v69 = (wchar_t *)(2 * v68);
    v70 = 0;
  }
  String = v69;
  if ( v70 < 0 )
    goto LABEL_229;
  LODWORD(v92) = v31;
  v71 = v97;
  if ( (unsigned __int16)v97 + (unsigned int)(unsigned __int16)v69 > (unsigned int)v92 )
    goto LABEL_229;
  v95 = (unsigned __int64)v103 + 2 * ((unsigned __int64)(unsigned __int16)v97 >> 1);
  memmove((void *)v95, L".mun", (unsigned __int16)v69);
  v39 = (unsigned __int16)String;
  v40 = (_WORD)String + v71;
  v41 = (unsigned int)v40 + 1 < (unsigned int)v92;
LABEL_52:
  LOWORD(v102) = v40;
  if ( v41 )
    *(_WORD *)(v95 + 2 * ((unsigned __int64)v39 >> 1)) = 0;
  if ( v10 )
    RtlActivateActivationContextUnsafeFast(v118, v10);
  v42 = LdrpQuerySxSMUIFile(&v102, (unsigned __int16)v7, &v114, &v123, &v112);
  if ( v10 )
    RtlDeactivateActivationContextUnsafeFast(v118);
  if ( v42 < 0 )
  {
    v43 = 0;
  }
  else
  {
    v43 = 1;
    *((_QWORD *)&v94 + 1) = *(_QWORD *)(v112 + 8);
    LODWORD(v94) = *(_DWORD *)v112;
  }
  if ( v43 )
  {
    v101 = 0;
LABEL_142:
    v58 = v96;
    goto LABEL_143;
  }
  *((_QWORD *)&v94 + 1) = v126;
  v44 = 0;
  LODWORD(v94) = 46006272;
  v45 = 702;
  if ( !v91 )
  {
    v46 = wcslen(Str);
    if ( v46 > 0x7FFE )
    {
      v48 = -1073741562;
      v47 = 0LL;
    }
    else
    {
      v47 = 2 * v46;
      v48 = 0;
    }
    v93 = v47;
    if ( v48 >= 0 && (unsigned __int16)v47 <= 0x2BEu )
    {
      memmove(v126, Str, (unsigned __int16)v47);
      v44 = v93;
      LOWORD(v94) = v93;
      if ( (unsigned int)(unsigned __int16)v93 + 1 < 0x2BE )
        v126[(unsigned __int64)(unsigned __int16)v93 >> 1] = 0;
    }
    goto LABEL_68;
  }
  v62 = -1LL;
  do
    ++v62;
  while ( Str[v62] );
  for ( i = &Str[(unsigned int)v62 - 2]; i > Str; --i )
  {
    if ( *i == 92 )
      break;
  }
  if ( i <= Str )
  {
    v15 = -1073741686;
LABEL_105:
    v89 = v15;
LABEL_106:
    v58 = v96;
    goto LABEL_107;
  }
  i[1] = 0;
  v77 = wcslen(Str);
  if ( v77 > 0x7FFE )
  {
    v79 = -1073741562;
    v78 = 0;
  }
  else
  {
    v78 = 2 * v77;
    v79 = 0;
  }
  if ( v79 >= 0 && v78 <= 0x2BEu )
  {
    memmove(v126, Str, v78);
    LOWORD(v94) = v78;
    if ( (unsigned int)v78 + 1 < 0x2BE )
      v126[(unsigned __int64)v78 >> 1] = 0;
  }
  RtlAppendUnicodeToString(&v94, L"SystemResources\\");
  v45 = WORD1(v94);
  v44 = v94;
LABEL_68:
  if ( v91 )
    goto LABEL_80;
  Src = &v127;
  WORD1(v104) = 170;
  if ( (int)RtlLcidToLocaleName(v7, &v104, 2LL, 0LL) < 0 )
  {
    v15 = -1073741811;
    goto LABEL_105;
  }
  if ( (_WORD)v104 )
  {
    if ( v44 + (unsigned int)(unsigned __int16)v104 <= v45 )
    {
      Size = *((_QWORD *)&v94 + 1) + 2 * ((unsigned __int64)v44 >> 1);
      v95 = (unsigned __int16)v104;
      memmove((void *)Size, Src, (unsigned __int16)v104);
      v44 += v104;
      LOWORD(v94) = v44;
      if ( (unsigned int)v44 + 1 < v45 )
        *(_WORD *)(Size + 2 * (v95 >> 1)) = 0;
    }
  }
  v49 = wcslen(L"\\");
  if ( v49 > 0x7FFE )
  {
    v50 = 0LL;
    v51 = -1073741562;
  }
  else
  {
    v50 = 2 * v49;
    v51 = 0;
  }
  v93 = v50;
  if ( v51 >= 0 )
  {
    LODWORD(v92) = v45;
    if ( v44 + (unsigned int)(unsigned __int16)v50 <= v45 )
    {
      v95 = *((_QWORD *)&v94 + 1) + 2 * ((unsigned __int64)v44 >> 1);
      v52 = (unsigned __int16)v50;
      memmove((void *)v95, L"\\", (unsigned __int16)v50);
      LOWORD(v94) = v93 + v44;
      if ( (unsigned int)(unsigned __int16)(v93 + v44) + 1 < (unsigned int)v92 )
        *(_WORD *)(v95 + 2 * (v52 >> 1)) = 0;
    }
  }
LABEL_80:
  v53 = v103;
  RtlAppendUnicodeToString(&v94, v103);
  if ( v91 )
    goto LABEL_142;
  LOBYTE(v55) = 1;
  RcConfig = LdrpGetRcConfig(a1, v54, 0LL, v55);
  if ( !RcConfig )
    goto LABEL_142;
  v95 = RcConfig + 28;
  OverlayFilePathUsingChecksum = GetOverlayFilePathUsingChecksum(
                                   Src,
                                   *((_QWORD *)&v94 + 1),
                                   v53,
                                   RcConfig + 28,
                                   &v100,
                                   v128);
  if ( OverlayFilePathUsingChecksum == -1073741789 )
  {
    v80 = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap);
    v58 = v80;
    v96 = v80;
    if ( v80 )
      OverlayFilePathUsingChecksum = GetOverlayFilePathUsingChecksum(Src, *((_QWORD *)&v94 + 1), v103, v95, &v100, v80);
    else
      OverlayFilePathUsingChecksum = -1073741789;
  }
  else
  {
    v58 = v96;
  }
  if ( OverlayFilePathUsingChecksum >= 0 )
  {
    v111[0] = 0LL;
    v111[1] = v58;
    if ( !v58 )
    {
LABEL_88:
      String = 0LL;
      v93 = 0LL;
      v92 = 0LL;
      v99 = 0LL;
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v60 = (__int64)NtCurrentPeb()->SharedData + 555;
      else
        v60 = 2147353477LL;
      if ( (*(_BYTE *)v60 & 1) != 0 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v86 = (__int64)NtCurrentPeb()->SharedData + 554;
        else
          v86 = 2147353476LL;
        LdrpTraceLoadMUIDll(v111, *(unsigned __int8 *)v86);
      }
      v15 = LdrpMapResourceFile(a1, (unsigned int)v111, v88, (unsigned int)&String, (__int64)&v93, (__int64)&v92);
      if ( v15 >= 0 )
      {
        v95 = v93 | 1;
        if ( (unsigned __int8)LdrpVerifyAlternateResourceModuleEx(a1, v93 | 1, v111, Src, a5, 2) )
        {
          v106 = String;
          v99 = v92;
          v98 = v95;
        }
        else
        {
          NtUnmapViewOfSection(-1LL);
          NtClose(String);
          v15 = -1073020926;
        }
      }
      v89 = v15;
      if ( v15 >= 0 )
      {
        *(_QWORD *)&v94 = 0LL;
        *((_QWORD *)&v94 + 1) = v58;
        if ( v58 )
        {
          v61 = wcslen(v58);
          if ( v61 <= 0x7FFE )
          {
            LOWORD(v94) = 2 * v61;
            WORD1(v94) = 2 * v61 + 2;
          }
        }
        goto LABEL_107;
      }
      if ( v15 != -1073741766 && v15 != -1073741772 )
        LdrpLogMapAndVerifyResourceFileFailure(v15, (unsigned int)v111, v88, a5, (__int64)&v104);
      goto LABEL_143;
    }
    v59 = wcslen(v58);
    if ( v59 <= 0x7FFE )
    {
      LOWORD(v111[0]) = 2 * v59;
      WORD1(v111[0]) = 2 * v59 + 2;
      goto LABEL_88;
    }
  }
LABEL_143:
  v72 = 2147353477LL;
  String = 0LL;
  v93 = 0LL;
  v92 = 0LL;
  v106 = 0LL;
  v99 = 0LL;
  v98 = 0LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v72 = (__int64)NtCurrentPeb()->SharedData + 555;
  if ( (*(_BYTE *)v72 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v85 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v85 = 2147353476LL;
    LdrpTraceLoadMUIDll(&v94, *(unsigned __int8 *)v85);
  }
  v15 = LdrpMapResourceFile(a1, (unsigned int)&v94, v88, (unsigned int)&String, (__int64)&v93, (__int64)&v92);
  if ( v15 >= 0 )
  {
    v95 = v93 | 1;
    if ( (unsigned __int8)LdrpVerifyAlternateResourceModuleEx(a1, v93 | 1, &v94, Src, a5, v101) )
    {
      v106 = String;
      v99 = v92;
      v98 = v95;
    }
    else
    {
      NtUnmapViewOfSection(-1LL);
      NtClose(String);
      v15 = -1073020926;
    }
  }
  v89 = v15;
  if ( v91 || v15 != -1073741772 && v15 != -1073741766 || !(unsigned __int8)LdrpGetFileDriverStoreRoot(Str, v73, v126) )
    goto LABEL_107;
  *((_QWORD *)&v94 + 1) = v126;
  v74 = -1LL;
  do
    ++v74;
  while ( v126[v74] );
  LOWORD(v94) = 2 * v74;
  WORD1(v94) = 702;
  RtlAppendUnicodeToString(&v94, L"\\");
  v75 = (unsigned __int16)v104;
  if ( (_WORD)v104 )
  {
    if ( (unsigned __int16)v94 + (unsigned int)(unsigned __int16)v104 <= WORD1(v94) )
    {
      v95 = *((_QWORD *)&v94 + 1) + 2 * ((unsigned __int64)(unsigned __int16)v94 >> 1);
      memmove((void *)v95, Src, (unsigned __int16)v104);
      LOWORD(v94) = v75 + v94;
      if ( (unsigned int)(unsigned __int16)v94 + 1 < WORD1(v94) )
        *(_WORD *)(v95 + 2 * ((unsigned __int64)v75 >> 1)) = 0;
    }
  }
  RtlAppendUnicodeToString(&v94, L"\\");
  RtlAppendUnicodeToString(&v94, v103);
  String = 0LL;
  v93 = 0LL;
  v92 = 0LL;
  v106 = 0LL;
  v99 = 0LL;
  v98 = 0LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v76 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v76 = 2147353477LL;
  if ( (*(_BYTE *)v76 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v87 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v87 = 2147353476LL;
    LdrpTraceLoadMUIDll(&v94, *(unsigned __int8 *)v87);
  }
  v15 = LdrpMapResourceFile(a1, (unsigned int)&v94, v88, (unsigned int)&String, (__int64)&v93, (__int64)&v92);
  if ( v15 >= 0 )
  {
    v95 = v93 | 1;
    if ( !(unsigned __int8)LdrpVerifyAlternateResourceModuleEx(a1, v93 | 1, &v94, Src, a5, v101) )
    {
      NtUnmapViewOfSection(-1LL);
      NtClose(String);
      v15 = -1073020926;
      v89 = -1073020926;
      goto LABEL_107;
    }
    v106 = String;
    v99 = v92;
    v98 = v95;
  }
  v89 = v15;
LABEL_107:
  v64 = v98;
  if ( !v98 )
    v64 = -1LL;
  v98 = v64;
  if ( v15 != -1073741659 && v15 != -1073741801 && v15 != -1073741523 )
  {
    v65 = 33;
    if ( !v107 )
      v65 = 1;
    LdrpSetAlternateResourceModuleHandle(a1, &v98, (HANDLE *)&v106, 0LL, v7, v65, v15, (__int64)v99);
  }
  if ( v98 == -1LL )
  {
    *a3 = 0LL;
  }
  else
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v66 = (__int64)NtCurrentPeb()->SharedData + 555;
    else
      v66 = 2147353477LL;
    if ( (*(_BYTE *)v66 & 1) != 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v67 = (__int64)NtCurrentPeb()->SharedData + 554;
      else
        v67 = 2147353476LL;
      LdrpTraceLoadMUIDll(&v94, *(unsigned __int8 *)v67);
    }
    *a3 = v98;
    if ( a4 )
      *a4 = v99;
    v15 = 0;
    v89 = 0;
  }
  if ( v108 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v108);
    v15 = v89;
  }
  if ( v109 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v109);
    v15 = v89;
  }
  if ( v113 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v113);
    v15 = v89;
  }
  if ( v58 && v128 != (_BYTE *)v58 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v58);
    return v89;
  }
  return (unsigned int)v15;
}
