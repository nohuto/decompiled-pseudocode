/*
 * XREFs of LdrpResSearchResourceMappedFile @ 0x14044E290
 * Callers:
 *     LdrResSearchResource @ 0x140908A90 (LdrResSearchResource.c)
 *     LdrResGetRCConfig @ 0x140A68F0C (LdrResGetRCConfig.c)
 * Callees:
 *     LdrIsResItemExist @ 0x14044EAD4 (LdrIsResItemExist.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x14044EDC4 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpFindMessageInAlternateModule @ 0x140470C00 (LdrpFindMessageInAlternateModule.c)
 *     DownLevelLangIDToLanguageName @ 0x1404B167C (DownLevelLangIDToLanguageName.c)
 *     _wcsicmp @ 0x1404FE3B0 (_wcsicmp.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     LdrpResGetMappingSize @ 0x140906C80 (LdrpResGetMappingSize.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x1409E6D20 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrpResGetResourceDirectory @ 0x1409E7A38 (LdrpResGetResourceDirectory.c)
 *     LdrResFallbackLangList @ 0x140A153B0 (LdrResFallbackLangList.c)
 *     LdrResGetRCConfig @ 0x140A68F0C (LdrResGetRCConfig.c)
 */

__int64 __fastcall LdrpResSearchResourceMappedFile(
        __int64 a1,
        __int64 a2,
        int a3,
        const wchar_t **a4,
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
  int MappingSize; // edi
  BOOL v20; // edx
  __int64 result; // rax
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
  int AlternateResourceModule; // eax
  int v37; // edx
  int RCConfig; // eax
  __int64 v39; // r8
  __int64 v40; // r8
  __int64 v41; // rsi
  _WORD *v42; // r15
  unsigned __int16 v43; // [rsp+70h] [rbp-398h] BYREF
  int v44; // [rsp+74h] [rbp-394h]
  __int64 v45; // [rsp+78h] [rbp-390h]
  bool v46; // [rsp+80h] [rbp-388h]
  __int64 v47; // [rsp+88h] [rbp-380h] BYREF
  __int64 v48; // [rsp+90h] [rbp-378h] BYREF
  const wchar_t **v49; // [rsp+98h] [rbp-370h]
  int v50; // [rsp+A0h] [rbp-368h]
  int v51; // [rsp+A4h] [rbp-364h]
  __int64 v52; // [rsp+A8h] [rbp-360h]
  __int64 v53; // [rsp+B0h] [rbp-358h] BYREF
  _QWORD *v54; // [rsp+B8h] [rbp-350h]
  __int64 v55; // [rsp+C0h] [rbp-348h] BYREF
  __int64 v56; // [rsp+C8h] [rbp-340h] BYREF
  __int64 v57; // [rsp+D0h] [rbp-338h] BYREF
  __int64 v58; // [rsp+D8h] [rbp-330h] BYREF
  __int64 *v59; // [rsp+E0h] [rbp-328h]
  __int64 v60; // [rsp+E8h] [rbp-320h]
  void *v61; // [rsp+F0h] [rbp-318h]
  _WORD v62[2]; // [rsp+100h] [rbp-308h] BYREF
  _WORD v63[262]; // [rsp+104h] [rbp-304h]
  _WORD Src[88]; // [rsp+310h] [rbp-F8h] BYREF

  v49 = a4;
  v52 = a2;
  v45 = a1;
  v59 = a7;
  v54 = a6;
  v61 = a8;
  v60 = a9;
  v48 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v62[1] = 0;
  memset_0(v62, 0, 0x206uLL);
  v43 = 0;
  v47 = 0LL;
  v11 = 0;
  v50 = a3 & 0x40;
  v53 = 0LL;
  v12 = 0;
  v13 = a3 & 0x80;
  v14 = (unsigned __int16 *)(a4 + 2);
  v15 = a5;
  if ( a5 == 3 )
  {
    v12 = *v14;
    v11 = ((unsigned __int64)*a4 & 0xFFFFFFFFFFFF0000uLL) != 0 && !wcsicmp(*a4, L"MUI");
    v46 = v11;
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
        && (((unsigned __int64)(*v49 - 8) & 0xFFFFFFFFFFFFFFF7uLL) != 0 && !v11
         || (~(_BYTE)a3 & 8) == 0
         || (v35 & 0xF3FF) != 0
         || v35 == 3072) )
      {
        RCConfig = LdrResGetRCConfig(v45, v52, 0, a3, 1);
        MappingSize = RCConfig;
        if ( RCConfig < 0 )
        {
          if ( RCConfig != -1073741686 )
            return (unsigned int)MappingSize;
          v16 = v13 | 0x80000;
          v17 = v45;
        }
        else
        {
          v17 = v45;
          v16 = v13 | LdrIsResItemExist(v45, v49, v39, 0LL);
        }
        goto LABEL_9;
      }
      a3 |= 0x10u;
      v16 = v13;
    }
  }
  v17 = v45;
