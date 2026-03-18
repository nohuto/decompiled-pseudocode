/*
 * XREFs of LdrpResSearchResourceMappedFile @ 0x1402F4C50
 * Callers:
 *     LdrResSearchResource @ 0x14083CDF0 (LdrResSearchResource.c)
 *     LdrResGetRCConfig @ 0x140A662CC (LdrResGetRCConfig.c)
 * Callees:
 *     LdrLoadAlternateResourceModuleEx @ 0x1402F2AFC (LdrLoadAlternateResourceModuleEx.c)
 *     LdrIsResItemExist @ 0x1402F3E1C (LdrIsResItemExist.c)
 *     LdrpFindMessageInAlternateModule @ 0x140472608 (LdrpFindMessageInAlternateModule.c)
 *     DownLevelLangIDToLanguageName @ 0x1404B067C (DownLevelLangIDToLanguageName.c)
 *     _wcsicmp @ 0x1404FBC30 (_wcsicmp.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x1409F2C00 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrpResGetResourceDirectory @ 0x1409F373C (LdrpResGetResourceDirectory.c)
 *     LdrResFallbackLangList @ 0x140A13E80 (LdrResFallbackLangList.c)
 *     LdrpResGetMappingSize @ 0x140A54258 (LdrpResGetMappingSize.c)
 *     LdrResGetRCConfig @ 0x140A662CC (LdrResGetRCConfig.c)
 */

