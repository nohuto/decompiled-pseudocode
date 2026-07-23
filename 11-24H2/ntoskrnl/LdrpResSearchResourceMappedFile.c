/*
 * XREFs of LdrpResSearchResourceMappedFile @ 0x14044EAD4
 * Callers:
 *     LdrResSearchResource @ 0x1408E01B0 (LdrResSearchResource.c)
 *     LdrResGetRCConfig @ 0x140A622BC (LdrResGetRCConfig.c)
 * Callees:
 *     LdrIsResItemExist @ 0x1402DC488 (LdrIsResItemExist.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x1402DCE08 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpFindMessageInAlternateModule @ 0x14046B2B0 (LdrpFindMessageInAlternateModule.c)
 *     DownLevelLangIDToLanguageName @ 0x1404ABF0C (DownLevelLangIDToLanguageName.c)
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x1409E1CE0 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrpResGetResourceDirectory @ 0x1409E29F8 (LdrpResGetResourceDirectory.c)
 *     LdrResFallbackLangList @ 0x140A0E1D0 (LdrResFallbackLangList.c)
 *     LdrpResGetMappingSize @ 0x140A3C6A8 (LdrpResGetMappingSize.c)
 *     LdrResGetRCConfig @ 0x140A622BC (LdrResGetRCConfig.c)
 */

__int64 __fastcall LdrpResSearchResourceMappedFile(
        void *a1,
        ULONG64 a2,
        int a3,
        unsigned __int64 *a4,
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
  PVOID v17; // rdi
  int v18; // ecx
  int MappingSize; // edi
  BOOL v20; // edx
  __int64 result; // rax
  unsigned int v22; // r12d
  int v23; // ecx
  unsigned int i; // r14d
  char v25; // r13
  LANGID *v26; // r11
  int v27; // r10d
  __int64 *v28; // rax
  __int64 v29; // rdx
  int v30; // r9d
  int v31; // r8d
  int v32; // ecx
  int v33; // eax
  _DWORD *v34; // r14
  unsigned __int16 v35; // cx
  NTSTATUS v36; // eax
  ULONG64 v37; // rdx
  int RCConfig; // eax
  __int64 v39; // r8
  __int64 v40; // rsi
  _WORD *v41; // r15
  LANGID v42; // [rsp+70h] [rbp-398h] BYREF
  int v43; // [rsp+74h] [rbp-394h]
  PVOID DllHandle; // [rsp+78h] [rbp-390h]
  bool v45; // [rsp+80h] [rbp-388h]
  ULONG_PTR ResourceOffset; // [rsp+88h] [rbp-380h] BYREF
  PVOID ResourceDllBase; // [rsp+90h] [rbp-378h] BYREF
  unsigned __int64 *v48; // [rsp+98h] [rbp-370h]
  int v49; // [rsp+A0h] [rbp-368h]
  int v50; // [rsp+A4h] [rbp-364h]
  ULONG64 Size; // [rsp+A8h] [rbp-360h]
  __int64 v52; // [rsp+B0h] [rbp-358h] BYREF
  _QWORD *v53; // [rsp+B8h] [rbp-350h]
  __int64 v54; // [rsp+C0h] [rbp-348h] BYREF
  __int64 v55; // [rsp+C8h] [rbp-340h] BYREF
  __int64 v56; // [rsp+D0h] [rbp-338h]
  __int64 v57; // [rsp+D8h] [rbp-330h]
  __int64 *v58; // [rsp+E0h] [rbp-328h]
  __int64 v59; // [rsp+E8h] [rbp-320h]
  void *v60; // [rsp+F0h] [rbp-318h]
  _WORD v61[2]; // [rsp+100h] [rbp-308h] BYREF
  _WORD v62[262]; // [rsp+104h] [rbp-304h]
  _WORD Src[88]; // [rsp+310h] [rbp-F8h] BYREF

  v48 = a4;
  Size = a2;
  DllHandle = a1;
  v58 = a7;
  v53 = a6;
  v60 = a8;
  v59 = a9;
  ResourceDllBase = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v61[1] = 0;
  memset_0(v61, 0, 0x206uLL);
  v42 = 0;
  ResourceOffset = 0LL;
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
        && (((*v48 - 16) & 0xFFFFFFFFFFFFFFF7uLL) != 0 && !v11
         || (~(_BYTE)a3 & 8) == 0
         || (v35 & 0xF3FF) != 0
         || v35 == 3072) )
      {
        RCConfig = LdrResGetRCConfig((_DWORD)DllHandle, Size, 0, a3, 1);
        MappingSize = RCConfig;
        if ( RCConfig < 0 )
        {
          if ( RCConfig != -1073741686 )
            return (unsigned int)MappingSize;
          v16 = v13 | 0x80000;
          v17 = DllHandle;
        }
        else
        {
          v17 = DllHandle;
          v16 = v13 | LdrIsResItemExist(DllHandle, v48);
        }
        goto LABEL_9;
      }
      a3 |= 0x10u;
      v16 = v13;
    }
  }
  v17 = DllHandle;