LABEL_9:
  v18 = 393216;
  if ( (v16 & 0x60000) == 0x60000 )
    return (unsigned int)-1073741686;
  v20 = 0;
  LOBYTE(v18) = (~(_BYTE)a3 & 0x10) != 0;
  if ( ((unsigned __int8)v18 & ((~v16 & 0x80000) != 0)) != 0 )
    v20 = (~v16 & 0x20000) != 0;
  v62[0] = 1;
  v63[0] = 0;
  if ( (v20 || a5 == 3) && ((a3 & 0x10) == 0 || (a3 & 0x20) == 0) )
  {
    if ( (a3 & 4) != 0 )
      v16 |= 4u;
    result = LdrResFallbackLangList(v18, v20, v12, v16, (__int64)v62);
    if ( (int)result < 0 && (a3 & 0x1000) != 0 )
      return result;
  }
  if ( (a3 & 0x10) != 0 || (~v16 & 0x40000) != 0 || (v16 & 0x80000) != 0 )
  {
    result = LdrpResGetResourceDirectory(v17, v52, a3, (unsigned int)&v57, (__int64)&v55);
    if ( (int)result < 0 )
      return result;
  }
  MappingSize = 0;
  v22 = 0;
LABEL_23:
  if ( v22 >= v62[0] )
    return (unsigned int)MappingSize;
  v48 = 0LL;
  v47 = 0LL;
  v43 = v63[4 * v22];
  v23 = *(_DWORD *)&v63[4 * v22 + 2];
  v44 = v23;
  for ( i = 0; ; ++i )
  {
    if ( i >= 2 )
    {
LABEL_79:
      ++v22;
      goto LABEL_23;
    }
    if ( i )
    {
      v25 = 0;
      goto LABEL_28;
    }
    if ( v23 != 9 )
      break;
    a3 |= 0x20u;
LABEL_55:
    ;
  }
  if ( (v16 & 0xA0000) != 0 || (a3 & 0x10) != 0 || !v43 || !PnPBootDriversInitialized )
  {
LABEL_54:
    v23 = v44;
    goto LABEL_55;
  }
  v25 = 1;
LABEL_28:
  if ( !v25 )
    goto LABEL_29;
  AlternateResourceModule = LdrLoadAlternateResourceModuleEx(
                              v45,
                              v43,
                              (unsigned int)&v48,
                              (unsigned int)&v47,
                              v16 | 0x1000u);
  MappingSize = AlternateResourceModule;
  if ( AlternateResourceModule < 0 )
  {
    if ( AlternateResourceModule == -1073741772 || AlternateResourceModule == -1073741766 )
      MappingSize = -1073020927;
    goto LABEL_54;
  }
  v37 = v47;
  if ( !v47 )
  {
    MappingSize = LdrpResGetMappingSize(v48, &v47, 512LL, 0LL);
    v37 = v47;
  }
  if ( (a3 & 0x1000) != 0 && MappingSize < 0 )
    goto LABEL_79;
  MappingSize = LdrpResGetResourceDirectory(v48, v37, a3, (unsigned int)&v58, (__int64)&v56);
  if ( MappingSize < 0 )
    goto LABEL_54;
LABEL_29:
  if ( (~(_BYTE)a3 & 2) != 0 && a5 > 2 )
    v49[2] = (const wchar_t *)v43;
  v53 = 0LL;
  v26 = &v43;
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
  v28 = &v53;
  if ( v59 )
    v28 = v59;
  v29 = v55;
  if ( v25 )
    v29 = v56;
  v30 = v57;
  if ( v25 )
    v30 = v58;
  v31 = v52;
  if ( v25 )
    v31 = v47;
  v32 = v45;
  if ( v25 )
    v32 = v48;
  v33 = LdrpResSearchResourceInsideDirectory(
          v32,
          0,
          v31,
          v30,
          v29,
          0,
          (__int64)v49,
          a5,
          (__int64)v62,
          (__int64)v54,
          (__int64)v28,
          v27,
          (__int64)v26);
  MappingSize = v33;
  if ( v50 && v33 >= 0 && v54 && v25 )
  {
    if ( v59 )
      v40 = *v59;
    else
      LODWORD(v40) = v53;
    MappingSize = LdrpFindMessageInAlternateModule(v48, *v54, v40, *((_DWORD *)v49 + 6), 1);
    if ( MappingSize < 0 )
    {
      *v54 = 0LL;
      if ( MappingSize == -1073741701 )
        return (unsigned int)MappingSize;
    }
  }
  if ( MappingSize < 0 )
    goto LABEL_54;
  v34 = (_DWORD *)v60;
  if ( !v60 )
    return (unsigned int)MappingSize;
  if ( v43 )
  {
    if ( (unsigned int)DownLevelLangIDToLanguageName(v43, Src, 86LL) )
    {
      v41 = -1LL;
      do
        ++v41;
      while ( Src[v41] );
      goto LABEL_106;
    }
    return (unsigned int)-1073741823;
  }
  else
  {
    Src[0] = 0;
    LODWORD(v41) = 0;
LABEL_106:
    if ( (unsigned int)v41 < *v34 && (v42 = v61) != 0LL )
    {
      memmove(v61, Src, 2LL * (unsigned int)v41);
      *v34 = v41 + 1;
      v42[(unsigned int)v41] = 0;
    }
    else
    {
      *v34 = v41 + 1;
      MappingSize = -1073741789;
      v51 = -1073741789;
    }
  }
  return (unsigned int)MappingSize;
}
