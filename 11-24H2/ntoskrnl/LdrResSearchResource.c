/*
 * XREFs of LdrResSearchResource @ 0x140908A90
 * Callers:
 *     PfSnGetAppVersion @ 0x14047F9D4 (PfSnGetAppVersion.c)
 *     PopValidateWinresume @ 0x140752EA8 (PopValidateWinresume.c)
 *     RtlLoadString @ 0x14077EEE0 (RtlLoadString.c)
 *     LdrResFindResourceDirectory @ 0x14077F300 (LdrResFindResourceDirectory.c)
 *     SeRegisterElamCertResources @ 0x14078E2C8 (SeRegisterElamCertResources.c)
 *     AslpFileGetVersionBlock @ 0x14080E580 (AslpFileGetVersionBlock.c)
 *     LdrResFindResource @ 0x1409069E0 (LdrResFindResource.c)
 *     PspLocateInPEManifest @ 0x14090885C (PspLocateInPEManifest.c)
 *     PopEtGetProcessVersionInfo @ 0x140908980 (PopEtGetProcessVersionInfo.c)
 *     KeHwPolicyLocateResource @ 0x140C288B0 (KeHwPolicyLocateResource.c)
 * Callees:
 *     LdrpResSearchResourceMappedFile @ 0x14044E290 (LdrpResSearchResourceMappedFile.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x14044EDC4 (LdrLoadAlternateResourceModuleEx.c)
 *     DownLevelLangIDToLanguageName @ 0x1404B167C (DownLevelLangIDToLanguageName.c)
 *     DownLevelLanguageNameToLangID @ 0x1404B8AB8 (DownLevelLanguageNameToLangID.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     LdrpResGetMappingSize @ 0x140906C80 (LdrpResGetMappingSize.c)
 */

int __fastcall LdrResSearchResource(
        __int64 a1,
        const void *a2,
        unsigned int a3,
        int a4,
        _QWORD *a5,
        __int64 *a6,
        void *a7,
        __int64 a8)
{
  __int64 v10; // r14
  int v11; // ecx
  int v12; // edi
  bool v13; // zf
  int v14; // ebx
  int result; // eax
  int v16; // esi
  __int64 v17; // r12
  int v18; // eax
  int v19; // eax
  int v20; // eax
  __int64 v21; // [rsp+58h] [rbp-80h] BYREF
  __int64 v22; // [rsp+60h] [rbp-78h] BYREF
  _QWORD *v23; // [rsp+68h] [rbp-70h]
  __int64 v24; // [rsp+70h] [rbp-68h]
  const wchar_t *v25[2]; // [rsp+78h] [rbp-60h] BYREF
  unsigned __int64 v26; // [rsp+88h] [rbp-50h]

  v23 = a5;
  v24 = a8;
  v10 = 0LL;
  if ( !a1 || !a2 || a7 && !a8 )
    return -1073741811;
  if ( (a4 & 0xC00) != 0 )
    return -1073741582;
  v11 = a4 | 0x100;
  if ( (a4 & 0xF00) != 0 )
    v11 = a4;
  v12 = v11 | 0x1000;
  if ( (v11 & 0x2000) != 0 )
    v12 = v11;
  if ( (v12 & 0xFFF00000) != 0 )
    return -1073741582;
  if ( a3 < 3 && (v12 & 2) == 0 || a3 > 4 )
    return -1073741583;
  if ( (v12 & 0x41) != 0 )
  {
    if ( a3 != 4 )
      return -1073741583;
  }
  else if ( a3 != 4 )
  {
    goto LABEL_14;
  }
  if ( (v12 & 0x41) == 0 )
    return -1073741582;
LABEL_14:
  if ( (v12 & 0x100) != 0 )
  {
    v13 = (v12 & 0xE00) == 0;
    goto LABEL_16;
  }
  v18 = v12 & 0xC00;
  if ( (v12 & 0x200) != 0 )
  {
    v13 = v18 == 0;
LABEL_16:
    if ( v13 )
      goto LABEL_17;
    return -1073741582;
  }
  if ( v18 == 3072 )
    return -1073741582;
LABEL_17:
  if ( (v12 & 0x8000) != 0 && (~(_WORD)v12 & 0x810) != 0 || (v12 & 0x3000) == 0x3000 || (v12 & 0x18) == 0x18 )
    return -1073741582;
  v21 = 0LL;
  if ( (v12 & 0x20000) != 0 )
  {
    if ( (v12 & 0x400) == 0 || !a6 || !*a6 )
      return -1073741811;
    v21 = *a6;
  }
  if ( (v12 & 0x80000) != 0 )
  {
    if ( (v12 & 0x300) == 0 || !a6 || !*a6 )
      return -1073741811;
    v21 = *a6;
  }
  memmove(v25, a2, 8LL * a3);
  v16 = 3;
  if ( a3 <= 3 )
    v16 = a3;
  if ( v16 == 3 )
  {
    if ( v26 >= 0x10000 )
    {
      v19 = 0;
      if ( *(_WORD *)v26 )
        v19 = (unsigned __int16)DownLevelLanguageNameToLangID((const void *)v26, 2);
      LODWORD(v22) = v19;
      v26 = (unsigned __int16)v19;
    }
    else if ( v26 && ((v26 & 0x3FF) == 0 || v26 == 127 || !(unsigned int)DownLevelLangIDToLanguageName(v26, 0LL, 0, 2)) )
    {
      return -1073741811;
    }
  }
  if ( (v12 & 0x300) == 0 )
    goto LABEL_32;
  v10 = a1;
  if ( (v12 & 0x200) != 0 )
  {
    v10 = a1 | 1;
    if ( (a1 & 1) != 0 )
      v10 = a1;
  }
  result = LdrpResGetMappingSize(v10, (unsigned __int64 *)&v21, v12);
  if ( result >= 0 || (v12 & 0x1000) == 0 )
  {
LABEL_32:
    v17 = v24;
    v14 = LdrpResSearchResourceMappedFile(v10, v21, v12, v25, v16, v23, a6, a7, v24);
    if ( v14 == -1073741686 && ((unsigned __int64)(v25[0] - 8) & 0xFFFFFFFFFFFFFFF7uLL) != 0 )
    {
      v22 = 0LL;
      v20 = LdrLoadAlternateResourceModuleEx(v10, 0xF2EEu, &v22, 0LL, 0x1000000);
      if ( v20 >= 0 )
      {
        v21 = 0LL;
        if ( LdrpResGetMappingSize(v22, (unsigned __int64 *)&v21, v12) >= 0 )
          return LdrpResSearchResourceMappedFile(v22, v21, v12 | 0x1000000u, v25, v16, v23, a6, a7, v17);
      }
    }
    return v14;
  }
  return result;
}