__int64 __fastcall LdrpResSearchResourceMappedFile(
        __int64 a1,
        __int64 a2,
        int a3,
        _QWORD *a4,
        int a5,
        _QWORD *a6,
        __int64 *a7,
        void *a8,
        __int64 a9)
{
  bool v11; // dl
  unsigned __int16 v12; // r12
  int v13; // r14d
  unsigned __int16 *v14; // rdi
  int v15; // eax
  int v16; // esi
  int v17; // edi
  int v18; // ecx
  BOOL v19; // edx
  __int64 result; // rax
  int MappingSize; // edi
  unsigned int v22; // r12d
  int v23; // ecx
  unsigned int i; // r14d
  char v25; // r13
  unsigned __int16 *v26; // r11
  int v27; // r10d
  __int64 *v28; // rax
  __int64 v29; // rdx
  int v30; // r9d
  int v31; // r8d
  int v32; // ecx
  int v33; // eax
  _DWORD *v34; // r14
  unsigned __int16 v35; // cx
  int v36; // eax
  int v37; // edx
  int RCConfig; // eax
  __int64 v39; // r8
  __int64 v40; // rsi
  _WORD *v41; // r15
  unsigned __int16 v42; // [rsp+70h] [rbp-398h] BYREF
  int v43; // [rsp+74h] [rbp-394h]
  __int64 v44; // [rsp+78h] [rbp-390h]
  bool v45; // [rsp+80h] [rbp-388h]
  __int64 v46; // [rsp+88h] [rbp-380h] BYREF
  __int64 v47; // [rsp+90h] [rbp-378h] BYREF
  _QWORD *v48; // [rsp+98h] [rbp-370h]
  int v49; // [rsp+A0h] [rbp-368h]
  int v50; // [rsp+A4h] [rbp-364h]
  __int64 v51; // [rsp+A8h] [rbp-360h]
  __int64 v52; // [rsp+B0h] [rbp-358h] BYREF
  _QWORD *v53; // [rsp+B8h] [rbp-350h]
  __int64 v54; // [rsp+C0h] [rbp-348h] BYREF
  __int64 v55; // [rsp+C8h] [rbp-340h] BYREF
  __int64 v56; // [rsp+D0h] [rbp-338h] BYREF
  __int64 v57; // [rsp+D8h] [rbp-330h] BYREF
  __int64 *v58; // [rsp+E0h] [rbp-328h]
  __int64 v59; // [rsp+E8h] [rbp-320h]
  void *v60; // [rsp+F0h] [rbp-318h]
  _WORD v61[2]; // [rsp+100h] [rbp-308h] BYREF
  _WORD v62[262]; // [rsp+104h] [rbp-304h]
  _WORD Src[88]; // [rsp+310h] [rbp-F8h] BYREF

  v48 = a4;
  v51 = a2;
  v44 = a1;
  v58 = a7;
  v53 = a6;
  v60 = a8;
  v59 = a9;
  v47 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v61[1] = 0;
  memset_0(v61, 0, 0x206uLL);
  v42 = 0;
  v46 = 0LL;
  v11 = 0;
  v49 = a3 & 0x40;
  v52 = 0LL;
  v12 = 0;
  v13 = a3 & 0x80;
  v14 = (unsigned __int16 *)(a4 + 2);
  v15 = a5;
  if ( a5 == 3 )
  {
    v12 = *v14;
    v11 = (*a4 & 0xFFFFFFFFFFFF0000uLL) != 0 && !wcsicmp((const wchar_t *)*a4, L"MUI");
    v45 = v11;
    v15 = 3;
  }
  v16 = a3 & 0x80;
  if ( (a3 & 0x10) == 0 )
  {
    v16 = a3 & 0x80;
    if ( v15 >= 1 && v15 <= 3 )
    {
      if ( v15 == 3 )
        v35 = *v14;
      else
        v35 = 0;
      if ( (a3 & 0x1000000) == 0
        && (((*v48 - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) != 0 && !v11
         || (~(_BYTE)a3 & 8) == 0
         || (v35 & 0xF3FF) != 0
         || v35 == 3072) )
      {
        RCConfig = LdrResGetRCConfig(v44, v51, 0, a3, 1);
        MappingSize = RCConfig;
        if ( RCConfig < 0 )
        {
          if ( RCConfig != -1073741686 )
            return (unsigned int)MappingSize;
          v16 = v13 | 0x80000;
          v17 = v44;
        }
        else
        {
          v17 = v44;
          v16 = v13 | LdrIsResItemExist(v44, v48);
        }
        goto LABEL_9;
      }
      a3 |= 0x10u;
      v16 = v13;
    }
  }
  v17 = v44;
LABEL_9:
  v18 = 393216;
  if ( (v16 & 0x60000) == 0x60000 )
    return (unsigned int)-1073741686;
  v19 = 0;
  LOBYTE(v18) = (~(_BYTE)a3 & 0x10) != 0;
  if ( ((unsigned __int8)v18 & ((~v16 & 0x80000) != 0)) != 0 )
    v19 = (~v16 & 0x20000) != 0;
  v61[0] = 1;
  v62[0] = 0;
  if ( (v19 || a5 == 3) && ((a3 & 0x10) == 0 || (a3 & 0x20) == 0) )
  {
    if ( (a3 & 4) != 0 )
      v16 |= 4u;
    result = LdrResFallbackLangList(v18, v19, v12, v16, (__int64)v61);
    if ( (int)result < 0 && (a3 & 0x1000) != 0 )
      return result;
  }
  if ( (a3 & 0x10) != 0 || (~v16 & 0x40000) != 0 || (v16 & 0x80000) != 0 )
  {
    result = LdrpResGetResourceDirectory(v17, v51, a3, (unsigned int)&v56, (__int64)&v54);
    if ( (int)result < 0 )
      return result;
  }
  MappingSize = 0;
  v22 = 0;
LABEL_22:
  if ( v22 >= v61[0] )
    return (unsigned int)MappingSize;
  v47 = 0LL;
  v46 = 0LL;
  v42 = v62[4 * v22];
  v23 = *(_DWORD *)&v62[4 * v22 + 2];
  v43 = v23;
  for ( i = 0; ; ++i )
  {
    if ( i >= 2 )
    {
LABEL_79:
      ++v22;
      goto LABEL_22;
    }
    if ( i )
    {
      v25 = 0;
      goto LABEL_27;
    }
    if ( v23 != 9 )
      break;
    a3 |= 0x20u;
LABEL_54:
    ;
  }
  if ( (v16 & 0xA0000) != 0 || (a3 & 0x10) != 0 || !v42 || !PnPBootDriversInitialized )
  {
LABEL_53:
    v23 = v43;
    goto LABEL_54;
  }
  v25 = 1;
LABEL_27:
  if ( !v25 )
    goto LABEL_28;
  v36 = LdrLoadAlternateResourceModuleEx(v44, v42, &v47, &v46, v16 | 0x1000u);
  MappingSize = v36;
  if ( v36 < 0 )
  {
    if ( v36 == -1073741772 || v36 == -1073741766 )
      MappingSize = -1073020927;
    goto LABEL_53;
  }
  v37 = v46;
  if ( !v46 )
  {
    MappingSize = LdrpResGetMappingSize(v47, &v46, 512LL, 0LL);
    v37 = v46;
  }
  if ( (a3 & 0x1000) != 0 && MappingSize < 0 )
    goto LABEL_79;
  MappingSize = LdrpResGetResourceDirectory(v47, v37, a3, (unsigned int)&v57, (__int64)&v55);
  if ( MappingSize < 0 )
    goto LABEL_53;
LABEL_28:
  if ( (~(_BYTE)a3 & 2) != 0 && a5 > 2 )
    v48[2] = v42;
  v52 = 0LL;
  v26 = &v42;
  if ( v25 )
    v26 = 0LL;
  v27 = a3;
  if ( v25 )
  {
    v27 = a3 | 0x20;
  }
  else if ( (a3 & 0x20) == 0 )
  {
    v27 = a3 | 4;
  }
  v28 = &v52;
  if ( v58 )
    v28 = v58;
  v29 = v54;
  if ( v25 )
    v29 = v55;
  v30 = v56;
  if ( v25 )
    v30 = v57;
  v31 = v51;
  if ( v25 )
    v31 = v46;
  v32 = v44;
  if ( v25 )
    v32 = v47;
  v33 = LdrpResSearchResourceInsideDirectory(
          v32,
          0,
          v31,
          v30,
          v29,
          0,
          (__int64)v48,
          a5,
          (__int64)v61,
          (__int64)v53,
          (__int64)v28,
          v27,
          (__int64)v26);
  MappingSize = v33;
  if ( v49 && v33 >= 0 && v53 && v25 )
  {
    if ( v58 )
      v39 = *v58;
    else
      LODWORD(v39) = v52;
    MappingSize = LdrpFindMessageInAlternateModule(v47, *v53, v39, *((_DWORD *)v48 + 6), 1);
    if ( MappingSize < 0 )
    {
      *v53 = 0LL;
      if ( MappingSize == -1073741701 )
        return (unsigned int)MappingSize;
    }
  }
  if ( MappingSize < 0 )
    goto LABEL_53;
  v34 = (_DWORD *)v59;
  if ( !v59 )
    return (unsigned int)MappingSize;
  if ( v42 )
  {
    if ( (unsigned int)DownLevelLangIDToLanguageName(v42, Src, 86LL, 2LL) )
    {
      v40 = -1LL;
      do
        ++v40;
      while ( Src[v40] );
      goto LABEL_106;
    }
    return (unsigned int)-1073741823;
  }
  else
  {
    Src[0] = 0;
    LODWORD(v40) = 0;
LABEL_106:
    if ( (unsigned int)v40 < *v34 && (v41 = v60) != 0LL )
    {
      memmove(v60, Src, 2LL * (unsigned int)v40);
      *v34 = v40 + 1;
      v41[(unsigned int)v40] = 0;
    }
    else
    {
      *v34 = v40 + 1;
      MappingSize = -1073741789;
      v50 = -1073741789;
    }
  }
  return (unsigned int)MappingSize;
}
