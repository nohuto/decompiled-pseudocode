/*
 * XREFs of LdrResSearchResource @ 0x1408E01B0
 * Callers:
 *     PfSnGetAppVersion @ 0x14047A764 (PfSnGetAppVersion.c)
 *     PopValidateWinresume @ 0x1407511C8 (PopValidateWinresume.c)
 *     RtlLoadString @ 0x14077EE10 (RtlLoadString.c)
 *     LdrResFindResourceDirectory @ 0x14077F230 (LdrResFindResourceDirectory.c)
 *     SeRegisterElamCertResources @ 0x14078E1F8 (SeRegisterElamCertResources.c)
 *     AslpFileGetVersionBlock @ 0x14080ECC0 (AslpFileGetVersionBlock.c)
 *     PspLocateInPEManifest @ 0x1408DFF78 (PspLocateInPEManifest.c)
 *     PopEtGetProcessVersionInfo @ 0x1408E009C (PopEtGetProcessVersionInfo.c)
 *     LdrResFindResource @ 0x140A6A760 (LdrResFindResource.c)
 *     KeHwPolicyLocateResource @ 0x140C2A950 (KeHwPolicyLocateResource.c)
 * Callees:
 *     LdrLoadAlternateResourceModuleEx @ 0x1402DCE08 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpResSearchResourceMappedFile @ 0x14044EAD4 (LdrpResSearchResourceMappedFile.c)
 *     DownLevelLangIDToLanguageName @ 0x1404ABF0C (DownLevelLangIDToLanguageName.c)
 *     DownLevelLanguageNameToLangID @ 0x1404B3408 (DownLevelLanguageNameToLangID.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     LdrpResGetMappingSize @ 0x140A3C6A8 (LdrpResGetMappingSize.c)
 */

__int64 __fastcall LdrResSearchResource(
        unsigned __int64 a1,
        const void *a2,
        unsigned int a3,
        int a4,
        _QWORD *a5,
        __int64 *a6,
        void *a7,
        __int64 a8)
{
  void *v10; // r14
  int v11; // ecx
  unsigned int v12; // edi
  bool v13; // zf
  unsigned int v14; // ebx
  __int64 result; // rax
  __int64 v16; // r9
  int v17; // esi
  __int64 v18; // r12
  int v19; // eax
  int v20; // eax
  NTSTATUS v21; // eax
  __int64 v22; // r9
  ULONG64 v23; // [rsp+58h] [rbp-80h] BYREF
  PVOID ResourceDllBase; // [rsp+60h] [rbp-78h] BYREF
  _QWORD *v25; // [rsp+68h] [rbp-70h]
  __int64 v26; // [rsp+70h] [rbp-68h]
  unsigned __int64 v27[2]; // [rsp+78h] [rbp-60h] BYREF
  unsigned __int64 v28; // [rsp+88h] [rbp-50h]

  v25 = a5;
  v26 = a8;
  v10 = 0LL;
  if ( !a1 || !a2 || a7 && !a8 )
    return (unsigned int)-1073741811;
  if ( (a4 & 0xC00) != 0 )
    return (unsigned int)-1073741582;
  v11 = a4 | 0x100;
  if ( (a4 & 0xF00) != 0 )
    v11 = a4;
  v12 = v11 | 0x1000;
  if ( (v11 & 0x2000) != 0 )
    v12 = v11;
  if ( (v12 & 0xFFF00000) != 0 )
    return (unsigned int)-1073741582;
  if ( a3 < 3 && (v12 & 2) == 0 || a3 > 4 )
    return (unsigned int)-1073741583;
  if ( (v12 & 0x41) != 0 )
  {
    if ( a3 != 4 )
      return 3221225713LL;
  }
  else if ( a3 != 4 )
  {
    goto LABEL_14;
  }
  if ( (v12 & 0x41) == 0 )
    return 3221225714LL;
LABEL_14:
  if ( (v12 & 0x100) != 0 )
  {
    v13 = (v12 & 0xE00) == 0;
    goto LABEL_16;
  }
  v19 = v12 & 0xC00;
  if ( (v12 & 0x200) != 0 )
  {
    v13 = v19 == 0;
LABEL_16:
    if ( v13 )
      goto LABEL_17;
    return (unsigned int)-1073741582;
  }
  if ( v19 == 3072 )
    return (unsigned int)-1073741582;
LABEL_17:
  if ( (v12 & 0x8000) != 0 && (~(_WORD)v12 & 0x810) != 0 || (v12 & 0x3000) == 0x3000 || (v12 & 0x18) == 0x18 )
    return (unsigned int)-1073741582;
  v23 = 0LL;
  if ( (v12 & 0x20000) != 0 )
  {
    if ( (v12 & 0x400) == 0 || !a6 || !*a6 )
      return (unsigned int)-1073741811;
    v23 = *a6;
  }
  if ( (v12 & 0x80000) != 0 )
  {
    if ( (v12 & 0x300) == 0 || !a6 || !*a6 )
      return (unsigned int)-1073741811;
    v23 = *a6;
  }
  memmove(v27, a2, 8LL * a3);
  v17 = 3;
  if ( a3 <= 3 )
    v17 = a3;
  if ( v17 == 3 )
  {
    if ( v28 >= 0x10000 )
    {
      v20 = 0;
      if ( *(_WORD *)v28 )
        v20 = (unsigned __int16)DownLevelLanguageNameToLangID((const void *)v28, 2);
      LODWORD(ResourceDllBase) = v20;
      v28 = (unsigned __int16)v20;
    }
    else if ( v28 && ((v28 & 0x3FF) == 0 || v28 == 127 || !(unsigned int)DownLevelLangIDToLanguageName(v28, 0LL, 0, 2)) )
    {
      return (unsigned int)-1073741811;
    }
  }
  if ( (v12 & 0x300) == 0 )
    goto LABEL_32;
  v10 = (void *)a1;
  if ( (v12 & 0x200) != 0 )
  {
    v10 = (void *)(a1 | 1);
    if ( (a1 & 1) != 0 )
      v10 = (void *)a1;
  }
  result = LdrpResGetMappingSize(v10, &v23, v12, v16);
  if ( (int)result >= 0 || (v12 & 0x1000) == 0 )
  {
LABEL_32:
    v18 = v26;
    v14 = LdrpResSearchResourceMappedFile(v10, v23, v12, v27, v17, v25, a6, a7, v26);
    if ( v14 == -1073741686 && ((v27[0] - 16) & 0xFFFFFFFFFFFFFFF7uLL) != 0 )
    {
      ResourceDllBase = 0LL;
      v21 = LdrLoadAlternateResourceModuleEx(v10, 0xF2EEu, &ResourceDllBase, 0LL, 0x1000000u);
      if ( v21 >= 0 )
      {
        v23 = 0LL;
        if ( (int)LdrpResGetMappingSize(ResourceDllBase, &v23, v12, v22) >= 0 )
          return (unsigned int)LdrpResSearchResourceMappedFile(
                                 ResourceDllBase,
                                 v23,
                                 v12 | 0x1000000,
                                 v27,
                                 v17,
                                 v25,
                                 a6,
                                 a7,
                                 v18);
      }
    }
    return v14;
  }
  return result;
}