LABEL_9:
  v18 = 393216;
  if ( (v16 & 0x60000) == 0x60000 )
    return (unsigned int)-1073741686;
  v20 = 0;
  LOBYTE(v18) = (~(_BYTE)a3 & 0x10) != 0;
  if ( ((unsigned __int8)v18 & ((~v16 & 0x80000) != 0)) != 0 )
    v20 = (~v16 & 0x20000) != 0;
  v61[0] = 1;
  v62[0] = 0;
  if ( (v20 || a5 == 3) && ((a3 & 0x10) == 0 || (a3 & 0x20) == 0) )
  {
    if ( (a3 & 4) != 0 )
      v16 |= 4u;
    result = LdrResFallbackLangList(v18, v20, v12, v16, (__int64)v61);
    if ( (int)result < 0 && (a3 & 0x1000) != 0 )
      return result;
  }
  if ( (a3 & 0x10) != 0 || (~v16 & 0x40000) != 0 || (v16 & 0x80000) != 0 )
  {
    result = LdrpResGetResourceDirectory(v17, Size, (__int64)&v54);
    if ( (int)result < 0 )
      return result;
  }
  MappingSize = 0;
  v22 = 0;
LABEL_23:
  if ( v22 >= v61[0] )
    return (unsigned int)MappingSize;
  ResourceDllBase = 0LL;
  ResourceOffset = 0LL;
  v42 = v62[4 * v22];
  v23 = *(_DWORD *)&v62[4 * v22 + 2];
  v43 = v23;
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
  if ( (v16 & 0xA0000) != 0 || (a3 & 0x10) != 0 || !v42 || !PnPBootDriversInitialized )
  {
LABEL_54:
    v23 = v43;
    goto LABEL_55;
  }
  v25 = 1;
LABEL_28:
  if ( !v25 )
    goto LABEL_29;
  v36 = LdrLoadAlternateResourceModuleEx(DllHandle, v42, &ResourceDllBase, &ResourceOffset, v16 | 0x1000);
  MappingSize = v36;
  if ( v36 < 0 )
  {
    if ( v36 == -1073741772 || v36 == -1073741766 )
      MappingSize = -1073020927;
    goto LABEL_54;
  }
  v37 = ResourceOffset;
  if ( !ResourceOffset )
  {
    MappingSize = LdrpResGetMappingSize(ResourceDllBase, &ResourceOffset, 512LL, 0LL);
    v37 = ResourceOffset;
  }
  if ( (a3 & 0x1000) != 0 && MappingSize < 0 )
    goto LABEL_79;
  MappingSize = LdrpResGetResourceDirectory(ResourceDllBase, v37, (__int64)&v55);
  if ( MappingSize < 0 )
    goto LABEL_54;
LABEL_29:
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
  v31 = Size;
  if ( v25 )
    v31 = ResourceOffset;
  v32 = (int)DllHandle;
  if ( v25 )
    v32 = (int)ResourceDllBase;
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
    MappingSize = LdrpFindMessageInAlternateModule((_DWORD)ResourceDllBase, *v53, v39, *((_DWORD *)v48 + 6), 1);
    if ( MappingSize < 0 )
    {
      *v53 = 0LL;
      if ( MappingSize == -1073741701 )
        return (unsigned int)MappingSize;
    }
  }
  if ( MappingSize < 0 )
    goto LABEL_54;
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
